/*
 * Program: Hatchery.exe
 * Function: FUN_00404e40
 * Entry: 00404e40
 * Namespace: Global
 * Prototype: undefined FUN_00404e40(void * param_1)
 */


void __fastcall FUN_00404e40(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x294) != 0) {
    FUN_00404e70((int)param_1);
    if (*(int *)((int)param_1 + 0xc) != 0) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 1;
        FUN_00404fc0(param_1,iVar1);
        iVar1 = iVar2;
      } while (iVar2 < 0x20);
    }
  }
  return;
}

