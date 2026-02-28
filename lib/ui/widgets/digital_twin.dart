import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import '../../models/home_layout.dart';
import '../../core/constants.dart';
import '../screens/home_builder.dart';
import '../../providers/lympha_stream.dart';

class DigitalTwinView extends ConsumerWidget {
  const DigitalTwinView({super.key});

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final homeState = ref.watch(homeLayoutProvider);
    final homeLayout = homeState.layout;
    
    return AspectRatio(
      aspectRatio: 16 / 9,
      child: Container(
        decoration: BoxDecoration(
          color: Colors.black.withValues(alpha: 0.5),
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: Colors.white10),
        ),
        clipBehavior: Clip.antiAlias,
        child: Stack(
          children: [
            if (homeState.isLoading)
              const Center(child: CircularProgressIndicator())
            else if (homeLayout.rooms.isEmpty)
              _buildEmptyState(context)
            else
              _buildIsometricHome(homeLayout),

            _buildStatusOverlay(context),
          ],
        ),
      ),
    );
  }

  Widget _buildEmptyState(BuildContext context) {
    return Center(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Icon(Icons.add_home_work_outlined, color: LymphaConfig.primaryBlue.withValues(alpha: 0.4), size: 48),
          const SizedBox(height: 12),
          const Text("NESSUN IMPIANTO", style: TextStyle(color: Colors.white54, fontSize: 12, fontWeight: FontWeight.bold, letterSpacing: 1.2)),
          const SizedBox(height: 4),
          const Text("Inizia a costruire il tuo Gemello Digitale", style: TextStyle(color: Colors.white24, fontSize: 9)),
        ],
      ),
    );
  }

  Widget _buildIsometricHome(HomeLayout layout) {
    return LayoutBuilder(
      builder: (context, constraints) {
        final w = constraints.maxWidth;
        final h = constraints.maxHeight.isFinite ? constraints.maxHeight : w * (9 / 16);
        return CustomPaint(
          size: Size(w, h),
          painter: IsometricHousePainter(layout),
        );
      },
    );
  }

  Widget _buildStatusOverlay(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(16.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              const Text("SPATIAL TWIN", style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 11, letterSpacing: 1)),
              const Spacer(),
              ElevatedButton(
                onPressed: () => Navigator.push(context, MaterialPageRoute(builder: (c) => const HomeBuilderScreen())),
                style: ElevatedButton.styleFrom(
                  backgroundColor: Colors.white10,
                  foregroundColor: Colors.white,
                  padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 0),
                  minimumSize: const Size(0, 28),
                ),
                child: const Text("BUILDER", style: TextStyle(fontSize: 9, fontWeight: FontWeight.bold)),
              ),
            ],
          ),
          const Text("Live Reconstruction", style: TextStyle(color: LymphaConfig.primaryBlue, fontSize: 9, fontWeight: FontWeight.bold)),
        ],
      ),
    );
  }
}

class IsometricHousePainter extends CustomPainter {
  final HomeLayout layout;
  IsometricHousePainter(this.layout);

  @override
  void paint(Canvas canvas, Size size) {
    if (layout.rooms.isEmpty) return;
    
    // Calculate layout bounds
    double minX = 9999, minY = 9999, maxX = -9999, maxY = -9999;
    for (var r in layout.rooms) {
      if (r.position.dx < minX) minX = r.position.dx;
      if (r.position.dy < minY) minY = r.position.dy;
      if (r.position.dx + r.width * 20 > maxX) maxX = r.position.dx + r.width * 20;
      if (r.position.dy + r.length * 20 > maxY) maxY = r.position.dy + r.length * 20;
    }

    // Default bounds if empty or single point
    if (layout.rooms.isEmpty) return;
    
    final layoutWidth = maxX - minX;
    final layoutHeight = maxY - minY;
    
    // Scaling to fit the view safely
    double padding = 80.0;
    double scaleX = (size.width - padding) / (layoutWidth > 100 ? layoutWidth : 200);
    double scaleY = (size.height - padding) / (layoutHeight > 100 ? layoutHeight : 200);
    double scale = (scaleX < scaleY ? scaleX : scaleY).clamp(0.05, 1.2);

    canvas.save();
    // Center the rendering area
    canvas.translate(size.width / 2, size.height / 2 + (20 * scale));
    
    final centerX = minX + layoutWidth / 2;
    final centerY = minY + layoutHeight / 2;

    // Grid Floor (Subtle)
    final gridPaint = Paint()..color = Colors.white.withValues(alpha: 0.03)..style = PaintingStyle.stroke..strokeWidth = 0.5;
    double gridStep = 40 * scale;
    for (int i = -10; i <= 10; i++) {
        canvas.drawLine(Offset(_isoX(i * gridStep, -10 * gridStep), _isoY(i * gridStep, -10 * gridStep)), Offset(_isoX(i * gridStep, 10 * gridStep), _isoY(i * gridStep, 10 * gridStep)), gridPaint);
        canvas.drawLine(Offset(_isoX(-10 * gridStep, i * gridStep), _isoY(-10 * gridStep, i * gridStep)), Offset(_isoX(10 * gridStep, i * gridStep), _isoY(10 * gridStep, i * gridStep)), gridPaint);
    }

    // Draw Rooms (Sorted by Y for correct overlapping in isometric view)
    final sortedRooms = List<Room>.from(layout.rooms)..sort((a, b) => (a.position.dx + a.position.dy).compareTo(b.position.dx + b.position.dy));

    for (var room in sortedRooms) {
      final roomX = (room.position.dx - centerX) * scale;
      final roomY = (room.position.dy - centerY) * scale;
      final roomW = room.width * 20 * scale;
      final roomL = room.length * 20 * scale;
      final roomH = (room.type == RoomType.corridor ? room.height * 0.7 : room.height) * 8 * scale; 

      _drawIsometricRoom(canvas, roomX, roomY, roomW, roomL, roomH, room.name, room.type);
    }

    // Draw Sensors
    for (var sensor in layout.sensors) {
      final sX = (sensor.localPosition.dx - centerX) * scale;
      final sY = (sensor.localPosition.dy - centerY) * scale;
      
      // Get real data if available
      _drawSensorMarker(canvas, sX, sY, sensor.deviceId);
    }


    canvas.restore();
  }

