/*
 * Program: Hatchery.exe
 * Function: FUN_00403f80
 * Entry: 00403f80
 * Namespace: Global
 * Prototype: undefined FUN_00403f80(undefined4 * param_1)
 */


void __fastcall FUN_00403f80(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404014;
  *param_1 = &PTR_LAB_00408338;
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
  FUN_0040401e();
  *unaff_FS_OFFSET = local_10;
  return;
}

