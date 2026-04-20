/*
 * Program: Health_Kit.exe
 * Function: FUN_00402a90
 * Entry: 00402a90
 * Namespace: Global
 * Prototype: undefined4 FUN_00402a90(int param_1)
 */


undefined4 __fastcall FUN_00402a90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00407ec0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0xdbc));
  *(int *)(param_1 + 0xdbc) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xe68) = 1;
  if (*(int *)(param_1 + 0xe50) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0xe50) + 4),1);
  }
  return 0;
}

