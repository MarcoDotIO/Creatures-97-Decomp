/*
 * Program: Creatures.exe
 * Function: FUN_00403b70
 * Entry: 00403b70
 * Namespace: Global
 * Prototype: undefined FUN_00403b70(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00403b70(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [20];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403c3c;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4);
  iVar1 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8);
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0x209f < param_1 + iVar2) {
    param_1 = 0x20a0 - iVar2;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (0x4af < param_2 + iVar1) {
    param_2 = 0x4b0 - iVar1;
  }
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_1 + iVar2;
  *(int *)((int)this + 0x10) = param_2 + iVar1;
  Ordinal_285(*(undefined4 *)((int)this + 0x2c));
  local_8 = 0;
  FUN_00402b90(this,(int)local_24,*(int *)((int)this + 4),*(int *)((int)this + 8),
               *(int *)((int)this + 0xc),*(int *)((int)this + 0x10));
  local_8 = 0xffffffff;
  FUN_00403c34();
  *unaff_FS_OFFSET = local_10;
  return;
}

