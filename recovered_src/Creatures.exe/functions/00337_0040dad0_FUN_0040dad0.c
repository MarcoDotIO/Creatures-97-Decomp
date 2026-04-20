/*
 * Program: Creatures.exe
 * Function: FUN_0040dad0
 * Entry: 0040dad0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040dad0(void * this, undefined4 param_1, HSZ param_2)
 */


undefined4 * __thiscall FUN_0040dad0(void *this,undefined4 param_1,HSZ param_2)

{
  byte *pbVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040db62;
  *unaff_FS_OFFSET = &local_10;
  pbVar1 = (byte *)((int)this + 8);
  *(undefined4 *)this = param_1;
  *pbVar1 = 0;
  FUN_0040d8c0(&DAT_00438bc0,param_2,(LPSTR)pbVar1,0x20);
  FUN_004118a0(DAT_00436ea8,pbVar1,1);
  this_00 = (void *)Ordinal_729(0xc0);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (this_00 != (void *)0x0) {
    puVar2 = FUN_00423f80(this_00,0);
  }
  *unaff_FS_OFFSET = local_10;
  *(undefined4 **)((int)this + 4) = puVar2;
  return this;
}

