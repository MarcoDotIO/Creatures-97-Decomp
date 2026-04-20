/*
 * Program: Creatures.exe
 * Function: FUN_00415550
 * Entry: 00415550
 * Namespace: Global
 * Prototype: undefined FUN_00415550(int * param_1)
 */


void __fastcall FUN_00415550(int *param_1)

{
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0xff;
  *(undefined1 *)((int)param_1 + 0x51) = 0xff;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  param_1[1] = 0x2000000;
  FUN_00414f10(param_1);
  return;
}

