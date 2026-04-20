/*
 * Program: Creatures.exe
 * Function: FUN_00409340
 * Entry: 00409340
 * Namespace: Global
 * Prototype: undefined4 FUN_00409340(void * param_1)
 */


undefined4 __fastcall FUN_00409340(void *param_1)

{
  if ((*(int *)((int)param_1 + 0x2b0) == 0) && (*(int *)((int)param_1 + 0x294) != 0)) {
    FUN_00409020(param_1);
    *(undefined4 *)((int)param_1 + 0x2b0) = 1;
    return 0;
  }
  return 6;
}

