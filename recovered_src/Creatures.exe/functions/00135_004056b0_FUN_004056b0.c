/*
 * Program: Creatures.exe
 * Function: FUN_004056b0
 * Entry: 004056b0
 * Namespace: Global
 * Prototype: undefined FUN_004056b0(void * this, void * param_1)
 */


void __thiscall FUN_004056b0(void *this,void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_8;
  int local_4;
  
  if ((*(uint *)((int)param_1 + 0x14) & 1) != 0) {
    FUN_0042d4d0(param_1,&DAT_00438594);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    iVar5 = **(int **)((int)param_1 + 0x24);
    *(int **)((int)param_1 + 0x24) = *(int **)((int)param_1 + 0x24) + 1;
    if (0 < iVar5) {
      do {
        FUN_00412d40(param_1,&local_8);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    iVar5 = **(int **)((int)param_1 + 0x24);
    *(int **)((int)param_1 + 0x24) = *(int **)((int)param_1 + 0x24) + 1;
    if (0 < iVar5) {
      do {
        FUN_00412d40(param_1,&local_8);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00424640((int)param_1);
    iVar5 = FUN_00406080(param_1,&local_4);
    if (*(uint *)(iVar5 + 0x28) < *(int *)(iVar5 + 0x24) + 4U) {
      Ordinal_2403((*(int *)(iVar5 + 0x24) - *(uint *)(iVar5 + 0x28)) + 4);
    }
    iVar6 = **(int **)(iVar5 + 0x24);
    *(int **)(iVar5 + 0x24) = *(int **)(iVar5 + 0x24) + 1;
    FUN_0041d6a0(param_1,&DAT_004382c4);
    FUN_00402630(DAT_00436eb0,1);
    iVar5 = 0;
    piVar4 = (int *)((int)this + 0x98);
    FUN_00403530(*(void **)((int)DAT_00436eb0 + 0x60),local_4,iVar6);
    do {
      (**(code **)(*piVar4 + 8))(param_1);
      iVar6 = _mbscmp((uchar *)piVar4[1],&DAT_00435c44);
      if (iVar6 != 0) {
        *(int *)((int)this + 0xe0) = iVar5 + 1;
      }
      piVar4 = piVar4 + 3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    (**(code **)(*DAT_00436eac + 8))(param_1);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    iVar5 = **(int **)((int)param_1 + 0x24);
    *(int **)((int)param_1 + 0x24) = *(int **)((int)param_1 + 0x24) + 1;
    if (0 < iVar5) {
      do {
        puVar7 = &DAT_00439b28 + DAT_00436c20;
        DAT_00436c20 = DAT_00436c20 + 1;
        FUN_00423660(param_1,puVar7);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    uVar8 = 0;
    uVar2 = **(uint **)((int)param_1 + 0x24);
    *(uint **)((int)param_1 + 0x24) = *(uint **)((int)param_1 + 0x24) + 1;
    Ordinal_5439(uVar2,0xffffffff);
    if (uVar2 != 0) {
      do {
        uVar8 = uVar8 + 1;
        FUN_00412d40(param_1,(undefined4 *)(DAT_00437fd4 + -4 + uVar8 * 4));
        *(undefined1 *)(*(int *)(DAT_00437fd4 + -4 + uVar8 * 4) + 0x47) = 0;
      } while (uVar8 < uVar2);
    }
    (**(code **)(*DAT_00436ebc + 8))(param_1);
    iVar6 = 0;
    iVar5 = 0;
    if (0 < DAT_00437fb8) {
      do {
        iVar6 = iVar6 + 1;
        (**(code **)(**(int **)((int)DAT_00437fb4 + iVar5) + 0x38))();
        iVar5 = iVar5 + 4;
      } while (iVar6 < DAT_00437fb8);
    }
    (**(code **)(*(int *)((int)this + 0xe4) + 8))(param_1);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    DAT_00435e98 = **(undefined4 **)((int)param_1 + 0x24);
    iVar5 = *(int *)((int)param_1 + 0x24);
    iVar6 = iVar5 + 4;
    *(int *)((int)param_1 + 0x24) = iVar6;
    if (*(uint *)((int)param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2403((iVar6 - *(uint *)((int)param_1 + 0x28)) + 4);
    }
    iVar5 = 0;
    *(undefined4 *)((int)this + 0x94) = **(undefined4 **)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    if (0 < *(int *)((int)this + 0x94)) {
      puVar7 = (undefined4 *)((int)this + 0x54);
      do {
        if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
          Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
        }
        iVar5 = iVar5 + 1;
        *puVar7 = **(undefined4 **)((int)param_1 + 0x24);
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
        puVar7 = puVar7 + 1;
      } while (iVar5 < *(int *)((int)this + 0x94));
    }
    bVar3 = false;
    iVar5 = DAT_00437fb8;
    piVar4 = DAT_00437fb4;
    if (0 < DAT_00437fb8) {
      do {
        if (*(char *)(*piVar4 + 8) == '\x01') {
          bVar3 = true;
        }
        iVar5 = iVar5 + -1;
        piVar4 = piVar4 + 1;
      } while (iVar5 != 0);
    }
    if (!bVar3) {
      FUN_004016c0(DAT_00438d0c,DAT_00438d0c,4,0,0,0);
    }
    return;
  }
  Ordinal_5671(DAT_00438594);
  iVar5 = DAT_00437fb8;
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(int **)((int)param_1 + 0x24) = iVar5;
  iVar5 = 0;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < DAT_00437fb8) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      Ordinal_5671(*(undefined4 *)((int)DAT_00437fb4 + iVar6));
      iVar6 = iVar6 + 4;
    } while (iVar5 < DAT_00437fb8);
  }
  iVar5 = DAT_00438880;
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(int **)((int)param_1 + 0x24) = iVar5;
  iVar5 = 0;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < DAT_00438880) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
      Ordinal_5671(*(undefined4 *)(DAT_0043887c + -4 + iVar6));
    } while (iVar5 < DAT_00438880);
  }
  FUN_00424540((int)param_1);
  uVar1 = *(undefined4 *)(*(int *)((int)DAT_00436eb0 + 0x60) + 4);
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(undefined4 **)((int)param_1 + 0x24) = uVar1;
  iVar5 = *(int *)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = iVar5 + 4;
  uVar1 = *(undefined4 *)(*(int *)((int)DAT_00436eb0 + 0x60) + 8);
  if (*(uint *)((int)param_1 + 0x28) < iVar5 + 8U) {
    Ordinal_2456();
  }
  **(undefined4 **)((int)param_1 + 0x24) = uVar1;
  piVar4 = (int *)((int)this + 0x98);
  iVar5 = 6;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  Ordinal_5671(DAT_004382c4);
  do {
    iVar6 = *piVar4;
    piVar4 = piVar4 + 3;
    (**(code **)(iVar6 + 8))(param_1);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(*DAT_00436eac + 8))(param_1);
  iVar5 = DAT_00436c20;
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(int **)((int)param_1 + 0x24) = iVar5;
  iVar5 = 0;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < DAT_00436c20) {
    puVar7 = &DAT_00439b28;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
      Ordinal_5671(uVar1);
    } while (iVar5 < DAT_00436c20);
  }
  iVar5 = DAT_00437fd8;
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  iVar6 = 0;
  **(int **)((int)param_1 + 0x24) = iVar5;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < DAT_00437fd8) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      Ordinal_5671(*(undefined4 *)(DAT_00437fd4 + -4 + iVar5));
    } while (iVar6 < DAT_00437fd8);
  }
  (**(code **)(*DAT_00436ebc + 8))(param_1);
  (**(code **)(*(int *)((int)this + 0xe4) + 8))(param_1);
  uVar1 = DAT_00435e98;
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(undefined4 **)((int)param_1 + 0x24) = uVar1;
  iVar5 = *(int *)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = iVar5 + 4;
  uVar1 = *(undefined4 *)((int)this + 0x94);
  if (*(uint *)((int)param_1 + 0x28) < iVar5 + 8U) {
    Ordinal_2456();
  }
  iVar5 = 0;
  **(undefined4 **)((int)param_1 + 0x24) = uVar1;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
  if (0 < *(int *)((int)this + 0x94)) {
    puVar7 = (undefined4 *)((int)this + 0x54);
    do {
      uVar1 = *puVar7;
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
      **(undefined4 **)((int)param_1 + 0x24) = uVar1;
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    } while (iVar5 < *(int *)((int)this + 0x94));
  }
  FUN_00412350();
  return;
}

