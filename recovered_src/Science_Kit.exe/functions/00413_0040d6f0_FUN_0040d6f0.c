/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d6f0
 * Entry: 0040d6f0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d6f0(int param_1)
 */


undefined4 __fastcall FUN_0040d6f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  WPARAM wParam;
  undefined4 *unaff_FS_OFFSET;
  char local_8c [4];
  char local_88 [4];
  char local_84 [2];
  char local_82;
  undefined1 local_80 [16];
  undefined1 local_70 [36];
  ushort *local_4c;
  ushort *local_48;
  undefined **local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  ushort local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d93b;
  *unaff_FS_OFFSET = &local_10;
  SendMessageA(*(HWND *)(param_1 + 0xa78),0x14b,0,0);
  local_8c[0] = s_themes_str_004157f4[0];
  local_8c[1] = s_themes_str_004157f4[1];
  local_8c[2] = s_themes_str_004157f4[2];
  local_8c[3] = s_themes_str_004157f4[3];
  local_88[0] = s_themes_str_004157f4[4];
  local_88[1] = s_themes_str_004157f4[5];
  local_88[2] = s_themes_str_004157f4[6];
  local_88[3] = s_themes_str_004157f4[7];
  local_84[0] = s_themes_str_004157f4[8];
  local_84[1] = s_themes_str_004157f4[9];
  local_82 = s_themes_str_004157f4[10];
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_2c[0] = &PTR_LAB_00411280;
  local_24 = 0;
  local_20 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar2 = Ordinal_4619(local_8c,0,local_2c);
  if (iVar2 == 0) {
    iVar2 = Ordinal_5003(0,0);
    if (iVar2 == 0) {
      Ordinal_1061(s_Can_not_open_data_file__00415428,0,0);
    }
LAB_0040d7d3:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d933();
    local_8 = 0xffffffff;
    FUN_0040d945();
    uVar3 = 0;
  }
  else {
    Ordinal_271(local_80,1,0x1000,0);
    local_8._0_1_ = 4;
    Ordinal_486();
    local_8 = CONCAT31(local_8._1_3_,5);
    if (local_48 < local_4c + 1) {
      Ordinal_2403((int)local_4c + (2 - (int)local_48));
    }
    local_16 = *local_4c;
    local_4c = local_4c + 1;
    uVar1 = (uint)local_16;
    wParam = 0;
    if (local_16 != 0) {
      do {
        Ordinal_781(local_70,&uStack_14);
        WVar4 = SendMessageA(*(HWND *)(param_1 + 0xa78),0x14a,wParam,CONCAT22(uStack_12,uStack_14));
        if (wParam != WVar4) {
          local_8._0_1_ = 4;
          FUN_0040d913();
          local_8._0_1_ = 3;
          FUN_0040d91b();
          goto LAB_0040d7d3;
        }
        if (local_48 < local_4c + 2) {
          Ordinal_2403((int)local_4c + (4 - (int)local_48));
        }
        uVar3 = *(undefined4 *)local_4c;
        local_4c = local_4c + 2;
        WVar4 = wParam + 1;
        Ordinal_5190(wParam,uVar3);
        wParam = WVar4;
      } while ((int)WVar4 < (int)uVar1);
    }
    Ordinal_2293();
    *(undefined4 *)(param_1 + 0x188) = 1;
    local_8._0_1_ = 4;
    FUN_0040d913();
    local_8._0_1_ = 3;
    FUN_0040d91b();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d933();
    local_8 = 0xffffffff;
    FUN_0040d945();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

