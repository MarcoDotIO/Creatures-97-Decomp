/*
 * Program: Science_Kit.exe
 * Function: FUN_004079c0
 * Entry: 004079c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004079c0(int param_1)
 */


undefined4 __fastcall FUN_004079c0(int param_1)

{
  int iVar1;
  WPARAM wParam;
  
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    wParam = 0;
  }
  else {
    wParam = *(WPARAM *)(*(int *)(param_1 + 0x218) + 4);
  }
  SendMessageA(*(HWND *)(param_1 + 0x20),0x30,wParam,0);
  *(undefined4 *)(param_1 + 0x230) = 0;
  return 0;
}

