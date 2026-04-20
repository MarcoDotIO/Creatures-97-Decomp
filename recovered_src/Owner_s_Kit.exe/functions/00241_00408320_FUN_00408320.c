/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408320
 * Entry: 00408320
 * Namespace: Global
 * Prototype: undefined4 FUN_00408320(int param_1)
 */


undefined4 __fastcall FUN_00408320(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00409d50(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0xe4));
  *(int *)(param_1 + 0xe4) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0xec) + 4),1);
  }
  return 0;
}

