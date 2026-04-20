/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00401140
 * Entry: 00401140
 * Namespace: Global
 * Prototype: undefined FUN_00401140(undefined4 * param_1)
 */


void __fastcall FUN_00401140(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004011a4;
  *param_1 = &PTR_LAB_0040d000;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1[2] != 0) && (param_1[1] != 0)) {
    Ordinal_731(param_1[1]);
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_004011ae();
  *unaff_FS_OFFSET = local_10;
  return;
}

