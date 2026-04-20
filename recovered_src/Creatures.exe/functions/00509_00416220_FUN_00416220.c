/*
 * Program: Creatures.exe
 * Function: FUN_00416220
 * Entry: 00416220
 * Namespace: Global
 * Prototype: undefined FUN_00416220(int * param_1)
 */


void __fastcall FUN_00416220(int *param_1)

{
  undefined4 local_8;
  int local_4;
  
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1[0x12] + 10) = 9999;
  FUN_00402130(DAT_00436eb0,&local_4,&local_8);
  (**(code **)(*param_1 + 0x54))(local_4,local_8);
  return;
}

