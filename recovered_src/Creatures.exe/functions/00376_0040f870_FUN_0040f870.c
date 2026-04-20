/*
 * Program: Creatures.exe
 * Function: FUN_0040f870
 * Entry: 0040f870
 * Namespace: Global
 * Prototype: int FUN_0040f870(int * param_1)
 */


int __fastcall FUN_0040f870(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar5 = 0;
    iVar3 = rand();
    bVar2 = true;
    iVar1 = iVar3 % 0x7d1 + 1000;
    if (0 < DAT_00438868) {
      iVar6 = 0;
      do {
        if (((*(int **)(DAT_00438864 + iVar6) != param_1) &&
            (iVar4 = (**(code **)(**(int **)(DAT_00438864 + iVar6) + 100))(), iVar1 <= iVar4)) &&
           (iVar4 = (**(code **)(**(int **)(DAT_00438864 + iVar6) + 100))(),
           iVar4 <= iVar3 % 0x7d1 + 0x3f0)) {
          bVar2 = false;
          break;
        }
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00438868);
    }
    if (bVar2) {
      return iVar1;
    }
  } while( true );
}

