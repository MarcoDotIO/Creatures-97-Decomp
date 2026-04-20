/*
 * Program: Creatures.exe
 * Function: FUN_0041ad90
 * Entry: 0041ad90
 * Namespace: Global
 * Prototype: undefined FUN_0041ad90(void * this, void * param_1)
 */


void __thiscall FUN_0041ad90(void *this,void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  FUN_0041a8d0(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    local_8 = 0;
    do {
      iVar5 = 0;
      do {
        uVar2 = *(undefined1 *)((int)this + local_8 + iVar5 + 0x26);
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar2;
        iVar6 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar6 + 1;
        uVar2 = *(undefined1 *)((int)this + local_8 + iVar5 + 0x62);
        if (*(uint *)((int)param_1 + 0x28) < iVar6 + 2U) {
          Ordinal_2456();
        }
        iVar5 = iVar5 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar2;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      } while (iVar5 < 10);
      local_8 = local_8 + 10;
    } while (local_8 < 0x3c);
    return;
  }
  iVar5 = 0;
  do {
    iVar6 = 0;
    do {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
        Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
      }
      iVar1 = iVar5 + iVar6;
      *(undefined1 *)((int)this + iVar1 + 0x26) = **(undefined1 **)((int)param_1 + 0x24);
      iVar3 = *(int *)((int)param_1 + 0x24);
      iVar4 = iVar3 + 1;
      *(int *)((int)param_1 + 0x24) = iVar4;
      if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
        Ordinal_2403((iVar4 - *(uint *)((int)param_1 + 0x28)) + 1);
      }
      iVar6 = iVar6 + 1;
      *(undefined1 *)((int)this + iVar1 + 0x62) = **(undefined1 **)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    } while (iVar6 < 10);
    iVar5 = iVar5 + 10;
  } while (iVar5 < 0x3c);
  return;
}

