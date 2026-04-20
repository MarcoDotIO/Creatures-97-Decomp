/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405a90
 * Entry: 00405a90
 * Namespace: Global
 * Prototype: bool FUN_00405a90(void * param_1)
 */


bool __fastcall FUN_00405a90(void *param_1)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    iVar1 = FUN_00405d50((int)param_1);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_00405b50(param_1);
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}

