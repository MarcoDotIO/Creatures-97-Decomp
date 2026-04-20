/*
 * Program: Health_Kit.exe
 * Function: FUN_00403db0
 * Entry: 00403db0
 * Namespace: Global
 * Prototype: undefined FUN_00403db0(undefined1 * param_1, int param_2)
 */


void FUN_00403db0(undefined1 *param_1,int param_2)

{
  *param_1 = 0xbc;
  param_1[param_2] = 0x56;
  param_1[param_2 * 2] = 0x1e;
  return;
}

