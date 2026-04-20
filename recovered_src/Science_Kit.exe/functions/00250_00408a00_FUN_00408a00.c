/*
 * Program: Science_Kit.exe
 * Function: FUN_00408a00
 * Entry: 00408a00
 * Namespace: Global
 * Prototype: undefined4 FUN_00408a00(int param_1)
 */


undefined4 __fastcall FUN_00408a00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004080c0(*(void **)(param_1 + 0x8c),2,*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x713c) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x9c) + 4),1);
  }
  return 0;
}

