# Decomp Status

## Scope
- The target is the full decompilation of the game-authored Creatures binaries shipped on the disc, not a single milestone export.
- Authored source-recovery targets:
  - `Creatures.exe`
  - `Backup.exe`
  - `Launcher.exe`
  - `Hatchery.exe`
  - `Breeder's Kit.exe`
  - `Funeral Kit.exe`
  - `Health Kit.exe`
  - `Owner's Kit.exe`
  - `Science Kit.exe`
  - `Score Kit.exe`
  - `remove.exe`
- Dependency/interface-only binaries:
  - `CTL3D32.DLL`
  - `MFC40.DLL`
  - `MSVCRT40.DLL`
  - `Wing32.dll`

## Recovered surface
- Full install tree recovered from `Creatures.bin` and normalized under `extracted_media/creatures_install_tree`.
- Ghidra project seeded with the recovered binaries under `ghidra_projects/CreaturesDecomp.rep`.
- Headless exports generated for every game-authored executable under `analysis/ghidra_exports/<program>/`.
- Per-function decompiler output generated under `recovered_src/<program>/functions/`.
- The shared reconstruction harness under `reconstruction/creatures_slice/` now contains verified readable lifts from:
  - `Creatures.exe`
  - `Hatchery.exe`
  - `remove.exe`
  - `Launcher.exe`

## Current counts
- `Creatures.exe`: 1,116 functions, 720 strings, 511 imported externals.
- `Science_Kit.exe`: 610 functions.
- `Breeder_s_Kit.exe`: 527 functions.
- `Health_Kit.exe`: 510 functions.
- `Owner_s_Kit.exe`: 501 functions.
- `Funeral_Kit.exe`: 496 functions.
- `Score_Kit.exe`: 363 functions.
- `Hatchery.exe`: 225 functions.
- `Launcher.exe`: 174 functions.
- `remove.exe`: 59 functions.
- `Backup.exe`: 49 functions.
- Total authored function inventory: 4,581 functions.

## Initial architectural findings
- `Creatures.exe` is a 32-bit Windows PE using MFC, WinG, and DirectSound.
- The main executable contains direct asset-path and world-state strings for:
  - `World.sfc`
  - `Genetics`
  - `Body data\\`
  - `Images\\`
  - `Palettes\\`
  - `Sounds\\`
  - hatchery and owner-kit UI strings
- The shipped executable set suggests a shared engine with multiple MFC-fronted tools layered on top.
- A verified lift now exists for the main executable's eight-slot directory table, its settings-backed defaults, and the CD-drive asset fallback resolver that consumes those settings.
- A verified lift now also exists for the `Body data\\` token/path builders and the two fixed-size text table loaders that sit immediately above the path resolver in `Creatures.exe`.
- A verified lift now also exists for the creature-body compositor's frame-cache acquisition, decode-on-demand pixel access, palette-remap helpers, and random render-depth chooser.
- A verified lift now also exists for the first body-sprite object-construction layer that the compositor uses to turn paired and quad anchor tables into runtime sprite objects.
- A verified lift now also exists for the wrapped-geometry and small layout helpers that position those body sprites and merge their bounds across the world-wrap boundary.
- A verified lift now also exists for the first higher-level body-layout pass that positions the root and appendage chains, updates merged bounds, and records chain endpoints.
- A verified lift now also exists for the wrapper/control layer around that layout pass, including facing flips, step notification, and horizontal recentering.
- A verified lift now also exists for the next compositor-facing caller layer above that layout pass, including bounds-source refresh, target-setting refresh, translation, and invalidate/redraw wrapper behavior.
- A verified lift now also exists for the genome/body parser helpers and the recovered static slot tables that the body assembler uses to map variants and total sprite-bank sizes.
- A verified lift now also exists for the first higher-level body-assembly recipe pass inside `FUN_0040f900`, including recovered body-gene values, slot-variant propagation, extended-slot enablement, and averaged palette-channel extraction.
- A verified lift now also exists for the shared body palette-remap builder used by both higher-level body assemblers, including the recovered per-channel curve generation and nearest-palette lookup.
- A verified lift now also exists for the temporary `SPR` image writer used by the higher-level body assemblers, including the recovered file-size arithmetic, per-frame directory layout, and final frame-count writeback.
- A verified lift now also exists for the first executable body-bank assembler layer inside `FUN_0040f900`, which resolves per-slot `SPR` tokens, remaps slot frame banks, and packs them into the temporary `SPR` image format.
- A verified lift now also exists for the constructor tail that turns the packed body bank into the root pair sprite and the six fixed appendage chains used by the body-layout runtime.
- A verified lift now also exists for the table-loading wrapper above that constructor tail, which resolves the root `ATT` anchors plus the required per-slot `QAD` anchors before instantiating the sprite graph.
- A verified lift now also exists for the immediate `FUN_0040f900` tail above that wrapper, which reapplies the persisted 15-byte posture string after the sprite graph has been reconstructed.
- A verified lift now also exists for the body pose-string wrapper layer, including selection-mode driven chain-group reassignment and the 15-character posture-string applicator used immediately above the layout refresh path.
- A verified lift now also exists for the sprite-file cache and temporary body-builder asset-release path that sit directly on the larger body-assembly boot path.
- A verified lift now also exists for the higher-level `FUN_0040f922` body-builder pass, which flushes the temporary sprite cache, rebuilds the packed body bank from the active genome recipe, reacquires the finished frame set, and reconstructs the posed sprite graph.
- A verified lift now also exists for the first higher-level caller above the body builder (`FUN_00422db0`), including its genome/body refresh sequencing and final male/female/grendel voice selection.
- A verified lift now also exists for the automatic sex-balancing helper inside `FUN_00422aa0`, which biases new creatures toward the underrepresented non-excluded population.
- A verified lift now also exists for the next higher-level creature lifecycle callers above that refresh path, including the wait-state bootstrap, the runtime attention/growth updater, and the imported-genome rebuild path.

## Latest completed functions
- `FUN_00420b20` (`0x00420b20`) -> `creatures_creature_start_waiting_behavior`
- `FUN_004224c0` (`0x004224c0`) -> `creatures_creature_update_attention_and_growth`
- `FUN_004230c0` (`0x004230c0`) -> `creatures_creature_rebuild_from_export_genome`

## Working directories
- Ghidra exports: `analysis/ghidra_exports/`
- Decompiled functions: `recovered_src/`
- Binary inventories: `manifests/`
- Install tree: `extracted_media/creatures_install_tree`

## Next decomp phases
1. Recover the larger `Creatures.exe` constructor and state-management callers above `FUN_00420b20`, `FUN_004224c0`, `FUN_00422db0`, and `FUN_004230c0`, especially the full `FUN_00422aa0` constructor path and its surrounding import/export plumbing.
2. Recover high-value types, globals, vtables, and shared helper code into portable reconstruction modules with verified tests.
3. Split the helper executables into shared engine/application code and tool-specific frontends, starting with the smaller authored tools.
4. Move from raw Ghidra decompiler output toward named, typed, reconstructable source.
5. Validate behavior against the original assets until the authored executable set boots in the Windows VM and through the native macOS ARM reconstruction path.
