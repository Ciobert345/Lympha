import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:fl_chart/fl_chart.dart';
import '../../providers/lympha_stream.dart';
import '../../core/constants.dart';

class PulseChart extends ConsumerStatefulWidget {
  const PulseChart({super.key});

  @override
  ConsumerState<PulseChart> createState() => _PulseChartState();
}

class _PulseChartState extends ConsumerState<PulseChart> {
  // Start empty — only populated by real sensor readings
  final List<double> _tdsHistory = [];

  void _updateHistory(double newValue) {
    if (_tdsHistory.isEmpty || _tdsHistory.last != newValue) {
      setState(() {
        if (_tdsHistory.length >= 20) _tdsHistory.removeAt(0);
        _tdsHistory.add(newValue);
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    final sensorDataAsync = ref.watch(sensorDataProvider);
    final sensorData = sensorDataAsync.value;
    
    // Only record reading if it's real
    if (sensorData != null) {
      WidgetsBinding.instance.addPostFrameCallback((_) => _updateHistory(sensorData.tds.toDouble()));
    }

    final hasData = _tdsHistory.isNotEmpty;
    final currentTds = hasData ? _tdsHistory.last : 0.0;
    
    final spots = _tdsHistory.asMap().entries.map((e) => FlSpot(e.key.toDouble(), e.value)).toList();
    final isSafe = currentTds <= 50;
    final isCritical = currentTds > 100;
    final statusColor = !hasData ? Colors.white24 : isCritical ? LymphaConfig.emergencyRed : isSafe ? Colors.greenAccent : Colors.orangeAccent;
    final statusLabel = !hasData ? "OFFLINE" : isCritical ? "CRITICO" : isSafe ? "SICURO" : "ATTENZIONE";

    return Container(
      padding: const EdgeInsets.all(18),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.04),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.white10),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // Header
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              const Text(
                "TDS in Tempo Reale",
                style: TextStyle(color: Colors.white54, fontSize: 11, letterSpacing: 1, fontWeight: FontWeight.bold),
              ),
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 3),
                decoration: BoxDecoration(
                  color: statusColor.withValues(alpha: 0.1),
                  borderRadius: BorderRadius.circular(6),
                  border: Border.all(color: statusColor.withValues(alpha: 0.3)),
                ),
                child: Text(
                  statusLabel,
                  style: TextStyle(color: statusColor, fontSize: 9, fontWeight: FontWeight.bold, letterSpacing: 0.5),
                ),
              ),
            ],
          ),
          const SizedBox(height: 10),

          if (!hasData)
            _buildNoDataState()
          else ...[
            // Big value
            Row(
              crossAxisAlignment: CrossAxisAlignment.end,
              children: [
                Text(
                  "${currentTds.toInt()}",
                  style: TextStyle(color: statusColor, fontSize: 40, fontWeight: FontWeight.w900, height: 1),
                ),
                Padding(
                  padding: const EdgeInsets.only(bottom: 6, left: 6),
                  child: Text(
                    "ppm",
                    style: TextStyle(color: statusColor.withValues(alpha: 0.6), fontSize: 13),
                  ),
                ),
                const Spacer(),
                Icon(
                  isCritical ? Icons.trending_up : Icons.trending_flat,
                  color: statusColor,
                  size: 22,
                ),
              ],
            ),
            const SizedBox(height: 14),

            // Sparkline chart
            SizedBox(
              height: 90,
              child: LineChart(
                LineChartData(
                  minY: (_tdsHistory.reduce((a, b) => a < b ? a : b) - 2).clamp(0, double.infinity),
                  maxY: _tdsHistory.reduce((a, b) => a > b ? a : b) + 4,
                  gridData: const FlGridData(show: false),
                  titlesData: const FlTitlesData(show: false),
                  borderData: FlBorderData(show: false),
                  lineBarsData: [
                    LineChartBarData(
                      spots: spots,
                      isCurved: true,
                      color: statusColor,
                      barWidth: 2.5,
                      isStrokeCapRound: true,
                      dotData: FlDotData(
                        show: true,
                        getDotPainter: (spot, percent, bar, index) => FlDotCirclePainter(
                          radius: index == spots.length - 1 ? 5 : 0,
                          color: statusColor,
                          strokeWidth: 0,
                          strokeColor: Colors.transparent,
                        ),
                      ),
                      belowBarData: BarAreaData(
                        show: true,
                        gradient: LinearGradient(
                          begin: Alignment.topCenter,
                          end: Alignment.bottomCenter,
                          colors: [statusColor.withValues(alpha: 0.2), statusColor.withValues(alpha: 0.0)],
                        ),
                      ),
                    ),
                  ],
                  lineTouchData: const LineTouchData(enabled: false),
                ),
              ),
            ),
          ],
        ],
      ),
    );
  }

  Widget _buildNoDataState() {
    return SizedBox(
      height: 120,
      width: double.infinity,
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Icon(Icons.sensors_off_outlined, color: Colors.white10, size: 32),
          const SizedBox(height: 12),
          const Text(
            "Nessun dato sensore",
            style: TextStyle(color: Colors.white24, fontSize: 13, fontWeight: FontWeight.bold),
          ),
          const Text(
            "In attesa di misurazioni...",
            style: TextStyle(color: Colors.white10, fontSize: 11),
          ),
        ],
      ),
    );
  }

}
