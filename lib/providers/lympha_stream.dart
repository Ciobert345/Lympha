import 'dart:async';
import 'dart:math';
import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../services/supabase_service.dart';
import '../models/sensor_data.dart';
import '../models/device.dart';
import '../models/home_layout.dart';
import '../core/constants.dart';



final sensorDataProvider = StreamProvider<SensorData>((ref) {
  if (LymphaConfig.useMockData) {
    return Stream.periodic(const Duration(seconds: 2), (count) {
      final random = Random();
      return SensorData(
        flowRate: 2.0 + random.nextDouble() * 1.5,
        tds: 12 + random.nextInt(8),
        pressure: 3.0 + random.nextDouble() * 0.5,
        timestamp: DateTime.now(),
      );
    });
  } else {
    // Real-time stream from Supabase 'measurements' table
    final controller = StreamController<SensorData>();
    
    final subscription = SupabaseService.client
        .from('measurements')
        .stream(primaryKey: ['id'])
        .order('created_at')
        .limit(1)
        .listen((data) {
          if (data.isNotEmpty) {
            final row = data.first;
            controller.add(SensorData(
              flowRate: (row['flow_rate'] as num?)?.toDouble() ?? 0.0,
              tds: (row['tds'] as num?)?.toInt() ?? 0,
              pressure: (row['pressure'] as num?)?.toDouble() ?? 0.0,
              timestamp: DateTime.parse(row['created_at'] as String),
            ));
          }
        });

    ref.onDispose(() {
      subscription.cancel();
      controller.close();
    });

    return controller.stream;
  }
});

final profileProvider = FutureProvider<Map<String, dynamic>?>((ref) async {
  return await SupabaseService.getProfile();
});

final walletProvider = Provider<double>((ref) {
  final profile = ref.watch(profileProvider).value;
  return (profile?['credits'] as num?)?.toDouble() ?? 0.0;
});

final savingsProvider = Provider<double>((ref) {
  final profile = ref.watch(profileProvider).value;
  return (profile?['savings'] as num?)?.toDouble() ?? 0.0;
});

final notificationListProvider = StreamProvider<List<Map<String, dynamic>>>((ref) {
  final userId = SupabaseService.client.auth.currentUser?.id;
  if (userId == null) return Stream.value([]);
  
  return SupabaseService.client
      .from('notifications')
      .stream(primaryKey: ['id'])
      .eq('user_id', userId)
      .order('created_at', ascending: false);
});

final notificationActionsProvider = Provider((ref) => NotificationActions());

class NotificationActions {
  Future<void> markAsRead(int id) async {
    await SupabaseService.markNotificationAsRead(id);
  }

  Future<void> markAllAsRead() async {
    await SupabaseService.markAllNotificationsAsRead();
  }
}

final navigationIndexProvider = StateProvider<int>((ref) => 0);

final deviceListProvider = FutureProvider<List<Device>>((ref) async {
  if (LymphaConfig.useMockData) {
    return [
      CentralUnit(
        id: "CU-001",
        name: "Main Lympha Unit",
        status: DeviceStatus.online,
        firmwareVersion: "v4.2.0",
        hardwareRevision: "HW-B2",
      ),
      FlowSensor(
        id: "FS-09",
        name: "Kitchen Flow Sensor",
        status: DeviceStatus.online,
        currentFlow: 2.4,
        totalConsumed: 1240.5,
      ),
    ];
  }
  
  try {
    final response = await SupabaseService.client
        .from('devices')
        .select();
    
    return response.map((d) => Device.fromJson(d)).toList();
  } catch (e) {
    debugPrint("Error fetching devices: $e");
    return [];
  }
});

final activeFilterProvider = StateProvider<PfasFilter>((ref) {
  // In a real app, this would be fetched from Supabase as well.
  // For now, we return a default object that can be updated.
  return PfasFilter(
    id: "PF-TEMP",
    name: "Filtro Lympha",
    status: DeviceStatus.online,
    capacity: 5000.0,
    consumed: 0.0,
    stages: ["Sedimentatore", "Resine", "Carboni", "Ultra", "UV-C"],
  );
});

final homeLayoutProvider = StateNotifierProvider<HomeLayoutNotifier, HomeLayoutState>((ref) {
  return HomeLayoutNotifier();
});

class HomeLayoutState {
  final HomeLayout layout;
  final bool isSyncing;
  final bool isLoading;

  HomeLayoutState({
    required this.layout,
    this.isSyncing = false,
    this.isLoading = false,
  });

  HomeLayoutState copyWith({HomeLayout? layout, bool? isSyncing, bool? isLoading}) {
    return HomeLayoutState(
      layout: layout ?? this.layout,
      isSyncing: isSyncing ?? this.isSyncing,
      isLoading: isLoading ?? this.isLoading,
    );
  }
}

