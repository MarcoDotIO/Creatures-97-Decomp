/*
 * Program: Creatures.exe
 * Function: FUN_004200b0
 * Entry: 004200b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004200b0(int * param_1)
 */


undefined4 FUN_004200b0(int *param_1)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  RECT RStack_24;
  tagRECT tStack_14;
  
  iVar4 = 0;
  (**(code **)(*param_1 + 0x60))(&RStack_24.top);
  iVar3 = 0;
  if (0 < DAT_00438868) {
    do {
      piVar1 = *(int **)(DAT_00438864 + iVar4);
      if (piVar1 != param_1) {
        if (((*(byte *)((int)param_1 + 9) & 8) != 0) && (*(int **)((int)piVar1 + 0x1a) == param_1))
        {
          return 1;
        }
        (**(code **)(*piVar1 + 0x60))(&stack0xffffffcc);
        BVar2 = IntersectRect(&tStack_14,&RStack_24,(RECT *)&stack0xffffffcc);
        if (BVar2 != 0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00438868);
  }
  return 0;
}

