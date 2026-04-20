/*
 * Program: Creatures.exe
 * Function: FUN_0040eac0
 * Entry: 0040eac0
 * Namespace: Global
 * Prototype: undefined FUN_0040eac0(int param_1)
 */


void __fastcall FUN_0040eac0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar3 = 1;
    iVar4 = (int)(char)(&DAT_00436000)[(uint)*(byte *)(param_1 + 0x70) * 6 + iVar5];
    if (iVar4 < 0) {
      iVar3 = -1;
    }
    for (iVar1 = *(int *)(param_1 + 0x58 + iVar5 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x26)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 10) + iVar4;
      iVar4 = iVar4 + iVar3;
      *(int *)(iVar1 + 10) = iVar2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  return;
}

