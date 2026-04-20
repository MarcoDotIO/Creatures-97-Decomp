/*
 * Program: Creatures.exe
 * Function: FUN_00417ac0
 * Entry: 00417ac0
 * Namespace: Global
 * Prototype: undefined FUN_00417ac0(int * param_1)
 */


void __fastcall FUN_00417ac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00414da0(param_1);
  if ((0 < *(int *)((int)param_1 + 0x3f)) &&
     (iVar1 = *(int *)((int)param_1 + 0x43) + -1, *(int *)((int)param_1 + 0x43) = iVar1, iVar1 < 1))
  {
    FUN_004150e0(param_1,9,param_1,0);
    *(undefined4 *)((int)param_1 + 0x43) = *(undefined4 *)((int)param_1 + 0x3f);
  }
  iVar1 = 0;
  if (0 < param_1[0x12]) {
    piVar2 = param_1 + 0x13;
    do {
      if ((void *)*piVar2 != (void *)0x0) {
        FUN_0041a590((void *)*piVar2);
      }
      piVar2 = piVar2 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x12]);
  }
  return;
}

