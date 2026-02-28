import '../core/constants.dart';
import '../models/wallet.dart';

class RewardEngine {
  static double calculateSavings(double avgConsumption, double realConsumption) {
    if (realConsumption >= avgConsumption) return 0.0;
    
    // Savings = (Consumo_Medio - Consumo_Reale) * Tariffa_Viacqua
    // consumption is in liters, tariff is in m3 (1000L = 1m3)
    double litersSaved = avgConsumption - realConsumption;
    return (litersSaved / 1000.0) * LymphaConfig.viacquaTariff;
  }

  static RewardWallet updateCredits(RewardWallet currentWallet, bool leakDetectedToday) {
    if (!leakDetectedToday) {
      return currentWallet.copyWith(
        credits: currentWallet.credits + LymphaConfig.creditsPerDayNoLeak,
      );
    }
    return currentWallet;
  }
}
