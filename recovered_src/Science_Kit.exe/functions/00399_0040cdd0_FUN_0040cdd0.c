/*
 * Program: Science_Kit.exe
 * Function: FUN_0040cdd0
 * Entry: 0040cdd0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040cdd0(void)
 */


undefined4 FUN_0040cdd0(void)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_98 [68];
  char local_54 [4];
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  undefined1 local_44 [16];
  undefined **local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  uchar *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d03e;
  *unaff_FS_OFFSET = &local_10;
  local_54[0] = s_chemicals_str_004157e4[0];
  local_54[1] = s_chemicals_str_004157e4[1];
  local_54[2] = s_chemicals_str_004157e4[2];
  local_54[3] = s_chemicals_str_004157e4[3];
  local_50[0] = s_chemicals_str_004157e4[4];
  local_50[1] = s_chemicals_str_004157e4[5];
  local_50[2] = s_chemicals_str_004157e4[6];
  local_50[3] = s_chemicals_str_004157e4[7];
  local_4c[0] = s_chemicals_str_004157e4[8];
  local_4c[1] = s_chemicals_str_004157e4[9];
  local_4c[2] = s_chemicals_str_004157e4[10];
  local_4c[3] = s_chemicals_str_004157e4[0xb];
  local_48[0] = s_chemicals_str_004157e4[0xc];
  local_48[1] = s_chemicals_str_004157e4[0xd];
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_34[0] = &PTR_LAB_00411280;
  local_28 = 0xffffffff;
  local_2c = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar2 = Ordinal_4619(local_54,0x1001,local_34);
  if (iVar2 == 0) {
    iVar2 = Ordinal_5003(0,0);
    if (iVar2 == 0) {
      Ordinal_1061(s_Can_not_create_data_file__00415088,0,0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d036();
    local_8 = 0xffffffff;
    FUN_0040d048();
    uVar3 = 0;
  }
  else {
    Ordinal_271(local_44,0,0x1000,0);
    local_8._0_1_ = 4;
    Ordinal_486();
    local_1c = 0;
    local_8 = CONCAT31(local_8._1_3_,5);
    *(undefined4 *)(local_18 + 0x9b0) = 0;
    do {
      iVar2 = 0;
      iVar6 = 0;
      Ordinal_760(local_1c * 4 + *(int *)(local_18 + 0x130));
      local_20 = *(int *)(local_14 + -8);
      if (0 < local_20) {
        do {
          uVar1 = local_14[iVar6];
          piVar4 = (int *)__p___mb_cur_max();
          if (*piVar4 < 2) {
            piVar4 = (int *)__p__pctype();
            uVar5 = *(ushort *)(*piVar4 + (char)uVar1 * 2) & 4;
          }
          else {
            uVar5 = _isctype((int)(char)uVar1,4);
          }
          if ((uVar5 != 0) || (uVar1 == '_')) {
            iVar2 = iVar2 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_20);
      }
      iVar6 = _mbscmp(local_14,(uchar *)s_Waste_Water_004157d8);
      if (iVar6 == 0) {
LAB_0040cfc0:
        Ordinal_2293();
      }
      else {
        iVar6 = _mbscmp(local_14,&DAT_004157d4);
        if ((iVar6 == 0) || (iVar2 == 2)) goto LAB_0040cfc0;
        if (local_20 != iVar2) {
          *(int *)(local_18 + 0x5b0 + *(int *)(local_18 + 0x9b0) * 4) = local_1c;
          Ordinal_784(local_98,&local_14);
          *(int *)(local_18 + 0x9b0) = *(int *)(local_18 + 0x9b0) + 1;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < 0x100);
    Ordinal_2293();
    local_8._0_1_ = 4;
    FUN_0040d013();
    local_8._0_1_ = 3;
    FUN_0040d01b();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d036();
    local_8 = 0xffffffff;
    FUN_0040d048();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

