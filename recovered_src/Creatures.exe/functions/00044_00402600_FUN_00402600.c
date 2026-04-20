/*
 * Program: Creatures.exe
 * Function: FUN_00402600
 * Entry: 00402600
 * Namespace: Global
 * Prototype: undefined FUN_00402600(int param_1)
 */


void __fastcall FUN_00402600(int param_1)

{
  Ordinal_2081();
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    FUN_00409340(DAT_00436eb8);
  }
  return;
}

