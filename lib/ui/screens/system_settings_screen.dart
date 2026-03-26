import 'package:flutter/material.dart';
import '../../core/constants.dart';
import '../../services/wifi_service.dart';
import '../../services/serial_service.dart';

class SystemSettingsScreen extends StatefulWidget {
  const SystemSettingsScreen({super.key});

  @override
  State<SystemSettingsScreen> createState() => _SystemSettingsScreenState();
}

class _SystemSettingsScreenState extends State<SystemSettingsScreen> {
  List<WifiNetwork> _networks = [];
  bool _isLoading = false;
  String? _currentSsid;

  @override
  void initState() {
    super.initState();
    _refresh();
    // Listen for serial connection changes
    SerialService().addListener(_onSerialStatusChanged);
  }

  @override
  void dispose() {
    SerialService().removeListener(_onSerialStatusChanged);
    super.dispose();
  }

  void _onSerialStatusChanged() {
    if (mounted) {
      setState(() {}); // Rebuild to reflect serial connection status
    }
  }

  Future<void> _refresh() async {
    setState(() => _isLoading = true);
    await _scanWifi();
    final current = await WifiService.getCurrentSsid();
    if (mounted) {
      setState(() {
        _currentSsid = current;
        _isLoading = false;
      });
    }
  }

  Future<void> _scanWifi() async {
    setState(() => _isLoading = true); 
    final results = await WifiService.scanNetworks();
    if (mounted) {
      setState(() {
        _networks = results;
        _isLoading = false;
      });
    }
  }

  void _handleSerialConnect() async {
    await SerialService().autoConnect();
    if (mounted) setState(() {});
  }

  void _handleSerialDisconnect() {
    SerialService().disconnect();
    if (mounted) setState(() {});
  }

