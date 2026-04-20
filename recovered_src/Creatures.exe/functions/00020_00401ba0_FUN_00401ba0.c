/*
 * Program: Creatures.exe
 * Function: FUN_00401ba0
 * Entry: 00401ba0
 * Namespace: Global
 * Prototype: undefined FUN_00401ba0(int * param_1)
 */


void FUN_00401ba0(int *param_1)

{
  int *piVar1;
  BOOL BVar2;
  void *unaff_EBX;
  int iVar3;
  int iVar4;
  RECT local_34;
  RECT RStack_24;
  tagRECT tStack_14;
  
  iVar4 = 0;
  (**(code **)(*param_1 + 0x60))(&RStack_24.top);
  iVar3 = 0;
  if (0 < DAT_00438868) {
    do {
      piVar1 = *(int **)(DAT_00438864 + iVar4);
      if (param_1 != piVar1) {
        if (((*(byte *)((int)param_1 + 9) & 8) == 0) || (*(int **)((int)piVar1 + 0x1a) != param_1))
        {
          (**(code **)(*piVar1 + 0x60))(&local_34);
          BVar2 = IntersectRect(&tStack_14,&RStack_24,&local_34);
          if (BVar2 == 0) goto LAB_00401c13;
        }
        FUN_00401a80(unaff_EBX,param_1,(int)piVar1);
      }
LAB_00401c13:
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00438868);
  }
  return;
}

