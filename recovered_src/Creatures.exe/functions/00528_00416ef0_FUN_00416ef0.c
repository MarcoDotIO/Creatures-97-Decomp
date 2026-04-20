/*
 * Program: Creatures.exe
 * Function: FUN_00416ef0
 * Entry: 00416ef0
 * Namespace: Global
 * Prototype: int * FUN_00416ef0(void * this, undefined4 param_1, undefined1 param_2, char * param_3, int param_4, int param_5)
 */


int * __thiscall
FUN_00416ef0(void *this,undefined4 param_1,undefined1 param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00416fa6;
  *unaff_FS_OFFSET = &local_10;
  if (param_4 == 2) {
    iVar1 = param_5 + 9;
  }
  else {
    iVar1 = param_5 + 9 + param_4 * 2;
  }
  FUN_00415670(this,0x74737973,iVar1,1,1,0xffffff9d,0xffffff9d,9000,0x10,0x2010200,0xff,0xff,0xff,0)
  ;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_00430a48;
  FUN_00416e50((int)this);
  *(undefined1 *)((int)this + 0x72) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0x6e) = param_1;
  *(char *)((int)this + 0x73) = (char)param_4;
  *(undefined1 *)((int)this + 0x54) = param_2;
  FUN_00417200(this);
  FUN_00417090(this,param_3);
  *unaff_FS_OFFSET = local_10;
  return this;
}

