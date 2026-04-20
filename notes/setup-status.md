# Setup Status

## Completed
- Installed Homebrew Python 3.11, `openjdk@21`, `cabextract`, `deark`, `mtools`, `p7zip`, and `unshield`.
- Created a project-local virtualenv at `tooling/ghidra-mcp-venv`.
- Installed the Python dependencies required by `Ghidra/GhidraMCP-release-1-4/bridge_mcp_ghidra.py`.
- Removed the macOS quarantine attribute from the local Ghidra bundle.
- Registered the local `ghidra` MCP bridge in Codex with `codex mcp add`.
- Installed the GhidraMCP extension into `Ghidra/ghidra_12.0.4_PUBLIC/Ghidra/Extensions/GhidraMCP`.
- Patched the local extension metadata to match Ghidra 12.0.4 and use a Ghidra 12-compatible `Module.manifest`.
- Created a repo-local Ghidra launcher at `scripts/run-ghidra.sh` that pins JDK 21 and uses a repo-local settings directory.
- Pre-patched the repo-local CodeBrowser tool definition at `ghidra_user_settings/ghidra/ghidra_12.0.4_PUBLIC/tools/_code_browser.tcd` to include `com.lauriewired.GhidraMCPPlugin`.
- Recovered the full install tree from `Creatures.bin` into `extracted_media/creatures_install_tree`.
- Generated `manifests/creatures_install_tree.tsv` and `manifests/creatures_binaries.tsv`.
- Imported the recovered binaries into the Ghidra project `ghidra_projects/CreaturesDecomp.rep`.
- Added a headless export pipeline:
  - `ghidra_scripts/ExportProgramArtifacts.java`
  - `scripts/export_game_decomp.sh`
- Exported repeatable Ghidra artifacts and decompiled C-like output for all game-authored executables into:
  - `analysis/ghidra_exports/`
  - `recovered_src/`

## Current state
- `Creatures.exe` imported and decompiled cleanly: 1,116 functions, 720 recovered strings, 511 imported externals.
- All 11 game-authored executables now have exported function inventories, callgraphs, string tables, import tables, and per-function decompiler output.
- The authored executable set currently totals 4,581 decompiled functions.

## Launch and validation
- Launch Ghidra with `scripts/run-ghidra.sh`.
- For foreground diagnostics, run `GHIDRA_LAUNCH_MODE=debug scripts/run-ghidra.sh`.
- Once a program is open in CodeBrowser, verify the embedded HTTP server with `scripts/check-ghidra-http.sh`.
- The Codex-side bridge configuration already points at `http://127.0.0.1:8080/`.

## Active work
- The project is past setup and intake.
- The current phase is full-game decompilation of the Creatures-authored binaries, with the Microsoft redistributable DLLs treated as dependency/interface references rather than source-recovery targets.
