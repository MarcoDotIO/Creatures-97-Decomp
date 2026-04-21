# Creatures viewport-follow reconstruction

- `FUN_0040b1e0` is the wrapped point-in-rectangle helper used by the camera/follow code. It falls back to a normal half-open rectangle containment test when the rectangle does not cross the world seam, and otherwise accepts points on either horizontal side of the wrap while keeping the same vertical bounds.
- `FUN_00403450` builds the inner follow window for the current viewport and checks whether the tracked target's center point is still inside it. Horizontally, the allowed region is the middle three-quarters of the viewport starting one-eighth of the width from the left edge. Vertically, it is the middle half of the viewport starting three-eighths of the height from the top edge.
- The recovered portable module lives in `reconstruction/engine/src/creatures_viewport_follow.c` and is covered by the shared slice harness.
- The next unresolved callers above this geometry gate are `FUN_004037c0` and `FUN_004039c0`, which decide when to feed smoothed motion into the recovered display-surface scroll path.
