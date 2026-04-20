/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409770
 * Entry: 00409770
 * Namespace: Global
 * Prototype: undefined4 FUN_00409770(void)
 */


undefined4 FUN_00409770(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  short *local_8c;
  short *local_88;
  undefined1 local_6c [36];
  ushort *local_48;
  ushort *local_44;
  undefined1 local_28 [16];
  void *local_18;
  undefined2 uStack_14;
  ushort local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040999d;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_340();
  local_8 = 0;
  iVar2 = Ordinal_4619(*(undefined4 *)((int)local_18 + 300),0,0);
  if (iVar2 == 0) {
    Ordinal_4619(s_48574f32_Photo_Album_00410588,0,0);
    *(undefined4 *)((int)local_18 + 0xa4) = 0;
  }
  else {
    Ordinal_271(local_28,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_88 < local_8c + 1) {
      Ordinal_2403((int)local_8c + (2 - (int)local_88));
    }
    local_12 = *local_8c;
    Ordinal_1717();
    Ordinal_1725();
    if (local_12 == 0) {
      Ordinal_4619(s_48574f32_Photo_Album_00410588,0,0);
      *(undefined4 *)((int)local_18 + 0xa4) = 0;
    }
    else {
      Ordinal_4619(*(undefined4 *)((int)local_18 + 300),0,0);
      *(undefined4 *)((int)local_18 + 0xa4) = 1;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00409992();
  }
  Ordinal_271(local_28,1,0x1000,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_44 < local_48 + 1) {
    Ordinal_2403((int)local_48 + (2 - (int)local_44));
  }
  iVar2 = 0;
  local_12 = *local_48;
  local_48 = local_48 + 1;
  uVar1 = (uint)local_12;
  if (local_12 != 0) {
    do {
      piVar5 = (int *)0x0;
      puVar3 = (undefined4 *)Ordinal_729(0x18);
      uStack_14 = SUB42(puVar3,0);
      local_12 = (ushort)((uint)puVar3 >> 0x10);
      local_8._0_1_ = 3;
      if (puVar3 != (undefined4 *)0x0) {
        piVar5 = FUN_00404980(puVar3);
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (piVar5 == (int *)0x0) {
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040998a();
        local_8 = 0xffffffff;
        FUN_004099a7();
        uVar4 = 0;
        goto LAB_00409956;
      }
      iVar2 = iVar2 + 1;
      (**(code **)(*piVar5 + 8))(local_6c);
      FUN_004099f0(local_18,(int)piVar5);
    } while (iVar2 < (int)uVar1);
  }
  Ordinal_1717();
  Ordinal_1725();
  local_8 = local_8 & 0xffffff00;
  FUN_0040998a();
  local_8 = 0xffffffff;
  FUN_004099a7();
  uVar4 = 1;
LAB_00409956:
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return uVar4;
}

