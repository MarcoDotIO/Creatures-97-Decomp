/*
 * Program: Science_Kit.exe
 * Function: FUN_00402510
 * Entry: 00402510
 * Namespace: Global
 * Prototype: undefined4 FUN_00402510(int param_1)
 */


undefined4 __fastcall FUN_00402510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  GetClientRect(*(HWND *)(*(int *)(param_1 + 0x65c) + 0x20),(LPRECT)(param_1 + 0x610));
  iVar1 = *(int *)(param_1 + 0x618);
  iVar3 = 0x100;
  iVar2 = ((LPRECT)(param_1 + 0x610))->left;
  piVar4 = (int *)(param_1 + 0x204);
  iVar5 = 0;
  do {
    iVar3 = iVar3 + -1;
    *piVar4 = (int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + (iVar1 - iVar2);
  } while (iVar3 != 0);
  return 1;
}

