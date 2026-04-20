/*
 * Program: Creatures.exe
 * Function: FUN_0040c640
 * Entry: 0040c640
 * Namespace: Global
 * Prototype: undefined FUN_0040c640(int * param_1)
 */


void __fastcall FUN_0040c640(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  param_1[5] = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

