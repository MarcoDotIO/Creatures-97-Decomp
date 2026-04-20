/*
 * Program: Creatures.exe
 * Function: FUN_00402950
 * Entry: 00402950
 * Namespace: Global
 * Prototype: undefined FUN_00402950(int param_1)
 */


void __fastcall FUN_00402950(int param_1)

{
  if (*(int **)(param_1 + 0x494) != (int *)0x0) {
    FUN_0040c640(*(int **)(param_1 + 0x494));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00403c90(param_1);
  return;
}

