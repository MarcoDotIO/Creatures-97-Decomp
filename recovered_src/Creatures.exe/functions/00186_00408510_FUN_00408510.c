/*
 * Program: Creatures.exe
 * Function: FUN_00408510
 * Entry: 00408510
 * Namespace: Global
 * Prototype: bool FUN_00408510(void * this, int param_1, LPCSTR param_2, BYTE * param_3, DWORD param_4)
 */


bool __thiscall FUN_00408510(void *this,int param_1,LPCSTR param_2,BYTE *param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HKEY hKey;
  
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 4);
  }
  else {
    hKey = *(HKEY *)this;
  }
  LVar1 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
  return LVar1 == 0;
}

