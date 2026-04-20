/*
 * Program: Creatures.exe
 * Function: FUN_00417fe0
 * Entry: 00417fe0
 * Namespace: Global
 * Prototype: undefined FUN_00417fe0(void * param_1)
 */


void __fastcall FUN_00417fe0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20 [4];
  int local_10 [4];
  
  iVar4 = 0;
  FUN_00417f60(param_1,local_10);
  if (0 < DAT_00438868) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(DAT_00438864 + iVar3);
      (**(code **)(*piVar1 + 0x60))(local_20);
      if (*(void **)((int)piVar1 + 0x1a) != param_1) {
        iVar2 = FUN_0040b250(local_10,local_20);
        if (iVar2 != 0) {
          FUN_004016c0(param_1,piVar1,4,0,0,0);
        }
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00438868);
  }
  return;
}

