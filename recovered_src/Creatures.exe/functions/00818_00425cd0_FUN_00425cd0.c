/*
 * Program: Creatures.exe
 * Function: FUN_00425cd0
 * Entry: 00425cd0
 * Namespace: Global
 * Prototype: undefined FUN_00425cd0(void * param_1)
 */


void __fastcall FUN_00425cd0(void *param_1)

{
  void *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_64 [100];
  
  uVar1 = **(uint **)((int)param_1 + 0x10);
  *(int *)((int)param_1 + 0x10) = (int)*(uint **)((int)param_1 + 0x10) + 5;
  if (uVar1 < 0x646c7278) {
    if (uVar1 == 0x646c7277) {
      FUN_004253e0(param_1,local_64);
      (**(code **)(*DAT_00436ea0 + 0x80))(local_64);
      return;
    }
    if (uVar1 == 0x61726d63) {
      FUN_00402630(DAT_00436eb0,1);
      uVar1 = FUN_00424710(param_1);
      uVar2 = FUN_00424710(param_1);
      FUN_00403b70(*(void **)((int)DAT_00436eb0 + 0x60),uVar1,uVar2);
      return;
    }
  }
  else if (uVar1 < 0x646e7268) {
    if (uVar1 == 0x646e7267) {
      uVar1 = FUN_00424710(param_1);
      uVar2 = FUN_00424710(param_1);
      *(uint *)(DAT_00438594 + 0x32c + uVar1 * 4) = uVar2;
      return;
    }
    if (uVar1 == 0x646e6d63) {
      uVar1 = FUN_00424710(param_1);
      SendMessageA(*(HWND *)(DAT_00436ea8 + 0x20),0x111,uVar1,0);
      return;
    }
  }
  else if (uVar1 < 0x736f7078) {
    if (uVar1 == 0x736f7077) {
      uVar1 = FUN_00424710(param_1);
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      iVar5 = uVar1 + uVar3;
      uVar3 = FUN_00424710(param_1);
      iVar6 = uVar2 + uVar3;
      iVar4 = GetSystemMetrics(0);
      if (iVar4 < iVar5) {
        iVar5 = GetSystemMetrics(0);
      }
      iVar4 = GetSystemMetrics(1);
      if (iVar4 < iVar6) {
        iVar6 = GetSystemMetrics(1);
      }
      Ordinal_3786(uVar1,uVar2,iVar5,iVar6,1);
      return;
    }
    if (uVar1 == 0x706f7477) {
      SetForegroundWindow(*(HWND *)(DAT_00436ea8 + 0x20));
      return;
    }
  }
  else {
    if (uVar1 == 0x74696465) {
      uVar1 = FUN_00424710(param_1);
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      uVar7 = FUN_00424710(param_1);
      iVar5 = *(int *)((int)DAT_00436eb0 + 0x60);
      *(uint *)(iVar5 + 0x1c) = uVar1;
      *(uint *)(iVar5 + 0x20) = uVar2;
      *(uint *)(iVar5 + 0x24) = uVar3;
      *(uint *)(iVar5 + 0x28) = uVar7;
      this = *(void **)((int)DAT_00436eb0 + 0x60);
      FUN_00402ab0(this,*(int *)((int)this + 4),*(int *)((int)this + 8),*(int *)((int)this + 0xc),
                   *(int *)((int)this + 0x10));
      return;
    }
    if (uVar1 == 0x74697571) {
      SendMessageA(*(HWND *)(DAT_00436ea8 + 0x20),0x111,0xe141,0);
      return;
    }
    if (uVar1 == 0x74726261) {
      SendMessageA(*(HWND *)(DAT_00436ea8 + 0x20),0x111,0xe141,0);
      return;
    }
  }
  FUN_004265c0(param_1,s__sys___command_00436c78);
  return;
}

