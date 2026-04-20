/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040bf20
 * Entry: 0040bf20
 * Namespace: Global
 * Prototype: undefined4 FUN_0040bf20(int param_1)
 */


undefined4 __fastcall FUN_0040bf20(int param_1)

{
  byte *pbVar1;
  HDC pHVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_94 [36];
  HDC local_70;
  uchar *local_60;
  uchar *local_5c;
  uchar *local_58;
  uchar *local_54;
  uchar *local_50;
  undefined4 local_4c;
  byte *local_44;
  HGDIOBJ local_40;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  HDC local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uchar *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c322;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  Ordinal_285(param_1);
  local_8._0_1_ = 1;
  pHVar2 = CreateCompatibleDC(local_70);
  Ordinal_1425(pHVar2);
  local_40 = SelectObject(local_30,*(HGDIOBJ *)(param_1 + 0x110));
  local_4c = Ordinal_5125(param_1 + 0x124);
  Ordinal_5207(1);
  (**(code **)(local_34 + 100))
            (0x5a,0x74,*(int *)(param_1 + 0x98),*(undefined4 *)(*(int *)(param_1 + 0x98) + -8));
  local_44 = *(byte **)(param_1 + 0xa0);
  pbVar1 = *(byte **)(param_1 + 0x9c);
  FUN_0040c340((char *)pbVar1,local_94);
  Ordinal_486();
  local_8._0_1_ = 2;
  Ordinal_3656(0x6d);
  Ordinal_486();
  local_8._0_1_ = 3;
  Ordinal_3656(0x68);
  Ordinal_483(local_94);
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8._0_1_ = 5;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,6);
  local_58 = local_14;
  local_5c = local_14;
  local_60 = local_14;
  local_50 = local_14;
  local_54 = local_14;
  iVar3 = _mbscmp(local_14,&DAT_00412744);
  iVar4 = _mbscmp(local_60,&DAT_0041275c);
  iVar5 = _mbscmp(local_5c,&DAT_00412764);
  iVar6 = _mbscmp(local_58,&DAT_0041276c);
  iVar7 = _mbscmp(local_54,&DAT_0041274c);
  iVar8 = _mbscmp(local_50,&DAT_00412754);
  if (((((iVar3 == 0 || iVar4 == 0) || iVar5 == 0) || iVar6 == 0) || iVar7 == 0) || iVar8 == 0) {
    (**(code **)(local_34 + 100))(0x5a,0x8d,local_1c,*(undefined4 *)(local_1c + -8));
  }
  else {
    iVar3 = FUN_00402f90(*(void **)(param_1 + 0x8c),local_44,0);
    if (iVar3 == 0) {
      Ordinal_760(local_38);
    }
    else {
      uVar9 = FUN_00403030(*(void **)(param_1 + 0x8c),local_44);
      Ordinal_762(uVar9);
    }
    iVar3 = FUN_00402f90(*(void **)(param_1 + 0x8c),pbVar1,0);
    if (iVar3 == 0) {
      Ordinal_760(local_38);
    }
    else {
      uVar9 = FUN_00403030(*(void **)(param_1 + 0x8c),pbVar1);
      Ordinal_762(uVar9);
    }
    (**(code **)(local_34 + 100))(0x5a,0x8d,local_20,*(undefined4 *)(local_20 + -8));
    local_1c = local_24;
  }
  (**(code **)(local_34 + 100))(0x5a,0xa5,local_1c,*(undefined4 *)(local_1c + -8));
  Ordinal_481(param_1 + 0xa4);
  local_8._0_1_ = 7;
  iVar3 = 0;
  Ordinal_483(s__0041273c);
  local_8._0_1_ = 8;
  Ordinal_483(&DAT_00412734);
  local_8 = CONCAT31(local_8._1_3_,9);
  do {
    Ordinal_5188(iVar3,*(undefined1 *)(local_18 + iVar3));
    Ordinal_5188(iVar3,0x20);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  Ordinal_5188(iVar3,0x20);
  Ordinal_5569();
  (**(code **)(local_34 + 100))(0x5a,0xbc,local_18,*(undefined4 *)(local_18 + -8));
  (**(code **)(local_34 + 100))(0x5a,0x102,local_3c,*(undefined4 *)(local_3c + -8));
  Ordinal_5125(local_4c);
  if (local_40 != (HGDIOBJ)0x0) {
    SelectObject(local_30,local_40);
  }
  Ordinal_2106();
  local_8._0_1_ = 8;
  FUN_0040c2da();
  local_8._0_1_ = 7;
  FUN_0040c2e2();
  local_8._0_1_ = 6;
  FUN_0040c2ea();
  local_8._0_1_ = 5;
  FUN_0040c2f2();
  local_8._0_1_ = 4;
  FUN_0040c2fa();
  local_8._0_1_ = 3;
  FUN_0040c302();
  local_8._0_1_ = 2;
  FUN_0040c30a();
  local_8._0_1_ = 1;
  FUN_0040c312();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040c31a();
  local_8 = 0xffffffff;
  FUN_0040c32c();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

