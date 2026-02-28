import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../core/constants.dart';
import '../../models/device.dart';
import '../../models/home_layout.dart';
import '../../providers/lympha_stream.dart';

class DevicesScreen extends ConsumerWidget {
  const DevicesScreen({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final devicesAsync = ref.watch(deviceListProvider);
    final homeState = ref.watch(homeLayoutProvider);
    final rooms = homeState.layout.rooms;
    final sensors = homeState.layout.sensors;
    final screenWidth = MediaQuery.of(context).size.width;
    final isMobile = screenWidth < 600;
    final padding = isMobile ? 16.0 : 28.0;

    return Scaffold(
      backgroundColor: Colors.transparent,
      body: Padding(
        padding: EdgeInsets.all(padding),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // ── Header ──────────────────────────────────────────────────
            Row(
              children: [
                Expanded(
                  child: Row(
                    children: [
                      Container(
                        padding: const EdgeInsets.all(10),
                        decoration: BoxDecoration(
                          color: LymphaConfig.primaryBlue.withValues(alpha: 0.1),
                          borderRadius: BorderRadius.circular(12),
                        ),
                        child: const Icon(Icons.sensors, color: LymphaConfig.primaryBlue, size: 22),
                      ),
                      const SizedBox(width: 14),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(
                            "Dispositivi",
                            style: TextStyle(
                              color: Colors.white,
                              fontSize: isMobile ? 22 : 26,
                              fontWeight: FontWeight.bold,
                            ),
                          ),
                          devicesAsync.when(
                            data: (d) => Text(
                              "${d.length} dispositivi collegati",
                              style: const TextStyle(color: Colors.white38, fontSize: 12),
                            ),
                            loading: () => const SizedBox.shrink(),
                            error: (_, __) => const SizedBox.shrink(),
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
                ElevatedButton.icon(
                  onPressed: () => _showAddDeviceDialog(context, ref),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: LymphaConfig.primaryBlue,
                    foregroundColor: Colors.white,
                    padding: EdgeInsets.symmetric(
                      horizontal: isMobile ? 12 : 20,
                      vertical: isMobile ? 10 : 14,
                    ),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                  icon: const Icon(Icons.add, size: 18),
                  label: Text(isMobile ? "Aggiungi" : "Aggiungi Dispositivo"),
                ),
              ],
            ),
            SizedBox(height: isMobile ? 16 : 24),

            // ── Device List ────────────────────────────────────────────
            Expanded(
              child: devicesAsync.when(
                data: (devices) {
                  if (devices.isEmpty) {
                    return _buildEmptyState(context, ref);
                  }
                  // On desktop, show as grid; on mobile as list
                  if (screenWidth > 900) {
                    return GridView.builder(
                      gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                        crossAxisCount: 2,
                        crossAxisSpacing: 16,
                        mainAxisSpacing: 16,
                        childAspectRatio: 3.0,
                      ),
                      itemCount: devices.length,
                      itemBuilder: (context, index) {
                        final device = devices[index];
                        return _buildDeviceCard(context, ref, device, rooms, sensors, isMobile);
                      },
                    );
                  }
                  return ListView.builder(
                    itemCount: devices.length,
                    itemBuilder: (context, index) {
                      final device = devices[index];
                      return _buildDeviceCard(context, ref, device, rooms, sensors, isMobile);
                    },
                  );
                },
                loading: () => const Center(child: CircularProgressIndicator()),
                error: (err, stack) => Center(
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const Icon(Icons.error_outline, color: Colors.white38, size: 48),
                      const SizedBox(height: 12),
                      Text("Errore: $err", style: const TextStyle(color: Colors.white54)),
                    ],
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildEmptyState(BuildContext context, WidgetRef ref) {
    return Center(
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          Container(
            padding: const EdgeInsets.all(24),
            decoration: BoxDecoration(
              color: LymphaConfig.primaryBlue.withValues(alpha: 0.05),
              shape: BoxShape.circle,
            ),
            child: const Icon(Icons.sensors_off, color: Colors.white24, size: 56),
          ),
          const SizedBox(height: 20),
          const Text("Nessun dispositivo", style: TextStyle(color: Colors.white, fontSize: 18, fontWeight: FontWeight.bold)),
          const SizedBox(height: 8),
          const Text("Aggiungi il tuo primo dispositivo Lympha", style: TextStyle(color: Colors.white38, fontSize: 13)),
          const SizedBox(height: 24),
          ElevatedButton.icon(
            onPressed: () => _showAddDeviceDialog(context, ref),
            style: ElevatedButton.styleFrom(
              backgroundColor: LymphaConfig.primaryBlue,
              foregroundColor: Colors.white,
              padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 14),
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
            ),
            icon: const Icon(Icons.add),
            label: const Text("Aggiungi Dispositivo"),
          ),
        ],
      ),
    );
  }

  Widget _buildDeviceCard(BuildContext context, WidgetRef ref, Device device, List<Room> rooms, List<PlottedSensor> plottedSensors, bool isMobile) {
    final bool isSensor = device is! CentralUnit;
    final assignment = plottedSensors.cast<PlottedSensor?>().firstWhere((s) => s?.deviceId == device.id, orElse: () => null);
    final isOnline = device.status == DeviceStatus.online;

    return Container(
      margin: const EdgeInsets.only(bottom: 12),
      padding: EdgeInsets.all(isMobile ? 14 : 16),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.04),
        borderRadius: BorderRadius.circular(14),
        border: Border.all(color: isOnline ? Colors.white12 : Colors.red.withValues(alpha: 0.1)),
      ),
      child: Row(
        children: [
          // ── Icon ──────────────────────────────────────────────────
          Container(
            padding: const EdgeInsets.all(10),
            decoration: BoxDecoration(
              color: (isSensor ? Colors.orangeAccent : LymphaConfig.primaryBlue).withValues(alpha: 0.1),
              borderRadius: BorderRadius.circular(10),
            ),
            child: Icon(
              isSensor ? Icons.sensors : Icons.hub,
              color: isSensor ? Colors.orangeAccent : LymphaConfig.primaryBlue,
              size: 20,
            ),
          ),
          const SizedBox(width: 14),

          // ── Info ──────────────────────────────────────────────────
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text(
                  device.name,
                  style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: isMobile ? 13 : 14),
                ),
                Text(
                  device.id,
                  style: TextStyle(color: Colors.white.withValues(alpha: 0.25), fontSize: 10),
                  overflow: TextOverflow.ellipsis,
                ),
                if (isSensor) ...[
                  const SizedBox(height: 6),
                  _buildRoomAssignment(context, ref, device, rooms, assignment),
                ],
              ],
            ),
          ),

          // ── Status ────────────────────────────────────────────────
          Column(
            crossAxisAlignment: CrossAxisAlignment.end,
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Row(
                mainAxisSize: MainAxisSize.min,
                children: [
                  Container(
                    width: 7,
                    height: 7,
                    decoration: BoxDecoration(
                      color: isOnline ? Colors.greenAccent : Colors.red,
                      shape: BoxShape.circle,
                      boxShadow: [
                        BoxShadow(
                          color: (isOnline ? Colors.greenAccent : Colors.red).withValues(alpha: 0.4),
                          blurRadius: 6,
                          spreadRadius: 1,
                        )
                      ],
                    ),
                  ),
                  const SizedBox(width: 6),
                  Text(
                    isOnline ? "ONLINE" : "OFFLINE",
                    style: TextStyle(
                      color: isOnline ? Colors.greenAccent : Colors.red,
                      fontSize: 9,
                      fontWeight: FontWeight.bold,
                      letterSpacing: 0.5,
                    ),
                  ),
                ],
              ),
              if (!isSensor && device is CentralUnit) ...[
                const SizedBox(height: 4),
                Text("v${device.firmwareVersion}", style: const TextStyle(color: Colors.white24, fontSize: 9)),
              ],
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildRoomAssignment(BuildContext context, WidgetRef ref, Device device, List<Room> rooms, PlottedSensor? assignment) {
    return PopupMenuButton<Room>(
      padding: EdgeInsets.zero,
      tooltip: "Assegna a una stanza",
      onSelected: (room) {
        ref.read(homeLayoutProvider.notifier).assignSensorToRoom(device.id, room);
      },
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 5),
        decoration: BoxDecoration(
          color: assignment != null
              ? LymphaConfig.primaryBlue.withValues(alpha: 0.1)
              : Colors.white.withValues(alpha: 0.04),
          borderRadius: BorderRadius.circular(8),
          border: Border.all(
            color: assignment != null
                ? LymphaConfig.primaryBlue.withValues(alpha: 0.25)
                : Colors.white12,
          ),
        ),
        child: Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            Icon(
              assignment != null ? Icons.room : Icons.add_location_outlined,
              color: assignment != null ? LymphaConfig.primaryBlue : Colors.white38,
              size: 11,
            ),
            const SizedBox(width: 5),
            Text(
              assignment?.roomName ?? "Assegna stanza",
              style: TextStyle(
                color: assignment != null ? LymphaConfig.primaryBlue : Colors.white38,
                fontSize: 10,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(width: 2),
            const Icon(Icons.arrow_drop_down, color: Colors.white24, size: 14),
          ],
        ),
      ),
      itemBuilder: (context) {
        if (rooms.isEmpty) {
          return [
            const PopupMenuItem(
              enabled: false,
              child: Text("Nessuna stanza. Creane una nel Builder.", style: TextStyle(color: Colors.white38, fontSize: 12)),
            )
          ];
        }
        return rooms
            .map((room) => PopupMenuItem(
                  value: room,
                  child: Row(
                    children: [
                      Icon(
                        room.type.name == 'corridor' ? Icons.view_column_outlined : Icons.room,
                        color: room.type.name == 'corridor' ? Colors.tealAccent : LymphaConfig.primaryBlue,
                        size: 16,
                      ),
                      const SizedBox(width: 10),
                      Text(room.name, style: const TextStyle(color: Colors.white, fontSize: 13)),
                    ],
                  ),
                ))
            .toList();
      },
    );
  }

  void _showAddDeviceDialog(BuildContext context, WidgetRef ref) {
    final controller = TextEditingController();
    showDialog(
      context: context,
      builder: (context) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20), side: const BorderSide(color: Colors.white10)),
        title: const Row(
          children: [
            Icon(Icons.add_circle_outline, color: LymphaConfig.primaryBlue, size: 20),
            SizedBox(width: 10),
            Text("Aggiungi Dispositivo", style: TextStyle(color: Colors.white, fontSize: 16)),
          ],
        ),
        content: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            const Text(
              "Inserisci il Serial ID del tuo prodotto Lympha per associarlo al tuo account.",
              style: TextStyle(color: Colors.white60, fontSize: 13, height: 1.5),
            ),
            const SizedBox(height: 16),
            TextField(
              controller: controller,
              style: const TextStyle(color: Colors.white),
              decoration: InputDecoration(
                labelText: "Serial ID (es. LYM-1234)",
                labelStyle: const TextStyle(color: Colors.white38),
                prefixIcon: const Icon(Icons.qr_code, color: Colors.white38, size: 18),
                border: OutlineInputBorder(borderRadius: BorderRadius.circular(10)),
                focusedBorder: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(10),
                  borderSide: const BorderSide(color: LymphaConfig.primaryBlue),
                ),
              ),
            ),
          ],
        ),
        actions: [
          TextButton(
            onPressed: () => Navigator.pop(context),
            child: const Text("Annulla", style: TextStyle(color: Colors.white38)),
          ),
          ElevatedButton.icon(
            onPressed: () {
              Navigator.pop(context);
              ScaffoldMessenger.of(context).showSnackBar(
                SnackBar(
                  content: const Text("Richiesta di associazione inviata!"),
                  backgroundColor: LymphaConfig.primaryBlue,
                  behavior: SnackBarBehavior.floating,
                  shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10)),
                ),
              );
            },
            style: ElevatedButton.styleFrom(
              backgroundColor: LymphaConfig.primaryBlue,
              foregroundColor: Colors.white,
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10)),
            ),
            icon: const Icon(Icons.link, size: 16),
            label: const Text("Associa", style: TextStyle(fontWeight: FontWeight.bold)),
          ),
        ],
      ),
    );
  }
}
