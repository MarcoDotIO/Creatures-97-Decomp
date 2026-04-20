/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408ba0
 * Entry: 00408ba0
 * Namespace: Global
 * Prototype: undefined FUN_00408ba0(undefined4 * param_1)
 */


void __fastcall FUN_00408ba0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408bdd;
  *param_1 = &PTR_LAB_0040fcc8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00408be7();
  *unaff_FS_OFFSET = local_10;
  return;
}

