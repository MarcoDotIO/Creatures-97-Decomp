/*
 * Program: Creatures.exe
 * Function: FUN_00421f50
 * Entry: 00421f50
 * Namespace: Global
 * Prototype: undefined FUN_00421f50(int * param_1)
 */


void __fastcall FUN_00421f50(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int local_1c;
  
  if ((char)param_1[0xade] != '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x115) == '\0') {
    local_1c = 0x27;
    piVar11 = (int *)((int)param_1 + 0x846);
    do {
      if ((int *)*piVar11 != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)*piVar11 + 0x70))();
        iVar12 = *(int *)((int)piVar11 + 6);
        if ((iVar12 != 0) &&
           (((uVar10 = iVar12 - iVar3, 0x20 < (int)uVar10 || ((int)uVar10 < -0x20)) &&
            (iVar4 = FUN_0041fea0(param_1,(int *)*piVar11), iVar4 != 0)))) {
          pcVar1 = *(code **)(*param_1 + 0x70);
          iVar4 = (*pcVar1)();
          uVar7 = iVar12 - iVar4 >> 0x1f;
          iVar5 = (*pcVar1)();
          uVar8 = iVar3 - iVar5 >> 0x1f;
          uVar9 = (int)uVar10 >> 0x1f;
          if ((int)((iVar3 - iVar5 ^ uVar8) - uVar8) < (int)((iVar12 - iVar4 ^ uVar7) - uVar7)) {
            uVar9 = (uVar10 ^ uVar9) - uVar9;
            iVar12 = 5;
          }
          else {
            uVar9 = (uVar10 ^ uVar9) - uVar9;
            iVar12 = 6;
          }
          FUN_004219b0(param_1,*piVar11,iVar12,uVar9);
        }
        *(int *)((int)piVar11 + 6) = iVar3;
        uVar6 = (**(code **)(*(int *)*piVar11 + 0x74))();
        *(undefined4 *)((int)piVar11 + 10) = uVar6;
      }
      piVar11 = piVar11 + 4;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    iVar12 = 0;
    local_1c = 0;
    if (0 < DAT_00437fb8) {
      do {
        piVar11 = *(int **)(DAT_00437fb4 + iVar12);
        uVar10 = FUN_00414ec0((int)piVar11);
        piVar2 = *(int **)(uVar10 * 0x10 + 0x836 + (int)param_1);
        if (piVar2 == (int *)0x0) {
          iVar3 = FUN_0041fea0(param_1,piVar11);
          if (iVar3 != 0) {
            uVar9 = FUN_004222e0(param_1,(int)piVar11);
            FUN_004219b0(param_1,piVar11,8,uVar9);
            *(undefined1 *)(param_1 + uVar10 * 4 + 0x211) = 1;
          }
        }
        else if (((piVar11 != piVar2) && ((char)param_1[uVar10 * 4 + 0x211] == '\0')) &&
                ((*(int **)((int)param_1 + 0x7e6) != piVar2 &&
                 (iVar3 = FUN_0041fea0(param_1,piVar11), iVar3 != 0)))) {
          uVar9 = FUN_004222e0(param_1,(int)piVar11);
          FUN_004219b0(param_1,piVar11,8,uVar9);
          *(undefined1 *)(param_1 + uVar10 * 4 + 0x211) = 1;
          FUN_0042beb0((void *)param_1[0xab2],7,uVar10,0);
        }
        iVar12 = iVar12 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < DAT_00437fb8);
    }
    piVar11 = param_1 + 0x215;
    iVar12 = 0x27;
    do {
      piVar2 = *(int **)((int)piVar11 + -0xe);
      if (piVar2 != (int *)0x0) {
        if (((char)*piVar11 == '\0') && (iVar3 = FUN_0041fea0(param_1,piVar2), iVar3 != 0)) {
          iVar3 = FUN_004222e0(param_1,(int)piVar2);
          FUN_004219b0(param_1,piVar2,8,iVar3 / 3);
          *(char *)piVar11 = '\x01';
        }
        else if (((piVar2 != (int *)0x0) && ((char)*piVar11 != '\0')) &&
                (iVar3 = FUN_0041fea0(param_1,piVar2), iVar3 == 0)) {
          *(char *)piVar11 = '\0';
        }
      }
      piVar11 = piVar11 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if ((*(int *)((int)param_1 + 0x7e6) != 0) &&
     ((*(uint *)(*(int *)((int)param_1 + 0x7e6) + 4) & 0xff000000) == 0x4000000)) {
    FUN_0042be60((void *)param_1[0xab2],5,0xf,0xff);
    iVar12 = *(int *)((int)param_1 + 0x7e6);
    if ((param_1[0x13] == *(int *)(iVar12 + 0x48)) || (param_1[0x14] == *(int *)(iVar12 + 0x48))) {
      FUN_0042be60((void *)param_1[0xab2],5,0x11,0xff);
    }
    if ((*(int *)(iVar12 + 0x4c) == param_1[0x12]) || (*(int *)(iVar12 + 0x50) == param_1[0x12])) {
      FUN_0042be60((void *)param_1[0xab2],5,0x12,0xff);
    }
    if ((*(int *)(iVar12 + 0x4c) == param_1[0x13]) || (*(int *)(iVar12 + 0x50) == param_1[0x14])) {
      FUN_0042be60((void *)param_1[0xab2],5,0x10,0xff);
    }
    if ((((*(uint *)(iVar12 + 4) ^ param_1[1]) & 0xffff0000) == 0) &&
       (*(char *)((int)param_1 + 0x2b6f) != *(char *)(iVar12 + 0x2b6f))) {
      FUN_0042be60((void *)param_1[0xab2],5,0x13,0xff);
    }
  }
  iVar12 = *(int *)((int)param_1 + 0xc2);
  if (((char)param_1[0x1c] == '\x03') && (iVar12 - *(int *)((int)param_1 + 10) < 0x50)) {
    iVar12 = *(int *)((int)param_1 + 10) - iVar12;
  }
  else {
    if (((char)param_1[0x1c] != '\x02') || (0x4f < *(int *)((int)param_1 + 0x12) - iVar12))
    goto LAB_004222b9;
    iVar12 = iVar12 - *(int *)((int)param_1 + 0x12);
  }
  FUN_0042be60((void *)param_1[0xab2],5,3,iVar12 * 2 + 200);
LAB_004222b9:
  if (*(int *)((int)param_1 + 0x1a) != 0) {
    FUN_0042be60((void *)param_1[0xab2],5,4,0x7f);
  }
  return;
}

