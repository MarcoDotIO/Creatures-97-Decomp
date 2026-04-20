/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00404bf0
 * Entry: 00404bf0
 * Namespace: Global
 * Prototype: bool FUN_00404bf0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)
 */


bool __thiscall FUN_00404bf0(void *this,int param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  HKEY hKey;
  BYTE *pBVar4;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 0x18);
  }
  else {
    hKey = *(HKEY *)((int)this + 0x14);
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

