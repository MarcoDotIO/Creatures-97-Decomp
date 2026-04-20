/*
 * Program: Health_Kit.exe
 * Function: FUN_00403b80
 * Entry: 00403b80
 * Namespace: Global
 * Prototype: undefined4 FUN_00403b80(int param_1)
 */


undefined4 __fastcall FUN_00403b80(int param_1)

{
  if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0x188)) {
    FUN_00403430(param_1);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x100);
  }
  return 1;
}

