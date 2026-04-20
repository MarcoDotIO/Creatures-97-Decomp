/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404ec0
 * Entry: 00404ec0
 * Namespace: Global
 * Prototype: undefined FUN_00404ec0(undefined4 * param_1)
 */


void __fastcall FUN_00404ec0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404f41;
  *param_1 = &PTR_LAB_0040d770;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1[3] != 0) && (param_1[2] != 0)) {
    Ordinal_731(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    Ordinal_731(param_1[1]);
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_00404f4b();
  *unaff_FS_OFFSET = local_10;
  return;
}

