/*
 * Program: Creatures.exe
 * Function: FUN_0041a8d0
 * Entry: 0041a8d0
 * Namespace: Global
 * Prototype: undefined FUN_0041a8d0(void * this, void * param_1)
 */


void __thiscall FUN_0041a8d0(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0041a060(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x1e);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar2 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar2 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x22);
    if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    return;
  }
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x1e) = **(undefined4 **)((int)param_1 + 0x24);
  iVar2 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x22) = **(undefined4 **)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  return;
}

