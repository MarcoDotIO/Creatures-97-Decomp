#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"

bash "${ROOT_DIR}/scripts/build_reconstruction_windows.sh"
