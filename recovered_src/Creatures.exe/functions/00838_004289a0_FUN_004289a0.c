/*
 * Program: Creatures.exe
 * Function: FUN_004289a0
 * Entry: 004289a0
 * Namespace: Global
 * Prototype: undefined FUN_004289a0(void * this, int param_1)
 */


void __thiscall FUN_004289a0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  int local_4;
  
  puVar4 = (undefined4 *)((int)this + 4);
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    local_4 = 3;
    do {
      local_8 = 0x1b;
      do {
        uVar1 = *puVar4;
        if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
          Ordinal_2456();
        }
        puVar4 = puVar4 + 1;
        **(undefined4 **)(param_1 + 0x24) = uVar1;
        local_8 = local_8 + -1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      } while (local_8 != 0);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    puVar4 = (undefined4 *)((int)this + 0x148);
    iVar5 = 0x20;
    do {
      uVar1 = *puVar4;
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(undefined4 **)(param_1 + 0x24) = uVar1;
      iVar2 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = iVar2 + 4;
      uVar1 = puVar4[0x20];
      if (*(uint *)(param_1 + 0x28) < iVar2 + 8U) {
        Ordinal_2456();
      }
      puVar4 = puVar4 + 1;
      **(undefined4 **)(param_1 + 0x24) = uVar1;
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    } while (iVar5 != 0);
    return;
  }
  local_8 = 3;
  do {
    iVar5 = 0x1b;
    puVar6 = puVar4;
    do {
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
      }
      puVar4 = puVar6 + 1;
      *puVar6 = **(undefined4 **)(param_1 + 0x24);
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      puVar6 = puVar4;
    } while (iVar5 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 0x20;
  puVar4 = (undefined4 *)((int)this + 0x148);
  do {
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    *puVar4 = **(undefined4 **)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = iVar2 + 4;
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(uint *)(param_1 + 0x28) < iVar2 + 8U) {
      Ordinal_2403((iVar3 - *(uint *)(param_1 + 0x28)) + 4);
    }
    puVar4[0x20] = **(undefined4 **)(param_1 + 0x24);
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 0);
  return;
}

