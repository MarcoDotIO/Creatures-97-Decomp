/*
 * Program: Creatures.exe
 * Function: FUN_004099c0
 * Entry: 004099c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004099c0(void * this, int param_1, int param_2)
 */


undefined4 __thiscall FUN_004099c0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  if (*(int *)((int)this + 0x2b0) != 0) {
    return 6;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    *(undefined4 *)((int)this + param_1 * 0x14 + 0x18) = 0;
    if (param_2 != 0) {
      piVar1 = *(int **)((int)this + param_1 * 0x14 + 0x10);
      (**(code **)(*piVar1 + 0x18))(piVar1,local_4);
      *(int *)((int)this + param_1 * 0x14 + 0x1c) = (-10000 - unaff_ESI) / 0xf;
      return 0;
    }
    FUN_004091b0(this,param_1);
    return 0;
  }
  return 4;
}

