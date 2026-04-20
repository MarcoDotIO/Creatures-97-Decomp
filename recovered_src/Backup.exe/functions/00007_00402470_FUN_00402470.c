/*
 * Program: Backup.exe
 * Function: FUN_00402470
 * Entry: 00402470
 * Namespace: Global
 * Prototype: undefined4 * FUN_00402470(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00402470(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004024bd;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  *param_1 = &PTR_LAB_004044a8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

