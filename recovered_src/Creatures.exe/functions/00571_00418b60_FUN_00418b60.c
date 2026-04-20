/*
 * Program: Creatures.exe
 * Function: FUN_00418b60
 * Entry: 00418b60
 * Namespace: Global
 * Prototype: undefined FUN_00418b60(int param_1)
 */


void __fastcall FUN_00418b60(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined1 *)(param_1 + 0x13c);
  iVar1 = 0x10;
  puVar3 = (undefined4 *)(param_1 + 0x1ec);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0xb;
    iVar1 = iVar1 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x22f) = 0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  *(undefined1 *)(param_1 + 0x22d) = 0;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x231) = 0;
  return;
}

