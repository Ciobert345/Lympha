import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:mobile_scanner/mobile_scanner.dart';
import '../../core/constants.dart';
import '../../services/supabase_service.dart';
import '../../services/ble_provisioning_service.dart';
import '../../services/wifi_service.dart';
import '../../models/device.dart';
import '../../providers/lympha_stream.dart';
import 'package:flutter_blue_plus/flutter_blue_plus.dart';

class PairingManagerScreen extends ConsumerStatefulWidget {
  const PairingManagerScreen({super.key});

  @override
  ConsumerState<PairingManagerScreen> createState() => _PairingManagerScreenState();
}

class _PairingManagerScreenState extends ConsumerState<PairingManagerScreen> {
  bool _isProcessing = false;

  void _onDetect(BarcodeCapture capture) async {
    if (_isProcessing) return;
    
    final barcodes = capture.barcodes;
    if (barcodes.isNotEmpty) {
      final code = barcodes.first.rawValue ?? "";
      if (code.startsWith("LYMPHA-")) {
        _processPairing(code);
      }
    }
  }

  void _processPairing(String code) async {
    setState(() => _isProcessing = true);
    
    try {
      final isArduino = code.contains("-ARD-");
      
      final Map<String, dynamic> deviceData = {
        'id': code,
        'name': isArduino ? "Arduino R4 Sensor" : "Sensore Lympha ${code.split('-').last}",
        'type': isArduino ? 'central' : 'flow', // Mapping to known types
        'status': 'online',
        'metadata': isArduino 
            ? {'firmware_version': '1.0.0-arduino', 'hardware_revision': 'R4-WiFi'}
            : {'current_flow': 0.0, 'total_consumed': 0.0}
      };

      await SupabaseService.saveDevice(deviceData);
      
      // Invalidate the provider to refresh the list
      ref.invalidate(deviceListProvider);

      if (mounted) {
        if (isArduino) {
          _showProvisioningPrompt(code);
        } else {
          ScaffoldMessenger.of(context).showSnackBar(
            const SnackBar(content: Text("Dispositivo aggiunto con successo!")),
          );
          Navigator.pop(context);
        }
      }
    } catch (e) {
      if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(content: Text("Errore durante l'aggiunta: $e")),
        );
      }
    } finally {
      if (mounted) setState(() => _isProcessing = false);
    }
  }

  void _showManualInsert() {
    final controller = TextEditingController();
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        title: const Text("Inserimento Manuale", style: TextStyle(color: Colors.white)),
        content: TextField(
          controller: controller,
          style: const TextStyle(color: Colors.white),
          decoration: const InputDecoration(
            hintText: "Esempio: LYMPHA-ARD-01",
            hintStyle: TextStyle(color: Colors.white38),
          ),
        ),
        actions: [
          TextButton(onPressed: () => Navigator.pop(ctx), child: const Text("Annulla")),
          ElevatedButton(
            onPressed: () {
              final code = controller.text.trim();
              if (code.isNotEmpty) {
                Navigator.pop(ctx);
                _processPairing(code);
              }
            },
            style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.primaryBlue),
            child: const Text("Aggiungi"),
          ),
        ],
      ),
    );
  }

  void _showProvisioningPrompt(String code) {
    showDialog(
      context: context,
      barrierDismissible: false,
      builder: (ctx) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        title: const Text("Ottimo! Arduino R4 Aggiunto", style: TextStyle(color: Colors.white)),
        content: const Text(
          "Il dispositivo è stato registrato sul tuo account. Vuoi configurare il suo WiFi tramite Bluetooth?",
          style: TextStyle(color: Colors.white70),
        ),
        actions: [
          TextButton(
            onPressed: () {
              Navigator.pop(ctx);
              Navigator.pop(context);
            }, 
            child: const Text("Più tardi")
          ),
          ElevatedButton(
            onPressed: () {
              Navigator.pop(ctx);
              _startBleProvisioning();
            },
            style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.primaryBlue),
            child: const Text("Configura Ora"),
          ),
        ],
      ),
    );
  }

  void _startBleProvisioning() async {
    setState(() => _isProcessing = true);
    
    // 1. Scan for Arduino
    final device = await BleProvisioningService.scanForDevice();
    
    if (device == null) {
      if (mounted) {
        setState(() => _isProcessing = false);
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(content: Text("Arduino non trovato via Bluetooth.")),
        );
      }
      return;
    }

    // 2. Pre-fill SSID from current connection
    final currentSsid = await WifiService.getCurrentSsid();
    final ssidController = TextEditingController(text: currentSsid);
    final passController = TextEditingController();

    if (mounted) {
      setState(() => _isProcessing = false);
      showDialog(
        context: context,
        builder: (ctx) => AlertDialog(
          backgroundColor: LymphaConfig.backgroundDark,
          title: const Text("Configura WiFi Arduino", style: TextStyle(color: Colors.white)),
          content: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              TextField(
                controller: ssidController,
                style: const TextStyle(color: Colors.white),
                decoration: const InputDecoration(labelText: "SSID WiFi", labelStyle: TextStyle(color: Colors.white38)),
              ),
              TextField(
                controller: passController,
                style: const TextStyle(color: Colors.white),
                obscureText: true,
                decoration: const InputDecoration(labelText: "Password", labelStyle: TextStyle(color: Colors.white38)),
              ),
            ],
          ),
          actions: [
            TextButton(onPressed: () => Navigator.pop(ctx), child: const Text("Annulla")),
            ElevatedButton(
              onPressed: () async {
                final ssid = ssidController.text.trim();
                final pass = passController.text.trim();
                Navigator.pop(ctx);
                
                setState(() => _isProcessing = true);
                final success = await BleProvisioningService.sendCredentials(
                  device: device,
                  ssid: ssid,
                  password: pass,
                  anonKey: SupabaseService.supabaseAnonKey,
                );
                
                if (mounted) {
                  setState(() => _isProcessing = false);
                  ScaffoldMessenger.of(context).showSnackBar(
                    SnackBar(content: Text(success ? "Configurazione Inviata!" : "Errore BLE")),
                  );
                  Navigator.pop(context);
                }
              },
              style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.primaryBlue),
              child: const Text("Invia"),
            ),
          ],
        )
      );
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: AppBar(
        title: const Text("Scansiona QR Lympha"),
        backgroundColor: Colors.transparent,
        elevation: 0,
        foregroundColor: Colors.white,
      ),
      body: Stack(
        children: [
          MobileScanner(onDetect: _onDetect),
          _buildOverlay(),
          Positioned(
            bottom: 40,
            left: 0,
            right: 0,
            child: Center(
              child: TextButton.icon(
                onPressed: _showManualInsert,
                icon: const Icon(Icons.edit, color: Colors.white70),
                label: const Text("Inserisci ID manualmente", style: TextStyle(color: Colors.white70)),
                style: TextButton.styleFrom(
                  backgroundColor: Colors.black45,
                  padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                  shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20)),
                ),
              ),
            ),
          ),
          if (_isProcessing)
            Container(
              color: Colors.black54,
              child: const Center(child: CircularProgressIndicator()),
            ),
        ],
      ),
    );
  }

  Widget _buildOverlay() {
    return Center(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Container(
            width: 250,
            height: 250,
            decoration: BoxDecoration(
              border: Border.all(color: LymphaConfig.primaryBlue, width: 2),
              borderRadius: BorderRadius.circular(24),
            ),
          ),
          const SizedBox(height: 40),
          const Text(
            "Inquadra il codice QR sul dispositivo",
            style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold),
          ),
          const SizedBox(height: 8),
          const Text(
            "Esempio: LYMPHA-FS123",
            style: TextStyle(color: Colors.white54, fontSize: 12),
          ),
        ],
      ),
    );
  }
}

