/*
 * Program: Creatures.exe
 * Function: FUN_004086f0
 * Entry: 004086f0
 * Namespace: Global
 * Prototype: undefined FUN_004086f0(undefined4 * param_1)
 */


void __fastcall FUN_004086f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408744;
  *param_1 = &PTR_LAB_0042fbc8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[5] != 0) {
    Ordinal_731(param_1[5],param_1);
  }
  local_8 = 0xffffffff;
  FUN_0040874e();
  *unaff_FS_OFFSET = local_10;
  return;
}

