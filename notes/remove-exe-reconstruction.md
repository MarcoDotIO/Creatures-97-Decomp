# remove.exe Reconstruction

## Recovered semantics
- `FUN_004017e0` reads string values from `HKLM\SOFTWARE\Millennium Interactive\Creatures\1.0`.
- `FUN_00401890` builds a search glob, enumerates matching files, and deletes each matching path.
- The uninstall binary string table exposes the remaining authored cleanup surface:
  - install directories: `Main Directory`, `Image Directory`, `Genetics Directory`
  - cleanup targets: `TempBU\\*.sfc`, `Backup\\*.photo album`, `chemicals.str`, `creatures.fts`, `creatures.gid`, `*.spr`, `*.gno`, `*.gen`
  - registry cleanup targets: document classes, OLE handlers, CLSIDs, and the uninstall key
  - uninstall command source: `UninstallString` from `SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey`

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/remove_tool.c`
- Public API:
  - `remove_read_install_value`
  - `remove_read_uninstall_string`
  - `remove_delete_files_matching_pattern`
  - `remove_collect_install_layout`
  - `remove_build_cleanup_plan`
  - `remove_execute_cleanup_plan`
  - `remove_execute_registry_cleanup`
  - `remove_launch_uninstaller`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.

## Limitation
- The current `remove.exe` lift reconstructs the program's authored uninstall logic, not the full MFC dialog shell.
- MFC dialog plumbing and resource-driven UI still remain on the raw-export side until more ordinal/class recovery is done.
