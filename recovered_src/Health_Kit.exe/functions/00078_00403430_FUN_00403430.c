/*
 * Program: Health_Kit.exe
 * Function: FUN_00403430
 * Entry: 00403430
 * Namespace: Global
 * Prototype: undefined4 FUN_00403430(int param_1)
 */


undefined4 __fastcall FUN_00403430(int param_1)

{
  int local_10 [4];
  
  FUN_00403380(param_1);
  local_10[1] = 0x87;
  local_10[2] = 0xb9;
  local_10[0] = *(int *)(param_1 + 0x100);
  local_10[3] = 0xc3;
  FUN_00402690(*(void **)(param_1 + 0xdc),0,local_10);
  return 1;
}

