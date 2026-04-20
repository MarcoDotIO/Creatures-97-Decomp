/*
 * Program: Hatchery.exe
 * Function: FUN_004059c0
 * Entry: 004059c0
 * Namespace: Global
 * Prototype: undefined FUN_004059c0(int param_1)
 */


void __fastcall FUN_004059c0(int param_1)

{
  tagRECT local_18;
  int local_8;
  int local_4;
  
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  if (local_18.left < 0) {
    local_18.left = 0;
  }
  else if (0x280 < local_18.left) {
    local_18.left = 0x280;
  }
  if (local_18.top < 0) {
    local_18.top = 0;
  }
  else if (0x14a < local_18.top) {
    local_18.top = 0x14a;
  }
  local_8 = local_18.left;
  local_4 = local_18.top;
  FUN_00404460((void *)(param_1 + 0xc0),0,s_Location_0040a580,(BYTE *)&local_8);
  Ordinal_3976();
  return;
}

