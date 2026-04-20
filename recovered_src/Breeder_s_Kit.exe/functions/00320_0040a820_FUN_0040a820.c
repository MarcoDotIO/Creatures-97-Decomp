/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040a820
 * Entry: 0040a820
 * Namespace: Global
 * Prototype: undefined FUN_0040a820(void * this, int param_1)
 */


void __thiscall FUN_0040a820(void *this,int param_1)

{
  FUN_0040a850(this);
  *(int *)((int)this + 0x2b0) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return;
}

