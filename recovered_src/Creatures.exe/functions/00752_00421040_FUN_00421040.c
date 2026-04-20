/*
 * Program: Creatures.exe
 * Function: FUN_00421040
 * Entry: 00421040
 * Namespace: Global
 * Prototype: undefined FUN_00421040(int * param_1)
 */


void __fastcall FUN_00421040(int *param_1)

{
  int *piVar1;
  POINT pt;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int local_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  RECT RStack_10;
  
  local_30 = 9999;
  iVar2 = (**(code **)(*param_1 + 0x70))();
  iVar3 = (**(code **)(*DAT_00438d0c + 0x70))();
  RStack_10.left = *(LONG *)((int)param_1 + 10);
  RStack_10.top = *(LONG *)((int)param_1 + 0xe);
  RStack_10.right = *(LONG *)((int)param_1 + 0x12);
  RStack_10.bottom = *(LONG *)((int)param_1 + 0x16);
  iVar7 = *(int *)((int)param_1 + 0x1a);
  if (iVar7 != 0) {
    RStack_10.left = *(LONG *)(iVar7 + 10);
    RStack_10.top = *(LONG *)(iVar7 + 0xe);
    RStack_10.right = *(LONG *)(iVar7 + 0x12);
    RStack_10.bottom = *(LONG *)(iVar7 + 0x16);
  }
  iVar7 = 0;
  if (0 < DAT_00437fb8) {
    do {
      piVar1 = *(int **)(DAT_00437fb4 + iVar7 * 4);
      if ((piVar1 != DAT_00438d0c) && (piVar1 != param_1)) {
        (**(code **)(*piVar1 + 0x60))(&iStack_20);
        iVar5 = (iStack_18 - iStack_20) / 2 + iStack_20;
        if (((*(byte *)((int)piVar1 + 9) & 0x10) == 0) &&
           ((((iVar3 < iVar2 && (iVar5 < iVar2)) || ((iVar2 < iVar3 && (iVar2 < iVar5)))) &&
            (((uVar6 = iVar5 - iVar2 >> 0x1f, (int)((iVar5 - iVar2 ^ uVar6) - uVar6) < 500 &&
              (pt.y = iStack_1c + (iStack_14 - iStack_1c) / 2, pt.x = iVar5,
              BVar4 = PtInRect(&RStack_10,pt), BVar4 != 0)) &&
             (uVar6 = iVar3 - iVar5 >> 0x1f, iVar5 = (iVar3 - iVar5 ^ uVar6) - uVar6,
             iVar5 < local_30)))))) {
          local_30 = iVar5;
          iStack_24 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_00437fb8);
  }
  if (0x95 < local_30) {
    FUN_00414ec0((int)DAT_00438d0c);
    return;
  }
  uVar8 = 0;
  uVar6 = FUN_00414ec0((int)DAT_00438d0c);
  FUN_0042beb0((void *)param_1[0xab2],7,uVar6,uVar8);
  FUN_00414ec0(*(int *)(DAT_00437fb4 + iStack_24 * 4));
  return;
}

