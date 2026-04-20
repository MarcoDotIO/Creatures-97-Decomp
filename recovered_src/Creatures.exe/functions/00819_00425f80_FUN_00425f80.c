/*
 * Program: Creatures.exe
 * Function: FUN_00425f80
 * Entry: 00425f80
 * Namespace: Global
 * Prototype: undefined FUN_00425f80(void * param_1)
 */


void __fastcall FUN_00425f80(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x10);
  *(int *)((int)param_1 + 0x10) = (int)*(int **)((int)param_1 + 0x10) + 5;
  if (iVar1 != 0x74697571) {
    FUN_004265c0(param_1,s__app___command_00436c88);
    return;
  }
  FUN_00424710(param_1);
  FUN_0041d0e0();
  return;
}

