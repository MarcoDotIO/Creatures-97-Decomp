/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408550
 * Entry: 00408550
 * Namespace: Global
 * Prototype: undefined FUN_00408550(int param_1)
 */


void __fastcall FUN_00408550(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0x98) + -1) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xa8) * 4),
     *(int *)(param_1 + 0xa4) = iVar1, iVar1 != 0)) {
    FUN_00408660(param_1);
    Ordinal_760(*(int *)(param_1 + 0xa4) + 8);
    Ordinal_760(*(int *)(param_1 + 0xa4) + 4);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x14);
    InvalidateRect(*(HWND *)(param_1 + 0x3b4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x3f4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x334),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 500),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x2b4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(param_1 + 0x254),(RECT *)0x0,0);
    Ordinal_5610(0);
  }
  return;
}

