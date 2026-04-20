/*
 * Program: Backup.exe
 * Function: FUN_004029c0
 * Entry: 004029c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004029c0(void * this, undefined4 param_1)
 */


undefined4 * __thiscall FUN_004029c0(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402a16;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_315(0x82,param_1);
  *(undefined ***)this = &PTR_LAB_00404758;
  *unaff_FS_OFFSET = local_10;
  return this;
}

