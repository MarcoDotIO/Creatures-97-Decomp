/*
 * Program: Health_Kit.exe
 * Function: FUN_00403600
 * Entry: 00403600
 * Namespace: Global
 * Prototype: undefined4 FUN_00403600(int param_1)
 */


undefined4 __fastcall FUN_00403600(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  char local_fc [4];
  char local_f8 [4];
  char local_f4 [2];
  char local_f2;
  undefined4 local_f1 [13];
  char local_bc [4];
  char local_b8 [4];
  char local_b4 [2];
  undefined4 local_b2 [13];
  undefined1 local_7c [16];
  undefined1 local_6c [36];
  undefined4 *local_48;
  uint local_44;
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004038f0;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_0040e268;
  local_20 = 0;
  local_1c = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_fc[0] = s_Hearts_spr_00411278[0];
  local_fc[1] = s_Hearts_spr_00411278[1];
  local_fc[2] = s_Hearts_spr_00411278[2];
  local_fc[3] = s_Hearts_spr_00411278[3];
  local_f8[0] = s_Hearts_spr_00411278[4];
  local_f8[1] = s_Hearts_spr_00411278[5];
  local_f8[2] = s_Hearts_spr_00411278[6];
  local_f8[3] = s_Hearts_spr_00411278[7];
  local_f4[0] = s_Hearts_spr_00411278[8];
  local_f4[1] = s_Hearts_spr_00411278[9];
  local_f2 = s_Hearts_spr_00411278[10];
  puVar4 = local_f1;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  iVar3 = Ordinal_4619(local_fc,0,local_28);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__004110a4,0,0);
    }
  }
  else {
    Ordinal_271(local_7c,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_44 < (int)local_48 + 2U) {
      Ordinal_2403((int)local_48 + (2 - local_44));
    }
    puVar4 = (undefined4 *)((int)local_48 + 2);
    uVar2 = (int)local_48 + 6;
    local_48 = puVar4;
    if (local_44 < uVar2) {
      Ordinal_2403((int)puVar4 + (4 - local_44));
    }
    uVar1 = *local_48;
    local_48 = local_48 + 1;
    *(undefined4 *)(param_1 + 0xdc8) = uVar1;
    iVar3 = Ordinal_729(uVar1);
    *(int *)(param_1 + 0xdf4) = iVar3;
    if (iVar3 == 0) {
      local_8._0_1_ = 3;
      FUN_004038d0();
    }
    else {
      FUN_004097c0((void *)(param_1 + 0xdcc),(int)local_6c,iVar3);
      Ordinal_2456();
      Ordinal_1725();
      local_bc[0] = s_Blink_spr_0041126c[0];
      local_bc[1] = s_Blink_spr_0041126c[1];
      local_bc[2] = s_Blink_spr_0041126c[2];
      local_bc[3] = s_Blink_spr_0041126c[3];
      local_b8[0] = s_Blink_spr_0041126c[4];
      local_b8[1] = s_Blink_spr_0041126c[5];
      local_b8[2] = s_Blink_spr_0041126c[6];
      local_b8[3] = s_Blink_spr_0041126c[7];
      local_b4[0] = s_Blink_spr_0041126c[8];
      local_b4[1] = s_Blink_spr_0041126c[9];
      puVar4 = local_b2;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      iVar3 = Ordinal_4619(local_bc,0,local_28);
      if (iVar3 == 0) {
        iVar3 = Ordinal_5003(0,0);
        if (iVar3 == 0) {
          Ordinal_1061(s_Can_not_create_data_file__004110a4,0,0);
        }
        local_8._0_1_ = 3;
        FUN_004038d0();
      }
      else {
        if (local_44 < (int)local_48 + 2U) {
          Ordinal_2403((int)local_48 + (2 - local_44));
        }
        puVar4 = (undefined4 *)((int)local_48 + 2);
        uVar2 = (int)local_48 + 6;
        local_48 = puVar4;
        if (local_44 < uVar2) {
          Ordinal_2403((int)puVar4 + (4 - local_44));
        }
        uVar1 = *local_48;
        local_48 = local_48 + 1;
        *(undefined4 *)(param_1 + 0xdc8) = uVar1;
        iVar3 = Ordinal_729(uVar1);
        *(int *)(param_1 + 0xdf8) = iVar3;
        if (iVar3 != 0) {
          FUN_004097c0((void *)(param_1 + 0xe00),(int)local_6c,iVar3);
          Ordinal_2456();
          Ordinal_1725();
          local_8._0_1_ = 3;
          FUN_004038d0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004038e8();
          local_8 = 0xffffffff;
          FUN_004038fa();
          uVar1 = 1;
          goto LAB_004036ed;
        }
        local_8._0_1_ = 3;
        FUN_004038d0();
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004038e8();
  local_8 = 0xffffffff;
  FUN_004038fa();
  uVar1 = 0;
LAB_004036ed:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

