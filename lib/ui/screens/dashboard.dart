import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../core/constants.dart';
import '../../services/supabase_service.dart';
import '../../providers/lympha_stream.dart';
import '../../models/sensor_data.dart';
import '../widgets/filter_stages_widget.dart';
import '../widgets/wallet_card.dart';
import '../widgets/digital_twin.dart';
import '../widgets/pulse_chart.dart';
import 'analytics_screen.dart';
import 'devices_screen.dart';
import 'maintenance_screen.dart';
import 'profile_screen.dart';
import '../widgets/notification_overlay.dart';

class DashboardScreen extends ConsumerWidget {
  const DashboardScreen({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final sensorDataAsync = ref.watch(sensorDataProvider);
    final credits = ref.watch(walletProvider);
    final savings = ref.watch(savingsProvider);
    final navIndex = ref.watch(navigationIndexProvider);
    final screenWidth = MediaQuery.of(context).size.width;
    final isMobile = screenWidth < 600;

    final sensorData = sensorDataAsync.value;
    final hasCriticalAlert = sensorData != null && sensorData.tds > 100;

    Widget body;
    switch (navIndex) {
      case 0:
        body = _buildDashboardContent(context, credits, savings, hasCriticalAlert, sensorData);
        break;
      case 1:
        body = const AnalyticsScreen();
        break;
      case 2:
        body = const DevicesScreen();
        break;
      case 3:
        body = const MaintenanceScreen();
        break;
      default:
        body = _buildDashboardContent(context, credits, savings, hasCriticalAlert, sensorData);
    }

    // ── MOBILE LAYOUT ──────────────────────────────────────────
    if (isMobile) {
      return Scaffold(
        backgroundColor: LymphaConfig.backgroundDark,
        appBar: _buildMobileAppBar(context, ref),
        body: body,
        bottomNavigationBar: _buildBottomNavBar(ref, navIndex),
      );
    }

    // ── DESKTOP / TABLET LAYOUT ────────────────────────────────
    return Scaffold(
      backgroundColor: LymphaConfig.backgroundDark,
      body: Row(
        children: [
          _buildDesktopSidebar(context, ref, navIndex, screenWidth),
          Expanded(child: body),
        ],
      ),
    );
  }

  // ── MOBILE APP BAR ─────────────────────────────────────────
  PreferredSizeWidget _buildMobileAppBar(BuildContext context, WidgetRef ref) {
    final user = SupabaseService.client.auth.currentUser;
    final notificationsAsync = ref.watch(notificationListProvider);
    final unreadCount = notificationsAsync.value?.where((n) => n['is_read'] == false).length ?? 0;

    return AppBar(
      backgroundColor: Colors.black.withValues(alpha: 0.85),
      elevation: 0,
      title: Row(
        children: [
          Image.asset('assets/images/logo.png', height: 36),
        ],
      ),
      actions: [
        // Notification bell
        PopupMenuButton(
          offset: const Offset(0, 50),
          color: Colors.transparent,
          elevation: 0,
          padding: EdgeInsets.zero,
          child: Padding(
            padding: const EdgeInsets.all(8.0),
            child: Badge(
              label: unreadCount > 0 ? Text(unreadCount.toString()) : null,
              backgroundColor: LymphaConfig.emergencyRed,
              isLabelVisible: unreadCount > 0,
              child: Icon(
                unreadCount > 0 ? Icons.notifications_active : Icons.notifications_none,
                color: unreadCount > 0 ? LymphaConfig.emergencyRed : Colors.white54,
              ),
            ),
          ),
          itemBuilder: (ctx) => [
            const PopupMenuItem(
              enabled: false,
              padding: EdgeInsets.zero,
              child: NotificationOverlay(),
            ),
          ],
        ),
        // Avatar
        PopupMenuButton(
          offset: const Offset(0, 50),
          color: LymphaConfig.backgroundDark,
          tooltip: "Account",
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
            child: CircleAvatar(
              radius: 15,
              backgroundColor: LymphaConfig.primaryBlue.withValues(alpha: 0.2),
              child: const Icon(Icons.person, color: LymphaConfig.primaryBlue, size: 16),
            ),
          ),
          itemBuilder: (ctx) => <PopupMenuEntry>[
            PopupMenuItem(
              enabled: false,
              child: Text(
                user?.email ?? "Account",
                style: const TextStyle(color: Colors.white54, fontSize: 11),
              ),
            ),
            const PopupMenuDivider(),
            PopupMenuItem(
              onTap: () => Future.microtask(() => Navigator.of(context).push(MaterialPageRoute(builder: (_) => const ProfileScreen()))),
              child: const Row(
                children: [
                  Icon(Icons.settings_outlined, color: Colors.white70, size: 16),
                  SizedBox(width: 10),
                  Text("Impostazioni", style: TextStyle(color: Colors.white70, fontSize: 13)),
                ],
              ),
            ),
            PopupMenuItem(
              onTap: () => SupabaseService.signOut(),
              child: const Row(
                children: [
                  Icon(Icons.logout, color: LymphaConfig.emergencyRed, size: 16),
                  SizedBox(width: 10),
                  Text("Logout", style: TextStyle(color: LymphaConfig.emergencyRed, fontSize: 13, fontWeight: FontWeight.bold)),
                ],
              ),
            ),
          ],
        ),
      ],
    );
  }

