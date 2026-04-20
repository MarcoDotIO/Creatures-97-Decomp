/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004057b0
 * Entry: 004057b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004057b0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004057b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405863;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  param_1[0x32] = &PTR_LAB_0040d018;
  param_1[0x33] = 0;
  param_1[0x32] = &PTR_LAB_0040d728;
  param_1[0x32] = &PTR_LAB_0040d978;
  *param_1 = &PTR_LAB_0040d8d8;
  param_1[0x34] = 0xffffffff;
  param_1[0x31] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

