#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
from pathlib import Path


UNRESOLVED_PATTERN = re.compile(
    r"\b(?:FUN_|DAT_|LAB_|PTR_|unaff_|extraout_|in_|Ordinal_|stack0x|stack0)\w*"
)
SIGNATURE_PATTERN = re.compile(
    r"^\s*(?P<rtype>[A-Za-z_][\w\s\*]*?)\s+(?:__\w+\s+)?(?P<name>[A-Za-z_]\w*)\s*\(",
    re.M,
)


def score_file(path: Path) -> tuple[int, int, str, str]:
    text = path.read_text(errors="ignore")
    unresolved = len(UNRESOLVED_PATTERN.findall(text))
    line_count = text.count("\n") + 1
    match = SIGNATURE_PATTERN.search(text)
    func_name = match.group("name") if match else ""
    return unresolved, line_count, path.name, func_name


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Rank recovered function files by unresolved-symbol density."
    )
    parser.add_argument(
        "functions_dir",
        nargs="?",
        default="recovered_src/Creatures.exe/functions",
        help="Directory containing per-function recovered C files.",
    )
    parser.add_argument(
        "--limit",
        type=int,
        default=50,
        help="Maximum number of rows to print.",
    )
    args = parser.parse_args()

    root = Path(args.functions_dir)
    if not root.is_dir():
        raise SystemExit(f"Not a directory: {root}")

    rows = [score_file(path) for path in sorted(root.glob("*.c"))]
    rows.sort(key=lambda row: (row[0], row[1], row[2]))

    print("unresolved_refs\tline_count\tfile\tfunction_name")
    for unresolved, line_count, file_name, func_name in rows[: args.limit]:
        print(f"{unresolved}\t{line_count}\t{file_name}\t{func_name}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
