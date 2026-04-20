/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d950
 * Entry: 0040d950
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d950(int param_1)
 */


undefined4 __fastcall FUN_0040d950(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0x9b4) = *(int *)(param_1 + 0x110) + iVar1;
  iVar6 = *(int *)(param_1 + 0x11c) - iVar1;
  *(int *)(param_1 + 0x9c0) = iVar6;
  iVar5 = 0x100;
  *(int *)(param_1 + 0x9bc) = ((*(int *)(param_1 + 0x118) - *(int *)(param_1 + 0xdc)) - iVar1) + -4;
  iVar1 = *(int *)(param_1 + 0x114) + iVar1;
  *(int *)(param_1 + 0x9b8) = iVar1;
  piVar3 = (int *)(param_1 + 400);
  iVar4 = 0;
  do {
    iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
    *piVar3 = iVar2;
    iVar5 = iVar5 + -1;
    *piVar3 = *(int *)(param_1 + 0x9c0) - iVar2;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + (iVar6 - iVar1);
  } while (iVar5 != 0);
  return 1;
}

