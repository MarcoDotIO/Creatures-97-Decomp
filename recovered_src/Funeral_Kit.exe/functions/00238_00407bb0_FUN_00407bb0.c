/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407bb0
 * Entry: 00407bb0
 * Namespace: Global
 * Prototype: undefined4 FUN_00407bb0(void * param_1)
 */


undefined4 __fastcall FUN_00407bb0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0x294) != 0) {
    FUN_00407920(param_1);
    if (0 < *(int *)((int)param_1 + 0x2b0)) {
      if (0 < *(int *)((int)param_1 + 0x2c4)) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 4;
          iVar2 = iVar2 + 1;
          FUN_00407b00(param_1,*(int **)(*(int *)((int)param_1 + 0x2c0) + -4 + iVar1));
        } while (iVar2 < *(int *)((int)param_1 + 0x2c4));
      }
      Ordinal_5439(0,0xffffffff);
    }
  }
  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
  return 0;
}

