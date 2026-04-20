/*
 * Program: Health_Kit.exe
 * Function: FUN_0040aa80
 * Entry: 0040aa80
 * Namespace: Global
 * Prototype: undefined4 FUN_0040aa80(int param_1)
 */


undefined4 __fastcall FUN_0040aa80(int param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00408960(param_1 + 0x138);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x158);
    iVar1 = 5;
    do {
      hWnd = (HWND)*puVar2;
      puVar2 = puVar2 + 0x121;
      InvalidateRect(hWnd,(RECT *)0x0,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 1;
  }
  return 1;
}

