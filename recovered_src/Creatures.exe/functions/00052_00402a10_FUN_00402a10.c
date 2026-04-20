/*
 * Program: Creatures.exe
 * Function: FUN_00402a10
 * Entry: 00402a10
 * Namespace: Global
 * Prototype: undefined FUN_00402a10(void * this, int param_1)
 */


void __thiscall FUN_00402a10(void *this,int param_1)

{
  if (*(int *)(*(int *)((int)this + 0x2c) + 0x20) != *(int *)(param_1 + 0x20)) {
    FUN_00402a30((int)this);
  }
  return;
}

