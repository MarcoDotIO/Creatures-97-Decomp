/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407c70
 * Entry: 00407c70
 * Namespace: Global
 * Prototype: undefined4 FUN_00407c70(void * this, int param_1)
 */


undefined4 __thiscall FUN_00407c70(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_c;
  byte local_4 [4];
  
  if (*(int *)((int)this + 0x2b0) < param_1) {
    return 2;
  }
  bVar2 = false;
  iVar3 = *(int *)((int)this + 0x2b0) - *(int *)((int)this + 0x2b4);
  while (iVar3 < param_1) {
    if (bVar2) {
      return 2;
    }
    iVar3 = 0x7fffffff;
    iVar4 = 0;
    local_c = -1;
    if (0 < *(int *)((int)this + 0x2c4)) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x2c0) + iVar4 * 4);
        if (((*(int *)(iVar1 + 8) < iVar3) &&
            ((**(code **)(**(int **)(iVar1 + 0x14) + 0x24))(*(int **)(iVar1 + 0x14),local_4),
            (local_4[0] & 1) == 0)) && (*(int *)(iVar1 + 0x10) == 0)) {
          iVar3 = *(int *)(iVar1 + 8);
          local_c = iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0x2c4));
    }
    if (local_c == -1) {
      bVar2 = true;
    }
    else {
      FUN_00407c20(this,local_c);
    }
    iVar3 = *(int *)((int)this + 0x2b0) - *(int *)((int)this + 0x2b4);
  }
  if (bVar2) {
    return 2;
  }
  (**(code **)(**(int **)((int)this + 4) + 0x1c))(*(int **)((int)this + 4));
  return 0;
}

