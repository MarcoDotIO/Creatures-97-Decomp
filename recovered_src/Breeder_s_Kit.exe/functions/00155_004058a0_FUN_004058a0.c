/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004058a0
 * Entry: 004058a0
 * Namespace: Global
 * Prototype: undefined4 FUN_004058a0(int param_1)
 */


undefined4 __fastcall FUN_004058a0(int param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0040b600(param_1 + 0x518);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x538);
    iVar1 = 3;
    do {
      hWnd = (HWND)*puVar2;
      puVar2 = puVar2 + 0x19;
      InvalidateRect(hWnd,(RECT *)0x0,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 1;
  }
  return 0;
}

