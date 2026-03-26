import 'package:flutter/material.dart';

class LymphaConfig {
  static const bool useMockData = false;
  
  // Viacqua rates (Hypothetical for calculation)
  static const double viacquaTariff = 2.45; // EUR per m3
  static const double creditsPerDayNoLeak = 10.0;
  
  // Design Tokens
  static const Color primaryBlue = Color(0xFF1392EC);
  static const Color backgroundDark = Color(0xFF101A22);
  static const Color backgroundDarker = Color(0xFF080D11);
  static const Color emergencyRed = Color(0xFFEF4444);
  static const Color accentGreen = Color(0xFF4ADE80);
}
