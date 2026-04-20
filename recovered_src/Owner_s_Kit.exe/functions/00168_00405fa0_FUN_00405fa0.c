/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405fa0
 * Entry: 00405fa0
 * Namespace: Global
 * Prototype: undefined FUN_00405fa0(int param_1)
 */


void __fastcall FUN_00405fa0(int param_1)

{
  int iVar1;
  int local_18 [6];
  
  if (*(int *)(param_1 + 0x98) + -1 < *(int *)(param_1 + 0xac)) {
    local_18[0] = 0x3e;
    local_18[1] = 0x20;
    local_18[2] = 0x3e;
    local_18[3] = 0x20;
    local_18[4] = 0xb6;
    local_18[5] = 0xac;
    FUN_004016f0((void *)(param_1 + 0x120),*(void **)(param_1 + 0xf8),0,local_18,local_18 + 2);
    FUN_00404650((void *)(param_1 + 0xb0),(RECT *)0x0,0,0);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xac) * 4);
  *(int *)(param_1 + 0xa4) = iVar1;
  if (iVar1 != 0) {
    FUN_00406120(param_1);
    Ordinal_760(*(int *)(param_1 + 0xa4) + 0x14);
    Ordinal_760(*(int *)(param_1 + 0xa4) + 8);
    InvalidateRect(*(HWND *)(param_1 + 0x1c4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x224),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x284),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x2e4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x344),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x3ec),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x42c),(RECT *)0x0,0);
    *(undefined4 *)(param_1 + 0x11c) = 0;
    Ordinal_5610(0);
  }
  return;
}

