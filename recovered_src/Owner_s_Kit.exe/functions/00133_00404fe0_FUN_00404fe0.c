/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00404fe0
 * Entry: 00404fe0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404fe0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404fe0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405587;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x89,0);
  local_8 = 0;
  Ordinal_374();
  local_8._0_1_ = 1;
  FUN_00403e90(param_1 + 0x2c);
  local_8._0_1_ = 2;
  Ordinal_486();
  local_8._0_1_ = 3;
  Ordinal_486();
  local_8._0_1_ = 4;
  FUN_004010b0(param_1 + 0x48);
  local_8._0_1_ = 5;
  Ordinal_509();
  param_1[0x69] = &PTR_LAB_0040ecb8;
  local_8._0_1_ = 7;
  FUN_00406ad0(param_1 + 0x79);
  param_1[0x79] = &PTR_LAB_0040ed78;
  local_8._0_1_ = 9;
  FUN_00406b30(param_1 + 0x7b);
  local_8._0_1_ = 10;
  FUN_00406b30(param_1 + 0x7d);
  local_8._0_1_ = 0xb;
  FUN_00406b30(param_1 + 0x7f);
  param_1[0x69] = &PTR_LAB_0040eb38;
  local_8._0_1_ = 0xd;
  Ordinal_509();
  param_1[0x81] = &PTR_LAB_0040ecb8;
  local_8._0_1_ = 0xf;
  FUN_00406ad0(param_1 + 0x91);
  param_1[0x91] = &PTR_LAB_0040ed78;
  local_8._0_1_ = 0x11;
  FUN_00406b30(param_1 + 0x93);
  local_8._0_1_ = 0x12;
  FUN_00406b30(param_1 + 0x95);
  local_8._0_1_ = 0x13;
  FUN_00406b30(param_1 + 0x97);
  param_1[0x81] = &PTR_LAB_0040eb38;
  local_8._0_1_ = 0x15;
  Ordinal_509();
  param_1[0x99] = &PTR_LAB_0040ecb8;
  local_8._0_1_ = 0x17;
  FUN_00406b30(param_1 + 0xa9);
  local_8._0_1_ = 0x18;
  FUN_00406b30(param_1 + 0xab);
  local_8._0_1_ = 0x19;
  FUN_00406b30(param_1 + 0xad);
  local_8._0_1_ = 0x1a;
  FUN_00406b30(param_1 + 0xaf);
  param_1[0x99] = &PTR_LAB_0040eb38;
  local_8._0_1_ = 0x1c;
  FUN_00406c70(param_1 + 0xb1);
  local_8._0_1_ = 0x1d;
  FUN_00406b30(param_1 + 0xc1);
  local_8._0_1_ = 0x1e;
  FUN_00406b30(param_1 + 0xc3);
  local_8._0_1_ = 0x1f;
  FUN_00406b30(param_1 + 0xc5);
  local_8._0_1_ = 0x20;
  FUN_00406b30(param_1 + 199);
  param_1[0xb1] = &PTR_LAB_0040eb38;
  local_8._0_1_ = 0x22;
  FUN_00406d70(param_1 + 0xc9);
  local_8._0_1_ = 0x23;
  Ordinal_509();
  param_1[0xe3] = &PTR_LAB_0040e1b0;
  local_8._0_1_ = 0x25;
  Ordinal_509();
  param_1[0xf3] = &PTR_LAB_0040e1b0;
  local_8._0_1_ = 0x27;
  Ordinal_509();
  param_1[0x103] = &PTR_LAB_0040ebf8;
  local_8._0_1_ = 0x29;
  Ordinal_486();
  local_8._0_1_ = 0x2a;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,0x2b);
  *param_1 = &PTR_LAB_0040ea40;
  param_1[0x23] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x47] = 0;
  param_1[0x68] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  Ordinal_5439(0,4);
  Ordinal_762(&DAT_00412344);
  Ordinal_762(&DAT_00412344);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

