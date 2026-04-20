/*
 * Program: Hatchery.exe
 * Function: FUN_00404350
 * Entry: 00404350
 * Namespace: Global
 * Prototype: undefined FUN_00404350(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)
 */


void __thiscall
FUN_00404350(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4,BYTE *param_5)

{
  BYTE BVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    bVar2 = FUN_004042c0(this,param_1,param_2,param_3,param_4);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_00404410(this,param_1,param_2,param_5);
      uVar3 = 0xffffffff;
      do {
        pBVar5 = param_5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pBVar5 = param_5 + 1;
        BVar1 = *param_5;
        param_5 = pBVar5;
      } while (BVar1 != '\0');
      uVar3 = ~uVar3;
      pBVar5 = pBVar5 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)pBVar5;
        pBVar5 = pBVar5 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_3 = *pBVar5;
        pBVar5 = pBVar5 + 1;
        param_3 = param_3 + 1;
      }
    }
  }
  return;
}

