/*
 * Program: Creatures.exe
 * Function: FUN_00419280
 * Entry: 00419280
 * Namespace: Global
 * Prototype: undefined FUN_00419280(void * this, int param_1)
 */


void __thiscall FUN_00419280(void *this,int param_1)

{
  if (-1 < *(int *)((int)this + 0x23)) {
    FUN_004099c0(DAT_00436eb8,*(int *)((int)this + 0x23),param_1);
  }
  *(undefined4 *)((int)this + 0x23) = 0xffffffff;
  *(undefined4 *)((int)this + 0x27) = 0;
  *(undefined4 *)((int)this + 0x2b) = 0;
  return;
}

