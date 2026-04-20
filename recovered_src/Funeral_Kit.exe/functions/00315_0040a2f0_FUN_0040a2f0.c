/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040a2f0
 * Entry: 0040a2f0
 * Namespace: Global
 * Prototype: undefined FUN_0040a2f0(undefined4 * param_1)
 */


void __fastcall FUN_0040a2f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a350;
  *param_1 = &PTR_LAB_0040df68;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_0040a345();
  local_8 = 0xffffffff;
  FUN_0040a35a();
  *unaff_FS_OFFSET = local_10;
  return;
}

