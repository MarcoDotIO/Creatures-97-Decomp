/*
 * Program: Creatures.exe
 * Function: FUN_0040dea0
 * Entry: 0040dea0
 * Namespace: Global
 * Prototype: undefined FUN_0040dea0(undefined4 * param_1)
 */


void __fastcall FUN_0040dea0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040dee9;
  *param_1 = &PTR_LAB_0042fcb0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_004102a0((int)param_1);
  local_8 = 0xffffffff;
  FUN_0040def3();
  *unaff_FS_OFFSET = local_10;
  return;
}

