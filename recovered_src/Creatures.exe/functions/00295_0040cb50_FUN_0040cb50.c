/*
 * Program: Creatures.exe
 * Function: FUN_0040cb50
 * Entry: 0040cb50
 * Namespace: Global
 * Prototype: undefined4 FUN_0040cb50(int param_1)
 */


undefined4 __fastcall FUN_0040cb50(int param_1)

{
  undefined4 uVar1;
  
  DAT_00435f4c = DAT_00435f4c + 1;
  *(int *)(param_1 + 0x19) = DAT_00435f4c;
  if ((*(byte *)(param_1 + 8) & 3) != 0) {
    return *(undefined4 *)(param_1 + 9);
  }
  uVar1 = FUN_0040ceb0(param_1);
  return uVar1;
}

