/*
 * Program: Launcher.exe
 * Function: FUN_00401990
 * Entry: 00401990
 * Namespace: Global
 * Prototype: undefined FUN_00401990(void * this, int param_1)
 */


void __thiscall FUN_00401990(void *this,int param_1)

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
    FUN_004019c0((int)this);
  }
  return;
}

