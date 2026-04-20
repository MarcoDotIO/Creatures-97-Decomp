/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040a7b0
 * Entry: 0040a7b0
 * Namespace: Global
 * Prototype: bool FUN_0040a7b0(int param_1)
 */


bool __fastcall FUN_0040a7b0(int param_1)

{
  bool bVar1;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return false;
  }
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_10);
  bVar1 = FUN_00405240(*(void **)(param_1 + 0x48),local_10.right - local_10.left,
                       local_10.bottom - local_10.top,*(undefined4 **)(param_1 + 0x44));
  return bVar1;
}

