/*
 * Program: Creatures.exe
 * Function: FUN_0042a1b0
 * Entry: 0042a1b0
 * Namespace: Global
 * Prototype: undefined FUN_0042a1b0(void * this, void * param_1, int param_2)
 */


void __thiscall FUN_0042a1b0(void *this,void *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  void *this_00;
  int iVar3;
  
  uVar2 = FUN_0041bda0(param_1,0,0x3f);
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = FUN_0041bda0(param_1,0,0x3f);
  puVar1 = (uint *)((int)this + 0x10);
  *(uint *)((int)this + 8) = uVar2;
  uVar2 = FUN_0041bda0(param_1,1,0x3f);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = FUN_0041bda0(param_1,1,0x3f);
  *puVar1 = uVar2;
  if (0x3f < *(int *)((int)this + 4) + *(int *)((int)this + 0xc)) {
    *(int *)((int)this + 4) = 0x40 - *(int *)((int)this + 0xc);
  }
  if (0x3f < (int)(*(int *)((int)this + 8) + *puVar1)) {
    *(uint *)((int)this + 8) = 0x40 - *puVar1;
  }
  if (param_2 == 1) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x10);
  }
  if (param_2 == 2) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x28);
  }
  if (param_2 == 3) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x10);
  }
  if (param_2 == 4) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x28);
  }
  if (param_2 == 5) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x20);
  }
  if (param_2 == 6) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x10);
  }
  if (param_2 == 7) {
    FUN_0042a170((int *)((int)this + 0xc),(int *)puVar1,0x28);
  }
  iVar3 = 2;
  uVar2 = FUN_0041bda0(param_1,0,2);
  *(uint *)((int)this + 0xaf) = uVar2;
  FUN_00429ed0((void *)((int)this + 0x14),param_1);
  this_00 = (void *)((int)this + 0x23);
  do {
    FUN_00429f40(this_00,param_1);
    iVar3 = iVar3 + -1;
    this_00 = (void *)((int)this_00 + 0x3a);
  } while (iVar3 != 0);
  return;
}

