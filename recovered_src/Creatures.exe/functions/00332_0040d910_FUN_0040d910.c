/*
 * Program: Creatures.exe
 * Function: FUN_0040d910
 * Entry: 0040d910
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040d910(void * this, undefined4 param_1, undefined4 param_2)
 */


undefined4 * __thiscall FUN_0040d910(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return this;
}

