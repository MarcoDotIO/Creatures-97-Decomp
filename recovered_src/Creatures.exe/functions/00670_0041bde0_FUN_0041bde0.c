/*
 * Program: Creatures.exe
 * Function: FUN_0041bde0
 * Entry: 0041bde0
 * Namespace: Global
 * Prototype: undefined4 FUN_0041bde0(int param_1)
 */


undefined4 __fastcall FUN_0041bde0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = *(undefined4 **)(param_1 + 8) + 1;
  return uVar1;
}

