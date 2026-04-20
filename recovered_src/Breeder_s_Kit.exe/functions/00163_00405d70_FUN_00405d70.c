/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405d70
 * Entry: 00405d70
 * Namespace: Global
 * Prototype: undefined4 FUN_00405d70(void * param_1)
 */


undefined4 __fastcall FUN_00405d70(void *param_1)

{
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    FUN_00405970(param_1);
    FUN_00406e70((int)param_1);
    FUN_00406780(param_1);
    return 1;
  }
  return 1;
}

