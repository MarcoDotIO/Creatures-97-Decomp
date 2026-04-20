/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00409040
 * Entry: 00409040
 * Namespace: Global
 * Prototype: bool FUN_00409040(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_00409040(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_00408fe0(this,param_1,param_2,param_3,4);
  return bVar1;
}

