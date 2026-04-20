/*
 * Program: Science_Kit.exe
 * Function: FUN_00402a10
 * Entry: 00402a10
 * Namespace: Global
 * Prototype: undefined FUN_00402a10(undefined4 * param_1)
 */


void __fastcall FUN_00402a10(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402a65;
  *param_1 = &PTR_LAB_00411280;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00402a5a();
  local_8 = 0xffffffff;
  FUN_00402a6f();
  *unaff_FS_OFFSET = local_10;
  return;
}

