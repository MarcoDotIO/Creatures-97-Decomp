/*
 * Program: Health_Kit.exe
 * Function: FUN_004088c0
 * Entry: 004088c0
 * Namespace: Global
 * Prototype: undefined FUN_004088c0(int param_1)
 */


void __fastcall FUN_004088c0(int param_1)

{
  BOOL BVar1;
  
  if (*(HGDIOBJ *)(param_1 + 0x54) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0x54));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))(1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    Ordinal_731(*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  Ordinal_2081();
  return;
}

