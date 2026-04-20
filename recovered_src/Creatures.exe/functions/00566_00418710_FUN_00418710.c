/*
 * Program: Creatures.exe
 * Function: FUN_00418710
 * Entry: 00418710
 * Namespace: Global
 * Prototype: undefined FUN_00418710(int * param_1)
 */


void __fastcall FUN_00418710(int *param_1)

{
  int iVar1;
  POINT pt;
  LONG LVar2;
  LONG LVar3;
  BOOL BVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  int local_18;
  int iStack_14;
  int iStack_10;
  LONG LStack_c;
  LONG LStack_8;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x60))(&local_18);
  iVar5 = 0;
  iVar6 = 0;
  LVar2 = unaff_EBX + (iStack_14 - unaff_EBX) / 2;
  LVar3 = (iStack_10 - local_18) / 2 + local_18;
  if (0 < *(int *)(DAT_00438594 + 8)) {
    do {
      LStack_8 = LVar3;
      LStack_c = LVar2;
      pt.y = LStack_8;
      pt.x = LStack_c;
      BVar4 = PtInRect((RECT *)(DAT_00438594 + 0xc + iVar5),pt);
      if (BVar4 != 0) {
        (**(code **)(iVar1 + 0x54))(unaff_EBX,*(int *)(DAT_00438594 + 0x18 + iVar5) - param_1[0x56])
        ;
      }
      iVar5 = iVar5 + 0x14;
      iVar6 = iVar6 + 1;
      LVar2 = LStack_c;
      LVar3 = LStack_8;
    } while (iVar6 < *(int *)(DAT_00438594 + 8));
  }
  FUN_00414750(param_1);
  return;
}

