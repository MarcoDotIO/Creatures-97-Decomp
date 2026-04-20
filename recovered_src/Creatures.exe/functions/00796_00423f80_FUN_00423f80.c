/*
 * Program: Creatures.exe
 * Function: FUN_00423f80
 * Entry: 00423f80
 * Namespace: Global
 * Prototype: undefined4 * FUN_00423f80(void * this, undefined4 param_1)
 */


undefined4 * __thiscall FUN_00423f80(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00423ffd;
  *unaff_FS_OFFSET = &local_10;
  *(undefined ***)this = &PTR_LAB_0042f018;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_00431300;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x94) = DAT_004382c4;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = DAT_00436c28;
  FUN_00424080((int)this);
  *unaff_FS_OFFSET = local_10;
  return this;
}

