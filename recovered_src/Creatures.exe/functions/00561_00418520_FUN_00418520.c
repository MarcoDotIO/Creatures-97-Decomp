/*
 * Program: Creatures.exe
 * Function: FUN_00418520
 * Entry: 00418520
 * Namespace: Global
 * Prototype: undefined FUN_00418520(int param_1)
 */


void __fastcall FUN_00418520(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00436448 = param_1;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x3f;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x188);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

