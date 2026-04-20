/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b0d0
 * Entry: 0040b0d0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b0d0(int param_1)
 */


undefined4 __fastcall FUN_0040b0d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_78 [36];
  int *local_54;
  int *local_50;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2c [20];
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b260;
  *unaff_FS_OFFSET = &local_10;
  local_34 = DAT_00410234;
  local_30 = DAT_00410238;
  Ordinal_340();
  local_8 = 0;
  iVar2 = Ordinal_4619(&local_34,0,0);
  if ((iVar2 == 0) || (iVar2 = Ordinal_2891(), iVar2 == 0)) {
    local_8 = 0xffffffff;
    FUN_0040b26a();
    uVar3 = 0;
  }
  else {
    Ordinal_271(local_2c,1,0x1000,0);
    local_8._0_1_ = 1;
    if (local_50 < local_54 + 1) {
      Ordinal_2403((int)local_54 + (4 - (int)local_50));
    }
    local_14 = *local_54;
    local_54 = local_54 + 1;
    Ordinal_486();
    local_8._0_1_ = 2;
    iVar2 = local_14;
    if (0 < local_14) {
      do {
        if (local_50 < local_54 + 1) {
          Ordinal_2403((int)local_54 + (4 - (int)local_50));
        }
        iVar1 = *local_54;
        local_54 = local_54 + 1;
        Ordinal_5194(*(undefined4 *)(param_1 + 0x7b0),iVar1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = local_14;
      if (0 < local_14) {
        do {
          Ordinal_781(local_78,&local_18);
          Ordinal_5193(*(undefined4 *)(param_1 + 0x7d8),local_18);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    Ordinal_1717();
    Ordinal_1725();
    local_8._0_1_ = 1;
    FUN_0040b250();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040b258();
    local_8 = 0xffffffff;
    FUN_0040b26a();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

