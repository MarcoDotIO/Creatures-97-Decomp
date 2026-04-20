/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00403a90
 * Entry: 00403a90
 * Namespace: Global
 * Prototype: undefined4 FUN_00403a90(void)
 */


undefined4 FUN_00403a90(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  ushort *local_8c;
  ushort *local_88;
  undefined1 local_6c [36];
  ushort *local_48;
  ushort *local_44;
  undefined1 local_28 [16];
  undefined2 local_18;
  ushort uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403ccf;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  iVar2 = Ordinal_4619(s_The_Graveyard_0041023c,0,0);
  if (iVar2 == 0) {
    FUN_00403d30(CONCAT22(uStack_12,uStack_14));
  }
  else {
    Ordinal_271(local_28,1,0x1000,0);
    local_8._0_1_ = 1;
    if (local_88 < local_8c + 1) {
      Ordinal_2403((int)local_8c + (2 - (int)local_88));
    }
    uStack_16 = *local_8c;
    Ordinal_1717();
    Ordinal_1725();
    if (uStack_16 == 0) {
      FUN_00403d30(CONCAT22(uStack_12,uStack_14));
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00403cb7();
    }
    else {
      local_8._0_1_ = 0;
      FUN_00403cb7();
      iVar2 = Ordinal_4619(s_The_Graveyard_0041023c,0,0);
      if (iVar2 != 0) {
        Ordinal_271(local_28,1,0x1000,0);
        local_8._0_1_ = 2;
        if (local_44 < local_48 + 1) {
          Ordinal_2403((int)local_48 + (2 - (int)local_44));
        }
        iVar2 = 0;
        uStack_16 = *local_48;
        local_48 = local_48 + 1;
        uVar1 = (uint)uStack_16;
        if (uStack_16 != 0) {
          do {
            piVar5 = (int *)0x0;
            puVar4 = (undefined4 *)Ordinal_729(0x18);
            local_18 = SUB42(puVar4,0);
            uStack_16 = (ushort)((uint)puVar4 >> 0x10);
            local_8._0_1_ = 3;
            if (puVar4 != (undefined4 *)0x0) {
              piVar5 = FUN_00404980(puVar4);
            }
            local_8._0_1_ = 2;
            if (piVar5 == (int *)0x0) {
              FUN_00403d30(CONCAT22(uStack_12,uStack_14));
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00403caf();
              goto LAB_00403b63;
            }
            iVar2 = iVar2 + 1;
            Ordinal_5191(*(undefined4 *)(CONCAT22(uStack_12,uStack_14) + 0x1c4),piVar5);
            (**(code **)(*piVar5 + 8))(local_6c);
            FUN_00404000((void *)CONCAT22(uStack_12,uStack_14),(int)piVar5);
          } while (iVar2 < (int)uVar1);
        }
        Ordinal_1717();
        Ordinal_1725();
        FUN_00403d30(CONCAT22(uStack_12,uStack_14));
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00403caf();
        local_8 = 0xffffffff;
        FUN_00403cd9();
        uVar3 = 1;
        goto LAB_00403b71;
      }
      FUN_00403d30(CONCAT22(uStack_12,uStack_14));
    }
  }
LAB_00403b63:
  local_8 = 0xffffffff;
  FUN_00403cd9();
  uVar3 = 0;
LAB_00403b71:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

