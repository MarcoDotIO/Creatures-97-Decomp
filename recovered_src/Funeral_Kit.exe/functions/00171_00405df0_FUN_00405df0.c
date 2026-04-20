/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00405df0
 * Entry: 00405df0
 * Namespace: Global
 * Prototype: undefined FUN_00405df0(undefined4 * param_1)
 */


void __fastcall FUN_00405df0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00405e2d;
  *param_1 = &PTR_LAB_0040d978;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00405e37();
  *unaff_FS_OFFSET = local_10;
  return;
}

