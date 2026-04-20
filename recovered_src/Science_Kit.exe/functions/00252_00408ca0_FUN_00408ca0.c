/*
 * Program: Science_Kit.exe
 * Function: FUN_00408ca0
 * Entry: 00408ca0
 * Namespace: Global
 * Prototype: undefined4 FUN_00408ca0(int param_1)
 */


undefined4 __fastcall FUN_00408ca0(int param_1)

{
  if (*(int *)(param_1 + 0x8c) == -0x94) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7144) = 1000;
  FUN_00408f20();
  return 1;
}

