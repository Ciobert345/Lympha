enum DeviceStatus { online, offline, error, maintenance }

abstract class Device {
  final String id;
  final String name;
  final DeviceStatus status;

  Device({required this.id, required this.name, required this.status});

  factory Device.fromJson(Map<String, dynamic> json) {
    final type = json['type'] as String?;
    final metadata = json['metadata'] as Map<String, dynamic>? ?? {};
    final statusStr = json['status'] as String? ?? 'offline';
    final status = DeviceStatus.values.firstWhere(
      (e) => e.name == statusStr,
      orElse: () => DeviceStatus.offline,
    );

    if (type == 'central') {
      return CentralUnit(
        id: json['id'],
        name: json['name'],
        status: status,
        firmwareVersion: metadata['firmware_version'] ?? 'unknown',
        hardwareRevision: metadata['hardware_revision'] ?? 'unknown',
      );
    } else if (type == 'flow') {
      return FlowSensor(
        id: json['id'],
        name: json['name'],
        status: status,
        currentFlow: (metadata['current_flow'] as num?)?.toDouble() ?? 0.0,
        totalConsumed: (metadata['total_consumed'] as num?)?.toDouble() ?? 0.0,
      );
    } else if (type == 'filter') {
      return PfasFilter(
        id: json['id'],
        name: json['name'],
        status: status,
        capacity: (metadata['capacity'] as num?)?.toDouble() ?? 5000.0,
        consumed: (metadata['consumed'] as num?)?.toDouble() ?? 0.0,
        stages: List<String>.from(metadata['getStages'] ?? ["Sedimentatore", "Resine", "Carboni", "Ultra", "UV-C"]),
      );
    } else {
      // Default to a generic CentralUnit if type is unknown
      return CentralUnit(
        id: json['id'],
        name: json['name'],
        status: status,
        firmwareVersion: 'unknown',
        hardwareRevision: 'unknown',
      );
    }
  }
}

class CentralUnit extends Device {
  final String firmwareVersion;
  final String hardwareRevision;

  CentralUnit({
    required super.id,
    required super.name,
    required super.status,
    required this.firmwareVersion,
    required this.hardwareRevision,
  });
}

class FlowSensor extends Device {
  final double currentFlow; // L/min
  final double totalConsumed; // Liters

  FlowSensor({
    required super.id,
    required super.name,
    required super.status,
    required this.currentFlow,
    required this.totalConsumed,
  });
}

class PfasFilter extends Device {
  final double capacity; // Liters
  final double consumed; // Liters
  final List<String> stages; // E.g. ["Sediment", "Resin", "Carbon", "Ultra", "UV-C"]

  PfasFilter({
    required super.id,
    required super.name,
    required super.status,
    required this.capacity,
    required this.consumed,
    required this.stages,
  });

  double get saturationPercentage => (consumed / capacity) * 100;
  double get remainingLiters => capacity - consumed;
}
