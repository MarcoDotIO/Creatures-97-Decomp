/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406390
 * Entry: 00406390
 * Namespace: Global
 * Prototype: undefined4 FUN_00406390(int param_1)
 */


undefined4 __fastcall FUN_00406390(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  char local_100 [4];
  char local_fc [4];
  char local_f8 [4];
  char local_f4 [2];
  undefined4 local_f2 [12];
  char local_c0 [4];
  char local_bc [4];
  char local_b8 [4];
  char local_b4 [2];
  undefined4 local_b2 [12];
  undefined1 local_80 [16];
  undefined1 local_70 [36];
  undefined4 *local_4c;
  uint local_48;
  int local_2c;
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004066b3;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_0040f030;
  local_20 = 0;
  local_1c = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_100[0] = s_Fertility_spr_004124a0[0];
  local_100[1] = s_Fertility_spr_004124a0[1];
  local_100[2] = s_Fertility_spr_004124a0[2];
  local_100[3] = s_Fertility_spr_004124a0[3];
  local_fc[0] = s_Fertility_spr_004124a0[4];
  local_fc[1] = s_Fertility_spr_004124a0[5];
  local_fc[2] = s_Fertility_spr_004124a0[6];
  local_fc[3] = s_Fertility_spr_004124a0[7];
  local_f8[0] = s_Fertility_spr_004124a0[8];
  local_f8[1] = s_Fertility_spr_004124a0[9];
  local_f8[2] = s_Fertility_spr_004124a0[10];
  local_f8[3] = s_Fertility_spr_004124a0[0xb];
  local_f4[0] = s_Fertility_spr_004124a0[0xc];
  local_f4[1] = s_Fertility_spr_004124a0[0xd];
  puVar6 = local_f2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  iVar3 = Ordinal_4619(local_100,0,local_28);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
    }
  }
  else {
    Ordinal_271(local_80,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_48 < (int)local_4c + 2U) {
      Ordinal_2403((int)local_4c + (2 - local_48));
    }
    puVar6 = (undefined4 *)((int)local_4c + 2);
    uVar2 = (int)local_4c + 6;
    local_4c = puVar6;
    if (local_48 < uVar2) {
      Ordinal_2403((int)puVar6 + (4 - local_48));
    }
    uVar1 = *local_4c;
    *(undefined4 *)(param_1 + 0x81c) = uVar1;
    local_4c = local_4c + 1;
    iVar3 = Ordinal_729(uVar1);
    *(int *)(param_1 + 0x820) = iVar3;
    if (iVar3 == 0) {
      local_8._0_1_ = 3;
      FUN_00406693();
    }
    else {
      local_2c = 4;
      pvVar5 = (void *)(param_1 + 0x72c);
      do {
        FUN_0040bdf0(pvVar5,(int)local_70,iVar3);
        iVar3 = iVar3 + *(int *)((int)pvVar5 + 0x24);
        local_2c = local_2c + -1;
        pvVar5 = (void *)((int)pvVar5 + 0x28);
      } while (local_2c != 0);
      Ordinal_2456();
      Ordinal_1725();
      local_c0[0] = s_Pregnancy_spr_00412490[0];
      local_c0[1] = s_Pregnancy_spr_00412490[1];
      local_c0[2] = s_Pregnancy_spr_00412490[2];
      local_c0[3] = s_Pregnancy_spr_00412490[3];
      local_bc[0] = s_Pregnancy_spr_00412490[4];
      local_bc[1] = s_Pregnancy_spr_00412490[5];
      local_bc[2] = s_Pregnancy_spr_00412490[6];
      local_bc[3] = s_Pregnancy_spr_00412490[7];
      local_b8[0] = s_Pregnancy_spr_00412490[8];
      local_b8[1] = s_Pregnancy_spr_00412490[9];
      local_b8[2] = s_Pregnancy_spr_00412490[10];
      local_b8[3] = s_Pregnancy_spr_00412490[0xb];
      local_b4[0] = s_Pregnancy_spr_00412490[0xc];
      local_b4[1] = s_Pregnancy_spr_00412490[0xd];
      puVar6 = local_b2;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      iVar3 = Ordinal_4619(local_c0,0,local_28);
      if (iVar3 == 0) {
        iVar3 = Ordinal_5003(0,0);
        if (iVar3 == 0) {
          Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
        }
        local_8._0_1_ = 3;
        FUN_00406693();
      }
      else {
        if (local_48 < (int)local_4c + 2U) {
          Ordinal_2403((int)local_4c + (2 - local_48));
        }
        puVar6 = (undefined4 *)((int)local_4c + 2);
        uVar2 = (int)local_4c + 6;
        local_4c = puVar6;
        if (local_48 < uVar2) {
          Ordinal_2403((int)puVar6 + (4 - local_48));
        }
        uVar1 = *local_4c;
        *(undefined4 *)(param_1 + 0x81c) = uVar1;
        local_4c = local_4c + 1;
        iVar3 = Ordinal_729(uVar1);
        *(int *)(param_1 + 0x824) = iVar3;
        if (iVar3 != 0) {
          iVar4 = 1;
          pvVar5 = (void *)(param_1 + 0x7f4);
          do {
            FUN_0040bdf0(pvVar5,(int)local_70,iVar3);
            iVar3 = iVar3 + *(int *)((int)pvVar5 + 0x24);
            iVar4 = iVar4 + -1;
            pvVar5 = (void *)((int)pvVar5 + 0x28);
          } while (iVar4 != 0);
          Ordinal_2456();
          Ordinal_1725();
          local_8._0_1_ = 3;
          FUN_00406693();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004066ab();
          local_8 = 0xffffffff;
          FUN_004066bd();
          uVar1 = 1;
          goto LAB_0040647e;
        }
        local_8._0_1_ = 3;
        FUN_00406693();
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004066ab();
  local_8 = 0xffffffff;
  FUN_004066bd();
  uVar1 = 0;
LAB_0040647e:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

