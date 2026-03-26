import 'dart:convert';
import 'package:flutter_blue_plus/flutter_blue_plus.dart';
import 'package:flutter/foundation.dart';

class BleProvisioningService {
  static const String serviceUuid = "1801";
  static const String ssidCharUuid = "2A00";
  static const String passCharUuid = "2A01";
  static const String keyCharUuid = "2A02";

  /// Scans for the Lympha Config BLE service and returns the device if found.
  static Future<BluetoothDevice?> scanForDevice() async {
    BluetoothDevice? target;
    
    // Start scanning
    await FlutterBluePlus.startScan(timeout: const Duration(seconds: 10));

    // Listen to scan results
    await for (final results in FlutterBluePlus.scanResults) {
      for (ScanResult r in results) {
        if (r.device.platformName == "LYMPHA_CONFIG") {
          target = r.device;
          await FlutterBluePlus.stopScan();
          break;
        }
      }
      if (target != null) break;
    }
    
    return target;
  }

  /// Sends credentials to the connected device.
  static Future<bool> sendCredentials({
    required BluetoothDevice device,
    required String ssid,
    required String password,
    required String anonKey,
  }) async {
    try {
      await device.connect();
      List<BluetoothService> services = await device.discoverServices();
      
      BluetoothService? configService = services.cast<BluetoothService?>().firstWhere(
        (s) => s?.uuid.toString().toUpperCase().contains(serviceUuid) ?? false,
        orElse: () => null,
      );

      if (configService == null) return false;

      final chars = configService.characteristics;
      
      for (var c in chars) {
        final uuid = c.uuid.toString().toUpperCase();
        if (uuid.contains(ssidCharUuid)) {
          await c.write(utf8.encode(ssid));
        } else if (uuid.contains(passCharUuid)) {
          await c.write(utf8.encode(password));
        } else if (uuid.contains(keyCharUuid)) {
          await c.write(utf8.encode(anonKey));
        }
      }

      await device.disconnect();
      return true;
    } catch (e) {
      debugPrint("BLE Error: $e");
      return false;
    }
  }
}
