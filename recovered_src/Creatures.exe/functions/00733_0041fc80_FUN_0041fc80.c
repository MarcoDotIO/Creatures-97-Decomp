/*
 * Program: Creatures.exe
 * Function: FUN_0041fc80
 * Entry: 0041fc80
 * Namespace: Global
 * Prototype: uint FUN_0041fc80(int param_1)
 */


uint __fastcall FUN_0041fc80(int param_1)

{
  undefined4 in_EAX;
  undefined3 uVar3;
  int iVar1;
  uint uVar2;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,*(char *)(param_1 + 0x115));
  if ((*(char *)(param_1 + 0x115) == '\0') &&
     (uVar2 = CONCAT31(uVar3,*(char *)(param_1 + 0x2b78)), *(char *)(param_1 + 0x2b78) == '\0')) {
    iVar1 = rand();
    uVar2 = iVar1 / 0x15;
    if (iVar1 % 0x15 != 0) {
      *(undefined1 *)(param_1 + 0x114) = 1;
      return uVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x114) = 0;
  return uVar2;
}

