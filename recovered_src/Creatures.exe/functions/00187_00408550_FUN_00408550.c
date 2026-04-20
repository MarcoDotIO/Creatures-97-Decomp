/*
 * Program: Creatures.exe
 * Function: FUN_00408550
 * Entry: 00408550
 * Namespace: Global
 * Prototype: bool FUN_00408550(void * this, int param_1, LPCSTR param_2, BYTE * param_3)
 */


bool __thiscall FUN_00408550(void *this,int param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  HKEY hKey;
  BYTE *pBVar4;
  
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 4);
  }
  else {
    hKey = *(HKEY *)this;
  }
  uVar3 = 0xffffffff;
  pBVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    BVar1 = *pBVar4;
    pBVar4 = pBVar4 + 1;
  } while (BVar1 != '\0');
  LVar2 = RegSetValueExA(hKey,param_2,0,1,param_3,~uVar3);
  return LVar2 == 0;
}

