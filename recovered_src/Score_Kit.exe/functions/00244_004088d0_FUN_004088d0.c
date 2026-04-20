/*
 * Program: Score_Kit.exe
 * Function: FUN_004088d0
 * Entry: 004088d0
 * Namespace: Global
 * Prototype: undefined FUN_004088d0(void * param_1)
 */


void __fastcall FUN_004088d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x2a0);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
    while( true ) {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x29c) + iVar2 * 4);
      if (0 < piVar1[2]) break;
      FUN_00408e20(param_1,piVar1[1],0,piVar1[3],piVar1[4]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      Ordinal_4960(iVar2,1);
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return;
      }
    }
    piVar1[2] = piVar1[2] + -1;
  } while( true );
}

