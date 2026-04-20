/*
 * Program: Creatures.exe
 * Function: FUN_004092a0
 * Entry: 004092a0
 * Namespace: Global
 * Prototype: undefined FUN_004092a0(void * this, int param_1)
 */


void __thiscall FUN_004092a0(void *this,int param_1)

{
  FUN_004092d0(this);
  *(int *)((int)this + 0x2b4) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  return;
}

