/*
 * Program: Creatures.exe
 * Function: FUN_00429ea0
 * Entry: 00429ea0
 * Namespace: Global
 * Prototype: undefined FUN_00429ea0(void * this, void * param_1)
 */


void __thiscall FUN_00429ea0(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    uVar1 = FUN_0041bda0(param_1,0,0x1d);
    *(char *)(iVar2 + (int)this) = (char)uVar1;
    iVar2 = iVar3;
  } while (iVar3 < 8);
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 9) = 0;
  return;
}

