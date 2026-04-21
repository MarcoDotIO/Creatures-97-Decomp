# Creatures World Source Header Reconstruction

This pass replaced the placeholder `load_world_source` success path in the
`Creatures.exe` milestone target with a recovered archive-backed `World.sfc`
prefix parse and the next archive class-boundary scan above it.

## Recovered pieces

- `creatures_archive_read_u32`
  - covers the identical archive `u32` load primitive used by:
    - `FUN_00406080`
    - `FUN_00414860`
- `creatures_mfc_archive_read_new_class_header`
  - parses the `0xffff` + schema + class-name-length object headers present at
    the start of the live `World.sfc` stream
- `creatures_mfc_archive_read_count`
  - reconstructs the variable-width MFC archive count prefix used by the
    imported `CString` and array serializers
- `creatures_mfc_archive_read_cstring`
  - reconstructs the byte-count-prefixed MFC string load used by the archived
    script and UI text payloads
- `creatures_mfc_archive_find_next_new_class_header`
  - scans forward from the recovered prefix boundary to the next valid archive
    class header so the live file can be compared against the unresolved
    boot-time object graph
- `creatures_world_source_parse_header`
  - consumes the first boot-time object chain from the live world file:
    - top-level `MapData`
    - inline `CGallery`
    - the immediate gallery count/name/descriptor prefix payload that follows

## Live file observations

The staged `World.sfc` used by the milestone executable begins with:

- `MapData`
- an 8-byte zeroed control prefix
- `CGallery`
- gallery count `464`
- gallery name `Back`
- the next valid archive class header after the unresolved gallery payload sits
  at file offset `0x24a7`
- that next class header resolves to `PointerTool`

The first gallery descriptor bytes are currently preserved verbatim as
`04 00 00 90`. Their exact packed-field interpretation still needs a direct
serializer lift before they should be renamed more aggressively.

## Runtime result

The native and Windows milestone executable now:

1. probes the live install tree
2. opens the real `World.sfc`
3. parses the recovered `MapData` / `CGallery` prefix chain
4. identifies the next live class boundary as `PointerTool`
5. runs the recovered palette bootstrap
6. stages `TempBu`
7. refreshes the recovered title and score panes

This is still not the full world deserializer or a playable boot, but it
removes the last unconditional-success stub at the world-source load boundary
and anchors the next top-level object target in the live `World.sfc` stream.
