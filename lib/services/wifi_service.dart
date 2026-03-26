import 'dart:io';
import 'package:flutter/foundation.dart';

class WifiNetwork {
  final String ssid;
  final String signal;
  final bool isConnected;

  WifiNetwork({required this.ssid, required this.signal, this.isConnected = false});
}

class WifiService {
  /// Scans for available WiFi networks using 'nmcli' (NetworkManager).
  static Future<List<WifiNetwork>> scanNetworks() async {
    if (!Platform.isLinux) {
      debugPrint("WifiService: Scan only supported on Linux/RPi.");
      return [
        WifiNetwork(ssid: "Mock_WiFi_1", signal: "90%"),
        WifiNetwork(ssid: "Mock_WiFi_2", signal: "60%"),
      ];
    }

    try {
      // nmcli -t -f SSID,SIGNAL,ACTIVE dev wifi
      final result = await Process.run('nmcli', ['-t', '-f', 'SSID,SIGNAL,ACTIVE', 'dev', 'wifi']);
      
      if (result.exitCode != 0) {
        debugPrint("nmcli error: ${result.stderr}");
        return [];
      }

      final lines = (result.stdout as String).split('\n');
      final List<WifiNetwork> networks = [];

      for (var line in lines) {
        if (line.isEmpty) continue;
        final parts = line.split(':');
        if (parts.length >= 3) {
          networks.add(WifiNetwork(
            ssid: parts[0],
            signal: parts[1],
            isConnected: parts[2] == 'yes',
          ));
        }
      }
      return networks;
    } catch (e) {
      debugPrint("Exception scanning WiFi: $e");
      return [];
    }
  }

  /// Connects to a WiFi network using 'nmcli'.
  static Future<bool> connect(String ssid, String password) async {
    if (!Platform.isLinux) {
      debugPrint("WifiService: Connect only supported on Linux/RPi.");
      return true; // Mock success
    }

    try {
      // nmcli dev wifi connect <SSID> password <PASSWORD>
      final result = await Process.run('nmcli', ['dev', 'wifi', 'connect', ssid, 'password', password]);
      return result.exitCode == 0;
    } catch (e) {
      debugPrint("Exception connecting to WiFi: $e");
      return false;
    }
  }

  /// Gets the currently connected SSID.
  static Future<String?> getCurrentSsid() async {
    if (!Platform.isLinux) return "Mock_WiFi_Connected";

    try {
      final result = await Process.run('nmcli', ['-t', '-f', 'ACTIVE,SSID', 'dev', 'wifi']);
      final lines = (result.stdout as String).split('\n');
      for (var line in lines) {
        if (line.startsWith('yes:')) {
          return line.split(':')[1];
        }
      }
      return null;
    } catch (e) {
      return null;
    }
  }
}
