import 'package:flutter/material.dart';
import '../../core/constants.dart';

class WalletWidget extends StatelessWidget {
  final double credits;
  final double savings;

  const WalletWidget({super.key, required this.credits, required this.savings});

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(18),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [
            LymphaConfig.primaryBlue.withValues(alpha: 0.15),
            LymphaConfig.accentGreen.withValues(alpha: 0.05),
          ],
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.25)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // Header
          Row(
            children: [
              Container(
                padding: const EdgeInsets.all(7),
                decoration: BoxDecoration(
                  color: LymphaConfig.primaryBlue.withValues(alpha: 0.15),
                  borderRadius: BorderRadius.circular(8),
                ),
                child: const Icon(Icons.account_balance_wallet_outlined, color: LymphaConfig.primaryBlue, size: 16),
              ),
              const SizedBox(width: 10),
              const Text(
                "LYMPHA WALLET",
                style: TextStyle(color: Colors.white38, fontSize: 10, fontWeight: FontWeight.bold, letterSpacing: 1.5),
              ),
            ],
          ),
          
          const SizedBox(height: 16),

          // Credits row
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            crossAxisAlignment: CrossAxisAlignment.end,
            children: [
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  const Text("Lympha Credits", style: TextStyle(color: Colors.white38, fontSize: 11)),
                  Row(
                    crossAxisAlignment: CrossAxisAlignment.end,
                    children: [
                      Text(
                        "${credits.toInt()}",
                        style: const TextStyle(color: Colors.white, fontSize: 32, fontWeight: FontWeight.w900, height: 1),
                      ),
                      const Padding(
                        padding: EdgeInsets.only(bottom: 4, left: 4),
                        child: Text("LC", style: TextStyle(color: Colors.white38, fontSize: 12, fontWeight: FontWeight.bold)),
                      ),
                    ],
                  ),
                ],
              ),
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 6),
                decoration: BoxDecoration(
                  color: LymphaConfig.primaryBlue,
                  borderRadius: BorderRadius.circular(20),
                ),
                child: const Text("Ricarica", style: TextStyle(color: Colors.white, fontSize: 11, fontWeight: FontWeight.bold)),
              ),
            ],
          ),

          const Padding(
            padding: EdgeInsets.symmetric(vertical: 14),
            child: Divider(color: Colors.white10, height: 1),
          ),

          // Savings row
          Row(
            children: [
              Container(
                padding: const EdgeInsets.all(6),
                decoration: BoxDecoration(
                  color: LymphaConfig.accentGreen.withValues(alpha: 0.1),
                  borderRadius: BorderRadius.circular(8),
                ),
                child: const Icon(Icons.eco_outlined, color: LymphaConfig.accentGreen, size: 14),
              ),
              const SizedBox(width: 10),
              const Expanded(
                child: Text("Risparmio Totale", style: TextStyle(color: Colors.white54, fontSize: 12)),
              ),
              Text(
                "€ ${savings.toStringAsFixed(2)}",
                style: const TextStyle(color: LymphaConfig.accentGreen, fontWeight: FontWeight.bold, fontSize: 18),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
