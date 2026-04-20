/*
 * Program: Creatures.exe
 * Function: FUN_004172c0
 * Entry: 004172c0
 * Namespace: Global
 * Prototype: undefined FUN_004172c0(int param_1)
 */


void __fastcall FUN_004172c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 4) = 0x3000000;
  iVar1 = 10;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)(param_1 + 0xc4);
  iVar1 = 6;
  *(undefined4 *)(param_1 + 0x48) = 0;
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x124);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

