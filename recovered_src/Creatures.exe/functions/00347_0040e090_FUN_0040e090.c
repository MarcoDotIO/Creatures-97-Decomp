/*
 * Program: Creatures.exe
 * Function: FUN_0040e090
 * Entry: 0040e090
 * Namespace: Global
 * Prototype: undefined FUN_0040e090(void * param_1)
 */


void FUN_0040e090(void *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *unaff_FS_OFFSET;
  char *local_20;
  int local_1c;
  char *local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040e6e6;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  FUN_00413410(local_14,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar3 = *(undefined4 *)((int)local_14 + 0x48);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 4;
    uVar3 = *(undefined4 *)((int)local_14 + 0x4c);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 4;
    uVar3 = *(undefined4 *)((int)local_14 + 0x50);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    iVar10 = 6;
    Ordinal_5671(*(undefined4 *)((int)local_14 + 0x54));
    puVar8 = (undefined4 *)((int)local_14 + 0x58);
    do {
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      Ordinal_5671(uVar3);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    uVar2 = *(undefined1 *)((int)local_14 + 0x70);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar2;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 1;
    uVar2 = *(undefined1 *)((int)local_14 + 0x71);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar2;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 1;
    uVar3 = *(undefined4 *)((int)local_14 + 0x72);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 5U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 4;
    uVar3 = *(undefined4 *)((int)local_14 + 0x76);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 4;
    uVar3 = *(undefined4 *)((int)local_14 + 0x7a);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar3;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    uVar3 = Ordinal_483((int)local_14 + 0x7e);
    local_8._0_1_ = 1;
    Ordinal_784(param_1,uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040e393();
    uVar2 = *(undefined1 *)((int)local_14 + 0x113);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar2;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 1;
    uVar2 = *(undefined1 *)((int)local_14 + 0x114);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar2;
    iVar10 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar10 + 1;
    uVar2 = *(undefined1 *)((int)local_14 + 0x115);
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2456();
    }
    local_18 = (char *)0x0;
    **(undefined1 **)((int)param_1 + 0x24) = uVar2;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    local_1c = (int)local_14 + 0x116;
    do {
      uVar3 = Ordinal_483(local_1c);
      local_8._0_1_ = 2;
      Ordinal_784(param_1,uVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040e383();
      local_1c = local_1c + 0x10;
      local_18 = (char *)((int)local_18 + 1);
    } while ((int)local_18 < 100);
    local_18 = (char *)0x0;
    local_14 = (void *)((int)local_14 + 0x756);
    do {
      uVar3 = Ordinal_483(local_14);
      local_8._0_1_ = 3;
      Ordinal_784(param_1,uVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040e38b();
      local_14 = (void *)((int)local_14 + 0x12);
      local_18 = local_18 + 1;
    } while ((int)local_18 < 8);
  }
  else {
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x48) = **(undefined4 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 4;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x4c) = **(undefined4 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 4;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x50) = **(undefined4 **)((int)param_1 + 0x24);
    iVar10 = 6;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    FUN_00419d80(param_1,(undefined4 *)((int)local_14 + 0x54));
    puVar8 = (undefined4 *)((int)local_14 + 0x58);
    do {
      FUN_00419e90(param_1,puVar8);
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar10 != 0);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
    }
    *(undefined1 *)((int)local_14 + 0x70) = **(undefined1 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 1;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 1);
    }
    *(undefined1 *)((int)local_14 + 0x71) = **(undefined1 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 1;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 5U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x72) = **(undefined4 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 4;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x76) = **(undefined4 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 4;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 8U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)local_14 + 0x7a) = **(undefined4 **)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    Ordinal_781(param_1,&local_20);
    local_18 = (char *)((int)local_14 + 0x7e);
    uVar4 = 0xffffffff;
    pcVar7 = local_20;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
    }
    *(undefined1 *)((int)local_14 + 0x113) = **(undefined1 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 1;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 1);
    }
    *(undefined1 *)((int)local_14 + 0x114) = **(undefined1 **)((int)param_1 + 0x24);
    iVar10 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar10 + 1;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar10 + 2U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 1);
    }
    local_1c = 100;
    *(undefined1 *)((int)local_14 + 0x115) = **(undefined1 **)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    pcVar7 = (char *)((int)local_14 + 0x116);
    do {
      Ordinal_781(param_1,&local_20);
      uVar4 = 0xffffffff;
      pcVar9 = local_20;
      do {
        pcVar11 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar11 + -uVar4;
      pcVar11 = pcVar7;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      pcVar7 = pcVar7 + 0x10;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_1c = 8;
    pcVar7 = (char *)((int)local_14 + 0x756);
    do {
      Ordinal_781(param_1,&local_20);
      uVar4 = 0xffffffff;
      pcVar9 = local_20;
      do {
        pcVar11 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar11 + -uVar4;
      pcVar11 = pcVar7;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      pcVar7 = pcVar7 + 0x12;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    uVar4 = 0xffffffff;
    pcVar7 = local_18;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = (char *)((int)local_14 + 0x8e);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_0040eb10(local_14);
  }
  local_8 = 0xffffffff;
  FUN_0040e6f0();
  *unaff_FS_OFFSET = local_10;
  return;
}

