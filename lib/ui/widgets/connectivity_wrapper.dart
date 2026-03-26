import 'package:flutter/material.dart';
import 'package:connectivity_plus/connectivity_plus.dart';
import '../screens/no_internet_screen.dart';

class ConnectivityWrapper extends StatelessWidget {
  final Widget child;
  const ConnectivityWrapper({super.key, required this.child});

  @override
  Widget build(BuildContext context) {
    return StreamBuilder<List<ConnectivityResult>>(
      stream: Connectivity().onConnectivityChanged,
      builder: (context, snapshot) {
        final results = snapshot.data;
        // Check if results indicate no connection
        // On some platforms, results could be empty or [none]
        if (results != null && results.isNotEmpty) {
          if (results.contains(ConnectivityResult.none) && results.length == 1) {
            return const NoInternetScreen();
          }
        }
        return child;
      },
    );
  }
}
