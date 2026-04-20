/*
 * Program: Creatures.exe
 * Function: FUN_0042d720
 * Entry: 0042d720
 * Namespace: Global
 * Prototype: undefined FUN_0042d720(undefined4 * param_1)
 */


void __fastcall FUN_0042d720(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042d790;
  *param_1 = &PTR_LAB_00431610;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_0040c640((int *)param_1[0x2fd]);
  local_8 = local_8 & 0xffffff00;
  FUN_0042d778();
  local_8 = 0xffffffff;
  FUN_0042d79a();
  *unaff_FS_OFFSET = local_10;
  return;
}

