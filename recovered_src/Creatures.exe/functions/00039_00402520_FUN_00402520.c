/*
 * Program: Creatures.exe
 * Function: FUN_00402520
 * Entry: 00402520
 * Namespace: Global
 * Prototype: undefined FUN_00402520(int param_1)
 */


void __fastcall FUN_00402520(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 1;
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    return;
  }
  FUN_00409380(DAT_00436eb8);
  return;
}

