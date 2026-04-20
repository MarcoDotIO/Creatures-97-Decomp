/*
 * Program: Creatures.exe
 * Function: FUN_0040f3d0
 * Entry: 0040f3d0
 * Namespace: Global
 * Prototype: undefined FUN_0040f3d0(void * this, undefined4 param_1, undefined4 param_2)
 */


void __thiscall FUN_0040f3d0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x102) = *(undefined4 *)((int)this + 0xf2);
  *(undefined4 *)((int)this + 0x106) = *(undefined4 *)((int)this + 0xf6);
  *(undefined4 *)((int)this + 0x10a) = *(undefined4 *)((int)this + 0xfa);
  *(undefined4 *)((int)this + 0x72) = param_1;
  *(undefined4 *)((int)this + 0x10e) = *(undefined4 *)((int)this + 0xfe);
  *(undefined4 *)((int)this + 0x76) = param_2;
  FUN_0040eb10(this);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),*(int *)((int)this + 0x102),
               *(int *)((int)this + 0x106),*(int *)((int)this + 0x10a),*(int *)((int)this + 0x10e));
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),*(int *)((int)this + 0xf2),*(int *)((int)this + 0xf6)
               ,*(int *)((int)this + 0xfa),*(int *)((int)this + 0xfe));
  return;
}

