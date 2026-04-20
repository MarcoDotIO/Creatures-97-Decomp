/*
 * Program: Creatures.exe
 * Function: FUN_004085a0
 * Entry: 004085a0
 * Namespace: Global
 * Prototype: bool FUN_004085a0(void * this, int param_1, LPCSTR param_2)
 */


bool __thiscall FUN_004085a0(void *this,int param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  HKEY hKey;
  
  if (param_1 == 0) {
    hKey = *(HKEY *)((int)this + 4);
  }
  else {
    hKey = *(HKEY *)this;
  }
  LVar1 = RegSetValueExA(hKey,param_2,0,4,&stack0x0000000c,4);
  return LVar1 == 0;
}

