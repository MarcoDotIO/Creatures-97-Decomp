/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405530
 * Entry: 00405530
 * Namespace: Global
 * Prototype: undefined4 FUN_00405530(int param_1)
 */


undefined4 __fastcall FUN_00405530(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00403c90(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x2160));
  *(int *)(param_1 + 0x2160) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x218c) = 1;
  if (*(int *)(param_1 + 0x2188) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x2188) + 4),1);
  }
  return 0;
}

