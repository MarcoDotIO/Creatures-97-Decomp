/*
 * Program: Science_Kit.exe
 * Function: FUN_004069b0
 * Entry: 004069b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004069b0(int param_1)
 */


undefined4 __fastcall FUN_004069b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  WPARAM wParam;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  char local_dc [96];
  undefined1 local_7c [68];
  undefined1 local_38 [16];
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  LPARAM local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00406bbe;
  *unaff_FS_OFFSET = &local_10;
  SendMessageA(*(HWND *)(param_1 + 0xa98),0x14b,0,0);
  FUN_00407f00((byte *)s_Cheese_00415450);
  uVar5 = 0xffffffff;
  pcVar7 = s_injections_str_00415440;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = local_dc;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_28[0] = &PTR_LAB_00411280;
  local_20 = 0;
  local_1c = 0xffffffff;
  Ordinal_762(0);
  local_8._0_1_ = 3;
  iVar2 = Ordinal_4619(local_dc,0,local_28);
  if (iVar2 == 0) {
    iVar2 = Ordinal_5003(0,0);
    if (iVar2 == 0) {
      Ordinal_1061(s_Can_not_open_data_file__00415428,0,0);
    }
LAB_00406aa4:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00406bb6();
    local_8 = 0xffffffff;
    FUN_00406bc8();
    uVar3 = 0;
  }
  else {
    wParam = 0;
    Ordinal_271(local_38,1,0x1000,0);
    local_8._0_1_ = 4;
    Ordinal_486();
    local_8._0_1_ = 5;
    do {
      Ordinal_781(local_7c,&local_14);
      WVar4 = SendMessageA(*(HWND *)(param_1 + 0xa98),0x14a,wParam,local_14);
      if (wParam != WVar4) {
        local_8._0_1_ = 4;
        FUN_00406b96();
        local_8._0_1_ = 3;
        FUN_00406b9e();
        goto LAB_00406aa4;
      }
      wParam = wParam + 1;
    } while ((int)wParam < 7);
    Ordinal_2293();
    SendMessageA(*(HWND *)(param_1 + 0xa98),0x14e,*(WPARAM *)(param_1 + 0x118),0);
    local_8._0_1_ = 4;
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x118);
    FUN_00406b96();
    local_8._0_1_ = 3;
    FUN_00406b9e();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00406bb6();
    local_8 = 0xffffffff;
    FUN_00406bc8();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

