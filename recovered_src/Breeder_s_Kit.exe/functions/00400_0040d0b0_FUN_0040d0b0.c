/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040d0b0
 * Entry: 0040d0b0
 * Namespace: Global
 * Prototype: undefined FUN_0040d0b0(int param_1)
 */


void __fastcall FUN_0040d0b0(int param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_c0 [64];
  undefined1 local_80 [68];
  undefined1 local_3c [16];
  undefined **local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  void *local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d206;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24 = 0;
  local_2c[0] = &PTR_LAB_0040f030;
  local_20 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_14 = 0;
  local_18 = (void *)(param_1 + 0x58c);
  do {
    local_14 = local_14 + 1;
    wsprintfA(local_c0,s_Preg_d_spr_00412728,local_14);
    iVar1 = Ordinal_4619(local_c0,0x1001,local_2c);
    if (iVar1 == 0) {
      iVar1 = Ordinal_5003(0,0);
      if (iVar1 == 0) {
        Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
      }
    }
    Ordinal_271(local_3c,0,0x1000,0);
    local_8._0_1_ = 4;
    FUN_0040bdf0(local_18,(int)local_80,0);
    Ordinal_2456();
    Ordinal_1725();
    local_8._0_1_ = 3;
    FUN_0040d1e6();
    local_18 = (void *)((int)local_18 + 0x28);
  } while (local_14 < 1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040d1fe();
  local_8 = 0xffffffff;
  FUN_0040d210();
  *unaff_FS_OFFSET = local_10;
  return;
}

