/*
 * Program: Health_Kit.exe
 * Function: FUN_0040af80
 * Entry: 0040af80
 * Namespace: Global
 * Prototype: undefined FUN_0040af80(int param_1)
 */


void __fastcall FUN_0040af80(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x17f4) == 0);
  *(uint *)(param_1 + 0x17f4) = uVar1;
  *(uint *)(param_1 + 0x17f8) = (uint)(uVar1 == 0);
  return;
}

