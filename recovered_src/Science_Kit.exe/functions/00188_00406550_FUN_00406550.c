/*
 * Program: Science_Kit.exe
 * Function: FUN_00406550
 * Entry: 00406550
 * Namespace: Global
 * Prototype: undefined4 FUN_00406550(int param_1)
 */


undefined4 __fastcall FUN_00406550(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004080c0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x90));
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x98) + 4),1);
  }
  return 0;
}

