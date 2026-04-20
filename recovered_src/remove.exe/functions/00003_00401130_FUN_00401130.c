/*
 * Program: remove.exe
 * Function: FUN_00401130
 * Entry: 00401130
 * Namespace: Global
 * Prototype: undefined4 FUN_00401130(int param_1)
 */


undefined4 __fastcall FUN_00401130(int param_1)

{
  Ordinal_4173();
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x60));
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x60));
  return 1;
}