  // ── DESKTOP SIDEBAR ────────────────────────────────────────
  Widget _buildDesktopSidebar(BuildContext context, WidgetRef ref, int selectedIndex, double screenWidth) {
    final user = SupabaseService.client.auth.currentUser;
    final profile = ref.watch(profileProvider).value;
    final displayName = profile?['full_name'] ?? user?.email?.split('@').first ?? "User";
    final notificationsAsync = ref.watch(notificationListProvider);
    final unreadCount = notificationsAsync.value?.where((n) => n['is_read'] == false).length ?? 0;
    final isNarrowDesktop = screenWidth < 1100;

    return Container(
      width: isNarrowDesktop ? 64 : 220,
      color: Colors.black.withValues(alpha: 0.4),
      child: Column(
        children: [
          // Logo header
          Container(
            padding: EdgeInsets.symmetric(
              horizontal: isNarrowDesktop ? 12 : 20,
              vertical: 24,
            ),
            child: Row(
              mainAxisAlignment: isNarrowDesktop ? MainAxisAlignment.center : MainAxisAlignment.start,
              children: [
                Container(
                  padding: const EdgeInsets.all(6),
                  decoration: BoxDecoration(
                    color: LymphaConfig.primaryBlue.withValues(alpha: 0.15),
                    borderRadius: BorderRadius.circular(10),
                  ),
                  child: Image.asset('assets/images/logo.png', height: 32),
                ),
                if (!isNarrowDesktop) ...[
                  const SizedBox(width: 12),
                  const Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        "Smart-H2O",
                        style: TextStyle(color: Colors.white38, fontSize: 10, fontWeight: FontWeight.bold),
                      ),
                    ],
                  ),
                ],
              ],
            ),
          ),

          const Divider(color: Colors.white10, height: 1),

          // Navigation items
          Expanded(
            child: Padding(
              padding: const EdgeInsets.symmetric(vertical: 8),
              child: Column(
                children: [
                  _buildSidebarItem(ref, Icons.dashboard_outlined, Icons.dashboard, "Dashboard", 0, selectedIndex, isNarrowDesktop),
                  _buildSidebarItem(ref, Icons.bar_chart_outlined, Icons.bar_chart, "Analytics", 1, selectedIndex, isNarrowDesktop),
                  _buildSidebarItem(ref, Icons.sensors_outlined, Icons.sensors, "Devices", 2, selectedIndex, isNarrowDesktop),
                  _buildSidebarItem(ref, Icons.build_circle_outlined, Icons.build_circle, "Manutenzione", 3, selectedIndex, isNarrowDesktop),
                ],
              ),
            ),
          ),

          const Divider(color: Colors.white10, height: 1),

          // User / notification footer
          Padding(
            padding: EdgeInsets.symmetric(
              horizontal: isNarrowDesktop ? 8 : 12,
              vertical: 12,
            ),
            child: Row(
              mainAxisAlignment: isNarrowDesktop ? MainAxisAlignment.center : MainAxisAlignment.spaceBetween,
              mainAxisSize: MainAxisSize.min,
              children: [
                if (!isNarrowDesktop)
                  Expanded(
                    child: Text(
                      displayName,
                      style: const TextStyle(color: Colors.white60, fontSize: 11),
                      overflow: TextOverflow.ellipsis,
                    ),
                  ),
                // Notification bell
                PopupMenuButton(
                  offset: const Offset(60, -200),
                  color: Colors.transparent,
                  elevation: 0,
                  padding: EdgeInsets.zero,
                  child: Badge(
                    label: unreadCount > 0 ? Text(unreadCount.toString()) : null,
                    backgroundColor: LymphaConfig.emergencyRed,
                    isLabelVisible: unreadCount > 0,
                    child: Icon(
                      unreadCount > 0 ? Icons.notifications_active : Icons.notifications_none,
                      color: unreadCount > 0 ? LymphaConfig.emergencyRed : Colors.white38,
                      size: 20,
                    ),
                  ),
                  itemBuilder: (ctx) => [
                    const PopupMenuItem(
                      enabled: false,
                      padding: EdgeInsets.zero,
                      child: NotificationOverlay(),
                    ),
                  ],
                ),
                // Avatar/settings
                PopupMenuButton(
                  offset: const Offset(60, -150),
                  color: LymphaConfig.backgroundDark,
                  tooltip: "Account",
                  padding: EdgeInsets.zero,
                  child: CircleAvatar(
                    radius: 14,
                    backgroundColor: LymphaConfig.primaryBlue.withValues(alpha: 0.2),
                    child: Text(
                      displayName.isNotEmpty ? displayName[0].toUpperCase() : "U",
                      style: const TextStyle(color: LymphaConfig.primaryBlue, fontWeight: FontWeight.bold, fontSize: 12),
                    ),
                  ),
                  itemBuilder: (ctx) => <PopupMenuEntry>[
                    PopupMenuItem(
                      enabled: false,
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(displayName, style: const TextStyle(color: Colors.white, fontSize: 12, fontWeight: FontWeight.bold)),
                          Text(user?.email ?? "", style: const TextStyle(color: Colors.white38, fontSize: 10)),
                        ],
                      ),
                    ),
                    const PopupMenuDivider(),
                    PopupMenuItem(
                      onTap: () => Future.microtask(() => Navigator.of(context).push(MaterialPageRoute(builder: (_) => const ProfileScreen()))),
                      child: const Row(
                        children: [
                          Icon(Icons.settings_outlined, color: Colors.white70, size: 16),
                          SizedBox(width: 10),
                          Text("Impostazioni", style: TextStyle(color: Colors.white70, fontSize: 13)),
                        ],
                      ),
                    ),
                    PopupMenuItem(
                      onTap: () => SupabaseService.signOut(),
                      child: const Row(
                        children: [
                          Icon(Icons.logout, color: LymphaConfig.emergencyRed, size: 16),
                          SizedBox(width: 10),
                          Text("Logout", style: TextStyle(color: LymphaConfig.emergencyRed, fontSize: 13, fontWeight: FontWeight.bold)),
                        ],
                      ),
                    ),
                  ],
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildSidebarItem(WidgetRef ref, IconData icon, IconData selectedIcon, String label, int index, int selectedIndex, bool compact) {
    final isSelected = index == selectedIndex;
    return Tooltip(
      message: compact ? label : "",
      preferBelow: false,
      child: InkWell(
        onTap: () => ref.read(navigationIndexProvider.notifier).state = index,
        borderRadius: BorderRadius.circular(10),
        child: AnimatedContainer(
          duration: const Duration(milliseconds: 150),
          margin: const EdgeInsets.symmetric(horizontal: 8, vertical: 2),
          padding: EdgeInsets.symmetric(
            horizontal: compact ? 12 : 14,
            vertical: 10,
          ),
          decoration: BoxDecoration(
            color: isSelected ? LymphaConfig.primaryBlue.withValues(alpha: 0.12) : Colors.transparent,
            borderRadius: BorderRadius.circular(10),
            border: isSelected ? Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.2)) : null,
          ),
          child: Row(
            mainAxisAlignment: compact ? MainAxisAlignment.center : MainAxisAlignment.start,
            children: [
              Icon(
                isSelected ? selectedIcon : icon,
                color: isSelected ? LymphaConfig.primaryBlue : Colors.white38,
                size: 20,
              ),
              if (!compact) ...[
                const SizedBox(width: 12),
                Text(
                  label,
                  style: TextStyle(
                    color: isSelected ? LymphaConfig.primaryBlue : Colors.white54,
                    fontWeight: isSelected ? FontWeight.bold : FontWeight.normal,
                    fontSize: 13,
                  ),
                ),
              ],
            ],
          ),
        ),
      ),
    );
  }

  // ── MOBILE BOTTOM NAV ──────────────────────────────────────
  Widget _buildBottomNavBar(WidgetRef ref, int selectedIndex) {
    return Container(
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.9),
        border: const Border(top: BorderSide(color: Colors.white10)),
      ),
      child: NavigationBar(
        backgroundColor: Colors.transparent,
        selectedIndex: selectedIndex,
        indicatorColor: LymphaConfig.primaryBlue.withValues(alpha: 0.15),
        labelBehavior: NavigationDestinationLabelBehavior.alwaysShow,
        onDestinationSelected: (index) => ref.read(navigationIndexProvider.notifier).state = index,
        destinations: const [
          NavigationDestination(
            icon: Icon(Icons.dashboard_outlined, color: Colors.white38),
            selectedIcon: Icon(Icons.dashboard, color: LymphaConfig.primaryBlue),
            label: "Home",
          ),
          NavigationDestination(
            icon: Icon(Icons.bar_chart_outlined, color: Colors.white38),
            selectedIcon: Icon(Icons.bar_chart, color: LymphaConfig.primaryBlue),
            label: "Analytics",
          ),
          NavigationDestination(
            icon: Icon(Icons.sensors_outlined, color: Colors.white38),
            selectedIcon: Icon(Icons.sensors, color: LymphaConfig.primaryBlue),
            label: "Devices",
          ),
          NavigationDestination(
            icon: Icon(Icons.build_circle_outlined, color: Colors.white38),
            selectedIcon: Icon(Icons.build_circle, color: LymphaConfig.primaryBlue),
            label: "Assist.",
          ),
        ],
      ),
    );
  }

  // ── DASHBOARD CONTENT ──────────────────────────────────────
  Widget _buildDashboardContent(BuildContext context, double credits, double savings, bool hasAlert, SensorData? data) {
    final isMobile = MediaQuery.of(context).size.width < 600;
    final padding = isMobile ? 16.0 : 24.0;

    return SingleChildScrollView(
      padding: EdgeInsets.all(padding),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // ── Page header ─────────────────────────────────────
          if (!isMobile) _buildPageHeader(),
          if (!isMobile) const SizedBox(height: 20),

          // ── Alert banner ────────────────────────────────────
          if (hasAlert) ...[
            _buildAlertBanner(data, isMobile),
            SizedBox(height: isMobile ? 12 : 16),
          ],

          // ── Sensor hero ─────────────────────────────────────
          _buildSensorHero(data, isMobile),
          SizedBox(height: isMobile ? 14 : 20),

          // ── Main 2-col / stacked layout ─────────────────────
          LayoutBuilder(
            builder: (context, constraints) {
              if (constraints.maxWidth > 750) {
                return Row(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Expanded(flex: 3, child: _buildMainColumn(isMobile)),
                    const SizedBox(width: 20),
                    Expanded(flex: 2, child: _buildSideColumn(credits, savings)),
                  ],
                );
              } else {
                return Column(
                  children: [
                    _buildMainColumn(isMobile),
                    const SizedBox(height: 16),
                    _buildSideColumn(credits, savings),
                  ],
                );
              }
            },
          ),
          const SizedBox(height: 24),
        ],
      ),
    );
  }

  Widget _buildPageHeader() {
    final now = DateTime.now();
    final hour = now.hour;
    String greeting;
    if (hour < 12) greeting = "Buongiorno";
    else if (hour < 18) greeting = "Buon pomeriggio";
    else greeting = "Buonasera";

    return Row(
      children: [
        Expanded(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                greeting,
                style: const TextStyle(color: Colors.white38, fontSize: 13),
              ),
              const Text(
                "Panoramica Sistema",
                style: TextStyle(color: Colors.white, fontSize: 24, fontWeight: FontWeight.bold),
              ),
            ],
          ),
        ),
        Container(
          padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
          decoration: BoxDecoration(
            color: Colors.white.withValues(alpha: 0.05),
            borderRadius: BorderRadius.circular(10),
            border: Border.all(color: Colors.white10),
          ),
          child: Row(
            children: [
              Container(width: 8, height: 8, decoration: const BoxDecoration(color: Colors.greenAccent, shape: BoxShape.circle)),
              const SizedBox(width: 8),
              const Text("Sistema Operativo", style: TextStyle(color: Colors.greenAccent, fontSize: 11, fontWeight: FontWeight.bold)),
            ],
          ),
        ),
      ],
    );
  }

  Widget _buildSensorHero(SensorData? data, bool isMobile) {
    final hasData = data != null;
    final tds = data?.tds ?? 0;
    final flow = data?.flowRate ?? 0.0;
    final pressure = data?.pressure ?? 0.0;

    // TDS status
    final tdsColor = !hasData ? Colors.white24
        : tds > 100 ? LymphaConfig.emergencyRed
        : tds > 50 ? Colors.orangeAccent
        : Colors.greenAccent;
    final tdsLabel = !hasData ? "N/D"
        : tds > 100 ? "CRITICO"
        : tds > 50 ? "ATTENZIONE"
        : "OTTIMALE";

    // Flow status (normal > 0.5 L/min)
    final flowColor = !hasData ? Colors.white24
        : flow > 0.5 ? LymphaConfig.primaryBlue
        : flow > 0 ? Colors.orangeAccent
        : Colors.white38;
    final flowLabel = !hasData ? "N/D"
        : flow > 0.5 ? "REGOLARE"
        : flow > 0 ? "BASSO"
        : "FERMO";

    // Pressure status (normal 1.0–4.0 bar)
    final pressureColor = !hasData ? Colors.white24
        : pressure >= 1.0 && pressure <= 4.0 ? Colors.tealAccent
        : pressure > 4.0 ? LymphaConfig.emergencyRed
        : Colors.orangeAccent;
    final pressureLabel = !hasData ? "N/D"
        : pressure >= 1.0 && pressure <= 4.0 ? "NORMALE"
        : pressure > 4.0 ? "ALTA"
        : "BASSA";

    final items = [
      _StatItem("TDS", hasData ? "$tds" : "—", "ppm", Icons.science_outlined, tdsColor, tdsLabel),
      _StatItem("Portata", hasData ? flow.toStringAsFixed(1) : "—", "L/min", Icons.water_drop_outlined, flowColor, flowLabel),
      _StatItem("Pressione", hasData ? pressure.toStringAsFixed(1) : "—", "bar", Icons.speed_outlined, pressureColor, pressureLabel),
    ];

    return Container(
      padding: EdgeInsets.all(isMobile ? 16 : 20),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [LymphaConfig.primaryBlue.withValues(alpha: 0.12), Colors.tealAccent.withValues(alpha: 0.04)],
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
        borderRadius: BorderRadius.circular(18),
        border: Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.2)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Padding(
            padding: const EdgeInsets.only(bottom: 14),
            child: Row(
              children: [
                const Text("Sensori in Tempo Reale",
                    style: TextStyle(color: Colors.white54, fontSize: 12, letterSpacing: 1)),
                const Spacer(),
                Container(
                  width: 6, height: 6,
                  decoration: BoxDecoration(
                    color: hasData ? Colors.greenAccent : Colors.white24,
                    shape: BoxShape.circle,
                  ),
                ),
                const SizedBox(width: 6),
                Text(
                  hasData ? "LIVE" : "Nessun dato",
                  style: TextStyle(
                    color: hasData ? Colors.greenAccent : Colors.white24,
                    fontSize: 9,
                    fontWeight: FontWeight.bold,
                  ),
                ),
              ],
            ),
          ),
          isMobile
              ? Column(
                  children: items.map((item) => Padding(
                    padding: const EdgeInsets.only(bottom: 12),
                    child: _buildStatRow(item),
                  )).toList(),
                )
              : Row(
                  children: items.map((item) => Expanded(child: Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 8),
                    child: _buildStatColumn(item),
                  ))).toList(),
                ),
        ],
      ),
    );
  }

  Widget _buildStatColumn(_StatItem item) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          children: [
            Icon(item.icon, color: item.color, size: 16),
            const SizedBox(width: 6),
            Text(item.label, style: const TextStyle(color: Colors.white38, fontSize: 11, letterSpacing: 0.5)),
          ],
        ),
        const SizedBox(height: 6),
        Row(
          crossAxisAlignment: CrossAxisAlignment.end,
          children: [
            Text(item.value, style: TextStyle(color: item.color, fontSize: 32, fontWeight: FontWeight.w900, height: 1)),
            const SizedBox(width: 4),
            Padding(
              padding: const EdgeInsets.only(bottom: 4),
              child: Text(item.unit, style: TextStyle(color: item.color.withValues(alpha: 0.6), fontSize: 11)),
            ),
          ],
        ),
        const SizedBox(height: 4),
        Container(
          padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 2),
          decoration: BoxDecoration(
            color: item.color.withValues(alpha: 0.1),
            borderRadius: BorderRadius.circular(6),
          ),
          child: Text(item.status, style: TextStyle(color: item.color, fontSize: 9, fontWeight: FontWeight.bold)),
        ),
      ],
    );
  }

  Widget _buildStatRow(_StatItem item) {
    return Row(
      children: [
        Container(
          padding: const EdgeInsets.all(10),
          decoration: BoxDecoration(
            color: item.color.withValues(alpha: 0.1),
            borderRadius: BorderRadius.circular(12),
          ),
          child: Icon(item.icon, color: item.color, size: 20),
        ),
        const SizedBox(width: 14),
        Expanded(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(item.label, style: const TextStyle(color: Colors.white38, fontSize: 11)),
              Row(
                crossAxisAlignment: CrossAxisAlignment.end,
                children: [
                  Text(item.value, style: TextStyle(color: item.color, fontSize: 22, fontWeight: FontWeight.w900, height: 1.1)),
                  const SizedBox(width: 4),
                  Padding(
                    padding: const EdgeInsets.only(bottom: 2),
                    child: Text(item.unit, style: TextStyle(color: item.color.withValues(alpha: 0.7), fontSize: 11)),
                  ),
                ],
              ),
            ],
          ),
        ),
        Container(
          padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 3),
          decoration: BoxDecoration(
            color: item.color.withValues(alpha: 0.1),
            borderRadius: BorderRadius.circular(6),
          ),
          child: Text(item.status, style: TextStyle(color: item.color, fontSize: 9, fontWeight: FontWeight.bold)),
        ),
      ],
    );
  }

  Widget _buildAlertBanner(SensorData? data, bool isMobile) {
    return Container(
      padding: EdgeInsets.all(isMobile ? 12 : 16),
      decoration: BoxDecoration(
        color: LymphaConfig.emergencyRed.withValues(alpha: 0.1),
        border: Border.all(color: LymphaConfig.emergencyRed.withValues(alpha: 0.4)),
        borderRadius: BorderRadius.circular(14),
      ),
      child: Row(
        children: [
          Container(
            padding: const EdgeInsets.all(8),
            decoration: BoxDecoration(color: LymphaConfig.emergencyRed, borderRadius: BorderRadius.circular(10)),
            child: const Icon(Icons.warning_rounded, color: Colors.white, size: 20),
          ),
          const SizedBox(width: 14),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  "ALLARME: SOGLIA SUPERATA",
                  style: TextStyle(color: Colors.white, fontWeight: FontWeight.w900, fontSize: isMobile ? 12 : 14, letterSpacing: 0.5),
                ),
                Text(
                  "TDS ${data?.tds} ppm — Limite sicurezza superato. Intervento richiesto.",
                  style: TextStyle(color: LymphaConfig.emergencyRed, fontSize: isMobile ? 10 : 12),
                ),
              ],
            ),
          ),
          ElevatedButton(
            onPressed: () {},
            style: ElevatedButton.styleFrom(
              backgroundColor: LymphaConfig.emergencyRed,
              foregroundColor: Colors.white,
              padding: const EdgeInsets.symmetric(horizontal: 14, vertical: 8),
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(8)),
              textStyle: const TextStyle(fontSize: 11, fontWeight: FontWeight.bold),
            ),
            child: const Text("Chiudi Valvola"),
          ),
        ],
      ),
    );
  }

  Widget _buildMainColumn(bool isMobile) {
    // Use Consumer to get real filter state and device count
    return Consumer(
      builder: (context, ref, _) {
        final filter = ref.watch(activeFilterProvider);
        final devicesAsync = ref.watch(deviceListProvider);
        final deviceCount = devicesAsync.value?.length ?? 0;

        final hasFilterData = filter.consumed > 0;
        final filterPerc = hasFilterData
            ? ((1.0 - filter.consumed / filter.capacity) * 100).clamp(0.0, 100.0)
            : null;
        final filterSubtitle = filterPerc == null
            ? "Dati non disponibili"
            : filterPerc > 40
                ? "Filtri OK · ${filterPerc.toInt()}%"
                : filterPerc > 15
                    ? "Sostituzione a breve"
                    : "Sostituzione urgente!";

        final deviceSubtitle = deviceCount == 0 ? "Nessun dispositivo" : "$deviceCount attivi";

        return Column(
          children: [
            const DigitalTwinView(),
            const SizedBox(height: 16),
            Row(
              children: [
                Expanded(
                  child: _buildQuickAction(
                    Icons.build_circle_outlined, "Manutenzione", Colors.orangeAccent,
                    subtitle: filterSubtitle,
                  ),
                ),
                const SizedBox(width: 12),
                Expanded(
                  child: _buildQuickAction(
                    Icons.home_work_outlined, "Builder", LymphaConfig.primaryBlue,
                    subtitle: "Gestisci layout",
                  ),
                ),
                const SizedBox(width: 12),
                Expanded(
                  child: _buildQuickAction(
                    Icons.sensors_outlined, "Sensori", Colors.tealAccent,
                    subtitle: deviceSubtitle,
                  ),
                ),
              ],
            ),
          ],
        );
      },
    );
  }

  Widget _buildQuickAction(IconData icon, String label, Color color, {String subtitle = ""}) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 14),
      decoration: BoxDecoration(
        color: color.withValues(alpha: 0.06),
        borderRadius: BorderRadius.circular(14),
        border: Border.all(color: color.withValues(alpha: 0.15)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Icon(icon, color: color, size: 20),
          const SizedBox(height: 8),
          Text(label, style: TextStyle(color: color, fontWeight: FontWeight.bold, fontSize: 12)),
          if (subtitle.isNotEmpty)
            Text(subtitle, style: const TextStyle(color: Colors.white38, fontSize: 10)),
        ],
      ),
    );
  }

  Widget _buildSideColumn(double credits, double savings) {
    return Column(
      children: [
        const PulseChart(),
        const SizedBox(height: 16),
        WalletWidget(credits: credits, savings: savings),
        const SizedBox(height: 16),
        const FilterStagesWidget(),
      ],
    );
  }
}

class _StatItem {
  final String label;
  final String value;
  final String unit;
  final IconData icon;
  final Color color;
  final String status;
  const _StatItem(this.label, this.value, this.unit, this.icon, this.color, this.status);
}
