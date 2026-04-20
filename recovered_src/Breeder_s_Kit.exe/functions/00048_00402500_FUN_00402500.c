/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402500
 * Entry: 00402500
 * Namespace: Global
 * Prototype: undefined FUN_00402500(int param_1)
 */


void __fastcall FUN_00402500(int param_1)

{
  *(uint *)(param_1 + 0x3588) = (uint)(*(int *)(param_1 + 0x3588) == 0);
  FUN_00407080(param_1 + 0x238);
  FUN_00408190(param_1 + 0x3168);
  return;
}

