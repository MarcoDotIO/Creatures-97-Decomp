/*
 * Program: Health_Kit.exe
 * Function: FUN_004034b0
 * Entry: 004034b0
 * Namespace: Global
 * Prototype: undefined FUN_004034b0(int param_1)
 */


void __fastcall FUN_004034b0(int param_1)

{
  int iVar1;
  int yTop;
  undefined1 uVar2;
  int xLeft;
  int yBottom;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x19c) = 0xb1;
  }
  else if (iVar1 < 0x80) {
    *(int *)(param_1 + 0x19c) = 0xb1 - iVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x19c) = 0x32;
  }
  iVar1 = *(int *)(param_1 + 0x19c);
  xLeft = *(int *)(param_1 + 0x1a0);
  if (iVar1 < xLeft) {
    yBottom = *(int *)(param_1 + 0x17c);
    yTop = *(int *)(param_1 + 0x178);
  }
  else {
    yBottom = *(int *)(param_1 + 0x17c);
    if (xLeft < iVar1) {
      SetRect((LPRECT)(param_1 + 0x13c),xLeft,*(int *)(param_1 + 0x178),iVar1,yBottom);
      *(LPRECT *)(param_1 + 0x14c) = (LPRECT)(param_1 + 0x13c);
      uVar2 = 0x22;
      goto LAB_0040356d;
    }
    xLeft = *(int *)(param_1 + 0x180);
    yTop = *(int *)(param_1 + 0x178);
  }
  SetRect((LPRECT)(param_1 + 0x13c),iVar1,yTop,xLeft,yBottom);
  *(LPRECT *)(param_1 + 0x14c) = (LPRECT)(param_1 + 0x13c);
  uVar2 = 0x7e;
LAB_0040356d:
  FUN_00402690(*(void **)(param_1 + 0xdc),uVar2,(int *)(param_1 + 0x13c));
  FUN_0040d360((void *)(param_1 + 0x10c),*(void **)(param_1 + 0xdc),1,(int *)(param_1 + 0x164),
               (int *)(param_1 + 0x13c));
  FUN_00408dc0((void *)(param_1 + 0x94),*(RECT **)(param_1 + 0x14c),0,0);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
  return;
}

