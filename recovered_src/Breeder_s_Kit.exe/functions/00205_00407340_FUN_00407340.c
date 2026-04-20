/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00407340
 * Entry: 00407340
 * Namespace: Global
 * Prototype: undefined FUN_00407340(undefined4 * param_1)
 */


void __fastcall FUN_00407340(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407389;
  *param_1 = &PTR_LAB_0040f918;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_1081(param_1);
  local_8 = 0xffffffff;
  FUN_00407393();
  *unaff_FS_OFFSET = local_10;
  return;
}

