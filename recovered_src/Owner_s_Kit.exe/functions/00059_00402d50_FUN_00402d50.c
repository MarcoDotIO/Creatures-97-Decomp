/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402d50
 * Entry: 00402d50
 * Namespace: Global
 * Prototype: undefined4 FUN_00402d50(int param_1)
 */


undefined4 __fastcall FUN_00402d50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_80 [36];
  ushort *local_5c;
  ushort *local_58;
  undefined1 local_3c [16];
  undefined **local_2c;
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
  puStack_c = &LAB_00402f33;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_2c = &PTR_LAB_0040e030;
  local_24 = 0;
  local_20 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar1 = Ordinal_4619(s_The_Register_004121f0,0,0);
  if (iVar1 == 0) {
LAB_00402dcf:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00402f2b();
    local_8 = 0xffffffff;
    FUN_00402f3d();
    uVar2 = 0;
  }
  else {
    iVar1 = Ordinal_2891();
    if (iVar1 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402f2b();
      local_8 = 0xffffffff;
      FUN_00402f3d();
      uVar2 = 1;
    }
    else {
      Ordinal_271(local_3c,1,0x1000,0);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_58 < local_5c + 1) {
        Ordinal_2403((int)local_5c + (2 - (int)local_58));
      }
      iVar1 = 0;
      uStack_12 = *local_5c;
      local_5c = local_5c + 1;
      local_18 = (uint)uStack_12;
      if (uStack_12 != 0) {
        do {
          piVar4 = (int *)0x0;
          puVar3 = (undefined4 *)Ordinal_729(0x30);
          local_14 = SUB42(puVar3,0);
          uStack_12 = (ushort)((uint)puVar3 >> 0x10);
          local_8._0_1_ = 5;
          if (puVar3 != (undefined4 *)0x0) {
            piVar4 = FUN_00407130(puVar3);
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          if (piVar4 == (int *)0x0) {
            local_8._0_1_ = 3;
            FUN_00402f13();
            goto LAB_00402dcf;
          }
          iVar1 = iVar1 + 1;
          (**(code **)(*piVar4 + 8))(local_80);
          Ordinal_5191(*(undefined4 *)(param_1 + 0xb3c),piVar4);
        } while (iVar1 < (int)local_18);
      }
      Ordinal_1717();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_00402f13();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402f2b();
      local_8 = 0xffffffff;
      FUN_00402f3d();
      uVar2 = 1;
    }
  }
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return uVar2;
}

