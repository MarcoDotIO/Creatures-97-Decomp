/*
 * Program: Score_Kit.exe
 * Function: FUN_004096e0
 * Entry: 004096e0
 * Namespace: Global
 * Prototype: undefined FUN_004096e0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 */


void FUN_004096e0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_0040ad00;
  puStack_10 = &DAT_00409918;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  local_20 = 0;
  if (0 < param_3) {
    do {
      (*(code *)param_4)();
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_00409750();
  *unaff_FS_OFFSET = local_14;
  return;
}

