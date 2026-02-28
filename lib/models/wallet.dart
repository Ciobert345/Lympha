class RewardWallet {
  final double credits;
  final double totalSavings; // In EUR or local currency
  final bool leakDetected;

  RewardWallet({
    required this.credits,
    required this.totalSavings,
    this.leakDetected = false,
  });

  RewardWallet copyWith({
    double? credits,
    double? totalSavings,
    bool? leakDetected,
  }) {
    return RewardWallet(
      credits: credits ?? this.credits,
      totalSavings: totalSavings ?? this.totalSavings,
      leakDetected: leakDetected ?? this.leakDetected,
    );
  }
}
