/*
 * Program: Creatures.exe
 * Function: FUN_00410520
 * Entry: 00410520
 * Namespace: Global
 * Prototype: undefined4 FUN_00410520(int param_1, int param_2, int * param_3, undefined4 param_4)
 */


undefined4 FUN_00410520(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *unaff_FS_OFFSET;
  undefined **local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00410722;
  *unaff_FS_OFFSET = &local_10;
  if (*(short *)(param_1 + 0xe) == 8) {
    iVar4 = *(int *)(param_1 + 8);
    uVar2 = param_3[3] - param_3[1];
    uVar7 = (param_3[2] - *param_3) + 3;
    uVar8 = uVar7 & 0xfffffffc;
    local_20 = uVar2 * uVar8 + 0xc;
    local_14 = uVar2;
    local_1c = (uint *)Ordinal_729(local_20);
    if (local_1c != (uint *)0x0) {
      local_18 = local_1c;
      Ordinal_340();
      local_8 = 0;
      Ordinal_336();
      local_8._0_1_ = 1;
      Ordinal_486();
      local_8._0_1_ = 2;
      local_34[0] = &PTR_LAB_0042fe30;
      local_2c = 0;
      local_28 = 0xffffffff;
      Ordinal_762(0);
      local_8._0_1_ = 3;
      iVar3 = Ordinal_4619(param_4,0x1001,local_34);
      if (iVar3 != 0) {
        *local_18 = uVar8;
        puVar5 = local_18 + 3;
        local_18[1] = uVar2;
        local_18[2] = uVar8;
        uVar6 = *(int *)(param_1 + 4) + 3U & 0xfffffffc;
        puVar9 = (uint *)(param_2 + param_3[1] * uVar6 + *param_3);
        uVar2 = uVar6;
        if (iVar4 < 0) {
          uVar2 = -uVar6;
          puVar9 = (uint *)((int)puVar9 + uVar6 * local_14);
        }
        for (; local_14 != 0; local_14 = local_14 - 1) {
          puVar10 = puVar9;
          puVar11 = puVar5;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(char *)puVar11 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          puVar5 = (uint *)((int)puVar5 + uVar8);
          puVar9 = (uint *)((int)puVar9 + uVar2);
        }
        Ordinal_5658(local_1c,local_20);
        Ordinal_1725();
        Ordinal_731(local_1c);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0041071a();
        local_8 = 0xffffffff;
        FUN_0041072c();
        uVar1 = 1;
        goto LAB_0041054a;
      }
      iVar4 = Ordinal_5003(0,0);
      if (iVar4 == 0) {
        Ordinal_1061(s_Could_not_create_file__004361b0,0,0);
      }
      Ordinal_731(local_18);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0041071a();
      local_8 = 0xffffffff;
      FUN_0041072c();
    }
  }
  uVar1 = 0;
LAB_0041054a:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

