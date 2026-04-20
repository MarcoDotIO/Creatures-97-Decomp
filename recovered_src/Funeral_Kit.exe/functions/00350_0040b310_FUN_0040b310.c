/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b310
 * Entry: 0040b310
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b310(int param_1)
 */


undefined4 __fastcall FUN_0040b310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_94 [36];
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined2 local_3c;
  void *local_38;
  undefined **local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b54a;
  *unaff_FS_OFFSET = &uStack_10;
  if (*(int *)(param_1 + 0x7b0) == 0) {
    uVar2 = 0;
  }
  else {
    local_40 = DAT_00410234;
    local_3c = DAT_00410238;
    local_14 = param_1;
    Ordinal_340();
    local_8 = 0;
    Ordinal_336();
    local_8._0_1_ = 1;
    Ordinal_486();
    local_8._0_1_ = 2;
    local_34[0] = &PTR_LAB_0040d030;
    local_28 = 0xffffffff;
    local_2c = 0;
    Ordinal_762(0);
    local_8._0_1_ = 3;
    iVar1 = Ordinal_4619(&local_40,0x1001,local_34);
    if (iVar1 == 0) {
      iVar1 = Ordinal_5003(0,0);
      if (iVar1 == 0) {
        Ordinal_1061(s_Can_not_create_data_file__00410634,0,0);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040b542();
      local_8 = 0xffffffff;
      FUN_0040b554();
      uVar2 = FUN_0040b55c();
      return uVar2;
    }
    Ordinal_271(local_50,0,0x1000,0);
    local_8._0_1_ = 4;
    uVar2 = *(undefined4 *)(local_14 + 0x7b0);
    if (local_6c < local_70 + 1) {
      Ordinal_2456();
    }
    *local_70 = uVar2;
    local_70 = local_70 + 1;
    Ordinal_486();
    local_8 = CONCAT31(local_8._1_3_,5);
    iVar1 = *(int *)(local_14 + 0x7b0);
    local_18 = iVar1;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        uVar2 = *(undefined4 *)(*(int *)(local_14 + 0x7ac) + iVar3);
        if (local_6c < local_70 + 1) {
          Ordinal_2456();
        }
        iVar3 = iVar3 + 4;
        *local_70 = uVar2;
        local_70 = local_70 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_20 = 0;
    if (0 < local_18) {
      local_38 = (void *)(local_14 + 2000);
      do {
        uVar2 = FUN_00403f90(local_38,&local_14,local_20);
        local_8._0_1_ = 6;
        Ordinal_760(uVar2);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_0040b517();
        Ordinal_784(local_94,local_1c);
        local_20 = local_20 + 1;
      } while (local_20 < local_18);
    }
    Ordinal_1717();
    Ordinal_1725();
    local_8._0_1_ = 4;
    FUN_0040b51f();
    local_8._0_1_ = 3;
    FUN_0040b527();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040b542();
    local_8 = 0xffffffff;
    FUN_0040b554();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = uStack_10;
  return uVar2;
}

