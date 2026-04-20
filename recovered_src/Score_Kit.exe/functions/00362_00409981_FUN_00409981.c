/*
 * Program: Score_Kit.exe
 * Function: FUN_00409981
 * Entry: 00409981
 * Namespace: Global
 * Prototype: undefined4 FUN_00409981(int param_1, undefined4 param_2)
 */


undefined4 FUN_00409981(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_1035();
  *(char *)(iVar1 + 0x14) = (char)param_1;
  *(undefined4 *)(iVar1 + 0x1040) = param_2;
  if (param_1 == 0) {
    _setmbcp(-3);
  }
  return 1;
}

