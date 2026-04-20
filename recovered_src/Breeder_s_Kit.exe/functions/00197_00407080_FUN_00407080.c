/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00407080
 * Entry: 00407080
 * Namespace: Global
 * Prototype: undefined FUN_00407080(int param_1)
 */


void __fastcall FUN_00407080(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x2198) == 0);
  *(uint *)(param_1 + 0x2198) = uVar1;
  *(uint *)(param_1 + 0x219c) = (uint)(uVar1 == 0);
  return;
}

