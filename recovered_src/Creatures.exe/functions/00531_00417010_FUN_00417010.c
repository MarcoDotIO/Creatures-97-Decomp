/*
 * Program: Creatures.exe
 * Function: FUN_00417010
 * Entry: 00417010
 * Namespace: Global
 * Prototype: undefined FUN_00417010(int * param_1)
 */


void __fastcall FUN_00417010(int *param_1)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_0041a4a0((void *)param_1[0x12],&local_10);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_10,local_c,local_8,local_4);
  return;
}

