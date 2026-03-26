import 'package:flutter/foundation.dart';
import 'package:supabase_flutter/supabase_flutter.dart';

class SupabaseService {
  static const String supabaseUrl = 'https://cbvlsmrhmwhavnyyieiq.supabase.co';
  static const String supabaseAnonKey = 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImNidmxzbXJobXdoYXZueXlpZWlxIiwicm9sZSI6ImFub24iLCJpYXQiOjE3NzIyNzk3MTYsImV4cCI6MjA4Nzg1NTcxNn0.obyUo9HywaXk6OlGMhzkIOcnL3PMsgkV2QzN7lUMrlE';

  static Future<void> initialize() async {
    await Supabase.initialize(
      url: supabaseUrl,
      anonKey: supabaseAnonKey,
    );
  }

  static SupabaseClient get client => Supabase.instance.client;

  // Auth methods
  static Future<AuthResponse> signUp(String email, String password) async {
    return await client.auth.signUp(email: email, password: password);
  }

  static Future<AuthResponse> signIn(String email, String password) async {
    return await client.auth.signInWithPassword(email: email, password: password);
  }

  static Future<void> signOut() async {
    await client.auth.signOut();
  }

  // Profile methods
  static Future<Map<String, dynamic>?> getProfile() async {
    final userId = client.auth.currentUser?.id;
    if (userId == null) return null;
    try {
      final response = await client.from('profiles').select().eq('id', userId).maybeSingle();
      return response;
    } catch (e) {
      debugPrint("Error fetching profile (most likely schema mismatch): $e");
      return null;
    }
  }

  static Future<void> updateProfile(Map<String, dynamic> updates) async {
    final userId = client.auth.currentUser?.id;
    if (userId == null) return;
    await client.from('profiles').update(updates).eq('id', userId);
  }

  static Future<String?> uploadAvatar(dynamic imageFile) async {
    final userId = client.auth.currentUser?.id;
    if (userId == null) return null;
    
    // In a real app with 'dart:io' or 'image_picker', imageFile would be a XFile or File
    // For this environment, we'll assume it's been handled and we just need the upload logic.
    final fileExtension = 'jpg'; // simplified
    final filePath = '$userId/avatar.$fileExtension';
    
    try {
      await client.storage.from('avatars').uploadBinary(
        filePath,
        imageFile,
        fileOptions: const FileOptions(upsert: true),
      );
      return client.storage.from('avatars').getPublicUrl(filePath);
    } catch (e) {
      debugPrint("🔴 Upload error: $e");
      if (e.toString().contains('Bucket not found')) {
        debugPrint("💡 SUGGESTION: Crea il bucket 'avatars' su Supabase Storage.");
      }
      return null;
    }
  }

  // Database methods
  static Future<List<Map<String, dynamic>>> getDevices() async {
    final response = await client.from('devices').select();
    return List<Map<String, dynamic>>.from(response);
  }

  static Future<List<Map<String, dynamic>>> getRooms() async {
    final userId = client.auth.currentUser?.id;
    final response = await client.from('rooms').select().eq('user_id', userId ?? '');
    return List<Map<String, dynamic>>.from(response);
  }

  static Future<List<Map<String, dynamic>>> getPlottedSensors() async {
    final userId = client.auth.currentUser?.id;
    final response = await client.from('plotted_sensors').select().eq('user_id', userId ?? '');
    return List<Map<String, dynamic>>.from(response);
  }

  static Future<void> saveRoom(Map<String, dynamic> roomData) async {
    final userId = client.auth.currentUser?.id;
    if (userId != null) {
      roomData['user_id'] = userId;
      await client.from('rooms').upsert(roomData);
    }
  }

  static Future<void> savePlottedSensor(Map<String, dynamic> sensorData) async {
    final userId = client.auth.currentUser?.id;
    if (userId != null) {
      sensorData['user_id'] = userId;
      await client.from('plotted_sensors').upsert(sensorData);
    }
  }

  static Future<void> saveDevice(Map<String, dynamic> deviceData) async {
    final userId = client.auth.currentUser?.id;
    if (userId != null) {
      deviceData['user_id'] = userId;
      // Map frontend fields to DB fields if necessary
      await client.from('devices').upsert(deviceData);
    }
  }

  /// Saves the entire layout (rooms and sensors) in bulk to ensure consistency.
  static Future<void> saveLayoutBulk({
    required List<Map<String, dynamic>> rooms,
    required List<Map<String, dynamic>> sensors,
  }) async {
    final userId = client.auth.currentUser?.id;
    if (userId == null) return;

    try {
      // 1. Upsert Rooms
      if (rooms.isNotEmpty) {
        final roomsWithUser = rooms.map((r) => {...r, 'user_id': userId}).toList();
        debugPrint("💾 Saving ${roomsWithUser.length} rooms: ${roomsWithUser.map((r) => '${r['name']}(${r['type']})').join(', ')}");
        await client.from('rooms').upsert(roomsWithUser);
      }

      // 2. Delete orphaned rooms (rooms in DB that are no longer in the local layout)
      final roomIds = rooms.map((r) => r['id'].toString()).toList();
      if (roomIds.isNotEmpty) {
        // Use correct PostgREST filter format: (val1,val2,val3)
        final roomIdsFilter = '(${roomIds.join(",")})';
        await client.from('rooms').delete().eq('user_id', userId).not('id', 'in', roomIdsFilter);
      } else {
        // If no rooms left, delete all user's rooms
        await client.from('rooms').delete().eq('user_id', userId);
      }

      // 3. Upsert Sensors
      if (sensors.isNotEmpty) {
        final sensorsWithUser = sensors.map((s) => {...s, 'user_id': userId}).toList();
        await client.from('plotted_sensors').upsert(sensorsWithUser, onConflict: 'device_id');
      }

      // 4. Delete orphaned sensors
      final sensorDeviceIds = sensors.map((s) => s['device_id'].toString()).toList();
      if (sensorDeviceIds.isNotEmpty) {
        final sensorIdsFilter = '(${sensorDeviceIds.join(",")})';
        await client.from('plotted_sensors').delete().eq('user_id', userId).not('device_id', 'in', sensorIdsFilter);
      } else {
        await client.from('plotted_sensors').delete().eq('user_id', userId);
      }

      debugPrint("✅ Sincronizzazione bulk completata con successo.");
    } catch (e) {
      debugPrint("🔴 Errore durante saveLayoutBulk: $e");
    }
  }

  static Future<void> markNotificationAsRead(int id) async {
    await client.from('notifications').update({'is_read': true}).eq('id', id);
  }

  static Future<void> markAllNotificationsAsRead() async {
    final userId = client.auth.currentUser?.id;
    if (userId == null) return;
    await client.from('notifications').update({'is_read': true}).eq('user_id', userId);
  }

  // Measurement methods
  static Future<void> sendMeasurement({
    required String deviceId,
    required double flowRate,
    required double totalConsumed,
    required bool leakAlert,
  }) async {
    try {
      await client.from('measurements').insert({
        'device_id': deviceId,
        'flow_rate': flowRate,
        'total_consumed': totalConsumed,
        'leak_alert': leakAlert,
        'timestamp': DateTime.now().toIso8601String(),
      });
      debugPrint("📊 Measurement sent: $deviceId -> $flowRate L/min");
    } catch (e) {
      debugPrint("🔴 Error sending measurement: $e");
    }
  }
}
