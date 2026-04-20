/*
 * Program: Creatures.exe
 * Function: FUN_00410420
 * Entry: 00410420
 * Namespace: Global
 * Prototype: undefined4 * FUN_00410420(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00410420(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041046b;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_325();
  *param_1 = &PTR_LAB_0042fd78;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

