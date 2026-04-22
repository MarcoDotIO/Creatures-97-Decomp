# Reconstruction Apps

Each subdirectory under `reconstruction/apps/` is a focused executable target.

The general pattern is:

- one `main.c`
- one small probe surface or app shell
- explicit source ownership for a narrow recovered module or subsystem

These apps are used for:

- standalone verification
- smoke tests for recovered modules
- higher-level reconstruction surfaces such as `Creatures`, `Launcher`, and
  kit-specific tooling

The shell scripts and the new CMake layer both treat these directories as the
public app entry points.
