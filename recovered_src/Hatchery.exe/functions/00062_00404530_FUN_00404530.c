/*
 * Program: Hatchery.exe
 * Function: FUN_00404530
 * Entry: 00404530
 * Namespace: Global
 * Prototype: undefined FUN_00404530(undefined4 * param_1)
 */


void __fastcall FUN_00404530(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404584;
  *param_1 = &PTR_LAB_00408350;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[5] != 0) {
    Ordinal_731(param_1[5],param_1);
  }
  local_8 = 0xffffffff;
  FUN_0040458e();
  *unaff_FS_OFFSET = local_10;
  return;
}

