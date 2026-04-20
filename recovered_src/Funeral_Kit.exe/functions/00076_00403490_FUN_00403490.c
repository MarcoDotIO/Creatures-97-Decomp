/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00403490
 * Entry: 00403490
 * Namespace: Global
 * Prototype: undefined4 FUN_00403490(int param_1)
 */


undefined4 __fastcall FUN_00403490(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x1f8) + 4),1);
  }
  return 0;
}

