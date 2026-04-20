/*
 * Program: Creatures.exe
 * Function: FUN_00413da0
 * Entry: 00413da0
 * Namespace: Global
 * Prototype: undefined FUN_00413da0(void * this, void * param_1)
 */


void __thiscall FUN_00413da0(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00413b80(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x13c);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar2 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar2 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x140);
    if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar2 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar2 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x144);
    if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar2 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar2 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x148);
    if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    Ordinal_5656((int)this + 0x14c,0x10);
    uVar1 = *(undefined4 *)((int)this + 0x15c);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    return;
  }
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x13c) = **(undefined4 **)((int)param_1 + 0x24);
  iVar2 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x140) = **(undefined4 **)((int)param_1 + 0x24);
  iVar2 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x144) = **(undefined4 **)((int)param_1 + 0x24);
  iVar2 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x148) = **(undefined4 **)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  Ordinal_4817((int)this + 0x14c,0x10);
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x15c) = **(undefined4 **)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  return;
}

