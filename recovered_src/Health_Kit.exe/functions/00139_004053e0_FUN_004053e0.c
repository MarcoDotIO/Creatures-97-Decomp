/*
 * Program: Health_Kit.exe
 * Function: FUN_004053e0
 * Entry: 004053e0
 * Namespace: Global
 * Prototype: undefined FUN_004053e0(int param_1)
 */


void __fastcall FUN_004053e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 100);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x480) != 0)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_004088c0(param_1);
  return;
}

