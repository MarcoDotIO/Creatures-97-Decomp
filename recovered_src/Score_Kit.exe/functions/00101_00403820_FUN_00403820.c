/*
 * Program: Score_Kit.exe
 * Function: FUN_00403820
 * Entry: 00403820
 * Namespace: Global
 * Prototype: undefined4 FUN_00403820(void * param_1)
 */


undefined4 __fastcall FUN_00403820(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x600) = 1;
  FUN_00403840((int)param_1);
  FUN_00403bf0(param_1);
  return 1;
}

