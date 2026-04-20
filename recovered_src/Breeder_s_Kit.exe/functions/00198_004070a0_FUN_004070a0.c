/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004070a0
 * Entry: 004070a0
 * Namespace: Global
 * Prototype: undefined FUN_004070a0(void * this, int param_1)
 */


void __thiscall FUN_004070a0(void *this,int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if ((this == (void *)0x0) || (*(HWND *)((int)this + 0x20) == (HWND)0x0)) {
    FUN_00407030((int)this);
  }
  else {
    if ((*(int *)((int)this + 0x2180) == 0) || (*(int *)((int)this + 0x2190) != param_1)) {
      Ordinal_2081();
      return;
    }
    if (*(int *)((int)this + 0x2198) == 0) {
      BVar1 = IsWindow(*(HWND *)((int)this + 0x20));
      if (BVar1 != 0) {
        iVar2 = FUN_004025d0(*(int **)((int)this + 0x8c));
        if (iVar2 != 0) {
          FUN_00405d70(this);
        }
        FUN_00406780(this);
        return;
      }
    }
  }
  return;
}

