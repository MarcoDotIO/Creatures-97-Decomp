/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406c70
 * Entry: 00406c70
 * Namespace: Global
 * Prototype: undefined4 * FUN_00406c70(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00406c70(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00406cbb;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_509();
  *param_1 = &PTR_LAB_0040ecb8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

