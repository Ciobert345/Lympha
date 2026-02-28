import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:mobile_scanner/mobile_scanner.dart';
import '../../core/constants.dart';
import '../../models/device.dart';
import '../../providers/lympha_stream.dart';

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
        setState(() => _isProcessing = true);
        
        // Simulate network/pairing delay
        await Future.delayed(const Duration(seconds: 2));
        
        final newDevice = FlowSensor(
          id: code,
          name: "Nuovo Sensore ${code.split('-').last}",
          status: DeviceStatus.online,
          currentFlow: 0.0,
          totalConsumed: 0.0,
        );

        ref.read(deviceListProvider.notifier).update((state) => [...state, newDevice]);
        
        if (mounted) {
          ScaffoldMessenger.of(context).showSnackBar(
            const SnackBar(content: Text("Dispositivo aggiunto con successo!")),
          );
          Navigator.pop(context);
        }
      }
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

