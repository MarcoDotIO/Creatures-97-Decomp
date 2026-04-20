/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b5d0
 * Entry: 0040b5d0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b5d0(int param_1)
 */


undefined4 __fastcall FUN_0040b5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_80 [36];
  ushort *local_5c;
  ushort *local_58;
  undefined1 local_3c [16];
  undefined **local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  uint local_18;
  undefined2 local_14;
  ushort uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b7c0;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_2c[0] = &PTR_LAB_0040d030;
  local_20 = 0xffffffff;
  local_24 = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar1 = Ordinal_4619(s_The_Graveyard_0041023c,0,local_2c);
  if (iVar1 == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  else {
    uVar3 = Ordinal_2891();
    if (uVar3 < 3) {
      local_8 = (uint)local_8._1_3_ << 8;
    }
    else {
      Ordinal_271(local_3c,1,0x1000,0);
      local_8._0_1_ = 4;
      if (local_58 < local_5c + 1) {
        Ordinal_2403((int)local_5c + (2 - (int)local_58));
      }
      uStack_12 = *local_5c;
      local_5c = local_5c + 1;
      local_18 = (uint)uStack_12;
      if (uStack_12 != 0) {
        iVar1 = 0;
        if (uStack_12 != 0) {
          do {
            piVar5 = (int *)0x0;
            puVar4 = (undefined4 *)Ordinal_729(0x18);
            local_14 = SUB42(puVar4,0);
            uStack_12 = (ushort)((uint)puVar4 >> 0x10);
            local_8._0_1_ = 5;
            if (puVar4 != (undefined4 *)0x0) {
              piVar5 = FUN_00404980(puVar4);
            }
            local_8._0_1_ = 4;
            if (piVar5 == (int *)0x0) {
              local_8._0_1_ = 3;
              FUN_0040b7a0();
              local_8 = (uint)local_8._1_3_ << 8;
              goto LAB_0040b64c;
            }
            iVar1 = iVar1 + 1;
            Ordinal_5191(*(undefined4 *)(param_1 + 0x798),piVar5);
            (**(code **)(*piVar5 + 8))(local_80);
          } while (iVar1 < (int)local_18);
        }
        Ordinal_1717();
        Ordinal_1725();
        local_8._0_1_ = 3;
        FUN_0040b7a0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040b7b8();
        local_8 = 0xffffffff;
        FUN_0040b7ca();
        uVar2 = 1;
        goto LAB_0040b65f;
      }
      Ordinal_1717();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_0040b7a0();
      local_8 = (uint)local_8._1_3_ << 8;
    }
  }
LAB_0040b64c:
  FUN_0040b7b8();
  local_8 = 0xffffffff;
  FUN_0040b7ca();
  uVar2 = 0;
LAB_0040b65f:
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return uVar2;
}

