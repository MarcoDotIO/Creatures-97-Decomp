/*
 * Program: Creatures.exe
 * Function: FUN_0041e130
 * Entry: 0041e130
 * Namespace: Global
 * Prototype: undefined FUN_0041e130(void * this, void * param_1)
 */


void __thiscall FUN_0041e130(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar5 = (undefined4 *)((int)this + 4);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    local_4 = 3;
    do {
      uVar1 = *puVar5;
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(undefined4 **)((int)param_1 + 0x24) = uVar1;
      iVar4 = *(int *)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = iVar4 + 4;
      uVar1 = puVar5[3];
      if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
        Ordinal_2456();
      }
      puVar5 = puVar5 + 1;
      **(undefined4 **)((int)param_1 + 0x24) = uVar1;
      iVar4 = *(int *)((int)param_1 + 0x24);
      local_4 = local_4 + -1;
      *(int *)((int)param_1 + 0x24) = iVar4 + 4;
    } while (local_4 != 0);
    uVar1 = *(undefined4 *)((int)this + 0x1c);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x20);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x24);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 4;
    uVar1 = *(undefined4 *)((int)this + 0x28);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    return;
  }
  iVar4 = 3;
  do {
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *puVar5 = **(undefined4 **)((int)param_1 + 0x24);
    iVar2 = *(int *)((int)param_1 + 0x24);
    iVar3 = iVar2 + 4;
    *(int *)((int)param_1 + 0x24) = iVar3;
    if (*(uint *)((int)param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    puVar5[3] = **(undefined4 **)((int)param_1 + 0x24);
    iVar4 = iVar4 + -1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  iVar4 = FUN_00406080(param_1,(undefined4 *)((int)this + 0x1c));
  if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(iVar4 + 0x24) - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x20) = **(undefined4 **)(iVar4 + 0x24);
  iVar2 = *(int *)(iVar4 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)(iVar4 + 0x24) = iVar3;
  if (*(uint *)(iVar4 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x24) = **(undefined4 **)(iVar4 + 0x24);
  iVar2 = *(int *)(iVar4 + 0x24);
  iVar3 = iVar2 + 4;
  *(int *)(iVar4 + 0x24) = iVar3;
  if (*(uint *)(iVar4 + 0x28) < iVar2 + 8U) {
    Ordinal_2403((iVar3 - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x28) = **(undefined4 **)(iVar4 + 0x24);
  *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
  return;
}

