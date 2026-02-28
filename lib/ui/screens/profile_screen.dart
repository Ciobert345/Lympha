import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:image_picker/image_picker.dart';
import '../../core/constants.dart';
import '../../services/supabase_service.dart';
import '../../providers/lympha_stream.dart';

class ProfileScreen extends ConsumerStatefulWidget {
  const ProfileScreen({super.key});

  @override
  ConsumerState<ProfileScreen> createState() => _ProfileScreenState();
}

class _ProfileScreenState extends ConsumerState<ProfileScreen> {
  bool _isUploading = false;

  Future<void> _pickAndUploadImage() async {
    final picker = ImagePicker();
    final image = await picker.pickImage(source: ImageSource.gallery, imageQuality: 50);
    
    if (image != null) {
      setState(() => _isUploading = true);
      try {
        final bytes = await image.readAsBytes();
        final publicUrl = await SupabaseService.uploadAvatar(bytes);
        if (publicUrl != null) {
          await SupabaseService.updateProfile({'avatar_url': publicUrl});
          ref.invalidate(profileProvider);
          if (mounted) {
            ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text("Foto profilo aggiornata!")));
          }
        }
      } catch (e) {
        if (mounted) {
          ScaffoldMessenger.of(context).showSnackBar(SnackBar(content: Text("Errore caricamento: $e")));
        }
      } finally {
        if (mounted) setState(() => _isUploading = false);
      }
    }
  }

  Future<void> _updateName(String newName) async {
    await SupabaseService.updateProfile({'full_name': newName});
    ref.invalidate(profileProvider);
  }

  Future<void> _simulateAlert() async {
    final userId = SupabaseService.client.auth.currentUser?.id;
    if (userId == null) return;
    
    await SupabaseService.client.from('notifications').insert({
      'user_id': userId,
      'title': 'PERICOLO: Perdita Rilevata!',
      'message': 'È stata rilevata un\'anomalia nel flusso d\'acqua in Cucina. Controlla il sensore.',
      'type': 'error',
    });
    ref.invalidate(notificationListProvider);
  }

  void _showEditNameDialog(String currentName) {
    final controller = TextEditingController(text: currentName);
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        title: const Text("Modifica Nome", style: TextStyle(color: Colors.white)),
        content: TextField(
          controller: controller,
          style: const TextStyle(color: Colors.white),
          decoration: const InputDecoration(
            labelText: "Nome Completo",
            labelStyle: TextStyle(color: Colors.white54),
          ),
        ),
        actions: [
          TextButton(onPressed: () => Navigator.pop(ctx), child: const Text("Annulla")),
          ElevatedButton(
            onPressed: () {
              _updateName(controller.text);
              Navigator.pop(ctx);
            },
            child: const Text("Salva"),
          ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final profileAsync = ref.watch(profileProvider);
    final user = SupabaseService.client.auth.currentUser;

    return Scaffold(
      backgroundColor: LymphaConfig.backgroundDark,
      appBar: AppBar(
        title: const Text("Gestione Account"),
        backgroundColor: Colors.transparent,
        elevation: 0,
      ),
      body: profileAsync.when(
        data: (profile) => _buildContent(context, user, profile),
        loading: () => const Center(child: CircularProgressIndicator()),
        error: (e, _) => Center(child: Text("Errore: $e", style: const TextStyle(color: Colors.white))),
      ),
    );
  }

  Widget _buildContent(BuildContext context, dynamic user, Map<String, dynamic>? profile) {
    final avatarUrl = profile?['avatar_url'] as String?;
    final credits = (profile?['credits'] as num?)?.toDouble() ?? 0.0;
    final savings = (profile?['savings'] as num?)?.toDouble() ?? 0.0;
    final displayName = profile?['full_name'] ?? user?.email?.split('@').first ?? "Utente Lympha";

    return SingleChildScrollView(
      padding: const EdgeInsets.all(24.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Center(
            child: Column(
              children: [
                Stack(
                  alignment: Alignment.bottomRight,
                  children: [
                    CircleAvatar(
                      radius: 50,
                      backgroundColor: LymphaConfig.primaryBlue.withValues(alpha: 0.1),
                      backgroundImage: avatarUrl != null ? NetworkImage(avatarUrl) : null,
                      child: avatarUrl == null ? const Icon(Icons.person, size: 50, color: LymphaConfig.primaryBlue) : null,
                    ),
                    if (_isUploading)
                      const Positioned.fill(child: CircularProgressIndicator())
                    else
                      InkWell(
                        onTap: _pickAndUploadImage,
                        child: CircleAvatar(
                          radius: 16,
                          backgroundColor: LymphaConfig.primaryBlue,
                          child: const Icon(Icons.camera_alt, size: 16, color: Colors.white),
                        ),
                      ),
                  ],
                ),
                const SizedBox(height: 16),
                Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    Text(
                      displayName,
                      style: const TextStyle(color: Colors.white, fontSize: 20, fontWeight: FontWeight.bold),
                    ),
                    IconButton(
                      icon: const Icon(Icons.edit, size: 16, color: LymphaConfig.primaryBlue),
                      onPressed: () => _showEditNameDialog(displayName),
                    ),
                  ],
                ),
                Text(
                  "Email: ${user?.email ?? '---'}",
                  style: TextStyle(color: Colors.white.withValues(alpha: 0.5), fontSize: 12),
                ),
              ],
            ),
          ),
          const SizedBox(height: 48),
          _buildInfoSection("DETTAGLI ACCOUNT", [
            _buildSettingTile(icon: Icons.account_balance_wallet, title: "Crediti Lympha", subtitle: "${credits.toStringAsFixed(2)} CR"),
            _buildSettingTile(icon: Icons.savings, title: "Risparmio Totale", subtitle: "€ ${savings.toStringAsFixed(2)}"),
          ]),
          const SizedBox(height: 32),
          _buildInfoSection("CONFIGURAZIONE", [
            _buildSettingTile(
              icon: Icons.language, 
              title: "Lingua", 
              subtitle: "Italiano",
              onTap: () => ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text("Lingua impostata: Italiano"))),
            ),
            _buildSettingTile(
              icon: Icons.notifications_none, 
              title: "Notifiche", 
              subtitle: "Attive (Real-time)",
              onTap: () => ScaffoldMessenger.of(context).showSnackBar(const SnackBar(content: Text("Le notifiche sono già attive."))),
            ),
          ]),
          const SizedBox(height: 32),
          _buildInfoSection("MODALITÀ SVILUPPATORE", [
            _buildSettingTile(
              icon: Icons.bug_report_outlined, 
              title: "Simula Allerta Critica", 
              subtitle: "Invia una notifica di errore al database",
              onTap: _simulateAlert,
            ),
          ]),
          const SizedBox(height: 48),
          _buildLogoutButton(context),
        ],
      ),
    );
  }

  Widget _buildInfoSection(String title, List<Widget> children) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Text(title, style: const TextStyle(color: LymphaConfig.primaryBlue, fontWeight: FontWeight.bold, fontSize: 12, letterSpacing: 1.2)),
        const SizedBox(height: 16),
        ...children,
      ],
    );
  }

  Widget _buildLogoutButton(BuildContext context) {
    return SizedBox(
      width: double.infinity,
      child: ElevatedButton.icon(
        onPressed: () {
          SupabaseService.signOut();
          Navigator.of(context).pop();
        },
        style: ElevatedButton.styleFrom(
          backgroundColor: LymphaConfig.emergencyRed.withValues(alpha: 0.1),
          foregroundColor: LymphaConfig.emergencyRed,
          padding: const EdgeInsets.symmetric(vertical: 16),
          side: const BorderSide(color: LymphaConfig.emergencyRed),
          shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
        ),
        icon: const Icon(Icons.logout),
        label: const Text("Logout dal sistema", style: TextStyle(fontWeight: FontWeight.bold)),
      ),
    );
  }

  Widget _buildSettingTile({required IconData icon, required String title, required String subtitle, VoidCallback? onTap}) {
    return ListTile(
      contentPadding: EdgeInsets.zero,
      leading: Container(
        padding: const EdgeInsets.all(8),
        decoration: BoxDecoration(color: Colors.white.withValues(alpha: 0.05), borderRadius: BorderRadius.circular(8)),
        child: Icon(icon, color: Colors.white70, size: 20),
      ),
      title: Text(title, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 14)),
      subtitle: Text(subtitle, style: TextStyle(color: Colors.white.withValues(alpha: 0.4), fontSize: 12)),
      trailing: const Icon(Icons.chevron_right, color: Colors.white24),
      onTap: onTap,
    );
  }
}
