/*
 * Program: Creatures.exe
 * Function: FUN_004180b0
 * Entry: 004180b0
 * Namespace: Global
 * Prototype: undefined FUN_004180b0(int * param_1)
 */


void __fastcall FUN_004180b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_00414da0(param_1);
  if ((0 < *(int *)((int)param_1 + 0x3f)) &&
     (iVar1 = *(int *)((int)param_1 + 0x43) + -1, *(int *)((int)param_1 + 0x43) = iVar1, iVar1 < 1))
  {
    FUN_004150e0(param_1,9,param_1,0);
    *(undefined4 *)((int)param_1 + 0x43) = *(undefined4 *)((int)param_1 + 0x3f);
  }
  if (param_1[0x4f] == 0 && param_1[0x50] == 0) {
    iVar1 = 0;
    if (param_1[0x12] < 1) {
      return;
    }
    piVar5 = param_1 + 0x13;
    do {
      if ((void *)*piVar5 != (void *)0x0) {
        FUN_0041a590((void *)*piVar5);
      }
      piVar5 = piVar5 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x12]);
    return;
  }
  iVar1 = 0;
  if (0 < param_1[0x12]) {
    piVar5 = param_1 + 0x13;
    do {
      if (*piVar5 != 0) {
        FUN_0041a560(*piVar5);
      }
      piVar5 = piVar5 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x12]);
  }
  iVar1 = param_1[0x51];
  iVar6 = param_1[0x52];
  param_1[0x51] = param_1[0x4f] + iVar1;
  local_10 = param_1[0x4f] + iVar1 >> 8;
  param_1[0x52] = iVar6 + param_1[0x50];
  iVar6 = iVar6 + param_1[0x50] >> 8;
  FUN_0040b1b0(&local_10);
  iVar1 = (**(code **)(*param_1 + 0x70))();
  iStack_c = (**(code **)(*param_1 + 0x74))();
  if ((iVar1 == local_10) && (iStack_c == iVar6)) goto LAB_00418304;
  iStack_4 = param_1[0x57];
  param_1[0x57] = 0;
  if ((*(byte *)((int)param_1 + 9) & 0x40) == 0) {
    if ((*(byte *)((int)param_1 + 9) & 0x80) != 0) {
      iStack_8 = *(int *)(DAT_00438594 + 0x32c +
                         ((int)(local_10 + (local_10 >> 0x1f & 0x1fU)) >> 5) * 4);
      iVar2 = (**(code **)(*param_1 + 0x78))();
      iVar2 = iVar2 + local_10;
      if (0x209f < iVar2) {
        iVar2 = iVar2 + -0x20a0;
      }
      iVar2 = *(int *)(DAT_00438594 + 0x32c + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      iVar4 = (**(code **)(*param_1 + 0x7c))();
      iVar4 = iVar4 + iVar6;
      if (iVar4 < iStack_8) {
LAB_004182a1:
        if (iVar4 < iVar2) {
          if (iVar6 < 0) goto LAB_004182b4;
          goto LAB_004182c3;
        }
        uVar3 = param_1[0x57] | 2;
      }
      else if (iVar4 < iVar2) {
        if (iVar4 < iStack_8) goto LAB_004182a1;
        uVar3 = param_1[0x57] | 1;
      }
      else {
        uVar3 = param_1[0x57] | 8;
      }
LAB_004182bd:
      param_1[0x57] = uVar3;
    }
  }
  else {
    if (local_10 < *(int *)((int)param_1 + 10)) {
      param_1[0x57] = 1;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x78))();
      if (*(int *)((int)param_1 + 0x12) < local_10 + iVar2) {
        param_1[0x57] = param_1[0x57] | 2;
      }
    }
    if (iVar6 < *(int *)((int)param_1 + 0xe)) {
LAB_004182b4:
      uVar3 = param_1[0x57] | 4;
      goto LAB_004182bd;
    }
    iVar2 = (**(code **)(*param_1 + 0x7c))();
    if (*(int *)((int)param_1 + 0x16) < iVar2 + iVar6) {
      uVar3 = param_1[0x57] | 8;
      goto LAB_004182bd;
    }
  }
LAB_004182c3:
  if ((param_1[0x57] != 0) && (param_1[0x57] != iStack_4)) {
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    FUN_00417f30(param_1);
    FUN_004150e0(param_1,6,param_1,0);
    return;
  }
LAB_00418304:
  if ((iVar1 != local_10) || (iStack_c != iVar6)) {
    local_10 = local_10 - iVar1;
    iVar6 = iVar6 - iStack_c;
    iVar1 = 0;
    iVar2 = 0;
    if (0 < DAT_00437fb8) {
      do {
        if (*(int **)((int)*(int **)(DAT_00437fb4 + iVar1) + 0x1a) == param_1) {
          (**(code **)(**(int **)(DAT_00437fb4 + iVar1) + 0x48))(local_10,iVar6);
          FUN_00414f10(*(int **)(DAT_00437fb4 + iVar1));
        }
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00437fb8);
    }
    (**(code **)(*param_1 + 0x50))(local_10,iVar6);
  }
  return;
}

