/*
 * Program: Creatures.exe
 * Function: FUN_0041ef00
 * Entry: 0041ef00
 * Namespace: Global
 * Prototype: undefined FUN_0041ef00(void * param_1)
 */


void __fastcall FUN_0041ef00(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < DAT_00437fb8) {
    iVar2 = 0;
    do {
      if (*(void **)(*(int *)(DAT_00437fb4 + iVar2) + 0x1a) == param_1) {
        iVar1 = iVar1 + 1;
        FUN_004016c0(param_1,*(int *)(DAT_00437fb4 + iVar2),5,0,0,0);
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00437fb8);
  }
  if (iVar1 == 0) {
    FUN_004219b0(param_1,param_1,0,0);
  }
  return;
}

