# Scripts

This directory contains the existing shell-based operational surface for the
repository.

Main categories:

- native build helpers
- Windows cross-build helpers
- VM staging and launch scripts
- Windows VM CMake helpers
- Windows VM toolchain checks
- preview-window launch scripts

The shell scripts remain the full operational workflow, especially when exact
target parity with the current tree matters. The new CMake files are additive
and intended to make the repository easier to navigate and extend.

For the Parallels guest workflow, `check_windows_vm_build_tools.sh` now verifies
the committed `llvm-mingw` guest compiler path in addition to `cmake` and
`ninja`, and `run_cmake_in_windows_vm.sh` drives the checked-in Windows VM
presets from the host.
