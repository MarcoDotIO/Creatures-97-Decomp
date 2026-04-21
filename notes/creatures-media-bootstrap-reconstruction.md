# Creatures.exe Media Bootstrap Reconstruction

## Recovered semantics
- `FUN_00403c90` tears down the active WinG backbuffer surface by deleting the selected bitmap and DC after restoring the previous object.
- `FUN_00403cf0` configures an 8-bit WinG bitmap from the current palette, creates the bitmap, selects it into the backbuffer DC, and uploads the palette table.
- `FUN_00403dc0` rebuilds the WinG DIB color table from the active palette entries.
- `FUN_00408760` clears one DirectSound voice-slot record back to all-zero state.
- `FUN_00408780` creates the DirectSound device and primary buffer, reads the existing format, switches it to stereo 22050 Hz 16-bit PCM, and marks the output ready on success.
- `FUN_00409050` releases the registered stream list and emits the recovered mixer-idle notification.
- `FUN_004091b0` tears down one active voice slot, stops its buffer, releases the buffer handle, and decrements the owning refcount.
- `FUN_00409210` releases all active voices attached to one owner, repeats that for the owner's linked owner, and then releases both owners.
- `FUN_004092d0` walks the registered owner list through that owner-chain releaser and posts the recovered mixer-idle notification.
- `FUN_00409020` combines the registered-stream release pass with the full active-voice-slot teardown loop.
- `FUN_00408980` runs the higher-level DirectSound shutdown path above those helpers and releases the primary buffer.
- `FUN_00408960` wraps the shutdown path with the optional low-bit delete behavior used by the higher-level destructor.

## Current reconstruction target
- Source files:
  - `reconstruction/engine/src/creatures_media_wing.c`
  - `reconstruction/engine/src/creatures_media_audio.c`
- Public API:
  - `creatures_wing_surface_init`
  - `creatures_wing_surface_create_8bit_bitmap`
  - `creatures_wing_surface_refresh_palette`
  - `creatures_wing_surface_release`
  - `creatures_audio_voice_slot_reset`
  - `creatures_audio_output_init`
  - `creatures_audio_output_create_primary_buffer`
  - `creatures_audio_output_release_registered_streams`
  - `creatures_audio_output_release_registered_streams_and_slots`
  - `creatures_audio_output_release_voice_slot`
  - `creatures_audio_output_release_owner_chain`
  - `creatures_audio_output_release_registered_owners`
  - `creatures_audio_output_shutdown`
  - `creatures_audio_output_destroy`

## Verification
- Included in the shared native/Windows slice harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM with fake WinG and DirectSound backends.
- Verified again as part of the Windows cross-build for the shared slice target.
- The shared harness now checks:
  - active-slot teardown and owner refcount decrements
  - linked-owner chain release
  - registered-stream and registered-owner release ordering
  - shutdown ready-flag clearing and optional self-destroy callback

## Limitation
- These lifts recover the media bootstrap semantics only.
- The higher-level render-present path (`FUN_00402c30` and callers), the remaining sound-loader/object-constructor path above `FUN_00408a30`, and the MFC/window bootstrap that supplies the final HWND and HDC ownership are still on the raw-export side.
