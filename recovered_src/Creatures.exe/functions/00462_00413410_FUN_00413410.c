/*
 * Program: Creatures.exe
 * Function: FUN_00413410
 * Entry: 00413410
 * Namespace: Global
 * Prototype: undefined FUN_00413410(void * this, void * param_1)
 */


void __thiscall FUN_00413410(void *this,void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    uVar2 = *(undefined4 *)((int)this + 4);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar2;
    iVar5 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar5 + 4;
    uVar1 = *(undefined1 *)((int)this + 8);
    if (*(uint *)((int)param_1 + 0x28) < iVar5 + 5U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    iVar5 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar5 + 1;
    uVar1 = *(undefined1 *)((int)this + 9);
    if (*(uint *)((int)param_1 + 0x28) < iVar5 + 2U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    Ordinal_5656((int)this + 10,0x10);
    Ordinal_5671(*(undefined4 *)((int)this + 0x1a));
    uVar1 = *(undefined1 *)((int)this + 0x22);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    Ordinal_5671(*(undefined4 *)((int)this + 0x3b));
    uVar2 = *(undefined4 *)((int)this + 0x3f);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar2;
    iVar5 = *(int *)((int)param_1 + 0x24);
    *(int *)((int)param_1 + 0x24) = iVar5 + 4;
    uVar2 = *(undefined4 *)((int)this + 0x43);
    if (*(uint *)((int)param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)((int)param_1 + 0x24) = uVar2;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    Ordinal_5671(*(undefined4 *)((int)this + 0x1e));
    if ((*(int *)((int)this + 0x2b) == 0) || (iVar5 = *(int *)((int)this + 0x27), iVar5 == 0)) {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(undefined4 **)((int)param_1 + 0x24) = 0;
    }
    else {
      if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(int **)((int)param_1 + 0x24) = iVar5;
    }
    puVar6 = (undefined4 *)((int)this + 0x2f);
    iVar5 = 3;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      FUN_0040ae70(param_1,uVar2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00424410((int)param_1,*(uint *)((int)this + 4));
    return;
  }
  if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)param_1 + 0x24) - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)param_1 + 0x24);
  iVar5 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar5 + 4;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar5 + 5U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 8) = **(undefined1 **)((int)param_1 + 0x24);
  iVar5 = *(int *)((int)param_1 + 0x24);
  iVar3 = iVar5 + 1;
  *(int *)((int)param_1 + 0x24) = iVar3;
  if (*(uint *)((int)param_1 + 0x28) < iVar5 + 2U) {
    Ordinal_2403((iVar3 - *(uint *)((int)param_1 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 9) = **(undefined1 **)((int)param_1 + 0x24);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
  Ordinal_4817((int)this + 10,0x10);
  iVar5 = FUN_00412d40(param_1,(undefined4 *)((int)this + 0x1a));
  if (*(uint *)(iVar5 + 0x28) < *(int *)(iVar5 + 0x24) + 1U) {
    Ordinal_2403((*(int *)(iVar5 + 0x24) - *(uint *)(iVar5 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x22) = **(undefined1 **)(iVar5 + 0x24);
  *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
  iVar5 = FUN_0040bea0(iVar5,(undefined4 *)((int)this + 0x3b));
  if (*(uint *)(iVar5 + 0x28) < *(int *)(iVar5 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(iVar5 + 0x24) - *(uint *)(iVar5 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x3f) = **(undefined4 **)(iVar5 + 0x24);
  iVar3 = *(int *)(iVar5 + 0x24);
  iVar4 = iVar3 + 4;
  *(int *)(iVar5 + 0x24) = iVar4;
  if (*(uint *)(iVar5 + 0x28) < iVar3 + 8U) {
    Ordinal_2403((iVar4 - *(uint *)(iVar5 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x43) = **(undefined4 **)(iVar5 + 0x24);
  *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 4;
  piVar7 = (int *)((int)this + 0x27);
  this_00 = (void *)FUN_00412d40(iVar5,(undefined4 *)((int)this + 0x1e));
  FUN_00414860(this_00,piVar7);
  *(undefined4 *)((int)this + 0x23) = 0xffffffff;
  iVar5 = 3;
  *(uint *)((int)this + 0x2b) = (uint)(*(int *)((int)this + 0x27) != 0);
  puVar6 = (undefined4 *)((int)this + 0x2f);
  do {
    FUN_00406080(param_1,puVar6);
    iVar5 = iVar5 + -1;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0);
  FUN_00424640((int)param_1);
  return;
}

