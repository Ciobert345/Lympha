import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:google_fonts/google_fonts.dart';
import 'services/supabase_service.dart';
import 'ui/screens/dashboard.dart';
import 'ui/screens/auth_screen.dart';
import 'ui/widgets/restart_widget.dart';
import 'ui/widgets/connectivity_wrapper.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  
  await SupabaseService.initialize();

  runApp(
    const ProviderScope(
      child: RestartWidget(
        child: LymphaApp(),
      ),
    ),
  );
}

class LymphaApp extends StatelessWidget {
  const LymphaApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Lympha Smart-H2O',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        brightness: Brightness.dark,
        primarySwatch: Colors.blue,
        textTheme: GoogleFonts.interTextTheme(
          ThemeData.dark().textTheme,
        ),
        useMaterial3: true,
        // ── SCROLLBAR ALWAYS VISIBLE ─────────────────────────
        scrollbarTheme: ScrollbarThemeData(
          thumbVisibility: WidgetStateProperty.all(true),
          trackVisibility: WidgetStateProperty.all(false),
          interactive: true,
          radius: const Radius.circular(10),
          thickness: WidgetStateProperty.all(12.0),
          thumbColor: WidgetStateProperty.resolveWith((states) {
            if (states.contains(WidgetState.hovered) || states.contains(WidgetState.dragged)) {
              return const Color(0xFF1392EC).withOpacity(0.8);
            }
            return const Color(0xFF1392EC).withOpacity(0.4);
          }),
        ),
      ),
      home: const ConnectivityWrapper(
        child: AuthGate(),
      ),
    );
  }
}

class AuthGate extends StatelessWidget {
  const AuthGate({super.key});

  @override
  Widget build(BuildContext context) {
    return StreamBuilder(
      stream: SupabaseService.client.auth.onAuthStateChange,
      builder: (context, snapshot) {
        final session = SupabaseService.client.auth.currentSession;
        if (session != null) {
          return const DashboardScreen();
        } else {
          return const AuthScreen();
        }
      },
    );
  }
}
