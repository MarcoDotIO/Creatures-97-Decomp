/*
 * Program: Health_Kit.exe
 * Function: FUN_0040a2b0
 * Entry: 0040a2b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040a2b0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040a2b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a603;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8b,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_0040b440(param_1 + 0x27);
  local_8._0_1_ = 2;
  _eh_vector_constructor_iterator_(param_1 + 0x4e,0x484,5,FUN_004051c0,FUN_00405250);
  local_8._0_1_ = 3;
  Ordinal_509();
  local_8._0_1_ = 5;
  param_1[0x600] = &PTR_LAB_0040e1a8;
  Ordinal_509();
  param_1[0x610] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 7;
  Ordinal_509();
  param_1[0x620] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 9;
  Ordinal_509();
  param_1[0x630] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 0xb;
  Ordinal_509();
  param_1[0x640] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 0xd;
  Ordinal_509();
  param_1[0x650] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 0xf;
  Ordinal_509();
  param_1[0x660] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 0x11;
  Ordinal_509();
  param_1[0x670] = &PTR_LAB_0040e1a8;
  local_8._0_1_ = 0x13;
  Ordinal_509();
  param_1[0x680] = &PTR_LAB_0040e1a8;
  local_8 = CONCAT31(local_8._1_3_,0x15);
  Ordinal_509();
  param_1[0x690] = &PTR_LAB_0040e1a8;
  *param_1 = &PTR_LAB_0040f258;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2f] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