  void _drawIsometricRoom(Canvas canvas, double x, double y, double w, double l, double h, String name, RoomType type) {
    final isCorridor = type == RoomType.corridor;
    final baseColor = isCorridor ? Colors.tealAccent : LymphaConfig.primaryBlue;

    final floorPaint = Paint()..color = baseColor.withValues(alpha: 0.2)..style = PaintingStyle.fill;
    final roofPaint = Paint()..color = baseColor.withValues(alpha: 0.1)..style = PaintingStyle.fill;
    final border = Paint()..color = Colors.white.withValues(alpha: isCorridor ? 0.15 : 0.3)..style = PaintingStyle.stroke..strokeWidth = isCorridor ? 0.5 : 1.0;

    // Floor
    Path floorPath = Path();
    floorPath.moveTo(_isoX(x, y), _isoY(x, y));
    floorPath.lineTo(_isoX(x + w, y), _isoY(x + w, y));
    floorPath.lineTo(_isoX(x + w, y + l), _isoY(x + w, y + l));
    floorPath.lineTo(_isoX(x, y + l), _isoY(x, y + l));
    floorPath.close();
    canvas.drawPath(floorPath, floorPaint);

    // Walls
    _drawWall(canvas, x, y, x + w, y, h);
    _drawWall(canvas, x + w, y, x + w, y + l, h);
    
    // Roof/Top Rim
    Path topPath = Path();
    topPath.moveTo(_isoX(x, y), _isoY(x, y) - h);
    topPath.lineTo(_isoX(x + w, y), _isoY(x + w, y) - h);
    topPath.lineTo(_isoX(x + w, y + l), _isoY(x + w, y + l) - h);
    topPath.lineTo(_isoX(x, y + l), _isoY(x, y + l) - h);
    topPath.close();
    canvas.drawPath(topPath, roofPaint);
    canvas.drawPath(topPath, border);
    
    // Text labels (at floor level)
    TextSpan span = TextSpan(style: const TextStyle(color: Colors.white38, fontSize: 8, fontWeight: FontWeight.bold), text: name.toUpperCase());
    TextPainter tp = TextPainter(text: span, textAlign: TextAlign.center, textDirection: TextDirection.ltr);
    tp.layout();
    tp.paint(canvas, Offset(_isoX(x + w / 2, y + l / 2) - tp.width / 2, _isoY(x + w / 2, y + l / 2) - tp.height / 2));
  }

  void _drawWall(Canvas canvas, double x1, double y1, double x2, double y2, double h) {
    final wallPaint = Paint()..color = LymphaConfig.primaryBlue.withValues(alpha: 0.5)..style = PaintingStyle.fill;
    final wallEdge = Paint()..color = Colors.white10..style = PaintingStyle.stroke..strokeWidth = 0.3;
    
    Path p = Path();
    p.moveTo(_isoX(x1, y1), _isoY(x1, y1));
    p.lineTo(_isoX(x2, y2), _isoY(x2, y2));
    p.lineTo(_isoX(x2, y2), _isoY(x2, y2) - h);
    p.lineTo(_isoX(x1, y1), _isoY(x1, y1) - h);
    p.close();
    canvas.drawPath(p, wallPaint);
    canvas.drawPath(p, wallEdge);
  }

  void _drawSensorMarker(Canvas canvas, double x, double y, String id) {
    final glow = Paint()..color = Colors.orangeAccent.withValues(alpha: 0.3)..maskFilter = const MaskFilter.blur(BlurStyle.normal, 4);
    final core = Paint()..color = Colors.orangeAccent;
    
    Offset pos = Offset(_isoX(x, y), _isoY(x, y));
    canvas.drawCircle(pos, 4, glow);
    canvas.drawCircle(pos, 2, core);

    // Label with ID or Value (Mocking value for now as we don't have per-sensor stream here yet)
    TextSpan span = const TextSpan(style: TextStyle(color: Colors.orangeAccent, fontSize: 6, fontWeight: FontWeight.bold), text: "LIVE");
    TextPainter tp = TextPainter(text: span, textAlign: TextAlign.center, textDirection: TextDirection.ltr);
    tp.layout();
    tp.paint(canvas, Offset(pos.dx + 6, pos.dy - 3));
  }

  double _isoX(double x, double y) => (x - y) * 0.866; 
  double _isoY(double x, double y) => (x + y) * 0.5;

  @override
  bool shouldRepaint(CustomPainter oldDelegate) => true;
}
