/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004090b0
 * Entry: 004090b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004090b0(undefined4 param_1, byte * param_2, undefined4 param_3)
 */


undefined4 FUN_004090b0(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  HINSTANCE hInstance;
  HICON pHVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR lpIconName;
  short *local_7c;
  short *local_78;
  undefined1 local_5c [4];
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined1 local_34 [16];
  undefined1 local_24 [4];
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 local_18 [2];
  short local_16;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00409343;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_5c,4,10,Ordinal_486,Ordinal_706);
  local_8._0_1_ = 1;
  *(undefined4 *)(local_14 + 0x8c) = param_1;
  Ordinal_3326(local_24);
  uVar2 = Ordinal_2473(local_18,s__H__M__b__d__Y_004102c8);
  local_8._0_1_ = 2;
  Ordinal_760(uVar2);
  local_8._0_1_ = 1;
  FUN_00409328();
  piVar5 = (int *)(local_14 + 0x134);
  *piVar5 = 0;
  FUN_00409360(piVar5,param_2);
  if (*piVar5 == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00409330();
    local_8 = 0xffffffff;
    FUN_0040934d();
    uVar2 = 0;
  }
  else {
    iVar7 = 0;
    do {
      iVar3 = *piVar5 + iVar7;
      iVar7 = iVar7 + 4;
      Ordinal_760(iVar3 + 8);
    } while (iVar7 < 0x14);
    local_20 = (undefined4 *)(local_14 + 0x128);
    Ordinal_760(local_58);
    puVar6 = (undefined4 *)(local_14 + 300);
    Ordinal_760(local_5c);
    Ordinal_836(s__Photo_Album_00410560);
    Ordinal_340();
    local_8._0_1_ = 3;
    iVar7 = Ordinal_4619(*puVar6,0,0);
    if (iVar7 == 0) {
      *(undefined4 *)(local_14 + 0xa4) = 0;
    }
    else {
      Ordinal_271(local_34,1,0x1000,0);
      local_8._0_1_ = 4;
      if (local_78 < local_7c + 1) {
        Ordinal_2403((int)local_7c + (2 - (int)local_78));
      }
      local_16 = *local_7c;
      Ordinal_1717();
      Ordinal_1725();
      if (local_16 == 0) {
        *(undefined4 *)(local_14 + 0xa4) = 0;
      }
      else {
        *(undefined4 *)(local_14 + 0xa4) = 1;
      }
      local_8._0_1_ = 3;
      FUN_00409280();
    }
    FUN_00409580(local_4c,local_1c);
    uVar1 = *(uint *)(local_14 + 100);
    *(undefined4 *)(local_14 + 0x74) = *local_20;
    *(undefined4 *)(local_14 + 0x130) = 0;
    *(uint *)(local_14 + 100) = uVar1 | 8;
    *(uint *)(local_14 + 100) = uVar1 | 10;
    Ordinal_1035();
    lpIconName = (LPCSTR)0xb0;
    hInstance = (HINSTANCE)Ordinal_1014(0xb0,0xe);
    pHVar4 = LoadIconA(hInstance,lpIconName);
    local_8._0_1_ = 1;
    *(HICON *)(local_14 + 0x70) = pHVar4;
    *(undefined4 *)(local_14 + 0x138) = param_3;
    FUN_00409320();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00409330();
    local_8 = 0xffffffff;
    FUN_0040934d();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

