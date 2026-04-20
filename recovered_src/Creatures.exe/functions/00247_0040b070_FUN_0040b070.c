/*
 * Program: Creatures.exe
 * Function: FUN_0040b070
 * Entry: 0040b070
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b070(void * this, int param_1, int param_2)
 */


undefined4 __thiscall FUN_0040b070(void *this,int param_1,int param_2)

{
  *(int *)((int)this + param_1 * 4 + 4) = *(int *)((int)this + param_1 * 4 + 4) + param_2;
  if (param_1 == 2) {
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  }
  return 1;
}

