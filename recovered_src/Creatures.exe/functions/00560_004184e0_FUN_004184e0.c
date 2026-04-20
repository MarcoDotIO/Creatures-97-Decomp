/*
 * Program: Creatures.exe
 * Function: FUN_004184e0
 * Entry: 004184e0
 * Namespace: Global
 * Prototype: undefined FUN_004184e0(int * param_1)
 */


void __fastcall FUN_004184e0(int *param_1)

{
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  FUN_00417f30(param_1);
  if (*(char *)((int)param_1 + 0x22) != '\0') {
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    FUN_004150e0(param_1,0,param_1,0);
    FUN_00417840((int)param_1);
  }
  return;
}

