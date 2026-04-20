/*
 * Program: Creatures.exe
 * Function: FUN_00409380
 * Entry: 00409380
 * Namespace: Global
 * Prototype: undefined4 FUN_00409380(int param_1)
 */


undefined4 __fastcall FUN_00409380(int param_1)

{
  if ((*(int *)(param_1 + 0x2b0) != 0) && (*(int *)(param_1 + 0x294) != 0)) {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  return 0;
}

