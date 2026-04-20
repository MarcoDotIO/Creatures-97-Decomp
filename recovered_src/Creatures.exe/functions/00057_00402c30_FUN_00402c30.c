/*
 * Program: Creatures.exe
 * Function: FUN_00402c30
 * Entry: 00402c30
 * Namespace: Global
 * Prototype: undefined FUN_00402c30(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8, undefined4 param_9)
 */


void __thiscall
FUN_00402c30(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  HPALETTE hPal;
  BOOL BVar4;
  HPEN pHVar5;
  HDC pHVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_FS_OFFSET;
  RECT local_38;
  int local_28 [3];
  HDC local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402ee0;
  *unaff_FS_OFFSET = &local_10;
  uVar1 = param_4 - param_2;
  if ((uVar1 & 3) != 0) {
    uVar8 = (int)uVar1 >> 0x1f;
    iVar7 = 4 - (((uVar1 ^ uVar8) - uVar8 & 3 ^ uVar8) - uVar8);
    param_4 = param_4 + iVar7;
    if (param_8 < 0x20a0) {
      if (param_8 < param_4) {
        param_4 = param_4 - iVar7;
        param_2 = param_2 - iVar7;
      }
      if (param_2 < param_6) {
        param_2 = iVar7 + param_2;
      }
    }
    else {
      iVar2 = param_4;
      if (0x209f < param_4) {
        iVar2 = param_4 + -0x20a0;
      }
      if (param_8 + -0x20a0 < iVar2) {
        param_4 = param_4 - iVar7;
        param_2 = param_2 - iVar7;
        if (param_2 < 0) {
          param_2 = param_2 + 0x20a0;
          param_4 = param_4 + 0x20a0;
        }
      }
      if ((param_8 + -0x20a0 <= param_2) && (param_2 < param_6)) {
        param_2 = iVar7 + param_2;
      }
    }
  }
  FUN_00402f00(this,param_2,param_3,param_4,param_5);
  piVar3 = (int *)FUN_00403110(this,local_28,&param_2);
  param_2 = *piVar3;
  param_3 = piVar3[1];
  param_4 = piVar3[2];
  local_1c = *(HDC *)(param_1 + 4);
  param_5 = piVar3[3];
  hPal = SelectPalette(local_1c,(HPALETTE)**(undefined4 **)((int)this + 0x470),0);
  RealizePalette(local_1c);
  WinGBitBlt(local_1c,param_2,param_3,param_4 - param_2,param_5 - param_3,
             *(undefined4 *)((int)this + 0x34),param_2,param_3);
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_00403110(this,&local_38.left,(int *)((int)this + 0x1c));
    BVar4 = IntersectRect((LPRECT)&param_2,&local_38,(LPRECT)&param_2);
    if (BVar4 != 0) {
      local_14 = 0;
      local_18 = &PTR_LAB_0042f2c8;
      local_8 = 2;
      pHVar5 = CreatePen(0,2,0xff80ff);
      iVar7 = Ordinal_1426(pHVar5);
      pHVar6 = local_1c;
      if (iVar7 != 0) {
        pHVar6 = (HDC)Ordinal_5124(&local_18);
      }
      MoveToEx(local_1c,local_38.left,local_38.top,(LPPOINT)0x0);
      LineTo(local_1c,local_38.right,local_38.top);
      LineTo(local_1c,local_38.right,local_38.bottom);
      LineTo(local_1c,local_38.left,local_38.bottom);
      LineTo(local_1c,local_38.left,local_38.top);
      if (pHVar6 != (HDC)0x0) {
        Ordinal_5124(pHVar6);
      }
      local_8 = 0xffffffff;
      FUN_00402eea();
    }
  }
  GdiFlush();
  SelectPalette(local_1c,hPal,0);
  RealizePalette(local_1c);
  *unaff_FS_OFFSET = local_10;
  return;
}

