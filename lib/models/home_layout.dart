import 'package:flutter/material.dart';

class HomeLayout {
  final List<Room> rooms;
  final List<PlottedSensor> sensors;

  HomeLayout({required this.rooms, required this.sensors});

  factory HomeLayout.empty() => HomeLayout(rooms: [], sensors: []);

  HomeLayout copyWith({List<Room>? rooms, List<PlottedSensor>? sensors}) {
    return HomeLayout(
      rooms: rooms ?? this.rooms,
      sensors: sensors ?? this.sensors,
    );
  }

  Map<String, dynamic> toJson() => {
        'rooms': rooms.map((r) => r.toJson()).toList(),
        'sensors': sensors.map((s) => s.toJson()).toList(),
      };

  factory HomeLayout.fromJson(Map<String, dynamic> json) {
    return HomeLayout(
      rooms: (json['rooms'] as List? ?? []).map((r) => Room.fromJson(r)).toList(),
      sensors: (json['sensors'] as List? ?? []).map((s) => PlottedSensor.fromJson(s)).toList(),
    );
  }
}

enum RoomType {
  room,
  corridor;

  String toJson() => name;
  static RoomType fromJson(String name) => RoomType.values.byName(name);
}

class Room {
  final String id;
  final String name;
  final double width;
  final double length;
  final double height;
  final Offset position;
  final Color color;
  final RoomType type;

  Room({
    required this.id,
    required this.name,
    required this.width,
    required this.length,
    this.height = 3.0,
    required this.position,
    this.color = Colors.blueGrey,
    this.type = RoomType.room,
  });

  Room copyWith({
    String? id,
    String? name,
    double? width,
    double? length,
    double? height,
    Offset? position,
    Color? color,
    RoomType? type,
  }) {
    return Room(
      id: id ?? this.id,
      name: name ?? this.name,
      width: width ?? this.width,
      length: length ?? this.length,
      height: height ?? this.height,
      position: position ?? this.position,
      color: color ?? this.color,
      type: type ?? this.type,
    );
  }

  Map<String, dynamic> toJson() => {
        'id': id,
        'name': name,
        'width': width,
        'length': length,
        'height': height,
        'x': position.dx,
        'y': position.dy,
        'color': color.toARGB32(),
        'type': type.toJson(),
      };

  factory Room.fromJson(Map<String, dynamic> json) {
    try {
      return Room(
        id: json['id']?.toString() ?? DateTime.now().millisecondsSinceEpoch.toString(),
        name: json['name']?.toString() ?? 'Room',
        width: (json['width'] as num?)?.toDouble() ?? 5.0,
        length: (json['length'] as num?)?.toDouble() ?? 5.0,
        height: (json['height'] as num?)?.toDouble() ?? 3.0,
        position: Offset(
          (json['x'] as num?)?.toDouble() ?? 2500.0,
          (json['y'] as num?)?.toDouble() ?? 2500.0,
        ),
        color: Color(int.tryParse(json['color']?.toString() ?? '') ?? Colors.blueGrey.value),
        type: json['type'] != null ? RoomType.fromJson(json['type'].toString()) : RoomType.room,
      );
    } catch (e) {
      debugPrint("🛑 Room.fromJson Error: $e | Raw data: $json");
      rethrow;
    }
  }
}

class PlottedSensor {
  final String deviceId;
  final Offset localPosition;
  final String roomName;

  PlottedSensor({
    required this.deviceId,
    required this.localPosition,
    required this.roomName,
  });

  Map<String, dynamic> toJson() => {
        'device_id': deviceId,
        'x': localPosition.dx,
        'y': localPosition.dy,
        'room_name': roomName,
      };

  factory PlottedSensor.fromJson(Map<String, dynamic> json) {
    try {
      return PlottedSensor(
        deviceId: json['device_id']?.toString() ?? '',
        localPosition: Offset(
          (json['x'] as num?)?.toDouble() ?? 0.0,
          (json['y'] as num?)?.toDouble() ?? 0.0,
        ),
        roomName: json['room_name']?.toString() ?? 'Auto',
      );
    } catch (e) {
      debugPrint("🛑 PlottedSensor.fromJson Error: $e | Raw data: $json");
      rethrow;
    }
  }
}
