/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403b00
 * Entry: 00403b00
 * Namespace: Global
 * Prototype: undefined4 FUN_00403b00(int param_1)
 */


undefined4 __fastcall FUN_00403b00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0xa0) + 4),1);
  }
  return 0;
}

