/*
 * Program: Launcher.exe
 * Function: FUN_00402cc0
 * Entry: 00402cc0
 * Namespace: Global
 * Prototype: undefined FUN_00402cc0(int param_1)
 */


void __fastcall FUN_00402cc0(int param_1)

{
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x5c))();
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 4))(1);
    }
  }
  Ordinal_2390();
  return;
}

