/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403ff0
 * Entry: 00403ff0
 * Namespace: Global
 * Prototype: undefined4 FUN_00403ff0(void * this, undefined1 * param_1)
 */


undefined4 __thiscall FUN_00403ff0(void *this,undefined1 *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  switch(*param_1) {
  case 6:
    if (*(int *)((int)this + 0x21c) != 0) {
      return 0;
    }
    (**(code **)(*(int *)this + 0xd8))();
    FUN_00403ae0(this);
  case 7:
    FUN_00403b70(this);
    (**(code **)(*(int *)this + 0xd0))();
    return 1;
  case 8:
    PostMessageA(*(HWND *)((int)this + 0x20),0x10,0,0);
    return 1;
  case 9:
    break;
  default:
    return 1;
  }
  if (*(int *)((int)this + 0x234) != 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x208) == 0) {
    BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
    if (BVar2 == 0) {
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0xe4))();
      (**(code **)(iVar1 + 0xec))();
    }
    (**(code **)(*(int *)this + 0xd4))();
    *(undefined4 *)((int)this + 0x208) = 1;
    return 1;
  }
  BVar2 = IsIconic(*(HWND *)((int)this + 0x20));
  if (BVar2 == 0) {
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0xe4))();
    (**(code **)(iVar1 + 0xe8))();
    (**(code **)(iVar1 + 0xd0))();
  }
  *(undefined4 *)((int)this + 0x208) = 0;
  return 1;
}

