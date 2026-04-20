/*
 * Program: Creatures.exe
 * Function: FUN_00415b30
 * Entry: 00415b30
 * Namespace: Global
 * Prototype: undefined FUN_00415b30(int * param_1)
 */


void __fastcall FUN_00415b30(int *param_1)

{
  int iVar1;
  
  FUN_00414da0(param_1);
  if ((char)param_1[2] == '\x01') {
    FUN_00415ea0(param_1);
  }
  else if ((char)param_1[2] == '\x04') {
    FUN_004163e0((int)param_1);
  }
  else {
    FUN_0041a590((void *)param_1[0x12]);
  }
  if ((0 < *(int *)((int)param_1 + 0x3f)) &&
     (iVar1 = *(int *)((int)param_1 + 0x43) + -1, *(int *)((int)param_1 + 0x43) = iVar1, iVar1 < 1))
  {
    FUN_004150e0(param_1,9,param_1,0);
    *(undefined4 *)((int)param_1 + 0x43) = *(undefined4 *)((int)param_1 + 0x3f);
  }
  return;
}

