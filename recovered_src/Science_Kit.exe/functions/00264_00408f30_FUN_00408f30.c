/*
 * Program: Science_Kit.exe
 * Function: FUN_00408f30
 * Entry: 00408f30
 * Namespace: Global
 * Prototype: undefined4 FUN_00408f30(void * param_1)
 */


undefined4 __fastcall FUN_00408f30(void *param_1)

{
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    FUN_00408ee0((int)param_1);
    FUN_00408eb0((int)param_1);
    FUN_00409070((int)param_1);
    FUN_00408f70(param_1);
    return 1;
  }
  return 1;
}

