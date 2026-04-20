/*
 * Program: Health_Kit.exe
 * Function: FUN_00403480
 * Entry: 00403480
 * Namespace: Global
 * Prototype: undefined4 FUN_00403480(int param_1)
 */


undefined4 __fastcall FUN_00403480(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x194);
  return 1;
}

