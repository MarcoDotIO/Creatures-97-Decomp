/*
 * Program: Creatures.exe
 * Function: FUN_00403640
 * Entry: 00403640
 * Namespace: Global
 * Prototype: undefined FUN_00403640(int param_1)
 */


void __fastcall FUN_00403640(int param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  RECT RStack_10;
  
  if (DAT_004382c4 == 0) {
    *(undefined4 *)(param_1 + 0x48c) = 0;
    return;
  }
  iVar4 = ((POINT *)(DAT_004382c4 + 0x72))->x;
  iVar1 = *(int *)(DAT_004382c4 + 0x76);
  RStack_10.left = 0;
  RStack_10.top = 0;
  RStack_10.right = 0x20a0;
  RStack_10.bottom = 0x4b0;
  BVar3 = PtInRect(&RStack_10,*(POINT *)(DAT_004382c4 + 0x72));
  if (BVar3 != 0) {
    iVar4 = iVar4 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc)) / 2;
    iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x10)) * 5;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x20a0;
    }
    else if (0x209f < iVar4) {
      iVar4 = iVar4 + -0x20a0;
    }
    FUN_00403530((void *)param_1,iVar4,iVar1 + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3));
  }
  return;
}

