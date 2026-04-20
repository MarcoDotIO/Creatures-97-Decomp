/*
 * Program: Science_Kit.exe
 * Function: FUN_00403510
 * Entry: 00403510
 * Namespace: Global
 * Prototype: undefined FUN_00403510(void * this, int param_1)
 */


void __thiscall FUN_00403510(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  Ordinal_2081();
  iVar1 = FUN_00408190((int)this);
  if (iVar1 == 0) {
    if ((param_1 == 1) && (*(int *)((int)this + 0xa088) == 0)) {
      FUN_004081a0(this,1);
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0xe4))();
      (**(code **)(iVar1 + 0xd4))();
      *(undefined4 *)((int)this + 0xa088) = 1;
    }
    if ((*(int *)((int)this + 0xa084) == 1) && (param_1 != 1)) {
      BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
      if (BVar2 == 0) {
        FUN_004081a0(this,0);
        iVar1 = *(int *)this;
        (**(code **)(iVar1 + 0xe4))();
        (**(code **)(iVar1 + 0xd0))();
        *(undefined4 *)((int)this + 0xa088) = 0;
      }
    }
  }
  return;
}

