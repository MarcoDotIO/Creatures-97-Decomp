/*
 * Program: Science_Kit.exe
 * Function: FUN_00406bf0
 * Entry: 00406bf0
 * Namespace: Global
 * Prototype: undefined4 FUN_00406bf0(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00406bf0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_7c [36];
  undefined4 *local_58;
  uint local_54;
  undefined1 local_38 [20];
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00406dbd;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_00411280;
  local_1c = 0;
  local_18 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar2 = Ordinal_4619(param_1,0,local_24);
  if (iVar2 == 0) {
    iVar2 = Ordinal_5003(0,0);
    if (iVar2 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00415088,0,0);
    }
  }
  else {
    Ordinal_271(local_38,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_54 < (int)local_58 + 2U) {
      Ordinal_2403((int)local_58 + (2 - local_54));
    }
    puVar1 = (undefined4 *)((int)local_58 + 2);
    uVar4 = (int)local_58 + 6;
    local_58 = puVar1;
    if (local_54 < uVar4) {
      Ordinal_2403((int)puVar1 + (4 - local_54));
    }
    uVar3 = *local_58;
    local_58 = local_58 + 1;
    *(undefined4 *)((int)this + 0x9f4) = uVar3;
    iVar2 = Ordinal_729(uVar3);
    *(int *)((int)this + 0x9f8) = iVar2;
    if (iVar2 != 0) {
      FUN_0040b9c0((void *)((int)this + 0x954),(int)local_7c,iVar2);
      FUN_0040b9c0((void *)((int)this + 0x97c),(int)local_7c,iVar2 + *(int *)((int)this + 0x978));
      Ordinal_2456();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_00406d9d();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00406db5();
      local_8 = 0xffffffff;
      FUN_00406dc7();
      uVar3 = 1;
      goto LAB_00406ca4;
    }
    local_8._0_1_ = 3;
    FUN_00406d9d();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00406db5();
  local_8 = 0xffffffff;
  FUN_00406dc7();
  uVar3 = 0;
LAB_00406ca4:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

