/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b280
 * Entry: 0040b280
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b280(void * this, undefined4 param_1, undefined4 param_2)
 */


undefined4 __thiscall FUN_0040b280(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b2f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_5194(*(undefined4 *)((int)this + 0x7b0),param_1);
  Ordinal_5193(*(undefined4 *)((int)this + 0x7d8),param_2);
  local_8 = 0xffffffff;
  FUN_0040b2fa();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

