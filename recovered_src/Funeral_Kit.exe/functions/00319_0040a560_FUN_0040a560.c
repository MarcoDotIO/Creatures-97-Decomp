/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040a560
 * Entry: 0040a560
 * Namespace: Global
 * Prototype: undefined FUN_0040a560(void * this, int param_1)
 */


void __thiscall FUN_0040a560(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ordinal_1035();
  iVar2 = 0;
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x20);
  }
  if (*(int *)(param_1 + 0x20) != iVar2) {
    FUN_0040a590((int)this);
  }
  return;
}

