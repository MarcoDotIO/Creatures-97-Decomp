/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408700
 * Entry: 00408700
 * Namespace: Global
 * Prototype: undefined FUN_00408700(int param_1)
 */


void __fastcall FUN_00408700(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x150) == 0);
  *(uint *)(param_1 + 0x150) = uVar1;
  *(uint *)(param_1 + 0x154) = (uint)(uVar1 == 0);
  return;
}

