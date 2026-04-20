/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403660
 * Entry: 00403660
 * Namespace: Global
 * Prototype: undefined FUN_00403660(int param_1)
 */


void __fastcall FUN_00403660(int param_1)

{
  if (*(int *)(param_1 + 0x224) == 0) {
    *(uint *)(param_1 + 0xb5c) = (uint)(*(int *)(param_1 + 0xb5c) == 0);
    FUN_00408700(param_1 + 0x238);
    FUN_00405f40(param_1 + 0x6b0);
  }
  return;
}

