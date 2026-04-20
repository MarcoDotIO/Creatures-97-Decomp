# Creatures.exe Triage

## Baseline
- Program: `Creatures.exe`
- Image base: `0x00400000`
- Function inventory: 1,116 functions
- String inventory: 720 strings
- Import inventory: 511 imported externals
- Export inventory: 1 exported entry point

## What stands out immediately
- The executable is strongly MFC-driven: the highest fan-in nodes are mostly imported `MFC40.DLL` ordinals, not internal game functions.
- Rendering/audio bootstrap is explicit:
  - `WING32.dll`
  - `DirectSoundCreate`
- The game data layout is explicit in recovered strings:
  - `World.sfc`
  - `Body data\\`
  - `Genetics\\`
  - `Images\\`
  - `Palettes\\`
  - `Sounds\\`
- The main UI strings expose gameplay-facing tools and modes:
  - `Kill current Norn?`
  - `Please put the Creatures CD-ROM into the CD drive.`
  - `Hatch a new norn`
  - `The Hatchery`
  - `Owner's Kit`

## First subsystem buckets
- Application/framework layer:
  - MFC app startup and message dispatch
  - document/view and menu wiring
  - registry/uninstall paths
- World/save layer:
  - `.sfc` handling
  - world load/save state
  - camera/follow creature strings
- Creature/simulation layer:
  - genetics paths and likely genome loading/parsing
  - body/pose/image linkage
  - Norn lifecycle strings
- Media layer:
  - WinG-backed blitting and bitmap creation
  - palette and image handling
  - DirectSound initialization and sound playback
- Tooling layer:
  - hatchery flow
  - owner/details flows
  - likely shared tool dialogs reused by the kit executables

## Recovery implications
- The first naming pass should not start from the biggest caller-count functions, because those are mostly MFC framework imports.
- A better first pass is:
  1. anchor on unique game strings and cross-references,
  2. isolate WinG/DirectSound call sites,
  3. isolate `.sfc` and asset-directory code paths,
  4. then propagate recovered names and types outward through the callgraph.
- The helper executables are probably a faster path to shared type recovery than the main binary alone, because they are smaller and appear to target narrow domains like hatchery, owner info, score, and science views.

## Immediate next targets
- Identify the internal callers of `DirectSoundCreate` and `WinGCreateDC` to mark the media bootstrap path.
- Identify the internal users of `World.sfc`, `Genetics\\`, `Images\\`, `Palettes\\`, and `Sounds\\`.
- Carve out the startup path from the MFC-heavy entry sequence so engine initialization is separated from UI scaffolding.
- Compare helper executable imports and strings to find shared subsystems that can be named once and reused across the source reconstruction.
