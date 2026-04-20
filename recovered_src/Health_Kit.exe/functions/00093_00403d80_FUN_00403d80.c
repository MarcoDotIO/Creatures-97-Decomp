/*
 * Program: Health_Kit.exe
 * Function: FUN_00403d80
 * Entry: 00403d80
 * Namespace: Global
 * Prototype: undefined FUN_00403d80(undefined1 * param_1, int param_2)
 */


void FUN_00403d80(undefined1 *param_1,int param_2)

{
  *param_1 = 0xbc;
  param_1[-param_2] = 0x56;
  param_1[param_2] = 0x56;
  param_1[param_2 * -2] = 0x1e;
  param_1[param_2 * 2] = 0x1e;
  return;
}

