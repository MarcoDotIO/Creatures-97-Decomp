/*
 * Program: Health_Kit.exe
 * Function: FUN_0040af50
 * Entry: 0040af50
 * Namespace: Global
 * Prototype: undefined4 FUN_0040af50(int param_1)
 */


undefined4 __fastcall FUN_0040af50(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_0040afa0();
  FUN_0040b2d0(param_1);
  return 1;
}

