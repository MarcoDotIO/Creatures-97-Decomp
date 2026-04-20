/*
 * Program: Creatures.exe
 * Function: FUN_0041fcc0
 * Entry: 0041fcc0
 * Namespace: Global
 * Prototype: undefined FUN_0041fcc0(int param_1)
 */


void __fastcall FUN_0041fcc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x113) = 1;
  do {
    if ((*(char *)(param_1 + 0x113) == '\x01') &&
       (*(int *)((int)&DAT_00436888 + iVar2) < (int)(uint)*(byte *)(param_1 + 0x2b06 + iVar1))) {
      *(undefined1 *)(param_1 + 0x113) = 0;
    }
    if (*(int *)((int)&DAT_004368c8 + iVar2) < (int)(uint)*(byte *)(param_1 + 0x2b06 + iVar1)) {
      *(undefined1 *)(param_1 + 0x113) = 2;
    }
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0x40);
  return;
}

