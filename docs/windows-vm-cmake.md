# Windows VM CMake

The Windows 11 Parallels VM can now be used as a native CMake surface instead
of only as a runtime target.

## Installed CLI Toolchain

The current VM has these tools on `PATH`:

- `cmake`
- `ninja`
- `i686-w64-mingw32-clang`
- `aarch64-w64-mingw32-clang`
- `zig`

They are installed under:

- `C:\ProgramData\CreaturesTools\cmake`
- `C:\ProgramData\CreaturesTools\ninja`
- `C:\ProgramData\CreaturesTools\llvm-mingw-aarch64\llvm-mingw-20260421-ucrt-aarch64`
- `C:\ProgramData\CreaturesTools\zig`

The `llvm-mingw` install is a single Windows ARM64-hosted toolchain that
already includes `i686`, `x86_64`, `armv7`, `aarch64`, and `arm64ec`
target-prefixed compilers.

## Verify The Guest Toolchain

From the host:

```bash
bash scripts/check_windows_vm_build_tools.sh
```

That check now verifies the guest CMake/Ninja pair plus the committed
`llvm-mingw` `i686` and `aarch64` compilers.

## Run CMake In The Guest

From the host:

```bash
bash scripts/run_cmake_in_windows_vm.sh configure windows-vm-core
bash scripts/run_cmake_in_windows_vm.sh build windows-vm-core
```

The committed Windows guest presets currently map to:

- `windows-vm-core`: `llvm-mingw` `i686`, matching the existing 32-bit
  reconstruction output shape.
- `windows-vm-kits`: the same `i686` guest toolchain with the current Science,
  Health, and Breeder probe targets enabled.
- `windows-vm-core-arm64`
- `windows-vm-kits-arm64`

Those presets use the checked-in toolchain files under `cmake/toolchains/`.

By default the helper assumes the repo is visible in the guest at:

```text
C:\Mac\Home\Developer\Creatures-Decomp\Creatures-97-Decomp
```

Override that with `GUEST_REPO_DIR=...` if the shared-folder path changes.

## Current Status

The guest CMake path is now working end-to-end through the committed presets.
The verified baseline flow is:

```bash
bash scripts/run_cmake_in_windows_vm.sh configure windows-vm-core
bash scripts/run_cmake_in_windows_vm.sh build windows-vm-core
```

That flow currently builds the shared slice harness plus the organized
`Creatures`, `Launcher`, and `remove` executables inside the Windows VM using
the checked-in `llvm-mingw` guest toolchain configuration.
