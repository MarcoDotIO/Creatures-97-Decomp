/*
 * Program: Creatures.exe
 * Function: FUN_00418060
 * Entry: 00418060
 * Namespace: Global
 * Prototype: undefined FUN_00418060(int param_1)
 */


void __fastcall FUN_00418060(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00438868) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(DAT_00438864 + iVar1) + 0x1a) == param_1) {
        FUN_004016c0(param_1,*(int *)(DAT_00438864 + iVar1),5,0,0,0);
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00438868);
  }
  return;
}

