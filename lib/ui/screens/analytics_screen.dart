import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:fl_chart/fl_chart.dart';
import '../../core/constants.dart';
import '../../providers/lympha_stream.dart';
import '../../models/sensor_data.dart';

class AnalyticsScreen extends ConsumerWidget {
  const AnalyticsScreen({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final sensorData = ref.watch(sensorDataProvider).value;
    final profile = ref.watch(profileProvider).value;
    final historyAsync = ref.watch(measurementsHistoryProvider);
    final screenWidth = MediaQuery.of(context).size.width;
    final isMobile = screenWidth < 600;
    final padding = isMobile ? 16.0 : 28.0;

    final totalConsumed = (profile?.containsKey('total_consumed') == true)
        ? (profile?['total_consumed'] as num?)?.toDouble() ?? 0.0
        : 0.0;

    return SingleChildScrollView(
      padding: EdgeInsets.all(padding),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          _buildPageHeader(isMobile),
          SizedBox(height: isMobile ? 20 : 28),

          // ── Metric Cards ──────────────────────────────────────────────
          _buildMetricGrid(isMobile, totalConsumed, sensorData),
          SizedBox(height: isMobile ? 20 : 28),

          // ── Charts ────────────────────────────────────────────────────
          historyAsync.when(
            loading: () => const Center(
              child: Padding(
                padding: EdgeInsets.all(40),
                child: CircularProgressIndicator(),
              ),
            ),
            error: (e, _) => _buildChartError(e),
            data: (history) => _buildCharts(history, sensorData, isMobile),
          ),
          SizedBox(height: isMobile ? 20 : 28),

          // ── Eco Recap ─────────────────────────────────────────────────
          _buildEcoRecap(totalConsumed, isMobile),
          const SizedBox(height: 32),
        ],
      ),
    );
  }

  Widget _buildCharts(List<Map<String, dynamic>> history, SensorData? sensor, bool isMobile) {
    if (history.isEmpty) {
      return _buildNoDataState();
    }

    // Build TDS spots from real history
    final tdsSpots = <FlSpot>[];
    final flowSpots = <FlSpot>[];
    for (int i = 0; i < history.length; i++) {
      final row = history[i];
      final tds = (row['tds'] as num?)?.toDouble() ?? 0;
      final flow = (row['flow_rate'] as num?)?.toDouble() ?? 0;
      tdsSpots.add(FlSpot(i.toDouble(), tds));
      flowSpots.add(FlSpot(i.toDouble(), flow));
    }

    // Label every nth entry for bottom axis
    final step = (history.length / 7).ceil().clamp(1, 999);
    final tdsLabels = List.generate(history.length, (i) {
      if (i % step == 0 || i == history.length - 1) {
        final ts = history[i]['created_at'] as String? ?? '';
        try {
          final dt = DateTime.parse(ts).toLocal();
          return '${dt.day}/${dt.month}';
        } catch (_) {
          return '';
        }
      }
      return '';
    });

    if (isMobile) {
      return Column(
        children: [
          _buildTrendChart(
            "TDS Qualità Acqua",
            "ppm",
            tdsSpots,
            LymphaConfig.emergencyRed,
            tdsLabels,
            suffix: "ppm",
            dangerThreshold: 100,
          ),
          const SizedBox(height: 20),
          _buildTrendChart(
            "Portata",
            "L/min",
            flowSpots,
            LymphaConfig.primaryBlue,
            tdsLabels,
            suffix: "L/min",
          ),
        ],
      );
    }

    return Row(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Expanded(
          child: _buildTrendChart(
            "TDS Qualità Acqua",
            "ppm",
            tdsSpots,
            LymphaConfig.emergencyRed,
            tdsLabels,
            suffix: "ppm",
            dangerThreshold: 100,
          ),
        ),
        const SizedBox(width: 20),
        Expanded(
          child: _buildTrendChart(
            "Portata",
            "L/min",
            flowSpots,
            LymphaConfig.primaryBlue,
            tdsLabels,
            suffix: "L/min",
          ),
        ),
      ],
    );
  }

  Widget _buildNoDataState() {
    return Container(
      width: double.infinity,
      padding: const EdgeInsets.symmetric(vertical: 48, horizontal: 24),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.03),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.white10),
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          Icon(Icons.bar_chart_outlined, color: Colors.white12, size: 56),
          const SizedBox(height: 16),
          const Text(
            "Nessun dato disponibile",
            style: TextStyle(color: Colors.white54, fontSize: 16, fontWeight: FontWeight.bold),
          ),
          const SizedBox(height: 8),
          const Text(
            "I grafici si popolano automaticamente non appena\nil sistema registra misurazioni dal sensore.",
            style: TextStyle(color: Colors.white24, fontSize: 12, height: 1.6),
            textAlign: TextAlign.center,
          ),
        ],
      ),
    );
  }

  Widget _buildChartError(Object error) {
    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: LymphaConfig.emergencyRed.withValues(alpha: 0.05),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: LymphaConfig.emergencyRed.withValues(alpha: 0.2)),
      ),
      child: Row(
        children: [
          const Icon(Icons.error_outline, color: LymphaConfig.emergencyRed, size: 20),
          const SizedBox(width: 12),
          Expanded(
            child: Text(
              "Errore nel caricamento dati: $error",
              style: const TextStyle(color: Colors.white54, fontSize: 12),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildPageHeader(bool isMobile) {
    return Row(
      children: [
        Container(
          padding: const EdgeInsets.all(10),
          decoration: BoxDecoration(
            color: LymphaConfig.primaryBlue.withValues(alpha: 0.1),
            borderRadius: BorderRadius.circular(12),
          ),
          child: const Icon(Icons.bar_chart, color: LymphaConfig.primaryBlue, size: 24),
        ),
        const SizedBox(width: 14),
        Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text(
              "Analytics",
              style: TextStyle(
                color: Colors.white,
                fontSize: isMobile ? 22 : 26,
                fontWeight: FontWeight.bold,
              ),
            ),
            const Text(
              "Dati reali dal sensore",
              style: TextStyle(color: Colors.white38, fontSize: 12),
            ),
          ],
        ),
      ],
    );
  }

  Widget _buildMetricGrid(bool isMobile, double totalConsumed, SensorData? sensor) {
    final filterEfficiency = sensor != null
        ? (100 - (sensor.tds / 2)).clamp(0.0, 100.0)
        : null;

    final cards = [
      _MetricData(
        "Consumo Totale",
        totalConsumed > 0 ? "${totalConsumed.toStringAsFixed(0)} L" : "— L",
        Icons.water_drop,
        LymphaConfig.primaryBlue,
      ),
      _MetricData(
        "Risparmio CO₂",
        totalConsumed > 0 ? "${(totalConsumed * 0.04).toStringAsFixed(1)} Kg" : "— Kg",
        Icons.cloud_done,
        Colors.greenAccent,
      ),
      _MetricData(
        "Plastica Evitata",
        totalConsumed > 0 ? "${(totalConsumed * 2).toStringAsFixed(0)} bott." : "— bott.",
        Icons.recycling,
        Colors.orangeAccent,
      ),
      _MetricData(
        "Efficienza Filtro",
        filterEfficiency != null ? "${filterEfficiency.toStringAsFixed(1)}%" : "—",
        Icons.high_quality,
        Colors.tealAccent,
      ),
    ];

    return LayoutBuilder(
      builder: (context, constraints) {
        final crossCount = constraints.maxWidth > 750 ? 4 : 2;
        return GridView.builder(
          shrinkWrap: true,
          physics: const NeverScrollableScrollPhysics(),
          gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
            crossAxisCount: crossCount,
            crossAxisSpacing: 14,
            mainAxisSpacing: 14,
            childAspectRatio: crossCount == 4 ? 2.2 : 2.0,
          ),
          itemCount: cards.length,
          itemBuilder: (_, i) => _buildMetricCard(cards[i], isMobile),
        );
      },
    );
  }

  Widget _buildMetricCard(_MetricData data, bool isMobile) {
    return Container(
      padding: EdgeInsets.all(isMobile ? 12 : 16),
      decoration: BoxDecoration(
        color: data.color.withValues(alpha: 0.05),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: data.color.withValues(alpha: 0.15)),
      ),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(8),
            decoration: BoxDecoration(
              color: data.color.withValues(alpha: 0.1),
              borderRadius: BorderRadius.circular(10),
            ),
            child: Icon(data.icon, color: data.color, size: isMobile ? 18 : 22),
          ),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  data.label,
                  style: TextStyle(color: Colors.white54, fontSize: isMobile ? 10 : 11),
                  overflow: TextOverflow.ellipsis,
                ),
                Text(
                  data.value,
                  style: TextStyle(
                    color: Colors.white,
                    fontSize: isMobile ? 14 : 16,
                    fontWeight: FontWeight.bold,
                  ),
                  overflow: TextOverflow.ellipsis,
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildTrendChart(
    String title,
    String subtitle,
    List<FlSpot> spots,
    Color color,
    List<String> labels, {
    String suffix = "",
    double? dangerThreshold,
  }) {
    if (spots.isEmpty) return _buildNoDataState();

    final rawMin = spots.map((s) => s.y).reduce((a, b) => a < b ? a : b);
    final rawMax = spots.map((s) => s.y).reduce((a, b) => a > b ? a : b);
    final range = rawMax - rawMin;
    final minY = range < 1 ? rawMin - 5 : rawMin * 0.85;
    final maxY = range < 1 ? rawMax + 5 : rawMax * 1.15;

    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.04),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.white10),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Container(
                width: 10,
                height: 10,
                decoration: BoxDecoration(color: color, shape: BoxShape.circle),
              ),
              const SizedBox(width: 8),
              Text(
                title,
                style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 15),
              ),
              const SizedBox(width: 8),
              Text(
                "($subtitle)",
                style: const TextStyle(color: Colors.white38, fontSize: 11),
              ),
              const Spacer(),
              Text(
                "${spots.length} letture",
                style: const TextStyle(color: Colors.white24, fontSize: 10),
              ),
            ],
          ),
          const SizedBox(height: 20),
          SizedBox(
            height: 200,
            child: LineChart(
              LineChartData(
                minY: minY,
                maxY: maxY,
                gridData: FlGridData(
                  show: true,
                  drawVerticalLine: false,
                  getDrawingHorizontalLine: (value) => const FlLine(color: Colors.white10, strokeWidth: 1),
                ),
                titlesData: FlTitlesData(
                  bottomTitles: AxisTitles(
                    sideTitles: SideTitles(
                      showTitles: true,
                      interval: (spots.length / 5).ceilToDouble().clamp(1, 999),
                      getTitlesWidget: (value, meta) {
                        final i = value.toInt();
                        if (i < 0 || i >= labels.length) return const SizedBox.shrink();
                        final lbl = labels[i];
                        if (lbl.isEmpty) return const SizedBox.shrink();
                        return Padding(
                          padding: const EdgeInsets.only(top: 6),
                          child: Text(
                            lbl,
                            style: const TextStyle(color: Colors.white38, fontSize: 9, fontWeight: FontWeight.bold),
                          ),
                        );
                      },
                    ),
                  ),
                  leftTitles: AxisTitles(
                    sideTitles: SideTitles(
                      showTitles: true,
                      reservedSize: 42,
                      getTitlesWidget: (value, meta) {
                        return Text(
                          value.toStringAsFixed(0),
                          style: const TextStyle(color: Colors.white24, fontSize: 9),
                        );
                      },
                    ),
                  ),
                  topTitles: const AxisTitles(sideTitles: SideTitles(showTitles: false)),
                  rightTitles: const AxisTitles(sideTitles: SideTitles(showTitles: false)),
                ),
                borderData: FlBorderData(show: false),
                extraLinesData: dangerThreshold != null
                    ? ExtraLinesData(horizontalLines: [
                        HorizontalLine(
                          y: dangerThreshold,
                          color: Colors.orange.withValues(alpha: 0.5),
                          strokeWidth: 1.5,
                          dashArray: [6, 4],
                          label: HorizontalLineLabel(
                            show: true,
                            alignment: Alignment.topRight,
                            labelResolver: (_) => "Soglia",
                            style: const TextStyle(color: Colors.orange, fontSize: 9, fontWeight: FontWeight.bold),
                          ),
                        ),
                      ])
                    : null,
                lineBarsData: [
                  LineChartBarData(
                    spots: spots,
                    isCurved: true,
                    color: color,
                    barWidth: 2.5,
                    dotData: FlDotData(
                      show: true,
                      getDotPainter: (spot, percent, bar, index) => FlDotCirclePainter(
                        radius: index == spots.length - 1 ? 5 : 2,
                        color: index == spots.length - 1 ? color : color.withValues(alpha: 0.5),
                        strokeWidth: 0,
                        strokeColor: Colors.transparent,
                      ),
                    ),
                    belowBarData: BarAreaData(
                      show: true,
                      gradient: LinearGradient(
                        begin: Alignment.topCenter,
                        end: Alignment.bottomCenter,
                        colors: [color.withValues(alpha: 0.15), color.withValues(alpha: 0.0)],
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildEcoRecap(double totalConsumed, bool isMobile) {
    final hasData = totalConsumed > 0;
    return Container(
      padding: EdgeInsets.all(isMobile ? 16 : 24),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [Colors.greenAccent.withValues(alpha: 0.08), Colors.tealAccent.withValues(alpha: 0.04)],
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.greenAccent.withValues(alpha: 0.15)),
      ),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(12),
            decoration: BoxDecoration(
              color: Colors.greenAccent.withValues(alpha: 0.1),
              borderRadius: BorderRadius.circular(12),
            ),
            child: const Icon(Icons.eco, color: Colors.greenAccent, size: 28),
          ),
          const SizedBox(width: 16),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const Text(
                  "Impatto Ecologico",
                  style: TextStyle(color: Colors.greenAccent, fontWeight: FontWeight.bold, fontSize: 14),
                ),
                const SizedBox(height: 4),
                Text(
                  hasData
                      ? "Hai evitato ${(totalConsumed * 2).toStringAsFixed(0)} bottiglie di plastica e risparmiato ${(totalConsumed * 0.04).toStringAsFixed(1)} Kg di CO₂."
                      : "I dati di impatto si aggiorneranno non appena saranno disponibili misurazioni.",
                  style: const TextStyle(color: Colors.white60, fontSize: 12),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}

class _MetricData {
  final String label;
  final String value;
  final IconData icon;
  final Color color;
  const _MetricData(this.label, this.value, this.icon, this.color);
}
