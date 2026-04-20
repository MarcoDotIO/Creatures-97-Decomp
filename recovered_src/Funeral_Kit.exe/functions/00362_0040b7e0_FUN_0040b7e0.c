/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b7e0
 * Entry: 0040b7e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b7e0(int param_1)
 */


undefined4 __fastcall FUN_0040b7e0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_8c [36];
  undefined2 *local_68;
  undefined2 *local_64;
  int local_48 [4];
  undefined **local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_12;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040ba59;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 1;
  if (*(int *)(param_1 + 0x764) != 0) {
    local_18 = 2;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x7a4) == 0) {
    if (0 < *(int *)(param_1 + 0x798)) {
      iVar4 = 0;
      do {
        piVar3 = *(int **)(*(int *)(param_1 + 0x794) + iVar4);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(1);
        }
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x798));
    }
  }
  else {
    local_24 = Ordinal_3024();
    local_20 = 0;
    if (local_24 != local_18) {
      Ordinal_340();
      local_8 = 0;
      Ordinal_336();
      local_8._0_1_ = 1;
      Ordinal_486();
      local_8._0_1_ = 2;
      local_38[0] = &PTR_LAB_0040d030;
      local_2c = 0xffffffff;
      local_30 = 0;
      Ordinal_762(0);
      local_8._0_1_ = 3;
      iVar5 = Ordinal_4619(s_The_Graveyard_0041023c,0x3001,local_38);
      if (iVar5 == 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040ba51();
        local_8 = 0xffffffff;
        FUN_0040ba63();
        uVar2 = 0;
        goto LAB_0040b850;
      }
      Ordinal_271(local_48,0,0x1000,0);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_64 < local_68 + 1) {
        Ordinal_2456();
      }
      iVar5 = 0;
      *local_68 = 0;
      local_68 = local_68 + 1;
      if ((*(int *)(param_1 + 0x764) != 0) && (local_1c = 0, 0 < *(int *)(param_1 + 0x798))) {
        do {
          piVar3 = *(int **)(*(int *)(param_1 + 0x794) + iVar5);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(local_8c);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 4))(1);
            }
          }
          iVar5 = iVar5 + 4;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(param_1 + 0x798));
      }
      local_1c = *(int *)(param_1 + 0x7c4);
      iVar5 = local_18;
      if (local_18 < local_24) {
        do {
          bVar1 = false;
          if (0 < local_1c) {
            piVar3 = *(int **)(param_1 + 0x7c0);
            iVar4 = local_1c;
            do {
              if (*piVar3 - local_18 == iVar5) {
                bVar1 = true;
              }
              piVar3 = piVar3 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (!bVar1) {
            iVar4 = FUN_00409a90(*(void **)(*(int *)(param_1 + 0x6c) + iVar5 * 4),local_8c);
            if (iVar4 != 0) {
              local_20 = local_20 + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_24);
      }
      Ordinal_1717();
      (**(code **)(local_48[0] + 0x30))(0,0);
      local_20 = local_20 + *(int *)(param_1 + 0x798);
      local_12 = (undefined2)local_20;
      Ordinal_5658(&local_12,2);
      Ordinal_1725();
      local_8._0_1_ = 3;
      FUN_0040ba36();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040ba51();
      local_8 = 0xffffffff;
      FUN_0040ba63();
    }
  }
  uVar2 = 1;
LAB_0040b850:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

