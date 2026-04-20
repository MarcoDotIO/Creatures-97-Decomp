/*
 * Program: Score_Kit.exe
 * Function: FUN_00404540
 * Entry: 00404540
 * Namespace: Global
 * Prototype: undefined4 FUN_00404540(int param_1)
 */


undefined4 __fastcall FUN_00404540(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  char local_fc [4];
  char local_f8 [4];
  char local_f4 [4];
  char local_f0 [2];
  char local_ee;
  undefined4 local_ed [12];
  char local_bc [4];
  char local_b8 [4];
  char local_b4;
  undefined4 local_b3;
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
  puStack_c = &LAB_00404830;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_0040a030;
  local_20 = 0;
  local_1c = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_fc[0] = s_AllNumbers_spr_0040c328[0];
  local_fc[1] = s_AllNumbers_spr_0040c328[1];
  local_fc[2] = s_AllNumbers_spr_0040c328[2];
  local_fc[3] = s_AllNumbers_spr_0040c328[3];
  local_f8[0] = s_AllNumbers_spr_0040c328[4];
  local_f8[1] = s_AllNumbers_spr_0040c328[5];
  local_f8[2] = s_AllNumbers_spr_0040c328[6];
  local_f8[3] = s_AllNumbers_spr_0040c328[7];
  local_f4[0] = s_AllNumbers_spr_0040c328[8];
  local_f4[1] = s_AllNumbers_spr_0040c328[9];
  local_f4[2] = s_AllNumbers_spr_0040c328[10];
  local_f4[3] = s_AllNumbers_spr_0040c328[0xb];
  local_f0[0] = s_AllNumbers_spr_0040c328[0xc];
  local_f0[1] = s_AllNumbers_spr_0040c328[0xd];
  local_ee = s_AllNumbers_spr_0040c328[0xe];
  puVar4 = local_ed;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  iVar3 = Ordinal_4619(local_fc,0,local_28);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__0040c2f4,0,0);
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
    *(undefined4 *)(param_1 + 0x5b8) = uVar1;
    iVar3 = Ordinal_729(uVar1);
    *(int *)(param_1 + 0x5bc) = iVar3;
    if (iVar3 == 0) {
      local_8._0_1_ = 3;
      FUN_00404810();
    }
    else {
      FUN_00407aa0((void *)(param_1 + 0x590),(int)local_6c,iVar3);
      Ordinal_2456();
      Ordinal_1725();
      local_bc[0] = s_Time_spr_0040c31c[0];
      local_bc[1] = s_Time_spr_0040c31c[1];
      local_bc[2] = s_Time_spr_0040c31c[2];
      local_bc[3] = s_Time_spr_0040c31c[3];
      local_b8[0] = s_Time_spr_0040c31c[4];
      local_b8[1] = s_Time_spr_0040c31c[5];
      local_b8[2] = s_Time_spr_0040c31c[6];
      local_b8[3] = s_Time_spr_0040c31c[7];
      local_b4 = s_Time_spr_0040c31c[8];
      puVar4 = &local_b3;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      iVar3 = Ordinal_4619(local_bc,0,local_28);
      if (iVar3 == 0) {
        iVar3 = Ordinal_5003(0,0);
        if (iVar3 == 0) {
          Ordinal_1061(s_Can_not_create_data_file__0040c2f4,0,0);
        }
        local_8._0_1_ = 3;
        FUN_00404810();
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
        *(undefined4 *)(param_1 + 0x5b8) = uVar1;
        iVar3 = Ordinal_729(uVar1);
        *(int *)(param_1 + 0x5c0) = iVar3;
        if (iVar3 != 0) {
          FUN_00407aa0((void *)(param_1 + 0x508),(int)local_6c,iVar3);
          Ordinal_2456();
          Ordinal_1725();
          local_8._0_1_ = 3;
          FUN_00404810();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00404828();
          local_8 = 0xffffffff;
          FUN_0040483a();
          uVar1 = 1;
          goto LAB_0040462e;
        }
        local_8._0_1_ = 3;
        FUN_00404810();
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00404828();
  local_8 = 0xffffffff;
  FUN_0040483a();
  uVar1 = 0;
LAB_0040462e:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

