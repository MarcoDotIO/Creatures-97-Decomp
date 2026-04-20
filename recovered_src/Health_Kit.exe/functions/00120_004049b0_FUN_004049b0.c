/*
 * Program: Health_Kit.exe
 * Function: FUN_004049b0
 * Entry: 004049b0
 * Namespace: Global
 * Prototype: undefined FUN_004049b0(void * this, int param_1)
 */


void __thiscall FUN_004049b0(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  Ordinal_2081();
  iVar1 = FUN_00407f90((int)this);
  if (iVar1 == 0) {
    if ((param_1 == 1) && (*(int *)((int)this + 0x42d8) == 0)) {
      FUN_00407fa0(this,1);
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0xe4))();
      (**(code **)(iVar1 + 0xd4))();
      *(undefined4 *)((int)this + 0x42d8) = 1;
    }
    if ((*(int *)((int)this + 0x42d4) == 1) && (param_1 != 1)) {
      BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
      if (BVar2 == 0) {
        FUN_00407fa0(this,0);
        iVar1 = *(int *)this;
        (**(code **)(iVar1 + 0xe4))();
        (**(code **)(iVar1 + 0xd0))();
        *(undefined4 *)((int)this + 0x42d8) = 0;
      }
    }
  }
  return;
}

