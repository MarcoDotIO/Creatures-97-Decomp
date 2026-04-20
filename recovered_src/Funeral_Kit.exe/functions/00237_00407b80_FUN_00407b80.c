/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407b80
 * Entry: 00407b80
 * Namespace: Global
 * Prototype: undefined FUN_00407b80(void * this, int param_1)
 */


void __thiscall FUN_00407b80(void *this,int param_1)

{
  FUN_00407bb0(this);
  *(int *)((int)this + 0x2b0) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return;
}

