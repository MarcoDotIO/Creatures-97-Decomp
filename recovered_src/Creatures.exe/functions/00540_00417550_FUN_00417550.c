/*
 * Program: Creatures.exe
 * Function: FUN_00417550
 * Entry: 00417550
 * Namespace: Global
 * Prototype: undefined FUN_00417550(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5)
 */


void __thiscall
FUN_00417550(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004175e0;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)this + param_1 * 0xc + 0x50) = param_2;
  puVar1 = (undefined4 *)((int)this + param_1 * 0xc + 0x4c);
  puVar1[2] = param_3;
  this_00 = (void *)Ordinal_729(0x1e);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (this_00 != (void *)0x0) {
    puVar2 = FUN_00419f50(this_00,param_5,0,0,*(undefined4 *)((int)this + 0x3b),param_4);
  }
  *puVar1 = puVar2;
  if (*(int *)((int)this + 0x48) < param_1 + 1) {
    *(int *)((int)this + 0x48) = param_1 + 1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

