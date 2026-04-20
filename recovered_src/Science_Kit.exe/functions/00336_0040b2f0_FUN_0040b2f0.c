/*
 * Program: Science_Kit.exe
 * Function: FUN_0040b2f0
 * Entry: 0040b2f0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b2f0(int param_1)
 */


undefined4 __fastcall FUN_0040b2f0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  char local_bc [4];
  char local_b8 [4];
  char local_b4;
  undefined4 local_b3;
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
  puStack_c = &LAB_0040b4d2;
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
  local_bc[0] = s_Gene_spr_00415720[0];
  local_bc[1] = s_Gene_spr_00415720[1];
  local_bc[2] = s_Gene_spr_00415720[2];
  local_bc[3] = s_Gene_spr_00415720[3];
  local_b8[0] = s_Gene_spr_00415720[4];
  local_b8[1] = s_Gene_spr_00415720[5];
  local_b8[2] = s_Gene_spr_00415720[6];
  local_b8[3] = s_Gene_spr_00415720[7];
  local_b4 = s_Gene_spr_00415720[8];
  puVar4 = &local_b3;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  iVar3 = Ordinal_4619(local_bc,0,local_24);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00415088,0,0);
    }
  }
  else {
    Ordinal_271(local_38,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_54 < (int)local_58 + 2U) {
      Ordinal_2403((int)local_58 + (2 - local_54));
    }
    puVar4 = (undefined4 *)((int)local_58 + 2);
    uVar2 = (int)local_58 + 6;
    local_58 = puVar4;
    if (local_54 < uVar2) {
      Ordinal_2403((int)puVar4 + (4 - local_54));
    }
    uVar1 = *local_58;
    local_58 = local_58 + 1;
    *(undefined4 *)(param_1 + 0x1c8) = uVar1;
    iVar3 = Ordinal_729(uVar1);
    *(int *)(param_1 + 0x1cc) = iVar3;
    if (iVar3 != 0) {
      FUN_0040b9c0((void *)(param_1 + 0xf8),(int)local_7c,iVar3);
      Ordinal_2456();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_0040b4b2();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040b4ca();
      local_8 = 0xffffffff;
      FUN_0040b4dc();
      uVar1 = 1;
      goto LAB_0040b3d2;
    }
    local_8._0_1_ = 3;
    FUN_0040b4b2();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040b4ca();
  local_8 = 0xffffffff;
  FUN_0040b4dc();
  uVar1 = 0;
LAB_0040b3d2:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

