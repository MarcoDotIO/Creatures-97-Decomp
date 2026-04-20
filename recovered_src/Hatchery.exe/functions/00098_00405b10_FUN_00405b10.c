/*
 * Program: Hatchery.exe
 * Function: FUN_00405b10
 * Entry: 00405b10
 * Namespace: Global
 * Prototype: undefined4 * FUN_00405b10(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00405b10(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405b7a;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  local_8 = 0;
  Ordinal_411();
  *param_1 = &PTR_LAB_004085c0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

