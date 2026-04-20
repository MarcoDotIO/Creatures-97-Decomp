/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402f60
 * Entry: 00402f60
 * Namespace: Global
 * Prototype: undefined FUN_00402f60(int param_1)
 */


void __fastcall FUN_00402f60(int param_1)

{
  if (*(int *)(param_1 + 0xb4c) != 0) {
    Ordinal_4993(param_1 + 0x52c);
    *(undefined4 *)(param_1 + 0xb4c) = 0;
  }
  return;
}

