/*
 * Program: Creatures.exe
 * Function: FUN_00414180
 * Entry: 00414180
 * Namespace: Global
 * Prototype: undefined FUN_00414180(void * this, void * param_1)
 */


void __thiscall FUN_00414180(void *this,void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_8;
  int local_4;
  
  FUN_00413b80(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined1 *)((int)this + 0x22c);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x22d);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x22e);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x22f);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar4 + 1;
    uVar1 = *(undefined1 *)((int)this + 0x230);
    if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
      Ordinal_2456();
    }
    local_4 = 0;
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    local_8 = (undefined4 *)((int)this + 0x1ec);
    do {
      uVar2 = *local_8;
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(undefined4 **)((int)param_1 + 0x24) = uVar2;
      iVar4 = 0;
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
      do {
        uVar1 = *(undefined1 *)((int)this + local_4 + iVar4 + 0x13c);
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        iVar4 = iVar4 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar1;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      } while (iVar4 < 0xb);
      local_4 = local_4 + 0xb;
      local_8 = local_8 + 1;
    } while (local_4 < 0xb0);
    return;
  }
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x22c) = **(undefined1 **)((int)param_1 + 0x24);
  iVar4 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar4 + 1;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x22d) = **(undefined1 **)((int)param_1 + 0x24);
  iVar4 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar4 + 1;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x22e) = **(undefined1 **)((int)param_1 + 0x24);
  iVar4 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar4 + 1;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x22f) = **(undefined1 **)((int)param_1 + 0x24);
  iVar4 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar4 + 1;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar4 + 2U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  iVar4 = 0;
  *(undefined1 *)((int)this + 0x230) = **(undefined1 **)((int)param_1 + 0x24);
  local_8 = (undefined4 *)((int)this + 0x1ec);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
  do {
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *local_8 = **(undefined4 **)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    iVar3 = 0;
    do {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
        Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
      }
      iVar5 = iVar3 + 1;
      *(undefined1 *)((int)this + iVar4 + iVar3 + 0x13c) = **(undefined1 **)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      iVar3 = iVar5;
    } while (iVar5 < 0xb);
    iVar4 = iVar4 + 0xb;
    local_8 = local_8 + 1;
  } while (iVar4 < 0xb0);
  return;
}

