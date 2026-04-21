# Creatures MapData Archive Reconstruction

This pass recovered the fixed-size `MapData` archive body behind
`FUN_0042d7b0` into a focused reconstruction module with explicit callbacks for
the unresolved nested `CGallery` and embedded object serializers.

## Recovered pieces

- `creatures_map_data_archive_load`
  - covers the load branch of `FUN_0042d7b0`
  - preserves the original field order:
    1. two leading state dwords
    2. background gallery binding
    3. room count
    4. up to 40 room records
    5. `0x105` scanline/boundary entries
    6. 100 embedded object slots
- `creatures_map_data_archive_save`
  - covers the save branch of `FUN_0042d7b0`
  - preserves the same fixed archive order on writeout

## Layout findings

The recovered field offsets are internally consistent with the decompiled
object size:

- room record array starts at `0x0c`
- room record array ends at `0x32c`
- each room record is `0x14` bytes
- maximum room capacity is `40`
- the scanline/boundary table occupies `0x105` dwords
- the final embedded object block holds `100` opaque 12-byte slots

Those capacities explain why the live `CGallery` payload ahead of the next
`PointerTool` class boundary cannot be the later `MapData` room table.

## Verification

The slice harness now verifies:

- load ordering and field placement for:
  - the two state dwords
  - the gallery callback
  - two synthetic room records
  - the full `0x105` boundary table
  - all 100 embedded object callbacks
- save ordering and output counts for the same fixed-size layout

This does not deserialize the nested `CGallery` body yet, but it locks down the
surrounding `MapData` container that the world boot path depends on.
