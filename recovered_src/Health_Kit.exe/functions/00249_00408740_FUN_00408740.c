/*
 * Program: Health_Kit.exe
 * Function: FUN_00408740
 * Entry: 00408740
 * Namespace: Global
 * Prototype: undefined4 FUN_00408740(int param_1)
 */


undefined4 __fastcall FUN_00408740(int param_1)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00408a70(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_20);
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    iVar3 = *(int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar3 < local_20.right - local_20.left) {
      *(LONG *)(param_1 + 0x5c) = (local_20.right - local_20.left) - iVar3 >> 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (iVar1 < local_20.bottom - local_20.top) {
      *(LONG *)(param_1 + 0x60) = (local_20.bottom - local_20.top) - iVar1 >> 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x58) & 2) != 0) {
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_10);
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_20);
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    iVar4 = ((*(int *)(iVar1 + 4) - local_20.right) - local_10.left) + local_20.left +
            local_10.right;
    iVar3 = ((*(int *)(iVar1 + 8) - local_20.bottom) - local_10.top) + local_20.top +
            local_10.bottom;
    Ordinal_5490(0,0,0,iVar4,iVar3,6);
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
    iVar1 = Ordinal_2515(pHVar2);
    if (iVar1 != 0) {
      GetWindowRect(*(HWND *)(iVar1 + 0x20),&local_10);
      GetClientRect(*(HWND *)(iVar1 + 0x20),&local_20);
      Ordinal_5490(0,0,0,iVar4 + ((local_20.left - local_20.right) - local_10.left) + local_10.right
                   ,((local_20.top - local_20.bottom) - local_10.top) + local_10.bottom + iVar3,6);
    }
  }
  return 0;
}

