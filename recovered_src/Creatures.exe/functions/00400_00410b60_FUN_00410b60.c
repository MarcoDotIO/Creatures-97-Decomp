/*
 * Program: Creatures.exe
 * Function: FUN_00410b60
 * Entry: 00410b60
 * Namespace: Global
 * Prototype: undefined FUN_00410b60(undefined4 * param_1)
 */


void __fastcall FUN_00410b60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00410bb0;
  *param_1 = &PTR_LAB_0042fe88;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_00424100((int *)param_1[2]);
  }
  local_8 = 0xffffffff;
  FUN_00410bba();
  *unaff_FS_OFFSET = local_10;
  return;
}

