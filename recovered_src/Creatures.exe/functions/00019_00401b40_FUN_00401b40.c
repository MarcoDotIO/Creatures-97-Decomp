/*
 * Program: Creatures.exe
 * Function: FUN_00401b40
 * Entry: 00401b40
 * Namespace: Global
 * Prototype: undefined FUN_00401b40(void * this, int * param_1)
 */


void __thiscall FUN_00401b40(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < DAT_00438868) {
    do {
      this_00 = *(int **)(DAT_00438864 + iVar2);
      if ((this_00 != param_1) && (iVar1 = FUN_0041fea0(this_00,param_1), iVar1 != 0)) {
        FUN_00401a80(this,param_1,(int)this_00);
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00438868);
  }
  return;
}

