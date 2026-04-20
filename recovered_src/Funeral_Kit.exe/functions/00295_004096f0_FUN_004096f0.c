/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004096f0
 * Entry: 004096f0
 * Namespace: Global
 * Prototype: undefined FUN_004096f0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004096f0(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00409758;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_481((int)this + 0x128);
  local_8 = 0xffffffff;
  FUN_0040b280(*(void **)((int)this + 0x8c),param_1,in_stack_ffffffe4);
  *unaff_FS_OFFSET = local_10;
  return;
}

