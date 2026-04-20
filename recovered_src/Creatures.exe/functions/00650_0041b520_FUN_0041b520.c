/*
 * Program: Creatures.exe
 * Function: FUN_0041b520
 * Entry: 0041b520
 * Namespace: Global
 * Prototype: undefined4 * FUN_0041b520(void * this, int param_1, undefined4 param_2, undefined1 param_3)
 */


undefined4 * __thiscall FUN_0041b520(void *this,int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar2;
  undefined1 local_13c [12];
  undefined4 local_130;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041b60b;
  *(undefined ***)this = &PTR_LAB_0042f018;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_004310c8;
  local_14 = this;
  FUN_0041b400((int)this);
  local_14[4] = param_1;
  local_14[5] = param_2;
  *(undefined1 *)(local_14 + 6) = param_3;
  if (param_1 != 0) {
    uVar2 = 0;
    puVar1 = FUN_0040b5c0(param_1,0x4365b8,5);
    Ordinal_339(puVar1,uVar2);
    local_8._0_1_ = 1;
    Ordinal_3306(local_13c);
    uVar2 = Ordinal_729(local_130);
    local_14[1] = uVar2;
    uVar2 = Ordinal_4819(local_14[1],local_130);
    local_14[3] = uVar2;
    Ordinal_1725();
    FUN_0041bd90((int)local_14);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0041b603();
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

