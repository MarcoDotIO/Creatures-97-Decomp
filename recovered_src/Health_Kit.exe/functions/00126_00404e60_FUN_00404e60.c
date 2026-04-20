/*
 * Program: Health_Kit.exe
 * Function: FUN_00404e60
 * Entry: 00404e60
 * Namespace: Global
 * Prototype: bool FUN_00404e60(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)
 */


bool __thiscall FUN_00404e60(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HKEY hKey;
  DWORD local_8;
  DWORD local_4;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  local_8 = param_4;
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 0x18);
  }
  else {
    hKey = *(HKEY *)((int)this + 0x14);
  }
  LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,&local_4,param_3,&local_8);
  return LVar1 == 0;
}

