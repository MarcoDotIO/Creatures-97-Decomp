/*
 * Program: Creatures.exe
 * Function: FUN_00429f40
 * Entry: 00429f40
 * Namespace: Global
 * Prototype: undefined FUN_00429f40(void * this, void * param_1)
 */


void __thiscall FUN_00429f40(void *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(uint *)this = uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 4) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,(uint)*(byte *)((int)this + 4),0xff);
  *(char *)((int)this + 5) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,3);
  *(char *)((int)this + 6) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,8);
  *(char *)((int)this + 7) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 8) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,(uint)*(byte *)((int)this + 8),0xff);
  *(char *)((int)this + 9) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 10) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,(uint)*(byte *)((int)this + 10),0xff);
  *(char *)((int)this + 0xb) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,2);
  *(char *)((int)this + 0xc) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0xd) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0xe) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0xf) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0x10) = (char)uVar1;
  FUN_00429ea0((void *)((int)this + 0x11),param_1);
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0x1b) = (char)uVar1;
  FUN_00429ea0((void *)((int)this + 0x1c),param_1);
  FUN_00429ea0((void *)((int)this + 0x26),param_1);
  FUN_00429ea0((void *)((int)this + 0x30),param_1);
  return;
}

