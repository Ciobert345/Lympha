import 'dart:convert';
import 'dart:typed_data';
import 'package:flutter/material.dart';
import 'package:flutter_libserialport/flutter_libserialport.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../services/supabase_service.dart';

class SerialService extends ChangeNotifier {
  static final SerialService _instance = SerialService._internal();
  factory SerialService() => _instance;
  
  SerialService._internal() {
    _initPersistence();
  }

  SerialPort? _port;
  SerialPortReader? _reader;
  bool _isConnected = false;

  bool get isConnected => _isConnected;
  String? get currentPort => _port?.name;
  List<String> get availablePorts => SerialPort.availablePorts;

  Future<void> _initPersistence() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      final lastPort = prefs.getString('last_com_port');
      if (lastPort != null && SerialPort.availablePorts.contains(lastPort)) {
        debugPrint("🔌 SerialService: Riconnessione automatica a $lastPort...");
        await connect(lastPort);
      }
    } catch (e) {
      debugPrint("Serial Persistence Error: $e");
    }
  }

  Future<void> autoConnect() async {
    if (_isConnected) return;
    for (final name in availablePorts) {
      if (name.toLowerCase().contains("acm") ||
          name.toLowerCase().contains("usb") ||
          name.toLowerCase().contains("com")) {
        await connect(name);
        if (_isConnected) break;
      }
    }
  }

  Future<void> connect(String portName) async {
    try {
      if (_isConnected) disconnect();
      
      _port = SerialPort(portName);
      if (!_port!.openReadWrite()) {
        debugPrint("Failed to open port $portName");
        return;
      }

      _port!.config.baudRate = 115200;
      _port!.config.bits = 8;
      _port!.config.stopBits = 1;
      _port!.config.parity = SerialPortParity.none;

      _reader = SerialPortReader(_port!);
      _isConnected = true;
      
      final prefs = await SharedPreferences.getInstance();
      await prefs.setString('last_com_port', portName);
      
      _reader!.stream.listen(_handleData, onError: (err) {
        debugPrint("Serial Error: $err");
        disconnect();
      }, onDone: () => disconnect());

      notifyListeners();
      debugPrint("✅ Connesso a $portName");
    } catch (e) {
      debugPrint("Error connecting to $portName: $e");
      _isConnected = false;
      notifyListeners();
    }
  }

  void _handleData(Uint8List data) {
    try {
      final msg = utf8.decode(data);
      if (msg.contains('{') && msg.contains('}')) {
        final start = msg.indexOf('{');
        final end = msg.lastIndexOf('}');
        final Map<String, dynamic> jsonData = jsonDecode(msg.substring(start, end + 1));
        
        SupabaseService.sendMeasurement(
          deviceId: jsonData['device_id'] ?? 'LYMPHA-ARD-SER-01',
          flowRate: (jsonData['flow_rate'] as num?)?.toDouble() ?? 0.0,
          totalConsumed: (jsonData['total_consumed'] as num?)?.toDouble() ?? 0.0,
          leakAlert: jsonData['leak_alert'] ?? false,
        );
      }
    } catch (e) {
      debugPrint("Parsing Error: $e");
    }
  }

  void disconnect() {
    _reader?.close();
    _port?.close();
    _isConnected = false;
    _port = null;
    notifyListeners();
    debugPrint("Disconnected from serial port.");
  }
}
