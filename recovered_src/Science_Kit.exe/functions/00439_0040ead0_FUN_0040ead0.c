/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ead0
 * Entry: 0040ead0
 * Namespace: Global
 * Prototype: undefined FUN_0040ead0(undefined4 * param_1)
 */


void __fastcall FUN_0040ead0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040eb23;
  *param_1 = &PTR_LAB_00412590;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[1] != 0)) {
    Ordinal_2115(param_1);
  }
  local_8 = 0xffffffff;
  FUN_0040eb2d();
  *unaff_FS_OFFSET = local_10;
  return;
}

