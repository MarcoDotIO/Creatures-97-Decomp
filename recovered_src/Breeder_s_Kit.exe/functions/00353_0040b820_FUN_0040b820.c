/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040b820
 * Entry: 0040b820
 * Namespace: Global
 * Prototype: bool FUN_0040b820(int param_1)
 */


bool __fastcall FUN_0040b820(int param_1)

{
  bool bVar1;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return false;
  }
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_10);
  bVar1 = FUN_00409720(*(void **)(param_1 + 0x48),local_10.right - local_10.left,
                       local_10.bottom - local_10.top,*(undefined4 **)(param_1 + 0x44));
  return bVar1;
}

