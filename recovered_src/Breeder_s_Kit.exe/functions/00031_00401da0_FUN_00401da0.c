/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00401da0
 * Entry: 00401da0
 * Namespace: Global
 * Prototype: undefined4 FUN_00401da0(int param_1)
 */


undefined4 __fastcall FUN_00401da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_84 [68];
  char local_40 [4];
  char local_3c [4];
  char local_38 [4];
  undefined1 local_34 [16];
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00401ef5;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_0040f030;
  local_1c = 0;
  local_18 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_40[0] = s_Gauge_spr_00412134[0];
  local_40[1] = s_Gauge_spr_00412134[1];
  local_40[2] = s_Gauge_spr_00412134[2];
  local_40[3] = s_Gauge_spr_00412134[3];
  local_3c[0] = s_Gauge_spr_00412134[4];
  local_3c[1] = s_Gauge_spr_00412134[5];
  local_3c[2] = s_Gauge_spr_00412134[6];
  local_3c[3] = s_Gauge_spr_00412134[7];
  local_38[0] = s_Gauge_spr_00412134[8];
  local_38[1] = s_Gauge_spr_00412134[9];
  iVar1 = Ordinal_4619(local_40,0,local_24);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00401eed();
    local_8 = 0xffffffff;
    FUN_00401eff();
    uVar2 = 0;
  }
  else {
    Ordinal_271(local_34,1,0x1000,0);
    local_8._0_1_ = 4;
    FUN_0040bdf0(*(void **)(param_1 + 100),(int)local_84,0);
    Ordinal_2456();
    Ordinal_1725();
    local_8._0_1_ = 3;
    FUN_00401ed5();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00401eed();
    local_8 = 0xffffffff;
    FUN_00401eff();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

