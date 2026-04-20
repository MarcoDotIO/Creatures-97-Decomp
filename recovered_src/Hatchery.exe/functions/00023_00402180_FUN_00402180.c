/*
 * Program: Hatchery.exe
 * Function: FUN_00402180
 * Entry: 00402180
 * Namespace: Global
 * Prototype: undefined FUN_00402180(void * this, undefined4 param_1, int param_2, int param_3)
 */


void __thiscall FUN_00402180(void *this,undefined4 param_1,int param_2,int param_3)

{
  Ordinal_2081();
  *(int *)((int)this + 0x3a4) = param_2;
  *(int *)((int)this + 0x39c) = (param_2 + -0x140) / 2;
  *(int *)((int)this + 0x3a8) = param_3;
  *(int *)((int)this + 0x3a0) = (param_3 + -0xf0) / 2;
  return;
}

