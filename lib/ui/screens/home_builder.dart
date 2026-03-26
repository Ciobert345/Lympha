import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../models/device.dart';
import '../../models/home_layout.dart';
import '../../providers/lympha_stream.dart';
import '../../core/constants.dart';

class HomeBuilderScreen extends ConsumerStatefulWidget {
  const HomeBuilderScreen({super.key});

  @override
  ConsumerState<HomeBuilderScreen> createState() => _HomeBuilderScreenState();
}

class _HomeBuilderScreenState extends ConsumerState<HomeBuilderScreen> {
  final _nameController = TextEditingController();
  final _widthController = TextEditingController();
  final _lengthController = TextEditingController();
  final _heightController = TextEditingController(text: "3.0");
  final TransformationController _transformationController = TransformationController();

  Offset? _dragStart;
  Offset? _initialPos;
  DateTime _lastUpdate = DateTime.now();

  // Optimized dragging state
  final ValueNotifier<Offset?> _draggedRoomOffset = ValueNotifier<Offset?>(null);
  String? _draggedRoomId;

  @override
  void initState() {
    super.initState();
    // Center the view on (2500, 2500) after first frame
    WidgetsBinding.instance.addPostFrameCallback((_) {
      _recenterView();
      // Delay focus slightly to ensure layout is loaded
      Future.delayed(const Duration(milliseconds: 500), () {
        if (mounted) _focusOnHouse();
      });
    });
  }

  void _recenterView() {
    // Center on (2500, 2500)
    _transformationController.value = Matrix4.identity()
      ..translate(-2500.0 + 200, -2500.0 + 300); // Rough center offset to start
  }

  void _focusOnHouse() {
    if (!mounted) return;
    final state = ref.read(homeLayoutProvider);
    final layout = state.layout;
    
    if (layout.rooms.isEmpty) {
       _recenterView();
       return;
    }

    double minX = 9999, minY = 9999, maxX = -9999, maxY = -9999;
    for (var r in layout.rooms) {
      minX = minX < r.position.dx ? minX : r.position.dx;
      minY = minY < r.position.dy ? minY : r.position.dy;
      maxX = maxX > r.position.dx + r.width * 20 ? maxX : r.position.dx + r.width * 20;
      maxY = maxY > r.position.dy + r.length * 20 ? maxY : r.position.dy + r.length * 20;
    }

    final centerX = (minX + maxX) / 2;
    final centerY = (minY + maxY) / 2;
    
    final viewSize = MediaQuery.of(context).size;
    
    double houseW = maxX - minX;
    double houseH = maxY - minY;
    
    // Safety for tiny layouts
    if (houseW < 100) houseW = 200;
    if (houseH < 100) houseH = 200;

    double scaleX = (viewSize.width - 150) / houseW;
    double scaleY = (viewSize.height - 250) / houseH;
    double scale = (scaleX < scaleY ? scaleX : scaleY).clamp(0.5, 1.2);

    final transform = Matrix4.identity()
      ..scale(scale)
      ..translate(
        -centerX + (viewSize.width / 2 / scale),
        -centerY + (viewSize.height / 2 / scale),
      );
      
    debugPrint("📏 House Focus: scale=$scale, centerX=$centerX, centerY=$centerY, viewSize=$viewSize");
    debugPrint("📏 House Focus: Transform Matrix: ${transform.getRow(0)}, ${transform.getRow(1)}, ${transform.getRow(2)}, ${transform.getRow(3)}");

    setState(() {
      _transformationController.value = transform;
    });
  }


  void _addRoom() {
    final name = _nameController.text;
    final w = double.tryParse(_widthController.text) ?? 5.0;
    final l = double.tryParse(_lengthController.text) ?? 5.0;
    final h = double.tryParse(_heightController.text) ?? 3.0;

    if (name.isNotEmpty) {
      final newRoom = Room(
        id: DateTime.now().millisecondsSinceEpoch.toString(),
        name: name,
        width: w,
        length: l,
        height: h,
        position: const Offset(2500, 2500), // Middle of the 5000x5000 canvas
      );

      final layoutState = ref.read(homeLayoutProvider);
      ref.read(homeLayoutProvider.notifier).updateLayout(
            layoutState.layout.copyWith(rooms: [...layoutState.layout.rooms, newRoom]),
          );

      _nameController.clear();
      Navigator.pop(context);
    }
  }


