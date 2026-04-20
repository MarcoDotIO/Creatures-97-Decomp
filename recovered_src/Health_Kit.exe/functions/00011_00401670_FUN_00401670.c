/*
 * Program: Health_Kit.exe
 * Function: FUN_00401670
 * Entry: 00401670
 * Namespace: Global
 * Prototype: undefined4 FUN_00401670(int param_1)
 */


undefined4 __fastcall FUN_00401670(int param_1)

{
  if (*(int *)(param_1 + 0x8c) == -0x94) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x12e8) = 1000;
  return 1;
}

