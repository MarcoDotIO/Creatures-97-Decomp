/*
 * Program: Creatures.exe
 * Function: FUN_0042bbb0
 * Entry: 0042bbb0
 * Namespace: Global
 * Prototype: undefined FUN_0042bbb0(int param_1)
 */


void __fastcall FUN_0042bbb0(int param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xc28)) {
    this = (void *)(param_1 + 8);
    do {
      piVar2 = (int *)((int)this + 0x23);
      iVar3 = 0;
      do {
        iVar1 = *piVar2;
        piVar2 = (int *)((int)piVar2 + 0x3a);
        iVar4 = iVar3 + 1;
        FUN_0042bc20(this,iVar3,param_1 + iVar1 * 0xc2 + 8);
        iVar3 = iVar4;
      } while (iVar4 < 2);
      this = (void *)((int)this + 0xc2);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc28));
  }
  return;
}

