/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00401cd0
 * Entry: 00401cd0
 * Namespace: Global
 * Prototype: undefined4 FUN_00401cd0(int param_1)
 */


undefined4 __fastcall FUN_00401cd0(int param_1)

{
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != 0)) {
    Ordinal_731(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}

