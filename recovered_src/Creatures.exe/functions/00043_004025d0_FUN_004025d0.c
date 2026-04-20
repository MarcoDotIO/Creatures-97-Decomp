/*
 * Program: Creatures.exe
 * Function: FUN_004025d0
 * Entry: 004025d0
 * Namespace: Global
 * Prototype: undefined FUN_004025d0(int param_1)
 */


void __fastcall FUN_004025d0(int param_1)

{
  Ordinal_2081();
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    FUN_00409380(DAT_00436eb8);
  }
  return;
}

