/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409a90
 * Entry: 00409a90
 * Namespace: Global
 * Prototype: undefined4 FUN_00409a90(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00409a90(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x130) != 0) {
    FUN_004096f0(this,(uint)(*(int *)((int)this + 0xa4) != 0));
    (**(code **)(**(int **)((int)this + 0xbc) + 8))(param_1);
    return 1;
  }
  return 0;
}

