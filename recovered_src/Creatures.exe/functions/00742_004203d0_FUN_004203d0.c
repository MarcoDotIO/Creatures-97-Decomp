/*
 * Program: Creatures.exe
 * Function: FUN_004203d0
 * Entry: 004203d0
 * Namespace: Global
 * Prototype: undefined FUN_004203d0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004203d0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)this + 0x70))();
  *(undefined4 *)((int)this + 0x1a) = 0;
  piVar1 = FUN_004149a0(this,8,8);
  if (piVar1 == (int *)0x0) {
    *(undefined1 *)((int)this + 8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x54) + 10) = *(undefined4 *)((int)this + 0x7a);
    FUN_00414f10(this);
    *(undefined4 *)((int)this + 0x102) = *(undefined4 *)((int)this + 0xf2);
    *(undefined4 *)((int)this + 0x106) = *(undefined4 *)((int)this + 0xf6);
    *(undefined4 *)((int)this + 0x10a) = *(undefined4 *)((int)this + 0xfa);
    *(undefined4 *)((int)this + 0x10e) = *(undefined4 *)((int)this + 0xfe);
    *(undefined4 *)((int)this + 0x76) = *(undefined4 *)((int)this + 0x16);
    FUN_0040eb10(this);
    FUN_0040eac0((int)this);
    FUN_0040f1d0((int)this);
  }
  else {
    FUN_004016c0(piVar1,this,4,0,0,0);
  }
  FUN_004150e0(this,5,param_1,0);
  return;
}

