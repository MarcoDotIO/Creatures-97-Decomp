/*
 * Program: Science_Kit.exe
 * Function: FUN_0040dfc0
 * Entry: 0040dfc0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040dfc0(int param_1)
 */


undefined4 __fastcall FUN_0040dfc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040e27f;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = (int *)(param_1 + 0xe4);
  SetRect((LPRECT)(param_1 + 0x110),*(int *)(param_1 + 0x100) + 0x1c,*(int *)(param_1 + 0x104) + 6,
          *(int *)(param_1 + 0x108) + -6,*(int *)(param_1 + 0x10c) + -0x14);
  local_2c = Ordinal_5124(param_1 + 0xa0);
  Ordinal_3784(local_28,*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x11c));
  Ordinal_3630(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  iVar3 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x118)) {
    do {
      Ordinal_3784(local_28,iVar3,*(undefined4 *)(param_1 + 0x11c));
      iVar2 = iVar3 + 0x10;
      Ordinal_3630(iVar3,*(int *)(param_1 + 0x11c) + 2);
      iVar3 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x118));
  }
  local_24 = (**(code **)(*piVar1 + 0x30))(*(undefined4 *)(param_1 + 0x9c));
  Ordinal_483(&DAT_00415804);
  local_8 = 0;
  Ordinal_5465(0xe);
  (**(code **)(*piVar1 + 100))
            (*(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x100) >> 1,
             *(int *)(param_1 + 0x10c) + -2,local_14,*(undefined4 *)(local_14 + -8));
  Ordinal_3784(local_34,*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x11c));
  Ordinal_3630(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
  iVar3 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x114) < *(int *)(param_1 + 0x11c)) {
    do {
      Ordinal_3784(local_34,*(undefined4 *)(param_1 + 0x110),iVar3);
      iVar2 = iVar3 + -0x10;
      Ordinal_3630(*(int *)(param_1 + 0x110) + -2,iVar3);
      iVar3 = iVar2;
    } while (*(int *)(param_1 + 0x114) < iVar2);
  }
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_3656(0x68);
  Ordinal_481(local_20);
  local_8._0_1_ = 2;
  Ordinal_5465(0);
  (**(code **)(*piVar1 + 100))
            (*(int *)(param_1 + 0x100) + 2,*(undefined4 *)(param_1 + 0x114),local_18,
             *(undefined4 *)(local_18 + -8));
  Ordinal_483(&DAT_00415800);
  local_8._0_1_ = 3;
  Ordinal_5465(0x18);
  (**(code **)(*piVar1 + 100))
            (*(int *)(param_1 + 0x100) + 2,*(undefined4 *)(param_1 + 0x11c),local_1c,
             *(undefined4 *)(local_1c + -8));
  (**(code **)(*piVar1 + 0x30))(local_24);
  Ordinal_5124(local_2c);
  InflateRect((LPRECT)(param_1 + 0x110),-1,-1);
  Ordinal_2293();
  Ordinal_2293();
  Ordinal_2293();
  local_8._0_1_ = 2;
  FUN_0040e267();
  local_8._0_1_ = 1;
  FUN_0040e26f();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040e277();
  local_8 = 0xffffffff;
  FUN_0040e289();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

