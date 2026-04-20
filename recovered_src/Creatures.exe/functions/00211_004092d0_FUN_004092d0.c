/*
 * Program: Creatures.exe
 * Function: FUN_004092d0
 * Entry: 004092d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004092d0(void * param_1)
 */


undefined4 __fastcall FUN_004092d0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)((int)param_1 + 0x294) != 0) {
    FUN_00409020(param_1);
    if (0 < *(int *)((int)param_1 + 0x2b4)) {
      if (0 < *(int *)((int)param_1 + 0x2c8)) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 4;
          iVar1 = iVar1 + 1;
          FUN_00409210(param_1,*(int **)(*(int *)((int)param_1 + 0x2c4) + -4 + iVar2));
        } while (iVar1 < *(int *)((int)param_1 + 0x2c8));
      }
      Ordinal_5439(0,0xffffffff);
    }
  }
  *(undefined4 *)((int)param_1 + 0x2b8) = 0;
  return 0;
}

