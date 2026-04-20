/*
 * Program: Creatures.exe
 * Function: FUN_00416b40
 * Entry: 00416b40
 * Namespace: Global
 * Prototype: int * FUN_00416b40(int * param_1)
 */


int * __fastcall FUN_00416b40(int *param_1)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  RECT local_10;
  
  iVar2 = param_1[0x15] + *(int *)(param_1[0x12] + 0xe);
  iVar3 = param_1[0x16] + *(int *)(param_1[0x12] + 0x12);
  iVar5 = 0;
  if (0 < DAT_00437fb8) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(DAT_00437fb4 + iVar6);
      if (piVar1 != param_1) {
        (**(code **)(*piVar1 + 0x60))(&local_10);
        pt.y = iVar3;
        pt.x = iVar2;
        BVar4 = PtInRect(&local_10,pt);
        if (BVar4 != 0) {
          return piVar1;
        }
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00437fb8);
  }
  iVar5 = 0;
  iVar6 = 0;
  if (0 < DAT_00438880) {
    do {
      piVar1 = *(int **)(DAT_0043887c + iVar5);
      (**(code **)(*piVar1 + 0x60))(&local_10);
      pt_00.y = iVar3;
      pt_00.x = iVar2;
      BVar4 = PtInRect(&local_10,pt_00);
      if (BVar4 != 0) {
        return piVar1;
      }
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_00438880);
  }
  return (int *)0x0;
}

