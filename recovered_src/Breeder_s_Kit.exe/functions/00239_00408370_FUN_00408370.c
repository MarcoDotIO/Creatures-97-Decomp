/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408370
 * Entry: 00408370
 * Namespace: Global
 * Prototype: undefined4 FUN_00408370(int param_1)
 */


undefined4 __fastcall FUN_00408370(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_7c [36];
  undefined2 *local_58;
  undefined2 *local_54;
  undefined1 local_38 [16];
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00408511;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_0040f030;
  local_1c = 0xffffffff;
  local_20 = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar3 = Ordinal_4619(*(undefined4 *)(param_1 + 0xb4),0x1001,local_28);
  if (iVar3 == 0) {
    Ordinal_5003(0,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408509();
    local_8 = 0xffffffff;
    FUN_0040851b();
    uVar4 = 0;
  }
  else {
    Ordinal_271(local_38,0,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    uVar1 = *(undefined2 *)(param_1 + 0x98);
    if (local_54 < local_58 + 1) {
      Ordinal_2456();
    }
    *local_58 = uVar1;
    iVar3 = 0;
    local_58 = local_58 + 1;
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x94) + iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(local_7c);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))(1);
          }
        }
        iVar3 = iVar3 + 4;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x98));
    }
    Ordinal_1717();
    Ordinal_1725();
    Ordinal_5439(0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    local_8._0_1_ = 3;
    FUN_004084f1();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408509();
    local_8 = 0xffffffff;
    FUN_0040851b();
    uVar4 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}

