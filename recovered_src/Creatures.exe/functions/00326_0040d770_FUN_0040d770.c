/*
 * Program: Creatures.exe
 * Function: FUN_0040d770
 * Entry: 0040d770
 * Namespace: Global
 * Prototype: undefined FUN_0040d770(void * this, undefined4 param_1, HSZ param_2)
 */


void __thiscall FUN_0040d770(void *this,undefined4 param_1,HSZ param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d7e3;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (void *)Ordinal_729(0x28);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (this_00 != (void *)0x0) {
    puVar2 = FUN_0040dad0(this_00,param_1,param_2);
  }
  *(undefined4 **)((int)this + *(int *)((int)this + 0x58) * 4 + 0x30) = puVar2;
  iVar1 = *(int *)((int)this + 0x58);
  *unaff_FS_OFFSET = local_10;
  *(int *)((int)this + 0x58) = iVar1 + 1;
  return;
}

