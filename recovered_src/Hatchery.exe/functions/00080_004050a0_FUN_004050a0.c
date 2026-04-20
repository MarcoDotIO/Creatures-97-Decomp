/*
 * Program: Hatchery.exe
 * Function: FUN_004050a0
 * Entry: 004050a0
 * Namespace: Global
 * Prototype: undefined FUN_004050a0(void * this, int param_1)
 */


void __thiscall FUN_004050a0(void *this,int param_1)

{
  FUN_004050d0(this);
  *(int *)((int)this + 0x2b0) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return;
}

