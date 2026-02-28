import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../core/constants.dart';
import '../../providers/lympha_stream.dart';

class NotificationOverlay extends ConsumerWidget {
  const NotificationOverlay({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final notificationsAsync = ref.watch(notificationListProvider);

    return Container(
      width: 400,
      height: 500,
      decoration: BoxDecoration(
        color: LymphaConfig.backgroundDark,
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.white10),
        boxShadow: [BoxShadow(color: Colors.black54, blurRadius: 20)],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Padding(
            padding: const EdgeInsets.all(20.0),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                const Expanded(
                  child: Text(
                    "Notifiche System", 
                    style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 18),
                    overflow: TextOverflow.ellipsis,
                  ),
                ),
                TextButton(
                  onPressed: () => ref.read(notificationActionsProvider).markAllAsRead(), 
                  child: const Text("Segna lette", style: TextStyle(fontSize: 12)),
                ),
              ],
            ),
          ),
          const Divider(color: Colors.white10, height: 1),
          Expanded(
            child: notificationsAsync.when(
              data: (list) => list.isEmpty 
                ? const Center(child: Text("Nessuna notifica", style: TextStyle(color: Colors.white54)))
                : ListView.separated(
                    padding: const EdgeInsets.all(8),
                    itemCount: list.length,
                    separatorBuilder: (_, __) => const SizedBox(height: 8),
                    itemBuilder: (ctx, idx) {
                      final n = list[idx];
                      return _buildNotificationItem(ref, n);
                    },
                  ),
              loading: () => const Center(child: CircularProgressIndicator()),
              error: (e, _) => Center(child: Text("Errore: $e", style: const TextStyle(color: Colors.red))),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildNotificationItem(WidgetRef ref, Map<String, dynamic> n) {
    final type = n['type'] as String? ?? 'info';
    Color iconColor;
    IconData icon;
    
    switch (type) {
      case 'warning':
        iconColor = Colors.orangeAccent;
        icon = Icons.warning_amber_rounded;
        break;
      case 'error':
        iconColor = LymphaConfig.emergencyRed;
        icon = Icons.error_outline;
        break;
      default:
        iconColor = LymphaConfig.primaryBlue;
        icon = Icons.info_outline;
    }

    return GestureDetector(
      onTap: () {
        if (n['is_read'] != true) {
          ref.read(notificationActionsProvider).markAsRead(n['id'] as int);
        }
      },
      child: Container(
        padding: const EdgeInsets.all(12),
        decoration: BoxDecoration(
          color: n['is_read'] == true ? Colors.transparent : Colors.white.withValues(alpha: 0.05),
          borderRadius: BorderRadius.circular(12),
        ),
        child: Row(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Icon(icon, color: iconColor, size: 20),
            const SizedBox(width: 12),
            Expanded(
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text(n['title'] ?? "Avviso", style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14)),
                  const SizedBox(height: 4),
                  Text(n['message'] ?? "", style: TextStyle(color: Colors.white.withValues(alpha: 0.6), fontSize: 12)),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
