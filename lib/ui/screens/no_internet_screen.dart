import 'package:flutter/material.dart';
import 'package:connectivity_plus/connectivity_plus.dart';
import '../../core/constants.dart';
import '../widgets/restart_widget.dart';

class NoInternetScreen extends StatelessWidget {
  const NoInternetScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: LymphaConfig.backgroundDarker,
      body: Container(
        decoration: BoxDecoration(
          gradient: RadialGradient(
            center: Alignment.center,
            radius: 1.5,
            colors: [
              LymphaConfig.backgroundDark,
              LymphaConfig.backgroundDarker,
            ],
          ),
        ),
        child: Center(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 40),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Container(
                  padding: const EdgeInsets.all(32),
                  decoration: BoxDecoration(
                    color: LymphaConfig.emergencyRed.withOpacity(0.1),
                    borderRadius: BorderRadius.circular(30),
                    border: Border.all(
                      color: LymphaConfig.emergencyRed.withOpacity(0.2),
                      width: 2,
                    ),
                  ),
                  child: const Icon(
                    Icons.wifi_off_rounded,
                    color: LymphaConfig.emergencyRed,
                    size: 72,
                  ),
                ),
                const SizedBox(height: 40),
                const Text(
                  "Connessione Assente",
                  style: TextStyle(
                    color: Colors.white,
                    fontSize: 28,
                    fontWeight: FontWeight.bold,
                    letterSpacing: -0.5,
                  ),
                  textAlign: TextAlign.center,
                ),
                const SizedBox(height: 16),
                const Text(
                  "Lympha Smart-H2O necessita di una connessione internet per sincronizzare i dati dei sensori e gestire il tuo account.",
                  style: TextStyle(
                    color: Colors.white54,
                    fontSize: 16,
                    height: 1.5,
                  ),
                  textAlign: TextAlign.center,
                ),
                const SizedBox(height: 48),
                SizedBox(
                  width: double.infinity,
                  height: 56,
                  child: ElevatedButton(
                    onPressed: () async {
                      // Trigger a check or just let the main listener handle it
                      final connectivityResult = await Connectivity().checkConnectivity();
                      if (connectivityResult != ConnectivityResult.none) {
                        // If connection is back, we can ideally restart or just wait for listener
                        // For a real "restart", we'll implement a RestartWidget in main.dart
                        if (context.mounted) {
                          // The listener in main.dart will automatically switch screens
                        }
                      }
                    },
                    style: ElevatedButton.styleFrom(
                      backgroundColor: LymphaConfig.primaryBlue,
                      foregroundColor: Colors.white,
                      elevation: 0,
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(16),
                      ),
                    ),
                    child: const Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Icon(Icons.refresh_rounded),
                        SizedBox(width: 12),
                        Text(
                          "Riprova Connessione",
                          style: TextStyle(
                            fontSize: 16,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
                const SizedBox(height: 20),
                TextButton(
                  onPressed: () {
                    RestartWidget.restartApp(context);
                  },
                  child: Text(
                    "Riavvia Applicazione",
                    style: TextStyle(
                      color: LymphaConfig.primaryBlue.withOpacity(0.7),
                      fontSize: 14,
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