class HomeLayoutNotifier extends StateNotifier<HomeLayoutState> {
  Timer? _debounceSync;

  HomeLayoutNotifier() : super(HomeLayoutState(layout: HomeLayout.empty(), isLoading: true)) {
    _loadLayout();
  }

  Future<void> _loadLayout() async {
    try {
      debugPrint("🏠 HomeLayout: Caricamento in corso...");
      final roomsData = await SupabaseService.getRooms();
      final sensorsData = await SupabaseService.getPlottedSensors();
      
      debugPrint("🏠 HomeLayout: Dati grezzi ricevuti - Stanze: ${roomsData.length}, Sensori: ${sensorsData.length}");
      if (roomsData.isNotEmpty) debugPrint("🏠 HomeLayout: Esempio prima stanza: ${roomsData.first}");

      final rooms = roomsData.map((r) {
        try {
          return Room.fromJson(r);
        } catch (e) {
          debugPrint("🛑 Errore nel parsing della stanza: $e | Data: $r");
          rethrow;
        }
      }).toList();

      state = state.copyWith(
        layout: HomeLayout(
          rooms: rooms,
          sensors: sensorsData.map((s) => PlottedSensor.fromJson(s)).toList(),
        ),
        isLoading: false,
      );
      debugPrint("🏠 HomeLayout caricato con successo: ${state.layout.rooms.length} stanze pronte.");
    } catch (e) {
      debugPrint("🛑 Errore nel caricamento della casa da Supabase: $e");
      state = state.copyWith(isLoading: false);
    }
  }

  void updateLayout(HomeLayout newLayout) {
    state = state.copyWith(layout: newLayout);
    _scheduleSync();
  }

  void assignSensorToRoom(String deviceId, Room room) {
    final currentLayout = state.layout;
    
    // Calculate center of the room
    // 1m = 20px
    final centerX = room.position.dx + (room.width * 20 / 2);
    final centerY = room.position.dy + (room.length * 20 / 2);
    final center = Offset(centerX, centerY);

    final List<PlottedSensor> updatedSensors = List.from(currentLayout.sensors);
    final existingIndex = updatedSensors.indexWhere((s) => s.deviceId == deviceId);

    if (existingIndex >= 0) {
      updatedSensors[existingIndex] = PlottedSensor(
        deviceId: deviceId,
        localPosition: center,
        roomName: room.name,
      );
    } else {
      updatedSensors.add(PlottedSensor(
        deviceId: deviceId,
        localPosition: center,
        roomName: room.name,
      ));
    }

    updateLayout(currentLayout.copyWith(sensors: updatedSensors));
  }

  void _scheduleSync() {
    _debounceSync?.cancel();
    _debounceSync = Timer(const Duration(milliseconds: 1000), () {
      _saveLayout();
    });
  }

  Future<void> _saveLayout() async {
    if (state.isSyncing) return;
    
    state = state.copyWith(isSyncing: true);
    try {
      final roomsJson = state.layout.rooms.map((r) => r.toJson()).toList();
      final sensorsJson = state.layout.sensors.map((s) => s.toJson()).toList();
      
      debugPrint("💾 HomeLayout: Tentativo di sincronizzazione...");
      debugPrint("💾 HomeLayout: Stanze da salvare: ${roomsJson.length}");
      if (roomsJson.isNotEmpty) debugPrint("💾 HomeLayout: Primo JSON stanza: ${roomsJson.first}");

      await SupabaseService.saveLayoutBulk(
        rooms: roomsJson,
        sensors: sensorsJson,
      );
      debugPrint("✅ HomeLayout: Sincronizzazione con Supabase completata con successo.");
    } catch (e) {
      debugPrint("❌ HomeLayout: Errore critico nel salvataggio bulk: $e");
    } finally {
      state = state.copyWith(isSyncing: false);
    }
  }

  @override
  void dispose() {
    _debounceSync?.cancel();
    super.dispose();
  }
}


/// Fetches the last N measurements for analytics charts.
final measurementsHistoryProvider = FutureProvider<List<Map<String, dynamic>>>((ref) async {
  if (LymphaConfig.useMockData) {
    // Return empty list so charts show the "no data" state in mock mode
    return [];
  }
  try {
    final data = await SupabaseService.client
        .from('measurements')
        .select('tds, flow_rate, pressure, created_at')
        .order('created_at', ascending: false)
        .limit(30);
    return (data as List).cast<Map<String, dynamic>>().reversed.toList();
  } catch (e) {
    debugPrint('❌ measurementsHistoryProvider error: $e');
    return [];
  }
});
