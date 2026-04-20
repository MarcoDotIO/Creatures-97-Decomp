/*
 * Program: Science_Kit.exe
 * Function: FUN_00403e90
 * Entry: 00403e90
 * Namespace: Global
 * Prototype: undefined4 * FUN_00403e90(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00403e90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403f43;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  param_1[0x32] = &PTR_LAB_004112c0;
  param_1[0x33] = 0;
  param_1[0x32] = &PTR_LAB_004112d8;
  param_1[0x32] = &PTR_LAB_004116f0;
  *param_1 = &PTR_LAB_00411650;
  param_1[0x34] = 0xffffffff;
  param_1[0x31] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

