/*
 * Program: Score_Kit.exe
 * Function: FUN_00408ab0
 * Entry: 00408ab0
 * Namespace: Global
 * Prototype: undefined FUN_00408ab0(void * this, int param_1)
 */


void __thiscall FUN_00408ab0(void *this,int param_1)

{
  FUN_00408ae0(this);
  *(int *)((int)this + 0x2b0) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return;
}

