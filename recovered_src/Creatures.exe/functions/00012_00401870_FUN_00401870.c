/*
 * Program: Creatures.exe
 * Function: FUN_00401870
 * Entry: 00401870
 * Namespace: Global
 * Prototype: undefined FUN_00401870(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 */


void __cdecl
FUN_00401870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < DAT_00438868) {
    do {
      this = *(int **)(DAT_00438864 + iVar2);
      if ((param_1 != this) && (iVar1 = FUN_0041fe30(this,param_1), iVar1 != 0)) {
        FUN_004016c0(param_1,this,param_2,param_3,param_4,param_5);
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00438868);
  }
  return;
}

