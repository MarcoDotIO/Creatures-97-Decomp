/*
 * Program: Creatures.exe
 * Function: FUN_00425fb0
 * Entry: 00425fb0
 * Namespace: Global
 * Prototype: undefined FUN_00425fb0(void * param_1)
 */


void __fastcall FUN_00425fb0(void *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00426443;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = *(uint **)((int)param_1 + 0x10);
  uVar2 = *puVar1;
  piVar12 = (int *)((int)puVar1 + 5);
  *(int **)((int)param_1 + 0x10) = piVar12;
  if (uVar2 < 0x64626b63) {
    if (uVar2 == 0x64626b62) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      uVar6 = FUN_00424710(param_1);
      uVar7 = FUN_00424710(param_1);
      uVar8 = FUN_00424710(param_1);
      uVar9 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x232);
      local_8 = 1;
      puVar10 = (undefined4 *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar10 = FUN_00418c90(pvVar4,iVar11,uVar3,uVar2,(char)uVar5,(char)uVar6,(char)uVar7,
                               (char)uVar8,(char)uVar9);
      }
      *(undefined4 **)((int)param_1 + 0xa4) = puVar10;
      goto LAB_004264a0;
    }
    if (uVar2 == 0x61657263) {
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x2b85);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = FUN_00422aa0(pvVar4,uVar2,uVar3);
      }
      *(int **)((int)param_1 + 0xa4) = piVar12;
      goto LAB_004264a0;
    }
  }
  else if (uVar2 < 0x6c636877) {
    if (uVar2 == 0x6c636876) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x160);
      local_8 = 2;
      puVar10 = (undefined4 *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar10 = FUN_00417e90(pvVar4,iVar11,uVar3,uVar2);
      }
      *(undefined4 **)((int)param_1 + 0xa4) = puVar10;
      goto LAB_004264a0;
    }
    if (uVar2 == 0x656e6567) {
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      uVar2 = **(uint **)((int)param_1 + 0x10);
      *(int *)((int)param_1 + 0x10) = (int)*(uint **)((int)param_1 + 0x10) + 5;
      iVar11 = FUN_0041b7f0(uVar3,uVar5);
      FUN_004251f0(param_1,uVar2,iVar11);
      goto LAB_004264a0;
    }
  }
  else if (uVar2 < 0x6e746264) {
    if (uVar2 == 0x6e746263) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x59);
      local_8 = 4;
      puVar10 = (undefined4 *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar10 = FUN_00416d10(pvVar4,iVar11,uVar3,uVar2,0,0,uVar5);
      }
      *(undefined4 **)((int)param_1 + 0xa4) = puVar10;
      goto LAB_004264a0;
    }
    if (uVar2 == 0x6e656373) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x4c);
      local_8 = 3;
      piVar12 = (int *)0x0;
      if (pvVar4 != (void *)0x0) {
        piVar12 = FUN_004152c0(pvVar4,iVar11,uVar2,(char)uVar3,0,0,uVar5);
      }
      *(int **)((int)param_1 + 0xa4) = piVar12;
      goto LAB_004264a0;
    }
  }
  else if (uVar2 < 0x706d6f64) {
    if (uVar2 == 0x706d6f63) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x13c);
      local_8 = 6;
      puVar10 = (undefined4 *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar10 = FUN_00417430(pvVar4,iVar11,uVar3,uVar2,uVar5);
      }
      *(undefined4 **)((int)param_1 + 0xa4) = puVar10;
      goto LAB_004264a0;
    }
    if (uVar2 == 0x706d6973) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      uVar6 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x54);
      local_8 = 5;
      piVar12 = (int *)0x0;
      if (pvVar4 != (void *)0x0) {
        piVar12 = FUN_00415670(pvVar4,iVar11,uVar3,uVar2,uVar6,0,0,uVar5,0,0x2000000,0xff,0xff,0xff,
                               0);
      }
      *(int **)((int)param_1 + 0xa4) = piVar12;
      goto LAB_004264a0;
    }
  }
  else {
    if (uVar2 == 0x7466696c) {
      iVar11 = *piVar12;
      *(int *)((int)param_1 + 0x10) = (int)puVar1 + 10;
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      pvVar4 = (void *)Ordinal_729(0x1ad);
      local_8 = 7;
      puVar10 = (undefined4 *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar10 = FUN_00418690(pvVar4,iVar11,uVar3,uVar2);
      }
      *(undefined4 **)((int)param_1 + 0xa4) = puVar10;
      goto LAB_004264a0;
    }
    if (uVar2 == 0x74726170) {
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar5 = FUN_00424710(param_1);
      uVar6 = FUN_00424710(param_1);
      uVar7 = FUN_00424710(param_1);
      FUN_00417550(*(void **)((int)param_1 + 0xa4),uVar2,uVar3,uVar5,(char)uVar6,uVar7);
      *(uint *)((int)param_1 + 0xa8) = uVar2;
      goto LAB_004264a0;
    }
  }
  FUN_004265c0(param_1,s__new___command_00436c98);
LAB_004264a0:
  *unaff_FS_OFFSET = local_10;
  return;
}

