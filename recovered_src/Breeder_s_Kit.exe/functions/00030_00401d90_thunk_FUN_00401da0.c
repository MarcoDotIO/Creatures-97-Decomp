/*
 * Program: Breeder_s_Kit.exe
 * Function: thunk_FUN_00401da0
 * Entry: 00401d90
 * Namespace: Global
 * Prototype: undefined4 thunk_FUN_00401da0(int param_1)
 */


undefined4 __fastcall thunk_FUN_00401da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 auStack_84 [68];
  char acStack_40 [4];
  char acStack_3c [4];
  char acStack_38 [4];
  undefined1 auStack_34 [16];
  undefined **appuStack_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00401ef5;
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_340();
  iStack_8 = 0;
  Ordinal_336();
  iStack_8._0_1_ = 1;
  Ordinal_486();
  iStack_8._0_1_ = 2;
  appuStack_24[0] = &PTR_LAB_0040f030;
  uStack_1c = 0;
  uStack_18 = 0xffffffff;
  Ordinal_762(0);
  iStack_8._0_1_ = 3;
  acStack_40[0] = s_Gauge_spr_00412134[0];
  acStack_40[1] = s_Gauge_spr_00412134[1];
  acStack_40[2] = s_Gauge_spr_00412134[2];
  acStack_40[3] = s_Gauge_spr_00412134[3];
  acStack_3c[0] = s_Gauge_spr_00412134[4];
  acStack_3c[1] = s_Gauge_spr_00412134[5];
  acStack_3c[2] = s_Gauge_spr_00412134[6];
  acStack_3c[3] = s_Gauge_spr_00412134[7];
  acStack_38[0] = s_Gauge_spr_00412134[8];
  acStack_38[1] = s_Gauge_spr_00412134[9];
  iVar1 = Ordinal_4619(acStack_40,0,appuStack_24);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00401eed();
    iStack_8 = 0xffffffff;
    FUN_00401eff();
    uVar2 = 0;
  }
  else {
    Ordinal_271(auStack_34,1,0x1000,0);
    iStack_8._0_1_ = 4;
    FUN_0040bdf0(*(void **)(param_1 + 100),(int)auStack_84,0);
    Ordinal_2456();
    Ordinal_1725();
    iStack_8._0_1_ = 3;
    FUN_00401ed5();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00401eed();
    iStack_8 = 0xffffffff;
    FUN_00401eff();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = uStack_10;
  return uVar2;
}

