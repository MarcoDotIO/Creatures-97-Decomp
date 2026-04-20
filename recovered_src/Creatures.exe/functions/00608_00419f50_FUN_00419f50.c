/*
 * Program: Creatures.exe
 * Function: FUN_00419f50
 * Entry: 00419f50
 * Namespace: Global
 * Prototype: undefined4 * FUN_00419f50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5)
 */


undefined4 * __thiscall
FUN_00419f50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00419fd2;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_0042f018;
  *(undefined ***)this = &PTR_LAB_00430f30;
  FUN_0041a440(this);
  *(undefined4 *)((int)this + 10) = param_1;
  *(undefined4 *)((int)this + 0xe) = param_2;
  *(undefined4 *)((int)this + 0x12) = param_3;
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *unaff_FS_OFFSET = local_10;
  *(undefined1 *)((int)this + 8) = param_5;
  *(undefined1 *)((int)this + 9) = param_5;
  return this;
}

