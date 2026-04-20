/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040cd00
 * Entry: 0040cd00
 * Namespace: Global
 * Prototype: undefined4 FUN_0040cd00(void)
 */


undefined4 FUN_0040cd00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_c4 [64];
  undefined1 local_84 [68];
  undefined1 local_40 [16];
  undefined **local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  void *local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040ce88;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_30[0] = &PTR_LAB_0040f030;
  local_24 = 0xffffffff;
  local_28 = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_18 = (void *)(local_1c + 0x58c);
  *(undefined4 *)(local_1c + 0x5b4) = 0;
  local_14 = 0;
  do {
    local_14 = local_14 + 1;
    wsprintfA(local_c4,s_Preg_d_spr_00412728,local_14);
    iVar1 = Ordinal_4619(local_c4,0,local_30);
    if (iVar1 == 0) {
      iVar1 = Ordinal_5003(0,0);
      if (iVar1 == 0) {
        Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040ce80();
      local_8 = 0xffffffff;
      FUN_0040ce92();
      uVar2 = 0;
      goto LAB_0040ce24;
    }
    Ordinal_271(local_40,1,0x1000,0);
    local_8._0_1_ = 4;
    FUN_0040bdf0(local_18,(int)local_84,0);
    *(int *)(local_1c + 0x5b4) = *(int *)(local_1c + 0x5b4) + *(int *)((int)local_18 + 0x24);
    Ordinal_2456();
    Ordinal_1725();
    local_8._0_1_ = 3;
    FUN_0040ce68();
    local_18 = (void *)((int)local_18 + 0x28);
  } while (local_14 < 1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040ce80();
  local_8 = 0xffffffff;
  FUN_0040ce92();
  uVar2 = 1;
LAB_0040ce24:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

