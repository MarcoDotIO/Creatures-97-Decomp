/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d4c0
 * Entry: 0040d4c0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d4c0(int param_1)
 */


undefined4 __fastcall FUN_0040d4c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  WPARAM WVar3;
  int *piVar4;
  int iVar5;
  WPARAM wParam;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_94 [68];
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  undefined1 local_40 [16];
  undefined **local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  LPARAM local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d6d2;
  *unaff_FS_OFFSET = &local_10;
  piVar4 = (int *)(param_1 + 0x140);
  iVar5 = 4;
  local_18 = param_1;
  do {
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    SendMessageA(*(HWND *)(iVar1 + 0x20),0x14b,0,0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_50[0] = s_chemicals_str_004157e4[0];
  local_50[1] = s_chemicals_str_004157e4[1];
  local_50[2] = s_chemicals_str_004157e4[2];
  local_50[3] = s_chemicals_str_004157e4[3];
  local_4c[0] = s_chemicals_str_004157e4[4];
  local_4c[1] = s_chemicals_str_004157e4[5];
  local_4c[2] = s_chemicals_str_004157e4[6];
  local_4c[3] = s_chemicals_str_004157e4[7];
  local_48[0] = s_chemicals_str_004157e4[8];
  local_48[1] = s_chemicals_str_004157e4[9];
  local_48[2] = s_chemicals_str_004157e4[10];
  local_48[3] = s_chemicals_str_004157e4[0xb];
  local_44[0] = s_chemicals_str_004157e4[0xc];
  local_44[1] = s_chemicals_str_004157e4[0xd];
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_30[0] = &PTR_LAB_00411280;
  local_28 = 0;
  local_24 = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar5 = Ordinal_4619(local_50,0,local_30);
  if (iVar5 == 0) {
    iVar5 = Ordinal_5003(0,0);
    if (iVar5 == 0) {
      Ordinal_1061(s_Can_not_open_data_file__00415428,0,0);
    }
LAB_0040d5b1:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d6ca();
    local_8 = 0xffffffff;
    FUN_0040d6dc();
    uVar2 = 0;
  }
  else {
    Ordinal_271(local_40,1,0x1000,0);
    local_8._0_1_ = 4;
    wParam = 0;
    Ordinal_486();
    local_8._0_1_ = 5;
    local_1c = *(int *)(local_18 + 0x9b0);
    if (0 < local_1c) {
      do {
        Ordinal_781(local_94,&local_14);
        piVar4 = (int *)(local_18 + 0x140);
        for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
          WVar3 = SendMessageA(*(HWND *)(*piVar4 + 0x20),0x14a,wParam,local_14);
          if (wParam != WVar3) {
            local_8._0_1_ = 4;
            FUN_0040d6a7();
            local_8._0_1_ = 3;
            FUN_0040d6af();
            goto LAB_0040d5b1;
          }
          piVar4 = piVar4 + 1;
        }
        wParam = wParam + 1;
      } while ((int)wParam < local_1c);
    }
    Ordinal_2293();
    local_8._0_1_ = 4;
    FUN_0040d6a7();
    local_8._0_1_ = 3;
    FUN_0040d6af();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040d6ca();
    local_8 = 0xffffffff;
    FUN_0040d6dc();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

