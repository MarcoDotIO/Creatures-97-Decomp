/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406ba0
 * Entry: 00406ba0
 * Namespace: Global
 * Prototype: bool FUN_00406ba0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_00406ba0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_00406a90(this,param_1,param_2,param_3,4);
  return bVar1;
}

