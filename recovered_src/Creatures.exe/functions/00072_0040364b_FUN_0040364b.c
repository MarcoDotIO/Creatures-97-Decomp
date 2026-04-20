/*
 * Program: Creatures.exe
 * Function: FUN_0040364b
 * Entry: 0040364b
 * Namespace: Global
 * Prototype: undefined FUN_0040364b(void * param_1)
 */


void __fastcall FUN_0040364b(void *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  bool in_ZF;
  LONG LStack00000008;
  LONG LStack0000000c;
  LONG LStack00000010;
  LONG LStack00000014;
  
  if (in_ZF) {
    *(undefined4 *)((int)param_1 + 0x48c) = 0;
    return;
  }
  iVar4 = ((POINT *)(DAT_004382c4 + 0x72))->x;
  iVar1 = *(int *)(DAT_004382c4 + 0x76);
  LStack00000008 = 0;
  LStack0000000c = 0;
  LStack00000010 = 0x20a0;
  LStack00000014 = 0x4b0;
  BVar3 = PtInRect((RECT *)&stack0x00000008,*(POINT *)(DAT_004382c4 + 0x72));
  if (BVar3 != 0) {
    iVar4 = iVar4 + (*(int *)((int)param_1 + 4) - *(int *)((int)param_1 + 0xc)) / 2;
    iVar2 = (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 0x10)) * 5;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x20a0;
    }
    else if (0x209f < iVar4) {
      iVar4 = iVar4 + -0x20a0;
    }
    FUN_00403530(param_1,iVar4,iVar1 + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3));
  }
  return;
}

