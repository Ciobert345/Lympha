class SensorData {
  final double flowRate; // L/min
  final int tds; // Total Dissolved Solids
  final double pressure; // Bar
  final DateTime timestamp;

  SensorData({
    required this.flowRate,
    required this.tds,
    required this.pressure,
    required this.timestamp,
  });

  factory SensorData.mock() {
    return SensorData(
      flowRate: 2.5,
      tds: 15,
      pressure: 3.2,
      timestamp: DateTime.now(),
    );
  }
}
