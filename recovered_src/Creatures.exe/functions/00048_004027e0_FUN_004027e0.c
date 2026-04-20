/*
 * Program: Creatures.exe
 * Function: FUN_004027e0
 * Entry: 004027e0
 * Namespace: Global
 * Prototype: undefined FUN_004027e0(int param_1)
 */


void __fastcall FUN_004027e0(int param_1)

{
  tagRECT local_10;
  
  **(uint **)(param_1 + 0x60) = (uint)(**(uint **)(param_1 + 0x60) == 0);
  if (**(int **)(param_1 + 0x60) != 0) {
    GetWindowRect(*(HWND *)(DAT_00436ea8 + 0x20),&local_10);
    Ordinal_5490(Ordinal_5652_exref,0,0,local_10.right - local_10.left,
                 local_10.bottom - local_10.top,0x66);
  }
  return;
}

