/*
 * Program: Creatures.exe
 * Function: FUN_004095c0
 * Entry: 004095c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004095c0(void * this, int param_1)
 */


undefined4 * __thiscall FUN_004095c0(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_4;
  
  bVar1 = false;
  iVar3 = 0;
  do {
    if (*(int *)((int)this + 0x2c8) <= iVar3) break;
    local_4 = *(undefined4 **)(*(int *)((int)this + 0x2c4) + iVar3 * 4);
    if (local_4[1] == param_1) {
      bVar1 = true;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  } while (!bVar1);
  if (bVar1) {
    local_4[2] = *(undefined4 *)((int)this + 700);
    *(int *)((int)this + 700) = *(int *)((int)this + 700) + 1;
    return local_4;
  }
  iVar3 = FUN_00409520(param_1);
  iVar3 = FUN_00409410(this,iVar3);
  if (iVar3 == 0) {
    puVar2 = FUN_00408a30(this,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      Ordinal_5191(*(undefined4 *)((int)this + 0x2c8),puVar2);
      *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + puVar2[3];
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}

