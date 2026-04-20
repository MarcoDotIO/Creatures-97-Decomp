/*
 * Program: Score_Kit.exe
 * Function: FUN_00405640
 * Entry: 00405640
 * Namespace: Global
 * Prototype: undefined FUN_00405640(undefined4 * param_1)
 */


void __fastcall FUN_00405640(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004056d4;
  *param_1 = &PTR_LAB_0040a8c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  RegCloseKey((HKEY)param_1[5]);
  RegCloseKey((HKEY)param_1[6]);
  if (param_1[2] != 0) {
    Ordinal_731(param_1[2]);
  }
  if (param_1[3] != 0) {
    Ordinal_731(param_1[3]);
  }
  if (param_1[4] != 0) {
    Ordinal_731(param_1[4]);
  }
  local_8 = 0xffffffff;
  FUN_004056de();
  *unaff_FS_OFFSET = local_10;
  return;
}

