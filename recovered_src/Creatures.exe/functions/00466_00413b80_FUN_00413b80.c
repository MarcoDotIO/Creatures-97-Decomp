/*
 * Program: Creatures.exe
 * Function: FUN_00413b80
 * Entry: 00413b80
 * Namespace: Global
 * Prototype: undefined FUN_00413b80(void * this, void * param_1)
 */


void __thiscall FUN_00413b80(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  FUN_00413410(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x48);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    local_4 = 0;
    **(undefined4 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    if (0 < *(int *)((int)this + 0x48)) {
      puVar5 = (undefined4 *)((int)this + 0x4c);
      do {
        Ordinal_5671(*puVar5);
        uVar1 = puVar5[1];
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
          Ordinal_2456();
        }
        **(undefined4 **)((int)param_1 + 0x24) = uVar1;
        iVar4 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar4 + 4;
        uVar1 = puVar5[2];
        if (*(uint *)((int)param_1 + 0x28) < iVar4 + 8U) {
          Ordinal_2456();
        }
        puVar5 = puVar5 + 3;
        local_4 = local_4 + 1;
        **(undefined4 **)((int)param_1 + 0x24) = uVar1;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
      } while (local_4 < *(int *)((int)this + 0x48));
    }
    iVar4 = (int)this + 0xc4;
    iVar3 = 6;
    do {
      Ordinal_5656(iVar4,0x10);
      iVar4 = iVar4 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = (undefined4 *)((int)this + 0x124);
    iVar4 = 6;
    do {
      uVar1 = *puVar5;
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      puVar5 = puVar5 + 1;
      **(undefined4 **)((int)param_1 + 0x24) = uVar1;
      iVar4 = iVar4 + -1;
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    } while (iVar4 != 0);
    return;
  }
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  local_4 = 0;
  *(undefined4 *)((int)this + 0x48) = **(undefined4 **)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < *(int *)((int)this + 0x48)) {
    puVar5 = (undefined4 *)((int)this + 0x4c);
    do {
      iVar4 = FUN_00419b00(param_1,puVar5);
      if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
        Ordinal_2403((*(int *)(iVar4 + 0x24) - *(uint *)(iVar4 + 0x28)) + 4);
      }
      puVar5[1] = **(undefined4 **)(iVar4 + 0x24);
      iVar3 = *(int *)(iVar4 + 0x24);
      iVar2 = iVar3 + 4;
      *(int *)(iVar4 + 0x24) = iVar2;
      if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
        Ordinal_2403((iVar2 - *(uint *)(iVar4 + 0x28)) + 4);
      }
      local_4 = local_4 + 1;
      puVar5[2] = **(undefined4 **)(iVar4 + 0x24);
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
      puVar5 = puVar5 + 3;
    } while (local_4 < *(int *)((int)this + 0x48));
  }
  iVar4 = (int)this + 0xc4;
  iVar3 = 6;
  do {
    Ordinal_4817(iVar4,0x10);
    iVar4 = iVar4 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar4 = 6;
  puVar5 = (undefined4 *)((int)this + 0x124);
  do {
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *puVar5 = **(undefined4 **)((int)param_1 + 0x24);
    iVar4 = iVar4 + -1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  return;
}

