/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406e60
 * Entry: 00406e60
 * Namespace: Global
 * Prototype: bool FUN_00406e60(void * this, int param_1, LPCSTR param_2)
 */


bool __thiscall FUN_00406e60(void *this,int param_1,LPCSTR param_2)

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
  LVar1 = RegSetValueExA(hKey,param_2,0,4,&stack0x0000000c,4);
  return LVar1 == 0;
}

