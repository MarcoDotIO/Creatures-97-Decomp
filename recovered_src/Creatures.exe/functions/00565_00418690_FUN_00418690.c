/*
 * Program: Creatures.exe
 * Function: FUN_00418690
 * Entry: 00418690
 * Namespace: Global
 * Prototype: undefined4 * FUN_00418690(void * this, int param_1, int param_2, int param_3)
 */


undefined4 * __thiscall FUN_00418690(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004186f2;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417e90(this,param_1,param_2,param_3);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_00430c40;
  FUN_00418520((int)this);
  *unaff_FS_OFFSET = local_10;
  return this;
}

