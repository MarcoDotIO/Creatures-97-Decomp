/*
 * Program: Health_Kit.exe
 * Function: FUN_00401a90
 * Entry: 00401a90
 * Namespace: Global
 * Prototype: undefined4 FUN_00401a90(int param_1)
 */


undefined4 __fastcall FUN_00401a90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x13c);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

