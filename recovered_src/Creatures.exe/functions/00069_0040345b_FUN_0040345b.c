/*
 * Program: Creatures.exe
 * Function: FUN_0040345b
 * Entry: 0040345b
 * Namespace: Global
 * Prototype: BOOL FUN_0040345b(int param_1)
 */


BOOL __fastcall FUN_0040345b(int param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  bool in_ZF;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  LONG LStack00000010;
  LONG LStack00000014;
  
  if (in_ZF) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  iStack00000008 = *(int *)(param_1 + 4) + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  if (0x209f < iStack00000008) {
    iStack00000008 = iStack00000008 + -0x20a0;
  }
  iStack00000008 = iStack00000008 + ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2);
  iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
  iVar2 = iVar3 * 3;
  iStack00000004 = *(int *)(param_1 + 8) + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  iStack0000000c = iStack00000004 + iVar3 / 2;
  LStack00000010 = *(LONG *)(DAT_004382c4 + 0x72);
  LStack00000014 = *(LONG *)(DAT_004382c4 + 0x76);
  BVar1 = FUN_0040b1e0((RECT *)&stack0x00000000,(POINT *)&stack0x00000010);
  return BVar1;
}

