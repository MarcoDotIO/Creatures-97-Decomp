/*
 * Program: Creatures.exe
 * Function: FUN_00402680
 * Entry: 00402680
 * Namespace: Global
 * Prototype: undefined FUN_00402680(int param_1)
 */


void __fastcall FUN_00402680(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004039c0(*(int **)(param_1 + 0x60));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x50) == 1) {
      iVar1 = FUN_00403450(*(int *)(param_1 + 0x60));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        return;
      }
      iVar1 = *(int *)(param_1 + 0x54) + 1;
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 == 0x14) {
        FUN_004022a0();
        *(undefined4 *)(param_1 + 0x50) = 2;
        InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x50) != 2) {
        return;
      }
      FUN_004037c0(*(int **)(param_1 + 0x60));
    }
  }
  return;
}

