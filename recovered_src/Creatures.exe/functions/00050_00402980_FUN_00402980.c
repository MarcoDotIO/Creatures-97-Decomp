/*
 * Program: Creatures.exe
 * Function: FUN_00402980
 * Entry: 00402980
 * Namespace: Global
 * Prototype: undefined FUN_00402980(void * this, int param_1)
 */


void __thiscall FUN_00402980(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x30) = 1;
  FUN_00402b90(this,param_1,*(int *)((int)this + 4),*(int *)((int)this + 8),
               *(int *)((int)this + 0xc),*(int *)((int)this + 0x10));
  return;
}

