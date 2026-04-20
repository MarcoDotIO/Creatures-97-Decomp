/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040bd30
 * Entry: 0040bd30
 * Namespace: Global
 * Prototype: undefined FUN_0040bd30(void * this, int param_1)
 */


void __thiscall FUN_0040bd30(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  Ordinal_2081();
  iVar1 = FUN_004022d0((int)this);
  if (iVar1 == 0) {
    if ((param_1 == 1) && (*(int *)((int)this + 0x7e4) == 0)) {
      FUN_004022e0(this,1);
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0xe4))();
      (**(code **)(iVar1 + 0xd4))();
      *(undefined4 *)((int)this + 0x7e4) = 1;
    }
    if ((*(int *)((int)this + 0x7e8) == 1) && (param_1 != 1)) {
      BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
      if (BVar2 == 0) {
        FUN_004022e0(this,0);
        iVar1 = *(int *)this;
        (**(code **)(iVar1 + 0xe4))();
        (**(code **)(iVar1 + 0xd0))();
        *(undefined4 *)((int)this + 0x7e4) = 0;
      }
    }
  }
  return;
}

