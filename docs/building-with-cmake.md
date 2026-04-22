# Building With CMake

The repository now includes an additive CMake surface on top of the existing
shell scripts.

## What CMake Covers

The new CMake files are meant to make the reconstruction tree feel like a more
normal codebase without changing the existing source layout.

Current organized target groups:

- shared slice harness
- core binaries: `Creatures`, `Launcher`, `remove`
- preview tools
- Science kit probes
- Health kit probes
- Breeder kit probes

The shell scripts in `scripts/` remain the full target matrix and the fastest
way to mirror the legacy workflow exactly.

## Configure Presets

The repository ships these presets:

- `native-core`
- `native-kits`
- `native-all`
- `windows-core`
- `windows-vm-core`
- `windows-vm-kits`
- `windows-vm-core-arm64`
- `windows-vm-kits-arm64`

Example:

```bash
cmake --preset native-core
cmake --build --preset native-core
```

For the Parallels Windows guest workflow, see
[Windows VM CMake](windows-vm-cmake.md).

The Windows guest presets are backed by committed toolchain files under
`cmake/toolchains/` so the repo captures the expected VM compiler wiring
instead of relying on ad hoc guest shell commands.

## Important Options

- `CREATURES_BUILD_SLICE`
- `CREATURES_BUILD_CORE_BINARIES`
- `CREATURES_BUILD_PREVIEW_TOOLS`
- `CREATURES_BUILD_SCIENCE_TOOLS`
- `CREATURES_BUILD_HEALTH_TOOLS`
- `CREATURES_BUILD_BREEDER_TOOLS`
- `CREATURES_WARNINGS_AS_ERRORS`
- `CREATURES_ENABLE_ASAN`

## Intent

This CMake layer is organizational. It does not replace the shell scripts or
rewrite recovered code. It gives the repo a structured build surface that is
easier to extend and reason about.
