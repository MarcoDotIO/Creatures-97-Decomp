/*
 * Program: Creatures.exe
 * Function: FUN_00414ec0
 * Entry: 00414ec0
 * Namespace: Global
 * Prototype: uint FUN_00414ec0(int param_1)
 */


uint __fastcall FUN_00414ec0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1 & 0xff000000;
  if (uVar2 == 0x2000000) {
    return (uVar1 & 0xff0000) >> 0x10;
  }
  if (uVar2 == 0x3000000) {
    return ((uVar1 & 0xff0000) >> 0x10) + 0x19;
  }
  if (uVar2 == 0x4000000) {
    return ((uVar1 & 0xff0000) >> 0x10) + 0x23;
  }
  return 0;
}

