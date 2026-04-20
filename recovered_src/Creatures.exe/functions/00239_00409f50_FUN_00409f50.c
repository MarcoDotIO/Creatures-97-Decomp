/*
 * Program: Creatures.exe
 * Function: FUN_00409f50
 * Entry: 00409f50
 * Namespace: Global
 * Prototype: undefined FUN_00409f50(void * this, void * param_1)
 */


void __thiscall FUN_00409f50(void *this,void *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 4));
    uVar5 = *(undefined4 *)((int)this + 0x1288);
    pvVar4 = (void *)FUN_0040ae70(param_1,*(undefined4 *)((int)this + 0x128c));
    uVar2 = *(undefined4 *)((int)this + 0x1290);
    iVar9 = 0x100;
    pvVar4 = (void *)FUN_0040ae70(pvVar4,uVar5);
    puVar8 = (undefined1 *)((int)this + 8);
    FUN_0040ae70(pvVar4,uVar2);
    do {
      uVar14 = puVar8[1];
      uVar15 = *puVar8;
      puVar8 = puVar8 + 2;
      pvVar4 = (void *)FUN_0040ae40(param_1,uVar15);
      FUN_0040ae40(pvVar4,uVar14);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 0;
    puVar8 = (undefined1 *)((int)this + 0x808);
    if (0 < *(int *)((int)this + 0x128c)) {
      do {
        uVar14 = *puVar8;
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        iVar3 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar3 + 1;
        uVar14 = puVar8[1];
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        iVar3 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar3 + 1;
        uVar14 = puVar8[2];
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2456();
        }
        iVar9 = iVar9 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        uVar14 = puVar8[5];
        uVar15 = puVar8[7];
        uVar13 = puVar8[6];
        uVar12 = puVar8[4];
        pvVar4 = (void *)FUN_0040ae40(param_1,puVar8[3]);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar12);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar14);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar13);
        FUN_0040ae40(pvVar4,uVar15);
        puVar8 = puVar8 + 0xc;
      } while (iVar9 < *(int *)((int)this + 0x128c));
    }
    iVar9 = 0;
    puVar8 = (undefined1 *)((int)this + 0x208);
    if (0 < *(int *)((int)this + 0x1288)) {
      do {
        uVar14 = *puVar8;
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        iVar3 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar3 + 1;
        uVar14 = puVar8[1];
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2456();
        }
        iVar9 = iVar9 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        uVar14 = puVar8[5];
        uVar15 = puVar8[7];
        uVar13 = puVar8[6];
        uVar12 = puVar8[4];
        uVar11 = puVar8[3];
        pvVar4 = (void *)FUN_0040ae40(param_1,puVar8[2]);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar11);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar12);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar14);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar13);
        FUN_0040ae40(pvVar4,uVar15);
        puVar8 = puVar8 + 0xc;
      } while (iVar9 < *(int *)((int)this + 0x1288));
    }
    iVar9 = 0;
    puVar8 = (undefined1 *)((int)this + 0xe08);
    if (0 < *(int *)((int)this + 0x1290)) {
      do {
        uVar14 = *puVar8;
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        iVar3 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar3 + 1;
        uVar14 = puVar8[1];
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2456();
        }
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        iVar3 = *(int *)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = iVar3 + 1;
        uVar14 = puVar8[2];
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2456();
        }
        iVar9 = iVar9 + 1;
        **(undefined1 **)((int)param_1 + 0x24) = uVar14;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        uVar14 = puVar8[6];
        uVar15 = puVar8[8];
        uVar13 = puVar8[7];
        uVar12 = puVar8[5];
        uVar11 = puVar8[4];
        pvVar4 = (void *)FUN_0040ae40(param_1,puVar8[3]);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar11);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar12);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar14);
        pvVar4 = (void *)FUN_0040ae40(pvVar4,uVar13);
        FUN_0040ae40(pvVar4,uVar15);
        puVar8 = puVar8 + 9;
      } while (iVar9 < *(int *)((int)this + 0x1290));
      return;
    }
  }
  else {
    pvVar4 = (void *)FUN_0041d6a0(param_1,(undefined4 *)((int)this + 4));
    pvVar4 = (void *)FUN_00406080(pvVar4,(undefined4 *)((int)this + 0x128c));
    pvVar4 = (void *)FUN_00406080(pvVar4,(undefined4 *)((int)this + 0x1288));
    iVar9 = 0x100;
    FUN_00406080(pvVar4,(undefined4 *)((int)this + 0x1290));
    puVar8 = (undefined1 *)((int)this + 8);
    do {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
        Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
      }
      *puVar8 = **(undefined1 **)((int)param_1 + 0x24);
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      FUN_0040aea0(param_1,puVar8 + 1);
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + 2;
    } while (iVar9 != 0);
    iVar9 = 0;
    pcVar10 = (char *)((int)this + 0x808);
    if (0 < *(int *)((int)this + 0x128c)) {
      do {
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        *pcVar10 = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[1] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[2] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[3] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[4] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[5] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        iVar9 = iVar9 + 1;
        pcVar10[6] = **(char **)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        FUN_0040aea0(param_1,pcVar10 + 7);
        uVar5 = FUN_0040aae0(this,1,*pcVar10,CONCAT31((int3)((uint)extraout_EDX >> 8),pcVar10[1]),
                             CONCAT31((int3)((uint)extraout_ECX >> 8),pcVar10[2]));
        *(undefined4 *)(pcVar10 + 8) = uVar5;
        pcVar10 = pcVar10 + 0xc;
      } while (iVar9 < *(int *)((int)this + 0x128c));
    }
    iVar9 = 0;
    pcVar10 = (char *)((int)this + 0x208);
    if (0 < *(int *)((int)this + 0x1288)) {
      do {
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        *pcVar10 = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[1] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[2] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[3] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[4] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        pcVar10[5] = **(char **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        iVar9 = iVar9 + 1;
        pcVar10[6] = **(char **)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        FUN_0040aea0(param_1,pcVar10 + 7);
        pcVar6 = (char *)FUN_0040aae0(this,0,*pcVar10,
                                      CONCAT31((int3)((uint)extraout_EDX_00 >> 8),pcVar10[1]),
                                      CONCAT31((int3)((uint)extraout_ECX_00 >> 8),pcVar10[2]));
        *(char **)(pcVar10 + 8) = pcVar6;
        *pcVar6 = pcVar10[5];
        pcVar10 = pcVar10 + 0xc;
      } while (iVar9 < *(int *)((int)this + 0x1288));
    }
    iVar9 = 0;
    puVar8 = (undefined1 *)((int)this + 0xe08);
    if (0 < *(int *)((int)this + 0x1290)) {
      do {
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
          Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        *puVar8 = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[1] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[2] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[3] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[4] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[5] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar8[6] = **(undefined1 **)((int)param_1 + 0x24);
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar7 = iVar3 + 1;
        *(int *)((int)param_1 + 0x24) = iVar7;
        if (*(uint *)((int)param_1 + 0x28) < iVar3 + 2U) {
          Ordinal_2403((iVar7 - *(uint *)((int)param_1 + 0x28)) + 1);
        }
        puVar1 = puVar8 + 8;
        iVar9 = iVar9 + 1;
        puVar8[7] = **(undefined1 **)((int)param_1 + 0x24);
        puVar8 = puVar8 + 9;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
        FUN_0040aea0(param_1,puVar1);
      } while (iVar9 < *(int *)((int)this + 0x1290));
    }
  }
  return;
}

