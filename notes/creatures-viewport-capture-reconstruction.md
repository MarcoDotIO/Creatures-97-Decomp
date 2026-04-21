# Creatures viewport-capture reconstruction

- `FUN_00410520` packages a clipped 8-bit region from the active backbuffer into an aligned export payload. It copies the requested client rectangle row-by-row out of the current WinG bitmap, prefixes the payload with the recovered three-word header, and submits the result to an external sink.
- `FUN_00406880` is the higher-level caller above that exporter. It resolves a source rectangle from the requested object, centers the requested byte-sized capture dimensions inside it, verifies that the entire capture stays inside the current display viewport, converts the world-space rectangle into client coordinates, and then invokes the 8-bit exporter.
- The recovered source lives in `reconstruction/engine/src/creatures_viewport_capture.c` with the public API declared in `reconstruction/engine/include/creatures_viewport_capture.h`.
- The small `FUN_00410420` / `FUN_004069e4` MFC wrapper pair around the caller still appears to be exception/runtime scaffolding rather than core capture logic. The current lift preserves the capture semantics without hard-coding that runtime glue.
