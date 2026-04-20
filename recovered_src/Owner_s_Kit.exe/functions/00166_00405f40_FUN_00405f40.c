/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405f40
 * Entry: 00405f40
 * Namespace: Global
 * Prototype: undefined FUN_00405f40(int param_1)
 */


void __fastcall FUN_00405f40(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 900) == 0);
  *(uint *)(param_1 + 900) = uVar1;
  *(uint *)(param_1 + 0x388) = (uint)(uVar1 == 0);
  return;
}

