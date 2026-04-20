# Launcher.exe Reconstruction

## Recovered semantics
- `FUN_00401180` builds the registry path `SOFTWARE\\<company>\\<product>\\<section>` and opens matching HKCU/HKLM keys.
- `FUN_00401410` reads a launcher setting from either HKCU or HKLM.
- `FUN_00401470` reads a launcher setting and falls back to a default string on failure.
- `FUN_004014e0` writes a NUL-terminated launcher string value.
- `FUN_00402330` drives the low-colour warning path when the active display depth is below 8 bits per pixel.
- `FUN_00402b90` walks the pipe-delimited `Applets` setting and launches each existing applet entry.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/launcher_tool.c`
- Public API:
  - `launcher_registry_handler_init`
  - `launcher_registry_read_value`
  - `launcher_registry_read_or_default`
  - `launcher_registry_write_string`
  - `launcher_launch_applets`
  - `launcher_warn_if_low_color_depth`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.

## Limitation
- The current lift focuses on launcher configuration and applet-start behavior.
- The MFC dialog shell, intro/video playback path, bitmap palette handling, and most UI rendering code are still on the raw-export side.
