/*
 * Program: Creatures.exe
 * Function: FUN_00416670
 * Entry: 00416670
 * Namespace: Global
 * Prototype: int * FUN_00416670(void * this, int param_1, int param_2, int param_3)
 */


int * __thiscall FUN_00416670(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00416714;
  *unaff_FS_OFFSET = &local_10;
  FUN_00415670(this,param_1,param_2,param_3,0,0xa0,100,9999,0,0x2010100,0xff,0xff,0xff,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_004308f0;
  FUN_00416220(this);
  *(undefined4 *)((int)this + 0x54) = 2;
  *(undefined4 *)((int)this + 0x58) = 2;
  FUN_0040bc10(this,0x18,0x2f);
  *(undefined4 *)((int)this + 0x5c) = 0;
  DAT_00438d0c = this;
  *unaff_FS_OFFSET = local_10;
  return this;
}

