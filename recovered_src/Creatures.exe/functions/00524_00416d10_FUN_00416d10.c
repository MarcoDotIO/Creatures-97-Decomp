/*
 * Program: Creatures.exe
 * Function: FUN_00416d10
 * Entry: 00416d10
 * Namespace: Global
 * Prototype: undefined4 * FUN_00416d10(void * this, int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6)
 */


undefined4 * __thiscall
FUN_00416d10(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00416d98;
  *unaff_FS_OFFSET = &local_10;
  FUN_00415670(this,param_1,param_2,param_3,0,param_4,param_5,param_6,4,0x2020000,0,0xff,0xff,1);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_004309a0;
  FUN_00416c20((int)this);
  *(undefined4 *)((int)this + 0x54) = DAT_00436448;
  *unaff_FS_OFFSET = local_10;
  return this;
}

