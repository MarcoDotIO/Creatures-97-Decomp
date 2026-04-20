/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406d70
 * Entry: 00406d70
 * Namespace: Global
 * Prototype: undefined4 * FUN_00406d70(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00406d70(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00406efc;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_509();
  *param_1 = &PTR_LAB_0040ecb8;
  param_1[0x10] = &PTR_LAB_0040e018;
  param_1[0x10] = &PTR_LAB_0040e810;
  param_1[0x11] = 0;
  param_1[0x10] = &PTR_LAB_0040ed78;
  param_1[0x12] = &PTR_LAB_0040e018;
  param_1[0x12] = &PTR_LAB_0040e810;
  param_1[0x13] = 0;
  param_1[0x12] = &PTR_LAB_0040ed78;
  param_1[0x14] = &PTR_LAB_0040e018;
  param_1[0x14] = &PTR_LAB_0040e810;
  param_1[0x15] = 0;
  param_1[0x14] = &PTR_LAB_0040ed78;
  param_1[0x16] = &PTR_LAB_0040e018;
  param_1[0x16] = &PTR_LAB_0040e810;
  param_1[0x16] = &PTR_LAB_0040ed78;
  param_1[0x17] = 0;
  *param_1 = &PTR_LAB_0040eb38;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

