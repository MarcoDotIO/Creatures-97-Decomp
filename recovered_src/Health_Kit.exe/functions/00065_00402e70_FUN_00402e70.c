/*
 * Program: Health_Kit.exe
 * Function: FUN_00402e70
 * Entry: 00402e70
 * Namespace: Global
 * Prototype: undefined FUN_00402e70(int param_1)
 */


void __fastcall FUN_00402e70(int param_1)

{
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0x14;
  *(undefined4 *)(param_1 + 0x18c) = 0xa5;
  FUN_00403420(param_1);
  FUN_00403480(param_1);
  return;
}

