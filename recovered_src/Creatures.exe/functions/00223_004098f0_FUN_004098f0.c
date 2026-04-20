/*
 * Program: Creatures.exe
 * Function: FUN_004098f0
 * Entry: 004098f0
 * Namespace: Global
 * Prototype: undefined4 FUN_004098f0(void * this, int param_1, undefined4 param_2)
 */


undefined4 __thiscall FUN_004098f0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x2b0) != 0) {
    return 6;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    piVar1 = *(int **)(param_1 * 0x14 + 0x10 + (int)this);
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_2);
    piVar1 = *(int **)(param_1 * 0x14 + 0x10 + (int)this);
    (**(code **)(*piVar1 + 0x40))(piVar1,param_1);
    return 0;
  }
  return 4;
}

