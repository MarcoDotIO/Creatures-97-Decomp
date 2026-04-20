/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040a5f0
 * Entry: 0040a5f0
 * Namespace: Global
 * Prototype: undefined FUN_0040a5f0(int param_1)
 */


void __fastcall FUN_0040a5f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2a0)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x29c) + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2a0));
  }
  Ordinal_5439(0,0xffffffff);
  return;
}

