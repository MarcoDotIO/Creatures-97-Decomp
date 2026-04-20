/*
 * Program: Score_Kit.exe
 * Function: FUN_004020c0
 * Entry: 004020c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004020c0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004020c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402173;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  param_1[0x32] = &PTR_LAB_0040a018;
  param_1[0x33] = 0;
  param_1[0x32] = &PTR_LAB_0040a0a0;
  param_1[0x32] = &PTR_LAB_0040a2f8;
  *param_1 = &PTR_LAB_0040a258;
  param_1[0x34] = 0xffffffff;
  param_1[0x31] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

