import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../providers/lympha_stream.dart';
import '../../core/constants.dart';

class FilterStagesWidget extends ConsumerWidget {
  const FilterStagesWidget({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final activeFilter = ref.watch(activeFilterProvider);
    final hasData = activeFilter.consumed > 0;
    final saturation = hasData ? (activeFilter.saturationPercentage / 100).clamp(0.0, 1.0) : null;
    final stages = activeFilter.stages;

    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          children: [
            const Text(
              "Stadi Filtrazione",
              style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14),
            ),
            const Spacer(),
            if (!hasData)
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 3),
                decoration: BoxDecoration(
                  color: Colors.white10,
                  borderRadius: BorderRadius.circular(6),
                ),
                child: const Text("Nessun dato", style: TextStyle(color: Colors.white38, fontSize: 9, fontWeight: FontWeight.bold)),
              ),
          ],
        ),
        const SizedBox(height: 14),
        ...stages.asMap().entries.map((entry) {
          final idx = entry.key;
          final stageName = entry.value;

          // Real health: each later stage tends to degrade slightly faster
          // than the overall saturation, but only if we have real data.
          // Without real data, don't show a fake percentage.
          final double? health = saturation != null
              ? ((1.0 - saturation) - (idx * 0.01)).clamp(0.0, 1.0)
              : null;

          final stageColor = health == null
              ? Colors.white12
              : health < 0.2
                  ? LymphaConfig.emergencyRed
                  : health < 0.5
                      ? Colors.orangeAccent
                      : LymphaConfig.primaryBlue;

          return Padding(
            padding: const EdgeInsets.only(bottom: 14.0),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  children: [
                    Container(
                      width: 4,
                      height: 36,
                      decoration: BoxDecoration(
                        color: stageColor,
                        borderRadius: BorderRadius.circular(2),
                      ),
                    ),
                    const SizedBox(width: 12),
                    Expanded(
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Row(
                            mainAxisAlignment: MainAxisAlignment.spaceBetween,
                            children: [
                              Text(
                                stageName,
                                style: const TextStyle(color: Colors.white, fontSize: 13, fontWeight: FontWeight.w500),
                              ),
                              Text(
                                health != null ? "${(health * 100).toInt()}%" : "—",
                                style: TextStyle(
                                  color: health == null ? Colors.white24 : stageColor,
                                  fontWeight: FontWeight.bold,
                                  fontSize: 12,
                                ),
                              ),
                            ],
                          ),
                          const SizedBox(height: 6),
                          ClipRRect(
                            borderRadius: BorderRadius.circular(4),
                            child: LinearProgressIndicator(
                              value: health ?? 0.0,
                              backgroundColor: Colors.white10,
                              color: stageColor,
                              minHeight: 6,
                            ),
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ],
            ),
          );
        }),
      ],
    );
  }
}
