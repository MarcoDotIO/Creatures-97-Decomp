/*
 * Program: Health_Kit.exe
 * Function: FUN_004017b0
 * Entry: 004017b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004017b0(int param_1)
 */


undefined4 __fastcall FUN_004017b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  char local_bc [4];
  char local_b8 [4];
  char local_b4 [2];
  undefined4 local_b2 [13];
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
  puStack_c = &LAB_0040199f;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = 0;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_0040e268;
  local_18 = 0xffffffff;
  local_1c = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  local_bc[0] = s_Lobes_spr_004110c0[0];
  local_bc[1] = s_Lobes_spr_004110c0[1];
  local_bc[2] = s_Lobes_spr_004110c0[2];
  local_bc[3] = s_Lobes_spr_004110c0[3];
  local_b8[0] = s_Lobes_spr_004110c0[4];
  local_b8[1] = s_Lobes_spr_004110c0[5];
  local_b8[2] = s_Lobes_spr_004110c0[6];
  local_b8[3] = s_Lobes_spr_004110c0[7];
  local_b4[0] = s_Lobes_spr_004110c0[8];
  local_b4[1] = s_Lobes_spr_004110c0[9];
  puVar5 = local_b2;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  iVar3 = Ordinal_4619(local_bc,0,local_24);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__004110a4,0,0);
    }
  }
  else {
    Ordinal_271(local_38,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_54 < (int)local_58 + 2U) {
      Ordinal_2403((int)local_58 + (2 - local_54));
    }
    puVar5 = (undefined4 *)((int)local_58 + 2);
    uVar2 = (int)local_58 + 6;
    local_58 = puVar5;
    if (local_54 < uVar2) {
      Ordinal_2403((int)puVar5 + (4 - local_54));
    }
    uVar1 = *local_58;
    local_58 = local_58 + 1;
    *(undefined4 *)(param_1 + 0x125c) = uVar1;
    iVar3 = Ordinal_729(uVar1);
    *(int *)(param_1 + 0x1260) = iVar3;
    if (iVar3 != 0) {
      this = (void *)(param_1 + 0x113c);
      do {
        FUN_004097c0(this,(int)local_7c,iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + *(int *)((int)this + 0x24);
        this = (void *)((int)this + 0x28);
      } while (iVar4 < 6);
      Ordinal_2456();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_0040197f();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401997();
      local_8 = 0xffffffff;
      FUN_004019a9();
      uVar1 = 1;
      goto LAB_0040188d;
    }
    local_8._0_1_ = 3;
    FUN_0040197f();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00401997();
  local_8 = 0xffffffff;
  FUN_004019a9();
  uVar1 = 0;
LAB_0040188d:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

