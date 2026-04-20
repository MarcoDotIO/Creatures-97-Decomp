/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00401c20
 * Entry: 00401c20
 * Namespace: Global
 * Prototype: undefined FUN_00401c20(void * this, int param_1)
 */


void __thiscall FUN_00401c20(void *this,int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    Ordinal_5656(*(undefined4 *)((int)this + 4),0x428);
    Ordinal_5656(*(undefined4 *)((int)this + 8),*(undefined4 *)(*(int *)((int)this + 4) + 0x14));
    return;
  }
  if (*(int *)((int)this + 4) != 0) {
    Ordinal_731(*(int *)((int)this + 4));
  }
  iVar1 = Ordinal_729(0x428);
  *(int *)((int)this + 4) = iVar1;
  if (iVar1 != 0) {
    Ordinal_4817(iVar1,0x428);
    if ((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) {
      Ordinal_731(*(int *)((int)this + 8));
    }
    iVar1 = Ordinal_729(*(undefined4 *)(*(int *)((int)this + 4) + 0x14));
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = 1;
      Ordinal_4817(iVar1,*(undefined4 *)(*(int *)((int)this + 4) + 0x14));
    }
  }
  return;
}

