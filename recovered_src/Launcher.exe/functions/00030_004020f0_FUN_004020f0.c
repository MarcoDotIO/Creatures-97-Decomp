/*
 * Program: Launcher.exe
 * Function: FUN_004020f0
 * Entry: 004020f0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004020f0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */


undefined4 * __thiscall
FUN_004020f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004021f0;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_315(0x81,param_3);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  FUN_00401660((undefined4 *)((int)this + 0x70));
  local_8._0_1_ = 3;
  Ordinal_509();
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_004041a8;
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined ***)this = &PTR_LAB_00404318;
  *(undefined4 *)((int)this + 100) = 0;
  Ordinal_762(param_1);
  Ordinal_762(param_2);
  FUN_004022e0(this,param_3);
  *unaff_FS_OFFSET = local_10;
  return this;
}

