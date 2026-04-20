/*
 * Program: Score_Kit.exe
 * Function: FUN_00402910
 * Entry: 00402910
 * Namespace: Global
 * Prototype: undefined FUN_00402910(undefined4 * param_1)
 */


void __fastcall FUN_00402910(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402959;
  *param_1 = &PTR_LAB_0040a3b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_1081(param_1);
  local_8 = 0xffffffff;
  FUN_00402963();
  *unaff_FS_OFFSET = local_10;
  return;
}

