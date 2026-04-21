# Creatures Selected-Creature UI Reconstruction

This pass recovers the selected-creature UI cluster that the original world-load bootstrap calls after reloading a world.

Recovered functions:

- `FUN_004069f0` -> `creatures_selected_creature_set`
- `FUN_004126c0` -> `creatures_main_window_refresh_title`
- `FUN_0041c130` -> `creatures_selected_creature_history_push`
- `FUN_0041c1b0` -> `creatures_selected_creature_history_remove`
- `FUN_0041c2f0` -> `creatures_status_bar_refresh_history_and_metrics`
- `FUN_0041c410` -> `creatures_status_bar_refresh_selected_metrics`

Recovered behavior:

- The four-slot history list preserves duplicate suppression, oldest-slot eviction, and compaction on removal.
- The status-bar history refresh preserves the original pane ordering, using panes `4..1` for the recent-selection slots and pane `6` for the active-creature state.
- The status refresh also preserves the original label split:
  - active creature
  - inactive creature
  - non-creature fallback
- The selected-metrics formatter preserves:
  - the `0..255` to `0..100` percentage conversion for the active creature
  - the forced `0%` display when the creature is inactive
  - the five-digit score clamp to `99999`
  - the right-aligned numeric overwrite inside the pre-existing pane text buffer
- The title refresh preserves the base `Creatures` caption plus the selected-creature name suffix when present.
- The selected-creature setter preserves the original high-level sequence:
  1. update the selected creature pointer
  2. emit the recovered selection mode
  3. refresh the title
  4. close or refresh the eye window depending on the new creature state
  5. optionally refresh the main surface
  6. refresh the status panes
  7. invalidate the main window

Verification:

- The slice harness now covers the history push/remove paths, the status-pane refresh path, score/health formatting, title refresh, and the selected-creature setter sequencing.
- The milestone `creatures_reconstruction` executable now uses the recovered title and score-pane refresh callbacks during the world-load bootstrap instead of no-op stubs.
