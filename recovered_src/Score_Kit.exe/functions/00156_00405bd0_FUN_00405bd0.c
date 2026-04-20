/*
 * Program: Score_Kit.exe
 * Function: FUN_00405bd0
 * Entry: 00405bd0
 * Namespace: Global
 * Prototype: bool FUN_00405bd0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)
 */


bool __thiscall FUN_00405bd0(void *this,int param_1,LPCSTR param_2,BYTE *param_3)

{
  LSTATUS LVar1;
  HKEY hKey;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 0x18);
  }
  else {
    hKey = *(HKEY *)((int)this + 0x14);
  }
  LVar1 = RegSetValueExA(hKey,param_2,0,3,param_3,8);
  return LVar1 == 0;
}

