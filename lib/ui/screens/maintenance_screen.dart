import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../core/constants.dart';
import '../../models/device.dart';
import '../../providers/lympha_stream.dart';
import '../widgets/filter_stages_widget.dart';

class MaintenanceScreen extends ConsumerWidget {
  const MaintenanceScreen({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final filter = ref.watch(activeFilterProvider);
    final screenWidth = MediaQuery.of(context).size.width;
    final isMobile = screenWidth < 600;
    final padding = isMobile ? 16.0 : 28.0;

    // If consumed == 0 we have no real data yet
    final hasData = filter.consumed > 0;
    final remainingPerc = hasData
        ? ((1.0 - (filter.consumed / filter.capacity)) * 100).clamp(0.0, 100.0)
        : 0.0;
    final statusColor = !hasData
        ? Colors.white38
        : remainingPerc > 40
            ? Colors.greenAccent
            : remainingPerc > 15
                ? Colors.orangeAccent
                : LymphaConfig.emergencyRed;

    return SingleChildScrollView(
      padding: EdgeInsets.all(padding),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // ── Header ──────────────────────────────────────────────────
          Row(
            children: [
              Container(
                padding: const EdgeInsets.all(10),
                decoration: BoxDecoration(
                  color: LymphaConfig.primaryBlue.withValues(alpha: 0.1),
                  borderRadius: BorderRadius.circular(12),
                ),
                child: const Icon(Icons.build_circle, color: LymphaConfig.primaryBlue, size: 24),
              ),
              const SizedBox(width: 14),
              Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      "Manutenzione",
                      style: TextStyle(color: Colors.white, fontSize: isMobile ? 22 : 26, fontWeight: FontWeight.bold),
                    ),
                    const Text(
                      "Stato del kit filtrazione Lympha",
                      style: TextStyle(color: Colors.white38, fontSize: 12),
                      overflow: TextOverflow.ellipsis,
                    ),
                  ],
                ),
              ),
            ],
          ),
          SizedBox(height: isMobile ? 20 : 28),

          // ── No data banner ────────────────────────────────────────
          if (!hasData) ...[
            _buildNoDataBanner(),
            SizedBox(height: isMobile ? 16 : 20),
          ],

          // ── Main content ──────────────────────────────────────────
          LayoutBuilder(
            builder: (context, constraints) {
              if (constraints.maxWidth > 750) {
                return Row(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Expanded(
                      flex: 3,
                      child: Column(
                        children: [
                          _buildFilterOverviewCard(filter, remainingPerc, statusColor, hasData, isMobile),
                          const SizedBox(height: 20),
                          const FilterStagesWidget(),
                        ],
                      ),
                    ),
                    const SizedBox(width: 20),
                    Expanded(
                      flex: 2,
                      child: Column(
                        children: [
                          _buildStatusCard(remainingPerc, statusColor, filter, hasData),
                          const SizedBox(height: 20),
                          _buildInstructionsCard(remainingPerc, hasData),
                        ],
                      ),
                    ),
                  ],
                );
              } else {
                return Column(
                  children: [
                    _buildFilterOverviewCard(filter, remainingPerc, statusColor, hasData, isMobile),
                    const SizedBox(height: 16),
                    _buildStatusCard(remainingPerc, statusColor, filter, hasData),
                    const SizedBox(height: 16),
                    const FilterStagesWidget(),
                    const SizedBox(height: 16),
                    _buildInstructionsCard(remainingPerc, hasData),
                  ],
                );
              }
            },
          ),
          const SizedBox(height: 32),
        ],
      ),
    );
  }

  Widget _buildNoDataBanner() {
    return Container(
      padding: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.03),
        borderRadius: BorderRadius.circular(12),
        border: Border.all(color: Colors.white10),
      ),
      child: const Row(
        children: [
          Icon(Icons.info_outline, color: Colors.white38, size: 18),
          SizedBox(width: 12),
          Expanded(
            child: Text(
              "Nessun dato di consumo disponibile. I valori si aggiorneranno automaticamente una volta che il sistema registra attività.",
              style: TextStyle(color: Colors.white38, fontSize: 12, height: 1.5),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildFilterOverviewCard(PfasFilter filter, double remainingPerc, Color statusColor, bool hasData, bool isMobile) {
    return Container(
      padding: EdgeInsets.all(isMobile ? 20 : 28),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [LymphaConfig.primaryBlue.withValues(alpha: 0.15), Colors.transparent],
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.25)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const Text(
            "Vita Residua Kit Filtri",
            style: TextStyle(color: Colors.white54, fontSize: 13),
          ),
          const SizedBox(height: 8),

          if (!hasData)
            const Text(
              "—",
              style: TextStyle(color: Colors.white24, fontSize: 72, fontWeight: FontWeight.w900, height: 1),
            )
          else
            Row(
              crossAxisAlignment: CrossAxisAlignment.end,
              children: [
                Text(
                  "${remainingPerc.toInt()}%",
                  style: TextStyle(color: statusColor, fontSize: isMobile ? 56 : 72, fontWeight: FontWeight.w900, height: 1),
                ),
                Padding(
                  padding: const EdgeInsets.only(bottom: 10, left: 12),
                  child: Text(
                    "${filter.remainingLiters.toInt()} L rimanenti",
                    style: TextStyle(color: statusColor.withValues(alpha: 0.8), fontWeight: FontWeight.bold, fontSize: 13),
                  ),
                ),
              ],
            ),

          const SizedBox(height: 16),
          ClipRRect(
            borderRadius: BorderRadius.circular(8),
            child: LinearProgressIndicator(
              value: hasData ? remainingPerc / 100 : 0,
              minHeight: 10,
              backgroundColor: Colors.white10,
              valueColor: AlwaysStoppedAnimation<Color>(hasData ? statusColor : Colors.white12),
            ),
          ),
          const SizedBox(height: 10),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text(
                hasData ? "${filter.consumed.toInt()} L consumati" : "— L consumati",
                style: const TextStyle(color: Colors.white38, fontSize: 11),
              ),
              Text(
                "${filter.capacity.toInt()} L capacità",
                style: const TextStyle(color: Colors.white38, fontSize: 11),
              ),
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildStatusCard(double remainingPerc, Color statusColor, PfasFilter filter, bool hasData) {
    if (!hasData) {
      return Container(
        padding: const EdgeInsets.all(20),
        decoration: BoxDecoration(
          color: Colors.white.withValues(alpha: 0.03),
          borderRadius: BorderRadius.circular(16),
          border: Border.all(color: Colors.white10),
        ),
        child: const Row(
          children: [
            Icon(Icons.help_outline, color: Colors.white24, size: 20),
            SizedBox(width: 12),
            Expanded(
              child: Text(
                "Stato sconosciuto\nNessun dato consumo rilevato.",
                style: TextStyle(color: Colors.white38, fontSize: 12, height: 1.5),
              ),
            ),
          ],
        ),
      );
    }

    final daysEstimate = filter.remainingLiters > 0 ? (filter.remainingLiters / 15).toInt() : 0;
    String statusMessage;
    if (remainingPerc > 40) {
      statusMessage = "Filtri in buone condizioni";
    } else if (remainingPerc > 15) {
      statusMessage = "Sostituzione consigliata a breve";
    } else {
      statusMessage = "Sostituzione urgente richiesta!";
    }

    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: statusColor.withValues(alpha: 0.05),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: statusColor.withValues(alpha: 0.2)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Icon(
                remainingPerc > 40 ? Icons.check_circle_outline : Icons.warning_amber_outlined,
                color: statusColor,
                size: 20,
              ),
              const SizedBox(width: 8),
              Text("Stato Attuale", style: TextStyle(color: statusColor, fontWeight: FontWeight.bold, fontSize: 13)),
            ],
          ),
          const SizedBox(height: 12),
          Text(statusMessage, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14)),
          const SizedBox(height: 6),
          Text(
            daysEstimate > 0 ? "Stima autonomia: ~$daysEstimate giorni" : "Autonomia esaurita",
            style: const TextStyle(color: Colors.white54, fontSize: 12),
          ),
        ],
      ),
    );
  }

  Widget _buildInstructionsCard(double remainingPerc, bool hasData) {
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
          const Row(
            children: [
              Icon(Icons.lightbulb_outline, color: Colors.orangeAccent, size: 18),
              SizedBox(width: 10),
              Text("Prossimi Passi", style: TextStyle(color: Colors.orangeAccent, fontWeight: FontWeight.bold, fontSize: 13)),
            ],
          ),
          const SizedBox(height: 12),
          Text(
            !hasData
                ? "Connetti il sistema per monitorare il consumo dei filtri in tempo reale."
                : remainingPerc < 40
                    ? "Il kit filtri si sta esaurendo. Ordina il ricambio originale Lympha per garantire la massima qualità dell'acqua."
                    : "I filtri sono in ottimo stato. Continua a monitorare il consumo per pianificare la prossima sostituzione.",
            style: const TextStyle(color: Colors.white60, fontSize: 12, height: 1.5),
          ),
        ],
      ),
    );
  }
}
