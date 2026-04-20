/*
 * Program: Creatures.exe
 * Function: FUN_0041a340
 * Entry: 0041a340
 * Namespace: Global
 * Prototype: undefined FUN_0041a340(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0041a340(void *this,int param_1,int param_2)

{
  *(int *)((int)this + 0xe) = *(int *)((int)this + 0xe) + param_1;
  FUN_0040b1b0((int *)((int)this + 0xe));
  *(int *)((int)this + 0x12) = *(int *)((int)this + 0x12) + param_2;
  return;
}

