/*
 * Program: Science_Kit.exe
 * Function: FUN_0040c790
 * Entry: 0040c790
 * Namespace: Global
 * Prototype: undefined FUN_0040c790(int param_1)
 */


void __fastcall FUN_0040c790(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x9cc) == 0);
  *(uint *)(param_1 + 0x9cc) = uVar1;
  *(uint *)(param_1 + 0x9d0) = (uint)(uVar1 == 0);
  return;
}

