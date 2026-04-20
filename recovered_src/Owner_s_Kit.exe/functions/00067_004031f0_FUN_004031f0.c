/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004031f0
 * Entry: 004031f0
 * Namespace: Global
 * Prototype: undefined4 FUN_004031f0(int param_1)
 */


undefined4 __fastcall FUN_004031f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
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
  puStack_c = &LAB_00403387;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_0040e030;
  local_1c = 0xffffffff;
  local_20 = 0;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar2 = Ordinal_4619(s_The_Register_004121f0,1,0);
  if (iVar2 == 0) {
    iVar2 = Ordinal_4619(s_The_Register_004121f0,0x1001,local_28);
    if (iVar2 == 0) {
      Ordinal_5003(0,0);
LAB_0040328e:
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040337f();
      local_8 = 0xffffffff;
      FUN_00403391();
      uVar3 = 0;
      goto LAB_004032a1;
    }
  }
  Ordinal_271(local_38,0,0x1000,0);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_14 = *(int *)(param_1 + 0xb3c);
  if (local_54 < local_58 + 1) {
    Ordinal_2456();
  }
  *local_58 = (undefined2)local_14;
  iVar2 = 0;
  local_58 = local_58 + 1;
  iVar4 = 0;
  if (0 < local_14) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb38) + iVar2);
      if (piVar1 == (int *)0x0) {
        local_8._0_1_ = 3;
        FUN_00403367();
        goto LAB_0040328e;
      }
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      (**(code **)(*piVar1 + 8))(local_7c);
    } while (iVar4 < local_14);
  }
  Ordinal_1717();
  Ordinal_1725();
  local_8._0_1_ = 3;
  FUN_00403367();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040337f();
  local_8 = 0xffffffff;
  FUN_00403391();
  uVar3 = 1;
LAB_004032a1:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

