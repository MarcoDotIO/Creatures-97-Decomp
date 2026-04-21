#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
VM_NAME="${VM_NAME:-Windows 11}"
STAGE_FILE_HOST="${HOME}/Downloads/creatures_slice.exe"
STAGE_FILE_GUEST='C:\Mac\Home\Downloads\creatures_slice.exe'

bash "${ROOT_DIR}/scripts/build_reconstruction_windows.sh" slice >/dev/null
cp "${ROOT_DIR}/build/creatures_slice/creatures_slice.exe" "${STAGE_FILE_HOST}"
prlctl exec "${VM_NAME}" cmd.exe /c "${STAGE_FILE_GUEST}"
