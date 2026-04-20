/*
 * Program: Creatures.exe
 * Function: FUN_004018d0
 * Entry: 004018d0
 * Namespace: Global
 * Prototype: undefined FUN_004018d0(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */


void __cdecl
FUN_004018d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < DAT_00438868) {
    do {
      this = *(int **)(DAT_00438864 + iVar3);
      if ((param_1 != this) && (iVar1 = FUN_0041fea0(this,param_1), iVar1 != 0)) {
        FUN_004016c0(param_1,this,param_2,param_3,param_4,param_5);
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00438868);
  }
  return;
}

