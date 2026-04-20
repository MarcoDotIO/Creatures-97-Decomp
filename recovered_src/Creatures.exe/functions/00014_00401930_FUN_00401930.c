/*
 * Program: Creatures.exe
 * Function: FUN_00401930
 * Entry: 00401930
 * Namespace: Global
 * Prototype: undefined FUN_00401930(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */


void __cdecl FUN_00401930(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_1 != piVar1) {
        if (((*(byte *)((int)param_1 + 9) & 8) == 0) || (*(int **)((int)piVar1 + 0x1a) != param_1))
        {
          (**(code **)(*piVar1 + 0x60))(&stack0xffffffcc);
          BVar2 = IntersectRect(&tStack_14,&RStack_24,(RECT *)&stack0xffffffcc);
          if (BVar2 == 0) goto LAB_004019b2;
        }
        FUN_004016c0(param_1,piVar1,param_1,param_2,param_3,param_4);
      }
LAB_004019b2:
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00438868);
  }
  return;
}

