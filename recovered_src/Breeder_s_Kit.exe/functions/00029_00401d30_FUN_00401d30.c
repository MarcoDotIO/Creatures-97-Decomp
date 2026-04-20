/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00401d30
 * Entry: 00401d30
 * Namespace: Global
 * Prototype: undefined FUN_00401d30(int param_1)
 */


void __fastcall FUN_00401d30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 100);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x480) != 0)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_0040b560(param_1);
  return;
}

