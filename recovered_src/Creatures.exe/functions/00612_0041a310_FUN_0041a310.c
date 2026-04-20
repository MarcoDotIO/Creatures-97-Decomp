/*
 * Program: Creatures.exe
 * Function: FUN_0041a310
 * Entry: 0041a310
 * Namespace: Global
 * Prototype: undefined FUN_0041a310(void * this, int param_1, undefined4 param_2)
 */


void __thiscall FUN_0041a310(void *this,int param_1,undefined4 param_2)

{
  FUN_0040b1b0(&param_1);
  *(int *)((int)this + 0xe) = param_1;
  *(undefined4 *)((int)this + 0x12) = param_2;
  return;
}

