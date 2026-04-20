/*
 * Program: Creatures.exe
 * Function: FUN_0040ea40
 * Entry: 0040ea40
 * Namespace: Global
 * Prototype: undefined FUN_0040ea40(int param_1)
 */


void __fastcall FUN_0040ea40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xfa);
  iVar2 = *(int *)(param_1 + 0x12);
  if (iVar2 < iVar1) {
    iVar5 = *(int *)(param_1 + 0xf2);
    iVar3 = iVar2 - iVar1;
    iVar4 = *(int *)(param_1 + 10);
    *(undefined1 *)(param_1 + 0x112) = 1;
    if (iVar4 <= iVar5 + iVar3) goto LAB_0040eaa2;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xf2);
    iVar4 = *(int *)(param_1 + 10);
    if (iVar4 <= iVar5) goto LAB_0040eaa2;
    iVar3 = iVar4 - iVar5;
    *(undefined1 *)(param_1 + 0x112) = 1;
    if (iVar1 + iVar3 <= iVar2) goto LAB_0040eaa2;
  }
  *(undefined1 *)(param_1 + 0x112) = 0;
  iVar3 = (((iVar4 - iVar1) - iVar5) + iVar2) / 2;
LAB_0040eaa2:
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x72) = *(int *)(param_1 + 0x72) + iVar3;
    FUN_0040e700(param_1);
  }
  return;
}

