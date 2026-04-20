/*
 * Program: Creatures.exe
 * Function: FUN_00401a10
 * Entry: 00401a10
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401a10(void * this, undefined4 param_1, undefined4 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8, undefined1 param_9, undefined1 param_10, undefined1 param_11, undefined1 param_12, undefined1 param_13, undefined1 param_14)
 */


undefined4 * __thiscall
FUN_00401a10(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
            undefined1 param_13,undefined1 param_14)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = param_3;
  *(undefined1 *)((int)this + 9) = param_4;
  *(undefined1 *)((int)this + 10) = param_5;
  *(undefined1 *)((int)this + 0xb) = param_6;
  *(undefined1 *)((int)this + 0xc) = param_7;
  *(undefined1 *)((int)this + 0xd) = param_9;
  *(undefined1 *)((int)this + 0xe) = param_11;
  *(undefined1 *)((int)this + 0xf) = param_13;
  *(undefined1 *)((int)this + 0x10) = param_8;
  *(undefined1 *)((int)this + 0x11) = param_10;
  *(undefined1 *)((int)this + 0x12) = param_12;
  *(undefined1 *)((int)this + 0x13) = param_14;
  return this;
}