  void _updateRoomPosition(String id, Offset newPos, {bool finalUpdate = false, double? snappedX, double? snappedY}) {
    // Throttled update to provider only happens at the end or occasionally
    if (!finalUpdate) {
       _draggedRoomOffset.value = snappedX != null ? Offset(snappedX!, snappedY!) : newPos;
       return;
    }

    final state = ref.read(homeLayoutProvider);
    final layout = state.layout;
    final roomIdx = layout.rooms.indexWhere((r) => r.id == id);
    if (roomIdx == -1) return;
    final currentRoom = layout.rooms[roomIdx];

    // Final snapping logic (same as before)
    double fx = snappedX ?? newPos.dx;
    double fy = snappedY ?? newPos.dy;
    
    for (var other in layout.rooms) {
      if (other.id == id) continue;
      final otherRight = other.position.dx + (other.width * 20);
      final otherBottom = other.position.dy + (other.length * 20);
      
      if ((fx - otherRight).abs() < 15) fx = otherRight;
      if ((fx + (currentRoom.width * 20) - other.position.dx).abs() < 15) fx = other.position.dx - (currentRoom.width * 20);
      if ((fy - otherBottom).abs() < 15) fy = otherBottom;
      if ((fy + (currentRoom.length * 20) - other.position.dy).abs() < 15) fy = other.position.dy - (currentRoom.length * 20);
    }

    ref.read(homeLayoutProvider.notifier).updateLayout(
      layout.copyWith(rooms: layout.rooms.map((room) {
        return room.id == id ? room.copyWith(position: Offset(fx, fy)) : room;
      }).toList()),
    );
  }

  void _updateSensorPosition(String deviceId, Offset newPos) {
    final state = ref.read(homeLayoutProvider);
    final layout = state.layout;
    ref.read(homeLayoutProvider.notifier).updateLayout(
      layout.copyWith(sensors: layout.sensors.map((s) {
        return s.deviceId == deviceId ? PlottedSensor(deviceId: deviceId, localPosition: newPos, roomName: "Auto") : s;
      }).toList()),
    );
  }

  @override
  Widget build(BuildContext context) {
    final homeState = ref.watch(homeLayoutProvider);
    final layout = homeState.layout;
    debugPrint("🎨 HomeBuilderScreen: Building layout with ${layout.rooms.length} rooms. Loading: ${homeState.isLoading}");
    
    // Auto-focus when layout is first loaded
    ref.listen(homeLayoutProvider, (previous, next) {
      if (previous != null && previous.layout.rooms.isEmpty && next.layout.rooms.isNotEmpty) {
        Future.delayed(const Duration(milliseconds: 300), () {
          if (mounted) _focusOnHouse();
        });
      }
    });

    final isMobile = MediaQuery.of(context).size.width < 600;

    return Scaffold(
      backgroundColor: LymphaConfig.backgroundDark,
      floatingActionButton: isMobile ? _buildMobileFAB() : null,
      floatingActionButtonLocation: FloatingActionButtonLocation.endFloat,
      body: Stack(
        children: [
          // Canvas Layer
          InteractiveViewer(
            transformationController: _transformationController,
            boundaryMargin: const EdgeInsets.all(5000),
            minScale: 0.05,
            maxScale: 4.0,
            constrained: false,
            clipBehavior: Clip.none,
            child: RepaintBoundary(
              child: SizedBox(
                width: 5000,
                height: 5000,
                child: Stack(
                  clipBehavior: Clip.none,
                  children: [
                    _buildCanvasFloor(),
                    _buildGridBackground(),
                    ...layout.rooms.map((room) => _buildRoomWidget(room)),
                    ...layout.sensors.map((s) => _buildPlottedSensor(s)),
                  ],
                ),
              ),
            ),
          ),

          // Top action bar
          Positioned(
            top: 0, left: 0, right: 0,
            child: _buildTopActionBar(homeState, isMobile),
          ),

          // Side shelf — desktop only
          if (!isMobile)
            Positioned(
              left: 20,
              top: 120,
              child: _buildSideShelf(),
            ),

          // Bottom hint
          Positioned(
            bottom: isMobile ? 90 : 24,
            left: isMobile ? 16 : 24,
            right: isMobile ? 16 : 24,
            child: _buildNavigationHint(isMobile),
          ),

          if (homeState.isLoading)
            const Center(child: CircularProgressIndicator()),
        ],
      ),
    );
  }

