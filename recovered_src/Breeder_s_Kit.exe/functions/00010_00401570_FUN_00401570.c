/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00401570
 * Entry: 00401570
 * Namespace: Global
 * Prototype: undefined4 FUN_00401570(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00401570(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_78 [68];
  undefined1 local_34 [16];
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004016ad;
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
  iVar1 = Ordinal_4619(param_1,0x20,local_24);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      Ordinal_1061(s_Failed_to_open_file__004120dc,0,0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004016a5();
    local_8 = 0xffffffff;
    FUN_004016b7();
    uVar2 = 0;
  }
  else {
    Ordinal_271(local_34,1,0x1000,0);
    local_8._0_1_ = 4;
    FUN_004011c0(this,(int)local_78,0);
    Ordinal_2456();
    Ordinal_1725();
    local_8._0_1_ = 3;
    FUN_0040168d();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004016a5();
    local_8 = 0xffffffff;
    FUN_004016b7();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

