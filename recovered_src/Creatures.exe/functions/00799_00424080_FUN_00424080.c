/*
 * Program: Creatures.exe
 * Function: FUN_00424080
 * Entry: 00424080
 * Namespace: Global
 * Prototype: undefined FUN_00424080(int param_1)
 */


void __fastcall FUN_00424080(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0xa4) = iVar1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(int *)(param_1 + 0x68) = param_1 + 0x18;
  if ((iVar1 == 0) || ((*(uint *)(iVar1 + 4) & 0xff000000) != 0x4000000)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x7e6);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x6c);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