  void _showConnectDialog(String ssid) {
    final passwordController = TextEditingController();
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        title: Text("Connetti a $ssid", style: const TextStyle(color: Colors.white)),
        content: TextField(
          controller: passwordController,
          obscureText: true,
          style: const TextStyle(color: Colors.white),
          decoration: const InputDecoration(
            hintText: "Password WiFi",
            hintStyle: TextStyle(color: Colors.white38),
          ),
        ),
        actions: [
          TextButton(onPressed: () => Navigator.pop(ctx), child: const Text("Annulla")),
          ElevatedButton(
            onPressed: () async {
              Navigator.pop(ctx);
              setState(() => _isLoading = true);
              final success = await WifiService.connect(ssid, passwordController.text);
              if (mounted) {
                ScaffoldMessenger.of(context).showSnackBar(
                  SnackBar(content: Text(success ? "Connesso!" : "Errore di connessione")),
                );
                _refresh();
              }
            },
            style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.primaryBlue),
            child: const Text("Connetti"),
          ),
        ],
      ),
    );
  }

  Widget _buildSerialStatusCard() {
    final serial = SerialService();
    return Container(
      padding: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: LymphaConfig.backgroundDarker,
        borderRadius: BorderRadius.circular(12),
        border: Border.all(color: Colors.white.withOpacity(0.05)),
      ),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(10),
            decoration: BoxDecoration(
              color: serial.isConnected ? Colors.green.withOpacity(0.1) : Colors.orange.withOpacity(0.1),
              shape: BoxShape.circle,
            ),
            child: Icon(
              serial.isConnected ? Icons.usb : Icons.usb_off,
              color: serial.isConnected ? Colors.green : Colors.orange,
              size: 20,
            ),
          ),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  serial.isConnected ? "Arduino Connesso" : "USB Scollegata",
                  style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold),
                ),
                Text(
                  serial.isConnected ? "Porta: ${serial.currentPort}" : "Collega l'Arduino al Raspberry",
                  style: TextStyle(color: Colors.white.withOpacity(0.5), fontSize: 12),
                ),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: serial.isConnected ? _handleSerialDisconnect : _handleSerialConnect,
            style: ElevatedButton.styleFrom(
              backgroundColor: serial.isConnected ? Colors.red.withOpacity(0.2) : LymphaConfig.primaryBlue,
              foregroundColor: Colors.white,
              padding: const EdgeInsets.symmetric(horizontal: 16),
            ),
            child: Text(serial.isConnected ? "Scollega" : "Connetti"),
          ),
        ],
      ),
    );
  }

  Widget _buildSerialDebugInfo() {
    final serial = SerialService();
    final ports = serial.availablePorts;
    if (ports.isEmpty) return const SizedBox.shrink();

    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        const SizedBox(height: 12),
        const Text("PORTE RILEVATE", style: TextStyle(color: Colors.white24, fontSize: 10, fontWeight: FontWeight.bold)),
        const SizedBox(height: 8),
        Wrap(
          spacing: 12,
          runSpacing: 12,
          children: ports.map((p) => ActionChip(
            label: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
              child: Text(p, style: const TextStyle(fontSize: 14, fontWeight: FontWeight.bold)),
            ),
            backgroundColor: serial.currentPort == p 
                ? LymphaConfig.primaryBlue.withValues(alpha: 0.3) 
                : Colors.white.withValues(alpha: 0.05),
            side: BorderSide(
              color: serial.currentPort == p 
                  ? LymphaConfig.primaryBlue 
                  : Colors.white10
            ),
            onPressed: () async {
              await serial.connect(p);
              if (mounted) setState(() {});
            },
          )).toList(),
        ),
      ],
    );
  }

  Widget _buildSectionHeader(String title) {
    return Text(title.toUpperCase(), style: const TextStyle(color: Colors.white38, fontSize: 11, fontWeight: FontWeight.bold, letterSpacing: 1.2));
  }

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(24.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const Text(
            "Impostazioni Sistema",
            style: TextStyle(color: Colors.white, fontSize: 24, fontWeight: FontWeight.bold),
          ),
          const SizedBox(height: 8),
          const Text(
            "Configura la connettività del tuo Raspberry Pi 4.",
            style: TextStyle(color: Colors.white38, fontSize: 13),
          ),
          const SizedBox(height: 32),

          // Current Connection
          if (_currentSsid != null) ...[
            _buildSectionHeader("Connesso a"),
            const SizedBox(height: 8),
            Container(
              padding: const EdgeInsets.all(16),
              decoration: BoxDecoration(
                color: LymphaConfig.primaryBlue.withValues(alpha: 0.1),
                borderRadius: BorderRadius.circular(12),
                border: Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.3)),
              ),
              child: Row(
                children: [
                  const Icon(Icons.wifi, color: LymphaConfig.primaryBlue),
                  const SizedBox(width: 16),
                  Text(_currentSsid!, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold)),
                  const Spacer(),
                  const Icon(Icons.check_circle, color: Colors.greenAccent, size: 16),
                ],
              ),
            ),
            const SizedBox(height: 32),
          ],

          // SERIAL SECTION
          _buildSectionHeader("Connessione USB (Arduino)"),
          const SizedBox(height: 12),
          _buildSerialStatusCard(),
          _buildSerialDebugInfo(), // Debug info with manual port buttons
          const SizedBox(height: 32),

          // WIFI SECTION
          Row(
            children: [
              _buildSectionHeader("Reti Wi-Fi"),
              const Spacer(),
              if (_isLoading)
                const SizedBox(width: 12, height: 12, child: CircularProgressIndicator(strokeWidth: 2))
              else
                IconButton(
                  icon: const Icon(Icons.refresh, size: 16, color: Colors.white38),
                  onPressed: _refresh,
                  padding: EdgeInsets.zero,
                  constraints: const BoxConstraints(),
                ),
            ],
          ),
          const SizedBox(height: 12),
          Expanded(
            child: ListView.builder(
              itemCount: _networks.length,
              itemBuilder: (context, index) {
                final net = _networks[index];
                if (net.ssid == _currentSsid) return const SizedBox.shrink();
                return ListTile(
                  contentPadding: EdgeInsets.zero,
                  leading: const Icon(Icons.wifi_lock, color: Colors.white24, size: 20),
                  title: Text(net.ssid, style: const TextStyle(color: Colors.white70, fontSize: 14)),
                  subtitle: Text("Segnale: ${net.signal}", style: const TextStyle(color: Colors.white24, fontSize: 11)),
                  trailing: const Icon(Icons.chevron_right, color: Colors.white12),
                  onTap: () => _showConnectDialog(net.ssid),
                );
              },
            ),
          ),
        ],
      ),
    );
  }
}
