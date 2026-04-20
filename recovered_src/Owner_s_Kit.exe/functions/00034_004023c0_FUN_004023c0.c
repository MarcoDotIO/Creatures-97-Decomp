/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004023c0
 * Entry: 004023c0
 * Namespace: Global
 * Prototype: undefined FUN_004023c0(undefined4 * param_1)
 */


void __fastcall FUN_004023c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004023fd;
  *param_1 = &PTR_LAB_0040e0f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00402407();
  *unaff_FS_OFFSET = local_10;
  return;
}

