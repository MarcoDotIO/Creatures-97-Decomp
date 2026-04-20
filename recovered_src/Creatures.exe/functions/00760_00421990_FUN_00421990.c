/*
 * Program: Creatures.exe
 * Function: FUN_00421990
 * Entry: 00421990
 * Namespace: Global
 * Prototype: undefined4 * FUN_00421990(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00421990(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 6) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  return param_1;
}

