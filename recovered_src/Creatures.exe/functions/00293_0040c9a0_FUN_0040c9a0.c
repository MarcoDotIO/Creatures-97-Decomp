/*
 * Program: Creatures.exe
 * Function: FUN_0040c9a0
 * Entry: 0040c9a0
 * Namespace: Global
 * Prototype: undefined FUN_0040c9a0(int param_1)
 */


void __fastcall FUN_0040c9a0(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) != 0) {
    Ordinal_731(*(undefined4 *)(param_1 + 9));
    return;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_0040cfd0(param_1);
    return;
  }
  return;
}

