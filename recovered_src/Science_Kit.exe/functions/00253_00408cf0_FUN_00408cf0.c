/*
 * Program: Science_Kit.exe
 * Function: FUN_00408cf0
 * Entry: 00408cf0
 * Namespace: Global
 * Prototype: undefined4 FUN_00408cf0(int param_1)
 */


undefined4 __fastcall FUN_00408cf0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 8;
  piVar2 = (int *)(param_1 + 0xb0);
  iVar4 = 0x40;
  do {
    iVar3 = 5;
    iVar5 = 0x30;
    do {
      *piVar2 = iVar1;
      piVar2[1] = iVar3;
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar1 = iVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 1;
}

