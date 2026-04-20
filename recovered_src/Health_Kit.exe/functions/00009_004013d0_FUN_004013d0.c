/*
 * Program: Health_Kit.exe
 * Function: FUN_004013d0
 * Entry: 004013d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004013d0(int param_1)
 */


undefined4 __fastcall FUN_004013d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00407ec0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x138) + 4),1);
  }
  return 0;
}

