# Creatures.exe Body Pose-String Reconstruction

## Recovered semantics
- `FUN_0040eac0` uses the signed delta table at `DAT_00436000` to reassign appendage-chain body-slot groups relative to the root sprite's base group whenever the selection mode changes.
- `FUN_0040eb30` consumes a 15-character posture string:
  - index `0` selects the chain-group reassignment mode
  - index `2` updates the root sprite's pose digit
  - the remaining digits are distributed across the six appendage chains through the fixed count/offset tables at `DAT_00436018` and `DAT_00436030`
- `X` preserves the current digit in place.
- After applying the incoming digits, the wrapper reruns the existing posture-refresh path and stores the non-`X` posture digits back into the runtime object.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_pose_string.c`
- Public API:
  - `creatures_body_layout_apply_selection_mode`
  - `creatures_body_layout_apply_pose_string`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - recovered chain-group deltas for all six appendage groups
  - root and appendage pose-digit application from a 15-character posture string
  - stored non-`X` digits in the runtime pose-string buffer
  - posture-refresh sequencing after the pose update

## Limitation
- This lift covers the posture-string layer immediately above the body-layout refresh path.
- The remaining higher-level body assemblers that choose or synthesize those posture strings, especially `FUN_0040f900` and `FUN_0040f922`, are still pending recovery.
