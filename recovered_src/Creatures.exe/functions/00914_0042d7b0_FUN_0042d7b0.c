/*
 * Program: Creatures.exe
 * Function: FUN_0042d7b0
 * Entry: 0042d7b0
 * Namespace: Global
 * Prototype: undefined FUN_0042d7b0(void * this, int param_1)
 */


void __thiscall FUN_0042d7b0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined4 *)((int)this + 4);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar1;
    iVar4 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar4 + 4;
    uVar1 = *(undefined4 *)((int)this + 0xbf0);
    if (*(uint *)(param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    Ordinal_5671(*(undefined4 *)((int)this + 0xbf4));
    uVar1 = *(undefined4 *)((int)this + 8);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    iVar4 = 0;
    **(undefined4 **)(param_1 + 0x24) = uVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    if (0 < *(int *)((int)this + 8)) {
      iVar2 = (int)this + 0xc;
      do {
        Ordinal_5656(iVar2,0x10);
        uVar1 = *(undefined4 *)(iVar2 + 0x10);
        if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
          Ordinal_2456();
        }
        iVar2 = iVar2 + 0x14;
        iVar4 = iVar4 + 1;
        **(undefined4 **)(param_1 + 0x24) = uVar1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      } while (iVar4 < *(int *)((int)this + 8));
    }
    local_4 = 0x105;
    puVar3 = (undefined4 *)((int)this + 0x32c);
    do {
      uVar1 = *puVar3;
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      puVar3 = puVar3 + 1;
      **(undefined4 **)(param_1 + 0x24) = uVar1;
      local_4 = local_4 + -1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    } while (local_4 != 0);
    piVar5 = (int *)((int)this + 0x740);
    iVar4 = 100;
    do {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 3;
      (**(code **)(iVar2 + 8))(param_1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
  }
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 4) = **(undefined4 **)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar2 = iVar4 + 4;
  *(int *)(param_1 + 0x24) = iVar2;
  if (*(uint *)(param_1 + 0x28) < iVar4 + 8U) {
    Ordinal_2403((iVar2 - *(uint *)(param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0xbf0) = **(undefined4 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  FUN_0040bea0(param_1,(undefined4 *)((int)this + 0xbf4));
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 8) = **(undefined4 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  if (0 < *(int *)((int)this + 8)) {
    iVar2 = (int)this + 0xc;
    do {
      Ordinal_4817(iVar2,0x10);
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + 0x10) = **(undefined4 **)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      iVar2 = iVar2 + 0x14;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  iVar4 = 0x105;
  puVar3 = (undefined4 *)((int)this + 0x32c);
  do {
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    *puVar3 = **(undefined4 **)(param_1 + 0x24);
    iVar4 = iVar4 + -1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  piVar5 = (int *)((int)this + 0x740);
  iVar4 = 100;
  do {
    iVar2 = *piVar5;
    piVar5 = piVar5 + 3;
    (**(code **)(iVar2 + 8))(param_1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

