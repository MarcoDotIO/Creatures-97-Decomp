/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004074c0
 * Entry: 004074c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004074c0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004074c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407acb;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8e,0);
  local_8 = 0;
  Ordinal_374();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  Ordinal_486();
  local_8._0_1_ = 3;
  Ordinal_486();
  local_8._0_1_ = 4;
  FUN_0040b2a0(param_1 + 0x2e);
  local_8._0_1_ = 5;
  FUN_00409980(param_1 + 0x4b);
  local_8._0_1_ = 6;
  FUN_00409980(param_1 + 0x52);
  local_8._0_1_ = 7;
  FUN_0040b2a0(param_1 + 0x5b);
  local_8._0_1_ = 8;
  Ordinal_509();
  param_1[0x75] = &PTR_LAB_0040fc08;
  local_8._0_1_ = 10;
  FUN_00408a50(param_1 + 0x85);
  param_1[0x85] = &PTR_LAB_0040fcc8;
  local_8._0_1_ = 0xc;
  FUN_00408a50(param_1 + 0x87);
  param_1[0x87] = &PTR_LAB_0040fcc8;
  local_8._0_1_ = 0xe;
  FUN_00408a50(param_1 + 0x89);
  param_1[0x89] = &PTR_LAB_0040fcc8;
  local_8._0_1_ = 0x10;
  FUN_00408a50(param_1 + 0x8b);
  param_1[0x8b] = &PTR_LAB_0040fcc8;
  param_1[0x75] = &PTR_LAB_0040fb48;
  local_8._0_1_ = 0x13;
  Ordinal_509();
  param_1[0x8d] = &PTR_LAB_0040fc08;
  local_8._0_1_ = 0x15;
  FUN_00408a50(param_1 + 0x9d);
  param_1[0x9d] = &PTR_LAB_0040fcc8;
  local_8._0_1_ = 0x17;
  FUN_00408a50(param_1 + 0x9f);
  param_1[0x9f] = &PTR_LAB_0040fcc8;
  local_8._0_1_ = 0x19;
  FUN_00408ab0(param_1 + 0xa1);
  local_8._0_1_ = 0x1a;
  FUN_00408ab0(param_1 + 0xa3);
  param_1[0x8d] = &PTR_LAB_0040fb48;
  local_8._0_1_ = 0x1c;
  Ordinal_509();
  param_1[0xa5] = &PTR_LAB_0040fc08;
  local_8._0_1_ = 0x1e;
  FUN_00408ab0(param_1 + 0xb5);
  local_8._0_1_ = 0x1f;
  FUN_00408ab0(param_1 + 0xb7);
  local_8._0_1_ = 0x20;
  FUN_00408ab0(param_1 + 0xb9);
  local_8._0_1_ = 0x21;
  FUN_00408ab0(param_1 + 0xbb);
  param_1[0xa5] = &PTR_LAB_0040fb48;
  local_8._0_1_ = 0x23;
  FUN_004010b0(param_1 + 0xbf);
  local_8._0_1_ = 0x24;
  Ordinal_509();
  param_1[0xc5] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x26;
  Ordinal_509();
  param_1[0xd5] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x28;
  Ordinal_509();
  param_1[0xe5] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x2a;
  Ordinal_509();
  param_1[0xf5] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x2c;
  Ordinal_486();
  local_8._0_1_ = 0x2d;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,0x2e);
  *param_1 = &PTR_LAB_0040fa50;
  param_1[0x23] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x74] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  Ordinal_5439(0,4);
  SetRect((LPRECT)(param_1 + 0x47),0,0,0,0);
  Ordinal_762(&DAT_00412520);
  param_1[0x106] = 0;
  Ordinal_762(&DAT_00412520);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

