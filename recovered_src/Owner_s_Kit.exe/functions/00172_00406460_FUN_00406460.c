/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406460
 * Entry: 00406460
 * Namespace: Global
 * Prototype: undefined FUN_00406460(int param_1)
 */


void __fastcall FUN_00406460(int param_1)

{
  int iVar1;
  int aiStack_18 [6];
  
  if ((*(int *)(param_1 + 900) == 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    iVar1 = Ordinal_1061(s_Delete_photograph_00412398,0x24,0);
    if (iVar1 == 6) {
      if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xa4) + 4))(1);
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      Ordinal_4960(*(undefined4 *)(param_1 + 0xac),1);
      if (*(int *)(param_1 + 0x98) + -1 < *(int *)(param_1 + 0xac)) {
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        aiStack_18[0] = 0x3e;
        aiStack_18[1] = 0x20;
        aiStack_18[2] = 0x3e;
        aiStack_18[3] = 0x20;
        aiStack_18[4] = 0xb6;
        aiStack_18[5] = 0xac;
        FUN_004016f0((void *)(param_1 + 0x120),*(void **)(param_1 + 0xf8),0,aiStack_18,
                     aiStack_18 + 2);
        FUN_00404650((void *)(param_1 + 0xb0),(RECT *)0x0,0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x1c4),(RECT *)0x0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x224),(RECT *)0x0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x284),(RECT *)0x0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x2e4),(RECT *)0x0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x344),(RECT *)0x0,0);
      }
      else {
        *(undefined4 *)(param_1 + 0xa4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xac) * 4);
      }
      FUN_00405fa0(param_1);
    }
  }
  return;
}

