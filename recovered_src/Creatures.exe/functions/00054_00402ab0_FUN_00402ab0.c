/*
 * Program: Creatures.exe
 * Function: FUN_00402ab0
 * Entry: 00402ab0
 * Namespace: Global
 * Prototype: undefined FUN_00402ab0(void * this, int param_1, int param_2, int param_3, int param_4)
 */


void __thiscall FUN_00402ab0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402b80;
  *unaff_FS_OFFSET = &local_10;
  local_1c = *(int *)((int)this + 8);
  local_20 = *(int *)((int)this + 4);
  local_18 = *(int *)((int)this + 0xc);
  local_14 = *(int *)((int)this + 0x10);
  if (((*(int *)((int)this + 0x30) != 0) && (param_1 < param_3)) && (param_2 < param_4)) {
    iVar1 = FUN_0040b300(&local_20,&param_1);
    if (iVar1 != 0) {
      Ordinal_285(*(undefined4 *)((int)this + 0x2c));
      local_8 = 0;
      FUN_00402c30(this,(int)local_34,local_20,local_1c,local_18,local_14,*(int *)((int)this + 4),
                   *(undefined4 *)((int)this + 8),*(int *)((int)this + 0xc),
                   *(undefined4 *)((int)this + 0x10));
      local_8 = 0xffffffff;
      FUN_00402b78();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

