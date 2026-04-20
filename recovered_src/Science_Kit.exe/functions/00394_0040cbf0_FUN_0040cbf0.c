/*
 * Program: Science_Kit.exe
 * Function: FUN_0040cbf0
 * Entry: 0040cbf0
 * Namespace: Global
 * Prototype: undefined FUN_0040cbf0(void)
 */


void FUN_0040cbf0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  char local_90 [4];
  char local_8c [4];
  char local_88 [4];
  char local_84 [4];
  char local_80;
  undefined1 local_7c [36];
  int local_58;
  uint local_54;
  undefined1 local_38 [16];
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040cdb6;
  *unaff_FS_OFFSET = &local_10;
  local_90[0] = s_allchemicals_str_004157c0[0];
  local_90[1] = s_allchemicals_str_004157c0[1];
  local_90[2] = s_allchemicals_str_004157c0[2];
  local_90[3] = s_allchemicals_str_004157c0[3];
  local_8c[0] = s_allchemicals_str_004157c0[4];
  local_8c[1] = s_allchemicals_str_004157c0[5];
  local_8c[2] = s_allchemicals_str_004157c0[6];
  local_8c[3] = s_allchemicals_str_004157c0[7];
  local_88[0] = s_allchemicals_str_004157c0[8];
  local_88[1] = s_allchemicals_str_004157c0[9];
  local_88[2] = s_allchemicals_str_004157c0[10];
  local_88[3] = s_allchemicals_str_004157c0[0xb];
  local_84[0] = s_allchemicals_str_004157c0[0xc];
  local_84[1] = s_allchemicals_str_004157c0[0xd];
  local_84[2] = s_allchemicals_str_004157c0[0xe];
  local_84[3] = s_allchemicals_str_004157c0[0xf];
  local_80 = s_allchemicals_str_004157c0[0x10];
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_00411280;
  local_20 = 0;
  local_1c = 0xffffffff;
  Ordinal_762(0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = Ordinal_4619(local_90,0,local_28);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      Ordinal_1061(s_Can_not_open_data_file__00415428,0,0);
    }
  }
  Ordinal_271(local_38,1,0x1000,0);
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,5);
  if (local_54 < local_58 + 2U) {
    Ordinal_2403((local_58 - local_54) + 2);
  }
  iVar1 = 0;
  local_58 = local_58 + 2;
  Ordinal_5441(0x100,0xffffffff);
  do {
    Ordinal_781(local_7c,local_14);
    iVar1 = iVar1 + 4;
    Ordinal_760(local_14);
  } while (iVar1 < 0x400);
  Ordinal_1717();
  Ordinal_1725();
  local_8._0_1_ = 4;
  FUN_0040cd8e();
  local_8._0_1_ = 3;
  FUN_0040cd96();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040cdae();
  local_8 = 0xffffffff;
  FUN_0040cdc0();
  *unaff_FS_OFFSET = local_10;
  return;
}

