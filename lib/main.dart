import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:google_fonts/google_fonts.dart';
import 'services/supabase_service.dart';
import 'ui/screens/dashboard.dart';
import 'ui/screens/auth_screen.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  
  await SupabaseService.initialize();

  runApp(
    const ProviderScope(
      child: LymphaApp(),
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
      ),
      home: StreamBuilder(
        stream: SupabaseService.client.auth.onAuthStateChange,
        builder: (context, snapshot) {
          final session = SupabaseService.client.auth.currentSession;
          if (session != null) {
            return const DashboardScreen();
          } else {
            return const AuthScreen();
          }
        },
      ),
    );
  }
}
