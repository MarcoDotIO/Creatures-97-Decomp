/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00403d30
 * Entry: 00403d30
 * Namespace: Global
 * Prototype: undefined FUN_00403d30(int param_1)
 */


void __fastcall FUN_00403d30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  int local_44 [9];
  undefined1 local_20 [4];
  int local_1c [3];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403ee6;
  *unaff_FS_OFFSET = &local_10;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0xfa;
  local_44[7] = 299;
  local_44[0] = 0;
  iVar1 = *(int *)(param_1 + 0xac);
  local_44[1] = 0;
  local_44[2] = 0xf0;
  local_44[3] = 0x12e;
  local_1c[2] = param_1;
  if (*(int *)(param_1 + 0x98) + -1 < iVar1) {
    FUN_004014f0((void *)(param_1 + 0x184),*(void **)(param_1 + 0xf8),0,local_1c,local_44 + 4);
    FUN_0040a9f0((void *)(local_1c[2] + 0xb0),(RECT *)0x0,0,0);
    InvalidateRect(*(HWND *)(local_1c[2] + 0x33c),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(local_1c[2] + 0x39c),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(local_1c[2] + 0x3fc),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(local_1c[2] + 0x4bc),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(local_1c[2] + 0x4fc),(RECT *)0x0,0);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x94) + iVar1 * 4);
    *(int *)(param_1 + 0xa4) = iVar2;
    if (iVar2 != 0) {
      local_44[8] = *(int *)(*(int *)(param_1 + 0x1d4) + iVar1 * 4);
      uVar3 = FUN_00403f90((void *)(param_1 + 0x1e4),local_20,iVar1);
      local_8 = 0;
      Ordinal_760(uVar3);
      local_8 = 0xffffffff;
      FUN_00403ef0();
      if (local_44[8] == 0) {
        FUN_004014f0((void *)(local_1c[2] + 0x184),*(void **)(local_1c[2] + 0xf8),0,local_1c,
                     local_44);
        FUN_0040a9f0((void *)(local_1c[2] + 0xb0),(RECT *)0x0,0,0);
      }
      else {
        FUN_00404040(local_1c[2]);
      }
      Ordinal_760(*(int *)(local_1c[2] + 0xa4) + 0x14);
      Ordinal_760(*(int *)(local_1c[2] + 0xa4) + 8);
      InvalidateRect(*(HWND *)(local_1c[2] + 0x33c),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(local_1c[2] + 0x39c),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(local_1c[2] + 0x4bc),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(local_1c[2] + 0x3fc),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(local_1c[2] + 0x4fc),(RECT *)0x0,0);
      *(undefined4 *)(local_1c[2] + 0x180) = 0;
      Ordinal_5610(0);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

