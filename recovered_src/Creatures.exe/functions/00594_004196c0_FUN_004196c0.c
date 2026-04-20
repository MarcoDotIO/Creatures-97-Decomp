/*
 * Program: Creatures.exe
 * Function: FUN_004196c0
 * Entry: 004196c0
 * Namespace: Global
 * Prototype: undefined FUN_004196c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */


void FUN_004196c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Ordinal_2704();
  if (iVar1 == 0x3ec) {
    GetStockObject(0);
    return;
  }
  Ordinal_3956(param_1,param_2,param_3);
  return;
}

