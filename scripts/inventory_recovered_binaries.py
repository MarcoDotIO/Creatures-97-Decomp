#!/usr/bin/env python3

from __future__ import annotations

import argparse
import hashlib
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
DEFAULT_INSTALL_DIR = ROOT / "extracted_media" / "creatures_install_tree"
DEFAULT_MANIFEST = ROOT / "manifests" / "creatures_binaries.tsv"

SUFFIXES = {".exe", ".dll", ".drv", ".ocx"}


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def file_description(path: Path) -> str:
    proc = subprocess.run(
        ["file", str(path)],
        check=True,
        text=True,
        capture_output=True,
    )
    line = proc.stdout.strip()
    return line.split(": ", 1)[1] if ": " in line else line


def main() -> int:
    parser = argparse.ArgumentParser(description="Inventory recovered Creatures PE binaries and runtime libraries.")
    parser.add_argument("--install-dir", type=Path, default=DEFAULT_INSTALL_DIR)
    parser.add_argument("--manifest", type=Path, default=DEFAULT_MANIFEST)
    args = parser.parse_args()

    binaries = sorted(
        path
        for path in args.install_dir.rglob("*")
        if path.is_file() and path.suffix.lower() in SUFFIXES
    )

    args.manifest.parent.mkdir(parents=True, exist_ok=True)
    with args.manifest.open("w", encoding="utf-8") as f:
        f.write("relpath\tsize\tsha256\tdescription\n")
        for path in binaries:
            relpath = path.relative_to(args.install_dir)
            f.write(
                f"{relpath.as_posix()}\t{path.stat().st_size}\t{sha256(path)}\t{file_description(path)}\n"
            )

    print(f"Inventoried {len(binaries)} binaries into {args.manifest}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
