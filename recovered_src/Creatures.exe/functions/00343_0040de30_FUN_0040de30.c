/*
 * Program: Creatures.exe
 * Function: FUN_0040de30
 * Entry: 0040de30
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040de30(void * this, undefined4 param_1)
 */


undefined4 * __thiscall FUN_0040de30(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040de8a;
  *unaff_FS_OFFSET = &local_10;
  FUN_00414500(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_0042fcb0;
  FUN_0040df00((int)this);
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)((int)this + 0x48) = param_1;
  return this;
}

