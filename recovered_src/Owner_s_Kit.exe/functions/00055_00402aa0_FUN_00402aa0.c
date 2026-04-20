/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402aa0
 * Entry: 00402aa0
 * Namespace: Global
 * Prototype: undefined FUN_00402aa0(int * param_1)
 */


void __fastcall FUN_00402aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  FUN_004031f0((int)param_1);
  if (0 < param_1[0x2cf]) {
    do {
      if (*(int **)(param_1[0x2ce] + iVar2) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x2ce] + iVar2) + 4))(1);
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x2cf]);
  }
  Ordinal_5439(0,0xffffffff);
  FUN_004097d0(param_1);
  return;
}

