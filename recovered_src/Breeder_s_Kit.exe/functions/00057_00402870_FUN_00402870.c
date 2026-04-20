/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402870
 * Entry: 00402870
 * Namespace: Global
 * Prototype: undefined FUN_00402870(void * this, int param_1)
 */


void __thiscall FUN_00402870(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  Ordinal_2081();
  iVar1 = FUN_00403d60((int)this);
  if (iVar1 == 0) {
    if ((param_1 == 1) && (*(int *)((int)this + 0x358c) == 0)) {
      FUN_00403d70(this,1);
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0xe4))();
      (**(code **)(iVar1 + 0xd4))();
      *(undefined4 *)((int)this + 0x358c) = 1;
    }
    if ((*(int *)((int)this + 0x3588) == 1) && (param_1 != 1)) {
      BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
      if (BVar2 == 0) {
        FUN_00403d70(this,0);
        iVar1 = *(int *)this;
        (**(code **)(iVar1 + 0xe4))();
        (**(code **)(iVar1 + 0xd0))();
        *(undefined4 *)((int)this + 0x358c) = 0;
      }
    }
  }
  return;
}

