/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040a860
 * Entry: 0040a860
 * Namespace: Global
 * Prototype: undefined FUN_0040a860(undefined4 * param_1)
 */


void __fastcall FUN_0040a860(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a8b4;
  *param_1 = &PTR_LAB_0040f320;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[5] != 0) {
    Ordinal_731(param_1[5],param_1);
  }
  local_8 = 0xffffffff;
  FUN_0040a8be();
  *unaff_FS_OFFSET = local_10;
  return;
}

