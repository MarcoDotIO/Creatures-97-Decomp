/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409360
 * Entry: 00409360
 * Namespace: Global
 * Prototype: undefined4 FUN_00409360(int * param_1, byte * param_2)
 */


undefined4 FUN_00409360(int *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *unaff_FS_OFFSET;
  bool bVar10;
  undefined1 local_80 [36];
  ushort *local_5c;
  ushort *local_58;
  undefined1 local_3c [16];
  undefined **local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  undefined2 local_14;
  ushort uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040955f;
  local_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_2c = &PTR_LAB_0040d030;
  local_20 = 0xffffffff;
  local_24 = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar3 = Ordinal_4619(s_The_Register_00410570,0,0);
  if (iVar3 != 0) {
    Ordinal_271(local_3c,1,0x1000,0);
    local_8._0_1_ = 4;
    local_18 = 0;
    puVar5 = (undefined4 *)Ordinal_729(0x30);
    local_14 = SUB42(puVar5,0);
    uStack_12 = (ushort)((uint)puVar5 >> 0x10);
    local_8._0_1_ = 5;
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = FUN_00404bc0(puVar5);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    *param_1 = (int)puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      if (local_58 < local_5c + 1) {
        Ordinal_2403((int)local_5c + (2 - (int)local_58));
      }
      iVar3 = 0;
      uStack_12 = *local_5c;
      local_5c = local_5c + 1;
      uVar2 = (uint)uStack_12;
      if (uStack_12 != 0) {
        do {
          (**(code **)(*(int *)*param_1 + 8))(local_80);
          pbVar7 = *(byte **)(*param_1 + 8);
          pbVar9 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_004094cd:
              iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_004094d2;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_004094cd;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_004094d2:
          if (iVar8 == 0) {
            local_18 = 1;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
      if (local_18 == 0) {
        if ((int *)*param_1 != (int *)0x0) {
          (**(code **)(*(int *)*param_1 + 4))(1);
        }
        *param_1 = 0;
      }
      Ordinal_1717();
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_0040953f();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00409557();
      local_8 = 0xffffffff;
      FUN_00409569();
      uVar4 = 1;
      goto LAB_004093ea;
    }
    local_8._0_1_ = 3;
    FUN_0040953f();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00409557();
  local_8 = 0xffffffff;
  FUN_00409569();
  uVar4 = 0;
LAB_004093ea:
  *unaff_FS_OFFSET = CONCAT22(uStack_e,local_10);
  return uVar4;
}

