/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004077a0
 * Entry: 004077a0
 * Namespace: Global
 * Prototype: undefined FUN_004077a0(void * this, int param_1)
 */


void __thiscall FUN_004077a0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407862;
  *unaff_FS_OFFSET = &local_10;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    FUN_004011c0(*(void **)((int)this + 0xc),param_1,0);
    Ordinal_784(param_1,(int)this + 4);
    Ordinal_784(param_1,(int)this + 8);
  }
  else {
    if ((*(int *)((int)this + 0x10) != 0) && (*(int **)((int)this + 0xc) != (int *)0x0)) {
      (**(code **)(**(int **)((int)this + 0xc) + 4))(1);
    }
    puVar1 = (undefined4 *)Ordinal_729(0x18);
    this_00 = (undefined4 *)0x0;
    local_8 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      this_00 = FUN_004010b0(puVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0xc) = this_00;
    if (this_00 != (undefined4 *)0x0) {
      FUN_004011c0(this_00,param_1,0);
      Ordinal_781(param_1,(int)this + 4);
      Ordinal_781(param_1,(int)this + 8);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

