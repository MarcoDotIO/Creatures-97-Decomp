/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040aab0
 * Entry: 0040aab0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040aab0(void * this, int param_1)
 */


undefined4 * __thiscall FUN_0040aab0(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_4;
  
  iVar3 = 0;
  bVar1 = false;
  do {
    if (*(int *)((int)this + 0x2c4) <= iVar3) break;
    local_4 = *(undefined4 **)(*(int *)((int)this + 0x2c0) + iVar3 * 4);
    if (local_4[1] == param_1) {
      bVar1 = true;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  } while (!bVar1);
  if (bVar1) {
    local_4[2] = *(undefined4 *)((int)this + 0x2b8);
    *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + 1;
    return local_4;
  }
  iVar3 = FUN_0040aa10();
  iVar3 = FUN_0040a910(this,iVar3);
  if (iVar3 == 0) {
    puVar2 = FUN_0040a000(this,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      Ordinal_5191(*(undefined4 *)((int)this + 0x2c4),puVar2);
      *(int *)((int)this + 0x2b4) = *(int *)((int)this + 0x2b4) + puVar2[3];
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}

