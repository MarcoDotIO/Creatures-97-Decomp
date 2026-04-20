/*
 * Program: Creatures.exe
 * Function: FUN_0041a060
 * Entry: 0041a060
 * Namespace: Global
 * Prototype: undefined FUN_0041a060(void * this, void * param_1)
 */


void __thiscall FUN_0041a060(void *this,void *param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 8);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar9 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar9 + 1;
    uVar1 = *(undefined1 *)((int)this + 9);
    if (*(uint *)((int)param_1 + 0x28) < iVar9 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar9 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar9 + 1;
    uVar7 = *(undefined4 *)((int)this + 10);
    if (*(uint *)((int)param_1 + 0x28) < iVar9 + 5U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar7;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    uVar7 = *(undefined4 *)((int)this + 0x12);
    pvVar6 = (void *)FUN_0040ae70(param_1,*(undefined4 *)((int)this + 0xe));
    FUN_0040ae70(pvVar6,uVar7);
    if (*(int *)((int)this + 0x16) != 0) {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
        Ordinal_2456();
      }
      **(undefined1 **)((int)param_1 + 0x24) = 1;
      iVar9 = *(int *)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = iVar9 + 1;
      uVar7 = *(undefined4 *)((int)this + 0x1a);
      uVar4 = *(undefined4 *)((int)this + 0x16);
      if (*(uint *)((int)param_1 + 0x28) < iVar9 + 2U) {
        Ordinal_2456();
      }
      iVar9 = 0;
      **(char **)((int)param_1 + 0x24) = (char)uVar7 - (char)uVar4;
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      do {
        uVar1 = *(undefined1 *)(*(int *)((int)this + 0x16) + iVar9);
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        iVar9 = iVar9 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar1;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      } while (iVar9 < 0x20);
      return;
    }
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = 0;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    return;
  }
  pvVar6 = (void *)FUN_0040bea0(param_1,(undefined4 *)((int)this + 4));
  if (*(uint *)((int)pvVar6 + 0x28) < *(int *)((int)pvVar6 + 0x24) + 1U) {
    Ordinal_2403((*(int *)((int)pvVar6 + 0x24) - *(uint *)((int)pvVar6 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 8) = **(undefined1 **)((int)pvVar6 + 0x24);
  iVar9 = *(int *)((int)pvVar6 + 0x24);
  iVar8 = iVar9 + 1;
  *(int *)((int)pvVar6 + 0x24) = iVar8;
  if (*(uint *)((int)pvVar6 + 0x28) < iVar9 + 2U) {
    Ordinal_2403((iVar8 - *(uint *)((int)pvVar6 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 9) = **(undefined1 **)((int)pvVar6 + 0x24);
  iVar9 = *(int *)((int)pvVar6 + 0x24);
  iVar8 = iVar9 + 1;
  *(int *)((int)pvVar6 + 0x24) = iVar8;
  if (*(uint *)((int)pvVar6 + 0x28) < iVar9 + 5U) {
    Ordinal_2403((iVar8 - *(uint *)((int)pvVar6 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 10) = **(undefined4 **)((int)pvVar6 + 0x24);
  iVar9 = *(int *)((int)pvVar6 + 0x24);
  iVar8 = iVar9 + 4;
  *(int *)((int)pvVar6 + 0x24) = iVar8;
  if (*(uint *)((int)pvVar6 + 0x28) < iVar9 + 8U) {
    Ordinal_2403((iVar8 - *(uint *)((int)pvVar6 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0xe) = **(undefined4 **)((int)pvVar6 + 0x24);
  *(int *)((int)pvVar6 + 0x24) = *(int *)((int)pvVar6 + 0x24) + 4;
  FUN_00406080(pvVar6,(undefined4 *)((int)this + 0x12));
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  pcVar5 = *(char **)((int)param_1 + 0x24);
  cVar2 = *pcVar5;
  *(char **)((int)param_1 + 0x24) = pcVar5 + 1;
  if (cVar2 != '\0') {
    if (*(char **)((int)param_1 + 0x28) < pcVar5 + 2) {
      Ordinal_2403(pcVar5 + 1 + (1 - (int)*(char **)((int)param_1 + 0x28)));
    }
    bVar3 = **(byte **)((int)param_1 + 0x24);
    *(byte **)((int)param_1 + 0x24) = *(byte **)((int)param_1 + 0x24) + 1;
    uVar7 = Ordinal_729(0x20);
    *(undefined4 *)((int)this + 0x16) = uVar7;
    iVar9 = 0;
    *(uint *)((int)this + 0x1a) = (uint)bVar3 + *(int *)((int)this + 0x16);
    do {
      puVar10 = (undefined1 *)(*(int *)((int)this + 0x16) + iVar9);
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
        Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
      }
      iVar9 = iVar9 + 1;
      *puVar10 = **(undefined1 **)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    } while (iVar9 < 0x20);
    return;
  }
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  return;
}

