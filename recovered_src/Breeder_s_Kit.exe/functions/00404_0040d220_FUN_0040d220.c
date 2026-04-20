/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040d220
 * Entry: 0040d220
 * Namespace: Global
 * Prototype: undefined FUN_0040d220(int param_1)
 */


void __fastcall FUN_0040d220(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  char local_b8 [4];
  char local_b4 [4];
  char local_b0 [4];
  char local_ac [2];
  undefined4 local_aa [12];
  undefined1 local_78 [36];
  undefined4 *local_54;
  undefined2 *local_50;
  undefined1 local_34 [16];
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d3d1;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_0040f030;
  local_1c = 0;
  local_18 = 0xffffffff;
  Ordinal_762(0);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_b8[0] = s_Pregnancy_spr_00412490[0];
  local_b8[1] = s_Pregnancy_spr_00412490[1];
  local_b8[2] = s_Pregnancy_spr_00412490[2];
  local_b8[3] = s_Pregnancy_spr_00412490[3];
  local_b4[0] = s_Pregnancy_spr_00412490[4];
  local_b4[1] = s_Pregnancy_spr_00412490[5];
  local_b4[2] = s_Pregnancy_spr_00412490[6];
  local_b4[3] = s_Pregnancy_spr_00412490[7];
  local_b0[0] = s_Pregnancy_spr_00412490[8];
  local_b0[1] = s_Pregnancy_spr_00412490[9];
  local_b0[2] = s_Pregnancy_spr_00412490[10];
  local_b0[3] = s_Pregnancy_spr_00412490[0xb];
  local_ac[0] = s_Pregnancy_spr_00412490[0xc];
  local_ac[1] = s_Pregnancy_spr_00412490[0xd];
  puVar4 = local_aa;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  iVar3 = Ordinal_4619(local_b8,0x1001,local_24);
  if (iVar3 == 0) {
    iVar3 = Ordinal_5003(0,0);
    if (iVar3 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00412118,0,0);
    }
  }
  Ordinal_271(local_34,0,0x1000,0);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_50 < (undefined2 *)((int)local_54 + 2)) {
    Ordinal_2456();
  }
  *(undefined2 *)local_54 = 2;
  puVar4 = (undefined4 *)((int)local_54 + 2);
  uVar1 = *(undefined4 *)(param_1 + 0x5b4);
  puVar2 = (undefined2 *)((int)local_54 + 6);
  local_54 = puVar4;
  if (local_50 < puVar2) {
    Ordinal_2456();
  }
  *local_54 = uVar1;
  iVar3 = 1;
  local_54 = local_54 + 1;
  this = (void *)(param_1 + 0x58c);
  do {
    FUN_0040bdf0(this,(int)local_78,0);
    iVar3 = iVar3 + -1;
    this = (void *)((int)this + 0x28);
  } while (iVar3 != 0);
  Ordinal_2456();
  Ordinal_1725();
  local_8._0_1_ = 3;
  FUN_0040d3b1();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040d3c9();
  local_8 = 0xffffffff;
  FUN_0040d3db();
  *unaff_FS_OFFSET = local_10;
  return;
}

