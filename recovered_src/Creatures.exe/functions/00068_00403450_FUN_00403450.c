/*
 * Program: Creatures.exe
 * Function: FUN_00403450
 * Entry: 00403450
 * Namespace: Global
 * Prototype: undefined4 FUN_00403450(int param_1)
 */


undefined4 __fastcall FUN_00403450(int param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  RECT RStack_18;
  POINT PStack_8;
  
  if (DAT_004382c4 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  RStack_18.left = *(int *)(param_1 + 4) + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  if (0x209f < RStack_18.left) {
    RStack_18.left = RStack_18.left + -0x20a0;
  }
  RStack_18.right = RStack_18.left + ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2);
  iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
  iVar2 = iVar3 * 3;
  RStack_18.top = *(int *)(param_1 + 8) + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  RStack_18.bottom = RStack_18.top + iVar3 / 2;
  PStack_8.x = *(LONG *)(DAT_004382c4 + 0x72);
  PStack_8.y = *(LONG *)(DAT_004382c4 + 0x76);
  BVar1 = FUN_0040b1e0(&RStack_18,&PStack_8);
  return BVar1;
}

