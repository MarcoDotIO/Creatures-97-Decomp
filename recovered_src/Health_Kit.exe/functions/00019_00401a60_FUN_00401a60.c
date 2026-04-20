/*
 * Program: Health_Kit.exe
 * Function: FUN_00401a60
 * Entry: 00401a60
 * Namespace: Global
 * Prototype: undefined FUN_00401a60(int param_1)
 */


void __fastcall FUN_00401a60(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x12f4) == 0);
  *(uint *)(param_1 + 0x12f4) = uVar1;
  *(uint *)(param_1 + 0x12f8) = (uint)(uVar1 == 0);
  return;
}

