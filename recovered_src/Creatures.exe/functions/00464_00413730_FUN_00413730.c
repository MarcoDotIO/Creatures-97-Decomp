/*
 * Program: Creatures.exe
 * Function: FUN_00413730
 * Entry: 00413730
 * Namespace: Global
 * Prototype: undefined FUN_00413730(void * this, void * param_1)
 */


void __thiscall FUN_00413730(void *this,void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00413410(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 0x48));
    uVar2 = *(undefined4 *)((int)this + 0x4c);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar2;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 4;
    uVar1 = *(undefined1 *)((int)this + 0x50);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 5U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x51);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x52);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x53);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    return;
  }
  iVar4 = FUN_00419b00(param_1,(undefined4 *)((int)this + 0x48));
  if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(iVar4 + 0x24) - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x4c) = **(undefined4 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar5 = iVar3 + 4;
  *(int *)(iVar4 + 0x24) = iVar5;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 5U) {
    Ordinal_2403((iVar5 - *(uint *)(iVar4 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x50) = **(undefined1 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar5 = iVar3 + 1;
  *(int *)(iVar4 + 0x24) = iVar5;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 2U) {
    Ordinal_2403((iVar5 - *(uint *)(iVar4 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x51) = **(undefined1 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar5 = iVar3 + 1;
  *(int *)(iVar4 + 0x24) = iVar5;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 2U) {
    Ordinal_2403((iVar5 - *(uint *)(iVar4 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x52) = **(undefined1 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar5 = iVar3 + 1;
  *(int *)(iVar4 + 0x24) = iVar5;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 2U) {
    Ordinal_2403((iVar5 - *(uint *)(iVar4 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x53) = **(undefined1 **)(iVar4 + 0x24);
  *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
  if (*(char *)((int)this + 8) == '\x01') {
    FUN_00416220(this);
  }
  return;
}

