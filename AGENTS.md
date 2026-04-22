# AGENTS.md

## Mission

This repository exists to turn raw Ghidra-decompiled recovered source into
reconstructed, human-readable, maintainable C that compiles as close to the
original binaries as possible.

The authoritative reconstruction tree is:

- `reconstruction/engine/`
- `reconstruction/creatures_slice/`
- `reconstruction/apps/`

Raw decompiler output and analysis inputs remain in:

- `analysis/ghidra_exports/`
- `recovered_src/`
- `manifests/`
- `notes/`

Do not treat the Ghidra output as the destination. The task is to convert it
into focused modules, meaningful names, stable struct layouts, and buildable
probe or app surfaces inside `reconstruction/`.

## Multi-Agent Coordination

Multiple agents may work in this repository at the same time.

Before starting work:

1. Read `notes/shared-workspace.md`.
2. Check `Active Tasks`, `Completed Tasks`, and open gaps.
3. Claim one narrow, non-overlapping slice by adding it to `Active Tasks`
   with your identifier.

While working:

1. Stay inside your claimed scope.
2. Update `notes/shared-workspace.md` as the scope changes.
3. If you discover overlap with another claim, stop and re-scope immediately.
4. Move finished work from `Active Tasks` to `Completed Tasks`.

When finishing a slice:

1. Record the recovered function names in
   `manifests/reconstruction_naming_map.tsv`.
2. Update the relevant status notes, especially:
   - `notes/decomp-status.md`
   - `notes/build-verification.md`
3. Leave clear handoff notes for the next agent in
   `notes/shared-workspace.md`.

The shared workspace is the source of truth for agent coordination. Keep it
current so other agents do not duplicate or overwrite work.

## Working Rules

- Convert raw decompiled code into reconstructed modules, not monolithic dumps.
- Each recovered subsystem should live in a focused `.c` and matching `.h`.
- Prefer additive changes that preserve the existing source layout.
- Keep binary-relevant behavior exact. Do not “clean up” semantics in ways that
  change control flow or data layout.
- When working in a dirty tree, never revert unrelated changes.
- Stage only your own files when committing.

## Build And Test Surfaces

The repository supports both host-side shell builds and Windows VM builds.

### Host-Side Shell Builds

Primary scripts:

- `scripts/build_reconstruction_native.sh`
- `scripts/build_reconstruction_windows.sh`

Examples:

```bash
bash scripts/build_reconstruction_native.sh slice
bash scripts/build_reconstruction_windows.sh slice
bash scripts/build_reconstruction_native.sh science
bash scripts/build_reconstruction_windows.sh health_sheet
```

Use the smallest target that covers your slice before escalating to broader
builds.

### CMake Organization Layer

The repo includes an additive CMake surface for a more navigable build layout.

Important entrypoints:

- `CMakeLists.txt`
- `CMakePresets.json`
- `cmake/toolchains/`

Useful presets:

- `native-core`
- `native-kits`
- `native-all`
- `windows-core`
- `windows-vm-core`
- `windows-vm-kits`
- `windows-vm-core-arm64`
- `windows-vm-kits-arm64`

Host examples:

```bash
cmake --preset native-core
cmake --build --preset native-core
```

## Windows VM Workflow

The Parallels Windows guest is part of the expected workflow for testing the
reconstructed binaries.

### Verify Guest Tooling

From the host:

```bash
bash scripts/check_windows_vm_build_tools.sh
```

That script checks for:

- `cmake`
- `ninja`
- `i686-w64-mingw32-clang`
- `aarch64-w64-mingw32-clang`

The committed guest toolchain wiring is captured under:

- `cmake/toolchains/windows_vm_llvm_mingw_i686.cmake`
- `cmake/toolchains/windows_vm_llvm_mingw_aarch64.cmake`

### Run CMake In The Guest

From the host:

```bash
bash scripts/run_cmake_in_windows_vm.sh configure windows-vm-core
bash scripts/run_cmake_in_windows_vm.sh build windows-vm-core
```

For kit probes:

```bash
bash scripts/run_cmake_in_windows_vm.sh configure windows-vm-kits
bash scripts/run_cmake_in_windows_vm.sh build windows-vm-kits
```

ARM64 guest-native variants are also available:

```bash
bash scripts/run_cmake_in_windows_vm.sh configure windows-vm-core-arm64
bash scripts/run_cmake_in_windows_vm.sh build windows-vm-core-arm64
```

Default assumptions:

- VM name: `Windows 11`
- Guest repo path:
  `C:\Mac\Home\Developer\Creatures-Decomp\Creatures-97-Decomp`

Override with:

- `VM_NAME=...`
- `GUEST_REPO_DIR=...`

### Existing VM Launch Helpers

The repository also contains host-side helpers for staging and launching
specific binaries in the VM. Keep them in `scripts/` and prefer reusing them
instead of inventing one-off flows.

## Completion Standard

Agents should keep moving until the raw recovered source is converted into
reconstructed source across the full codebase.

A slice is not done when the code merely exists. It is done when:

1. The reconstruction is in the right module shape.
2. Naming and layouts are documented.
3. The relevant build path passes.
4. The result and remaining gap are recorded in the shared workspace.

The repository should always trend toward:

- clearer reconstructed code
- explicit subsystem boundaries
- reproducible host and VM build/test paths
- accurate status tracking for what remains
