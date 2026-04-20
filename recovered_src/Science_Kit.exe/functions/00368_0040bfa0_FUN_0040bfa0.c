/*
 * Program: Science_Kit.exe
 * Function: FUN_0040bfa0
 * Entry: 0040bfa0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040bfa0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040bfa0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c367;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x85,0);
  local_8 = 0;
  Ordinal_486();
  param_1[0x28] = &PTR_LAB_004112c0;
  param_1[0x29] = 0;
  param_1[0x28] = &PTR_LAB_004112d8;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  param_1[0x28] = &PTR_LAB_00412578;
  local_8._0_1_ = 4;
  FUN_00410940(param_1 + 0x2a,8,4,&LAB_0040e8c0);
  local_8._0_1_ = 5;
  Ordinal_314();
  param_1[0x3d] = &PTR_LAB_004112c0;
  param_1[0x3e] = 0;
  param_1[0x3d] = &PTR_LAB_004112d8;
  param_1[0x3d] = &PTR_LAB_004121e0;
  local_8._0_1_ = 9;
  Ordinal_487();
  local_8._0_1_ = 10;
  Ordinal_327();
  local_8._0_1_ = 0xb;
  Ordinal_509();
  param_1[0x276] = &PTR_LAB_00412120;
  local_8._0_1_ = 0xd;
  Ordinal_509();
  param_1[0x286] = &PTR_LAB_00412120;
  local_8._0_1_ = 0xf;
  Ordinal_509();
  param_1[0x296] = &PTR_LAB_00411a18;
  local_8._0_1_ = 0x11;
  Ordinal_509();
  param_1[0x2a6] = &PTR_LAB_00411a18;
  local_8._0_1_ = 0x13;
  Ordinal_509();
  param_1[0x2b6] = &PTR_LAB_00411a18;
  local_8._0_1_ = 0x15;
  Ordinal_509();
  param_1[0x2c6] = &PTR_LAB_00411a18;
  local_8._0_1_ = 0x17;
  Ordinal_509();
  param_1[0x2d6] = &PTR_LAB_00411a18;
  local_8 = CONCAT31(local_8._1_3_,0x19);
  Ordinal_509();
  param_1[0x2e6] = &PTR_LAB_004111c0;
  *param_1 = &PTR_LAB_00412480;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x49] = 1;
  param_1[0x32] = 0xff;
  param_1[0x33] = 0xff0000;
  param_1[0x34] = 0x8000;
  param_1[0x35] = 0x800080;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

