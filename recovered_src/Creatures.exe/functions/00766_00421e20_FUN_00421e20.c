/*
 * Program: Creatures.exe
 * Function: FUN_00421e20
 * Entry: 00421e20
 * Namespace: Global
 * Prototype: undefined FUN_00421e20(void * this, int param_1)
 */


void __thiscall FUN_00421e20(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00414ec0(param_1);
  *(undefined4 *)((int)this + uVar1 * 0x10 + 0x83c) = 0xffffffff;
  *(undefined4 *)((int)this + uVar1 * 0x10 + 0x840) = 0xffffffff;
  if (*(int *)((int)this + uVar1 * 0x10 + 0x836) == param_1) {
    *(undefined4 *)((int)this + uVar1 * 0x10 + 0x836) = 0;
    FUN_0042beb0(*(void **)((int)this + 0x2ac8),7,uVar1,0);
    FUN_0042be60(*(void **)((int)this + 0x2ac8),2,uVar1,0);
  }
  FUN_00421c20(this);
  return;
}

