/*
 * Program: Creatures.exe
 * Function: FUN_00429ed0
 * Entry: 00429ed0
 * Namespace: Global
 * Prototype: undefined FUN_00429ed0(void * this, void * param_1)
 */


void __thiscall FUN_00429ed0(void *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)this = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 1) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 2) = (char)uVar1;
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 3) = (char)uVar1;
  FUN_00429ea0((void *)((int)this + 4),param_1);
  uVar1 = FUN_0041bda0(param_1,0,0xff);
  *(char *)((int)this + 0xe) = (char)uVar1;
  return;
}

