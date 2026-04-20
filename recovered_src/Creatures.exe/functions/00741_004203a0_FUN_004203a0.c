/*
 * Program: Creatures.exe
 * Function: FUN_004203a0
 * Entry: 004203a0
 * Namespace: Global
 * Prototype: undefined FUN_004203a0(int * param_1)
 */


void __fastcall FUN_004203a0(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1[0x15] + 10) = 9999;
  FUN_00414f10(param_1);
  FUN_0040eac0((int)param_1);
  FUN_00420490(param_1);
  return;
}

