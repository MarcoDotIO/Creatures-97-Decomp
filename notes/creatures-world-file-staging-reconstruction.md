# Creatures World File Staging Reconstruction

This pass recovers the file-backed world staging layer that sits immediately above the palette bootstrap in the original `FUN_004052f0` load path.

Recovered functions:

- `FUN_00407820` -> `creatures_world_directory_delete_mask`
- `FUN_00407970` -> `creatures_world_directory_copy_mask`
- `FUN_00407b20` -> `creatures_world_stage_temp_backup`
- `FUN_00407cd0` -> `creatures_world_restore_backup_to_temp`

Recovered behavior:

- The delete helper enumerates one glob inside a world directory and removes every matching file in place.
- The copy helper enumerates one glob inside a source world directory and copies each matching file into the destination directory.
- The TempBu path preserves the original ordering:
  1. ensure TempBu exists
  2. delete `World.sfc`
  3. delete `*.spr`
  4. copy `World.sfc`
  5. copy `*.spr`
  6. copy any additional world-associated masks
- The Backup restore path preserves the original ordering:
  1. ensure TempBu exists
  2. ensure Backup exists
  3. delete TempBu `World.sfc`
  4. delete TempBu `*.spr`
  5. copy Backup `World.sfc` into TempBu
  6. copy Backup `*.spr` into TempBu

Verification:

- The slice harness now covers the delete helper, copy helper, TempBu staging path, and Backup-to-TempBu restore path using a fake glob-backed filesystem.
- The milestone `creatures_reconstruction` executable now stages `World.sfc` from the live asset tree into `build/reconstruction_native/TempBu/` during the recovered world-load bootstrap.
- The same milestone path now runs in the Windows 11 Parallels VM against the staged live assets.
