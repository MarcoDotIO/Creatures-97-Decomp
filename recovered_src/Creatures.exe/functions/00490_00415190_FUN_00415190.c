/*
 * Program: Creatures.exe
 * Function: FUN_00415190
 * Entry: 00415190
 * Namespace: Global
 * Prototype: undefined FUN_00415190(int * param_1)
 */


void __fastcall FUN_00415190(int *param_1)

{
  param_1[1] = 0x1000000;
  *(undefined1 *)((int)param_1 + 9) = 0x10;
  param_1[0x12] = 0;
  FUN_00414f10(param_1);
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  FUN_00414780((int)param_1);
  Ordinal_5191(DAT_00438880,param_1);
  return;
}

