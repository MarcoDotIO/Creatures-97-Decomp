/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040b3d0
 * Entry: 0040b3d0
 * Namespace: Global
 * Prototype: undefined FUN_0040b3d0(void * this, int param_1)
 */


void __thiscall FUN_0040b3d0(void *this,int param_1)

{
  FUN_0040b400(this);
  *(int *)((int)this + 0x2b0) = param_1 << 10;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return;
}