  Widget _buildMobileFAB() {
    return FloatingActionButton.extended(
      onPressed: _showMobileToolSheet,
      backgroundColor: LymphaConfig.primaryBlue,
      foregroundColor: Colors.white,
      icon: const Icon(Icons.add_home_work_outlined),
      label: const Text("Aggiungi", style: TextStyle(fontWeight: FontWeight.bold)),
    );
  }

  void _showMobileToolSheet() {
    showModalBottomSheet(
      context: context,
      backgroundColor: Colors.transparent,
      builder: (ctx) => Container(
        padding: const EdgeInsets.all(24),
        decoration: BoxDecoration(
          color: const Color(0xFF111827),
          borderRadius: const BorderRadius.vertical(top: Radius.circular(24)),
          border: Border.all(color: Colors.white10),
        ),
        child: Column(
          mainAxisSize: MainAxisSize.min,
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text("Aggiungi al piano", style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 16)),
            const SizedBox(height: 4),
            const Text("Seleziona cosa aggiungere alla planimetria", style: TextStyle(color: Colors.white38, fontSize: 12)),
            const SizedBox(height: 20),
            Row(
              children: [
                Expanded(
                  child: _buildBottomSheetTile(
                    icon: Icons.crop_square,
                    label: "Stanza",
                    subtitle: "Ambiente chiuso",
                    color: LymphaConfig.primaryBlue,
                    onTap: () {
                      Navigator.pop(ctx);
                      _showAddRoomDialog(RoomType.room);
                    },
                  ),
                ),
                const SizedBox(width: 12),
                Expanded(
                  child: _buildBottomSheetTile(
                    icon: Icons.view_column_outlined,
                    label: "Corridoio",
                    subtitle: "Passaggio",
                    color: Colors.tealAccent,
                    onTap: () {
                      Navigator.pop(ctx);
                      _showAddRoomDialog(RoomType.corridor);
                    },
                  ),
                ),
              ],
            ),
            const SizedBox(height: 16),
            Row(
              children: [
                Expanded(
                  child: OutlinedButton.icon(
                    onPressed: () {
                      Navigator.pop(ctx);
                      _focusOnHouse();
                    },
                    style: OutlinedButton.styleFrom(
                      foregroundColor: Colors.white54,
                      side: const BorderSide(color: Colors.white12),
                      padding: const EdgeInsets.symmetric(vertical: 12),
                      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                    ),
                    icon: const Icon(Icons.zoom_out_map, size: 16),
                    label: const Text("Centra Vista"),
                  ),
                ),
                const SizedBox(width: 12),
                OutlinedButton.icon(
                  onPressed: () {
                    Navigator.pop(ctx);
                    ref.read(homeLayoutProvider.notifier).updateLayout(HomeLayout.empty());
                  },
                  style: OutlinedButton.styleFrom(
                    foregroundColor: LymphaConfig.emergencyRed,
                    side: BorderSide(color: LymphaConfig.emergencyRed.withValues(alpha: 0.3)),
                    padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
                  ),
                  icon: const Icon(Icons.delete_outline, size: 16),
                  label: const Text("Pulisci"),
                ),
              ],
            ),
            SizedBox(height: MediaQuery.of(context).padding.bottom + 8),
          ],
        ),
      ),
    );
  }

  Widget _buildBottomSheetTile({
    required IconData icon,
    required String label,
    required String subtitle,
    required Color color,
    required VoidCallback onTap,
  }) {
    return InkWell(
      onTap: onTap,
      borderRadius: BorderRadius.circular(14),
      child: Container(
        padding: const EdgeInsets.all(16),
        decoration: BoxDecoration(
          color: color.withValues(alpha: 0.07),
          borderRadius: BorderRadius.circular(14),
          border: Border.all(color: color.withValues(alpha: 0.2)),
        ),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Icon(icon, color: color, size: 28),
            const SizedBox(height: 10),
            Text(label, style: TextStyle(color: color, fontWeight: FontWeight.bold, fontSize: 14)),
            Text(subtitle, style: const TextStyle(color: Colors.white38, fontSize: 11)),
          ],
        ),
      ),
    );
  }

  Widget _buildSideShelf() {
    return Container(
      padding: const EdgeInsets.symmetric(vertical: 20, horizontal: 10),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.45),
        borderRadius: BorderRadius.circular(20),
        border: Border.all(color: Colors.white10),
        boxShadow: [BoxShadow(color: Colors.black26, blurRadius: 15)],
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          _buildShelfItem(
            icon: Icons.crop_square,
            label: "STANZA",
            onPressed: () => _showAddRoomDialog(RoomType.room),
            color: LymphaConfig.primaryBlue,
          ),
          const SizedBox(height: 20),
          _buildShelfItem(
            icon: Icons.view_column_outlined,
            label: "CORRIDOIO",
            onPressed: () => _showAddRoomDialog(RoomType.corridor),
            color: Colors.tealAccent,
          ),
        ],
      ),
    );
  }

  Widget _buildShelfItem({required IconData icon, required String label, required VoidCallback onPressed, required Color color}) {
    return Column(
      children: [
        InkWell(
          onTap: onPressed,
          borderRadius: BorderRadius.circular(12),
          child: Container(
            width: 50,
            height: 50,
            decoration: BoxDecoration(
              color: color.withValues(alpha: 0.1),
              borderRadius: BorderRadius.circular(12),
              border: Border.all(color: color.withValues(alpha: 0.3)),
            ),
            child: Icon(icon, color: color, size: 24),
          ),
        ),
        const SizedBox(height: 4),
        Text(label, style: TextStyle(color: color.withValues(alpha: 0.6), fontSize: 8, fontWeight: FontWeight.bold)),
      ],
    );
  }

  Widget _buildTopActionBar(HomeLayoutState state, bool isMobile) {
    return Container(
      padding: EdgeInsets.only(
        top: MediaQuery.of(context).padding.top + (isMobile ? 6 : 10),
        bottom: isMobile ? 10 : 15,
        left: isMobile ? 8 : 20,
        right: isMobile ? 12 : 20,
      ),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          begin: Alignment.topCenter,
          end: Alignment.bottomCenter,
          colors: [Colors.black.withValues(alpha: 0.85), Colors.transparent],
        ),
      ),
      child: Row(
        children: [
          IconButton(
            icon: const Icon(Icons.arrow_back, color: Colors.white),
            onPressed: () => Navigator.pop(context),
          ),
          const SizedBox(width: 4),
          // Title + sync status
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisSize: MainAxisSize.min,
              children: [
                Text(
                  "BUILDER",
                  style: TextStyle(
                    color: Colors.white,
                    fontWeight: FontWeight.w900,
                    fontSize: isMobile ? 15 : 18,
                    letterSpacing: 1.2,
                  ),
                ),
                Row(
                  children: [
                    Container(
                      width: 5,
                      height: 5,
                      decoration: BoxDecoration(
                        color: state.isSyncing ? Colors.orange : Colors.greenAccent,
                        shape: BoxShape.circle,
                      ),
                    ),
                    const SizedBox(width: 5),
                    Text(
                      state.isSyncing ? "Sincronizzazione..." : "Sincronizzato",
                      style: const TextStyle(color: Colors.white38, fontSize: 9, fontWeight: FontWeight.bold),
                    ),
                  ],
                ),
              ],
            ),
          ),
          // Desktop-only: clear button in the top bar
          if (!isMobile)
            _buildActionButton(
              icon: Icons.delete_outline,
              label: "PULISCI",
              onPressed: () {
                ref.read(homeLayoutProvider.notifier).updateLayout(HomeLayout.empty());
              },
              color: Colors.white38,
            )
          else ...
            // Mobile: just a focus button
            [
              IconButton(
                icon: const Icon(Icons.zoom_out_map, color: Colors.white54, size: 22),
                tooltip: "Centra vista",
                onPressed: _focusOnHouse,
              ),
            ],
        ],
      ),
    );
  }

  Widget _buildActionButton({required IconData icon, required String label, required VoidCallback onPressed, required Color color}) {
    return InkWell(
      onTap: onPressed,
      borderRadius: BorderRadius.circular(12),
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
        decoration: BoxDecoration(
          color: color.withValues(alpha: 0.1),
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: color.withValues(alpha: 0.3)),
        ),
        child: Row(
          children: [
            Icon(icon, color: color, size: 18),
            const SizedBox(width: 8),
            Text(label, style: TextStyle(color: color, fontWeight: FontWeight.bold, fontSize: 11)),
          ],
        ),
      ),
    );
  }

  Widget _buildNavigationHint(bool isMobile) {
    if (isMobile) {
      // Compact row of icon buttons on mobile
      return Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          _buildHintChip(Icons.open_with, "Trascina"),
          const SizedBox(width: 8),
          _buildHintChip(Icons.touch_app_outlined, "Doppio tap = modifica"),
          const SizedBox(width: 8),
          Container(
            decoration: BoxDecoration(
              color: Colors.black.withValues(alpha: 0.6),
              borderRadius: BorderRadius.circular(20),
              border: Border.all(color: Colors.white10),
            ),
            child: Row(
              mainAxisSize: MainAxisSize.min,
              children: [
                IconButton(
                  icon: const Icon(Icons.center_focus_strong, color: Colors.white54, size: 18),
                  padding: const EdgeInsets.all(8),
                  constraints: const BoxConstraints(),
                  onPressed: _recenterView,
                ),
                IconButton(
                  icon: const Icon(Icons.zoom_out_map, color: Colors.white54, size: 18),
                  padding: const EdgeInsets.all(8),
                  constraints: const BoxConstraints(),
                  onPressed: _focusOnHouse,
                ),
              ],
            ),
          ),
        ],
      );
    }

    // Desktop full hint bar
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 12),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.6),
        borderRadius: BorderRadius.circular(30),
        border: Border.all(color: Colors.white10),
      ),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Icon(Icons.info_outline, color: Colors.white54, size: 16),
          const SizedBox(width: 10),
          const Text("Trascina per muovere • Doppio tap per modificare • Tieni premuto per eliminare",
              style: TextStyle(color: Colors.white70, fontSize: 10)),
          const SizedBox(width: 20),
          const VerticalDivider(color: Colors.white10, width: 1, indent: 4, endIndent: 4),
          IconButton(
            icon: const Icon(Icons.center_focus_strong, color: Colors.white54, size: 18),
            padding: EdgeInsets.zero,
            constraints: const BoxConstraints(),
            onPressed: _recenterView,
          ),
          const SizedBox(width: 12),
          IconButton(
            icon: const Icon(Icons.zoom_out_map, color: Colors.white54, size: 18),
            padding: EdgeInsets.zero,
            constraints: const BoxConstraints(),
            onPressed: _focusOnHouse,
          ),
        ],
      ),
    );
  }

  Widget _buildHintChip(IconData icon, String label) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 6),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.6),
        borderRadius: BorderRadius.circular(16),
        border: Border.all(color: Colors.white10),
      ),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        children: [
          Icon(icon, color: Colors.white38, size: 13),
          const SizedBox(width: 5),
          Text(label, style: const TextStyle(color: Colors.white38, fontSize: 9)),
        ],
      ),
    );
  }



  Widget _buildRoomWidget(Room room) {
    debugPrint("🔨 Building ${room.type.name} widget: ${room.name} at ${room.position.dx},${room.position.dy}");
    final isCorridor = room.type == RoomType.corridor;
    final baseColor = isCorridor ? Colors.tealAccent : LymphaConfig.primaryBlue;

    return ValueListenableBuilder<Offset?>(
      valueListenable: _draggedRoomOffset,
      builder: (context, localOffset, child) {
        final position = (_draggedRoomId == room.id && localOffset != null) ? localOffset : room.position;
        
        return Positioned(
          left: position.dx,
          top: position.dy,
          child: RepaintBoundary(
            child: GestureDetector(
            onPanStart: (det) {
              _dragStart = det.globalPosition;
              _initialPos = room.position;
              _draggedRoomId = room.id;
              _draggedRoomOffset.value = room.position;
            },
            onPanUpdate: (det) {
              if (_dragStart != null && _initialPos != null) {
                final viewportScale = _transformationController.value.getMaxScaleOnAxis();
                final delta = (det.globalPosition - _dragStart!) / viewportScale;
                _updateRoomPosition(room.id, _initialPos! + delta);
              }
            },
            onPanEnd: (_) {
              if (_dragStart != null && _initialPos != null) {
                _updateRoomPosition(room.id, _draggedRoomOffset.value ?? room.position, finalUpdate: true);
              }
              _dragStart = null;
              _initialPos = null;
              _draggedRoomId = null;
              _draggedRoomOffset.value = null;
            },
            onDoubleTap: () => _showEditRoomDialog(room),
            onLongPress: () => _showRoomOptions(room),
            child: ClipRRect(
          borderRadius: BorderRadius.circular(isCorridor ? 4 : 8),
          child: Container(
            width: room.width * 20,
            height: room.length * 20,
            decoration: BoxDecoration(
              gradient: LinearGradient(
                begin: Alignment.topLeft,
                end: Alignment.bottomRight,
                colors: [
                  baseColor.withValues(alpha: 0.8),
                  baseColor.withValues(alpha: 0.4),
                ],
              ),
              border: Border.all(color: Colors.white, width: isCorridor ? 1.0 : 2.0),
              boxShadow: [
                BoxShadow(color: Colors.black45, blurRadius: 15, spreadRadius: -2),
              ],
            ),
            child: Stack(
              children: [
                if (!isCorridor)
                  Positioned(
                    top: -20,
                    left: -20,
                    child: Container(
                      width: 60,
                      height: 60,
                      decoration: BoxDecoration(
                        color: Colors.white.withValues(alpha: 0.05),
                        shape: BoxShape.circle,
                      ),
                    ),
                  ),
                Center(
                  child: Padding(
                    padding: const EdgeInsets.all(4.0),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        Text(
                          room.name.toUpperCase(), 
                          style: TextStyle(color: Colors.white, fontSize: isCorridor ? 9 : 11, fontWeight: FontWeight.w900, letterSpacing: 0.5),
                          textAlign: TextAlign.center,
                          maxLines: 1,
                          overflow: TextOverflow.ellipsis,
                        ),
                        if (!isCorridor) ...[
                          const SizedBox(height: 2),
                          Text(
                            "${room.width}x${room.length}m", 
                            style: TextStyle(color: Colors.white.withValues(alpha: 0.5), fontSize: 8, fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          ),
                        ],
                      ],
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    ),
  );
},
);
}

  Widget _buildPlottedSensor(PlottedSensor sensor) {
    return Positioned(
      left: sensor.localPosition.dx - 20,
      top: sensor.localPosition.dy - 20,
      child: GestureDetector(
        onPanStart: (det) {
          _dragStart = det.globalPosition;
          _initialPos = sensor.localPosition;
        },
        onPanUpdate: (det) {
          if (_dragStart != null && _initialPos != null) {
            final viewportScale = _transformationController.value.getMaxScaleOnAxis();
            final delta = (det.globalPosition - _dragStart!) / viewportScale;
            _updateSensorPosition(sensor.deviceId, _initialPos! + delta);
          }
        },
        onLongPress: () => _confirmDeleteSensor(sensor.deviceId),
        child: Container(
          width: 40,
          height: 40,
          decoration: BoxDecoration(
            color: Colors.orangeAccent.withValues(alpha: 0.2),
            shape: BoxShape.circle,
            border: Border.all(color: Colors.orangeAccent.withValues(alpha: 0.4), width: 1.5),
            boxShadow: [
              BoxShadow(color: Colors.orangeAccent.withValues(alpha: 0.1), blurRadius: 10, spreadRadius: 2),
            ],
          ),
          child: const Center(
            child: Icon(Icons.sensors, color: Colors.orangeAccent, size: 18),
          ),
        ),
      ),
    );
  }

  Widget _buildCanvasFloor() {
    return Container(
      width: 5000,
      height: 5000,
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.05),
        border: Border.all(color: LymphaConfig.primaryBlue.withValues(alpha: 0.2), width: 4),
      ),
      child: const Center(
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            Icon(Icons.home_work, color: Colors.white12, size: 200),
            Text("AREA DI PROGETTAZIONE", style: TextStyle(color: Colors.white12, fontSize: 40, fontWeight: FontWeight.bold)),
          ],
        ),
      ),
    );
  }

  void _confirmDeleteSensor(String deviceId) {
    showDialog(
      context: context,
      builder: (ctx) => AlertDialog(
        backgroundColor: LymphaConfig.backgroundDark,
        title: const Text("Elimina Sensore", style: TextStyle(color: Colors.white)),
        content: const Text("Sei sicuro di voler rimuovere questo sensore dalla mappa?"),
        actions: [
          TextButton(onPressed: () => Navigator.pop(ctx), child: const Text("Annulla")),
          ElevatedButton(
            onPressed: () {
              final layoutState = ref.read(homeLayoutProvider);
              ref.read(homeLayoutProvider.notifier).updateLayout(
                layoutState.layout.copyWith(sensors: layoutState.layout.sensors.where((s) => s.deviceId != deviceId).toList()),
              );
              Navigator.pop(ctx);
            },
            style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.emergencyRed),
            child: const Text("Elimina"),
          ),
        ],
      ),
    );
  }


  void _showAddRoomDialog(RoomType type) {
    _nameController.text = type == RoomType.corridor ? "Corridoio" : "Stanza";
    _widthController.text = type == RoomType.corridor ? "1.5" : "5.0";
    _lengthController.text = type == RoomType.corridor ? "8.0" : "5.0";
    _heightController.text = "3.0";
    
    showDialog(
      context: context,
      builder: (ctx) => _buildRoomConfigDialog(
        title: "Nuova ${type == RoomType.corridor ? "Corridoio" : "Stanza"}",
        onConfirm: () {
          final name = _nameController.text;
          final w = double.tryParse(_widthController.text) ?? 5.0;
          final l = double.tryParse(_lengthController.text) ?? 5.0;
          final h = double.tryParse(_heightController.text) ?? 3.0;

          if (name.isNotEmpty) {
            final newRoom = Room(
              id: DateTime.now().millisecondsSinceEpoch.toString(),
              name: name,
              width: w,
              length: l,
              height: h,
              position: const Offset(2400, 2400),
              type: type,
            );
            final layoutState = ref.read(homeLayoutProvider);
            ref.read(homeLayoutProvider.notifier).updateLayout(
              layoutState.layout.copyWith(rooms: [...layoutState.layout.rooms, newRoom]),
            );
            Navigator.pop(ctx);
          }
        },
      ),
    );
  }

  void _showEditRoomDialog(Room room) {
    _nameController.text = room.name;
    _widthController.text = room.width.toString();
    _lengthController.text = room.length.toString();
    _heightController.text = room.height.toString();

    showDialog(
      context: context,
      builder: (ctx) => _buildRoomConfigDialog(
        title: "Modifica Stanza",
        onConfirm: () {
          final layoutState = ref.read(homeLayoutProvider);
          ref.read(homeLayoutProvider.notifier).updateLayout(
            layoutState.layout.copyWith(
              rooms: layoutState.layout.rooms.map((r) {
                if (r.id == room.id) {
                  return r.copyWith(
                    name: _nameController.text,
                    width: double.tryParse(_widthController.text) ?? r.width,
                    length: double.tryParse(_lengthController.text) ?? r.length,
                    height: double.tryParse(_heightController.text) ?? r.height,
                  );
                }
                return r;
              }).toList(),
            ),
          );
          Navigator.pop(ctx);
        },
      ),
    );
  }

  Widget _buildRoomConfigDialog({required String title, required VoidCallback onConfirm}) {
    return AlertDialog(
      backgroundColor: LymphaConfig.backgroundDark,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20), side: const BorderSide(color: Colors.white10)),
      title: Text(title, style: const TextStyle(color: Colors.white, fontWeight: FontWeight.w900)),
      content: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          TextField(
            controller: _nameController,
            style: const TextStyle(color: Colors.white),
            decoration: const InputDecoration(labelText: "Nome Stanza", labelStyle: TextStyle(color: Colors.white54)),
          ),
          const SizedBox(height: 16),
          Row(
            children: [
              Expanded(
                child: TextField(
                  controller: _widthController,
                  keyboardType: TextInputType.number,
                  style: const TextStyle(color: Colors.white),
                  decoration: const InputDecoration(labelText: "Largh. (m)", labelStyle: TextStyle(color: Colors.white54)),
                ),
              ),
              const SizedBox(width: 12),
              Expanded(
                child: TextField(
                  controller: _lengthController,
                  keyboardType: TextInputType.number,
                  style: const TextStyle(color: Colors.white),
                  decoration: const InputDecoration(labelText: "Lungh. (m)", labelStyle: TextStyle(color: Colors.white54)),
                ),
              ),
            ],
          ),
        ],
      ),
      actions: [
        TextButton(onPressed: () => Navigator.pop(context), child: const Text("Annulla")),
        ElevatedButton(
          onPressed: onConfirm,
          style: ElevatedButton.styleFrom(backgroundColor: LymphaConfig.primaryBlue, shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(8))),
          child: const Text("Salva", style: TextStyle(fontWeight: FontWeight.bold)),
        ),
      ],
    );
  }

  Widget _buildGridBackground() {
    return IgnorePointer(
      child: SizedBox(
        width: 5000,
        height: 5000,
        child: CustomPaint(painter: GridPainter()),
      ),
    );
  }

  void _showRoomOptions(Room room) {
    showModalBottomSheet(
      context: context,
      backgroundColor: LymphaConfig.backgroundDark,
      builder: (ctx) => ListTile(
        leading: const Icon(Icons.delete, color: Colors.red),
        title: const Text("Elimina Stanza", style: TextStyle(color: Colors.red)),
        onTap: () {
          final layoutState = ref.read(homeLayoutProvider);
          ref.read(homeLayoutProvider.notifier).updateLayout(
            layoutState.layout.copyWith(rooms: layoutState.layout.rooms.where((r) => r.id != room.id).toList()),
          );
          Navigator.pop(ctx);
        },
      ),
    );
  }
}

class GridPainter extends CustomPainter {
  GridPainter();

  @override
  void paint(Canvas canvas, Size size) {
    const double step = 20.0;
    final dotPaint = Paint()..color = Colors.white.withValues(alpha: 0.05);
    final anchorPaint = Paint()..color = Colors.white.withValues(alpha: 0.15);

    for (double i = 0; i <= size.width; i += step) {
      for (double j = 0; j <= size.height; j += step) {
        if (i % 100 == 0 && j % 100 == 0) {
          canvas.drawCircle(Offset(i, j), 1.2, anchorPaint);
        } else {
          canvas.drawCircle(Offset(i, j), 0.5, dotPaint);
        }
      }
    }

    // Design Area Label
    final textPainter = TextPainter(
      text: const TextSpan(
        text: "AREA DI PROGETTAZIONE",
        style: TextStyle(color: Colors.white12, fontSize: 100, fontWeight: FontWeight.bold),
      ),
      textDirection: TextDirection.ltr,
    );
    textPainter.layout();
    textPainter.paint(canvas, Offset((size.width - textPainter.width) / 2, (size.height - textPainter.height) / 2));
  }

  @override
  bool shouldRepaint(CustomPainter oldDelegate) => false;
}

