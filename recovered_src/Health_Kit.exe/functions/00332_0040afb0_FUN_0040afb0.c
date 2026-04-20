/*
 * Program: Health_Kit.exe
 * Function: FUN_0040afb0
 * Entry: 0040afb0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040afb0(int param_1)
 */


undefined4 __fastcall FUN_0040afb0(int param_1)

{
  int iVar1;
  WPARAM wParam;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b155;
  *unaff_FS_OFFSET = &local_10;
  piVar3 = (int *)(param_1 + 0x17e0);
  Ordinal_486();
  local_8 = 0;
  Ordinal_3656(0x68);
  Ordinal_5492(local_14);
  *(undefined4 *)(param_1 + 0x118) = 1;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_3656(0x69);
  Ordinal_5492(local_18);
  *(undefined4 *)(param_1 + 0x11c) = 3;
  Ordinal_486();
  local_8._0_1_ = 2;
  Ordinal_3656(0x6a);
  Ordinal_5492(local_1c);
  *(undefined4 *)(param_1 + 0x120) = 6;
  Ordinal_486();
  local_8._0_1_ = 3;
  Ordinal_3656(0x6b);
  Ordinal_5492(local_20);
  *(undefined4 *)(param_1 + 0x124) = 7;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar2 = 5;
  Ordinal_3656(0x6c);
  Ordinal_5492(local_24);
  *(undefined4 *)(param_1 + 0x128) = 0xb;
  do {
    iVar1 = *piVar3;
    wParam = 0;
    if (param_1 != -0x9c) {
      wParam = *(WPARAM *)(param_1 + 0xa0);
    }
    piVar3 = piVar3 + 1;
    SendMessageA(*(HWND *)(iVar1 + 0x20),0x30,wParam,0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_8._0_1_ = 3;
  FUN_0040b135();
  local_8._0_1_ = 2;
  FUN_0040b13d();
  local_8._0_1_ = 1;
  FUN_0040b145();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040b14d();
  local_8 = 0xffffffff;
  FUN_0040b15f();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

