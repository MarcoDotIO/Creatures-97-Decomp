/*
 * Program: Science_Kit.exe
 * Function: FUN_00405a80
 * Entry: 00405a80
 * Namespace: Global
 * Prototype: undefined4 FUN_00405a80(void * param_1)
 */


undefined4 __fastcall FUN_00405a80(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0x294) != 0) {
    FUN_004057f0(param_1);
    if (0 < *(int *)((int)param_1 + 0x2b0)) {
      if (0 < *(int *)((int)param_1 + 0x2c4)) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 4;
          iVar2 = iVar2 + 1;
          FUN_004059d0(param_1,*(int **)(*(int *)((int)param_1 + 0x2c0) + -4 + iVar1));
        } while (iVar2 < *(int *)((int)param_1 + 0x2c4));
      }
      Ordinal_5439(0,0xffffffff);
    }
  }
  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
  return 0;
}

