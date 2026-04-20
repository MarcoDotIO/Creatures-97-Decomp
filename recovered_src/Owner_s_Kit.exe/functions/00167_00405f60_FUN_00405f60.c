/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405f60
 * Entry: 00405f60
 * Namespace: Global
 * Prototype: undefined FUN_00405f60(int param_1)
 */


void __fastcall FUN_00405f60(int param_1)

{
  Ordinal_5610(1);
  if ((*(int *)(param_1 + 0x11c) != 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    Ordinal_762(*(undefined4 *)(param_1 + 0x44c));
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}

