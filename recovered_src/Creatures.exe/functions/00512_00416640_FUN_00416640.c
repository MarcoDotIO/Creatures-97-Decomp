/*
 * Program: Creatures.exe
 * Function: FUN_00416640
 * Entry: 00416640
 * Namespace: Global
 * Prototype: undefined FUN_00416640(void * this, int param_1, undefined1 param_2)
 */


void __thiscall FUN_00416640(void *this,int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined *)((int)this + iVar1 + 0x50) = (&DAT_00436438)[iVar1 + param_1 * 3];
    iVar1 = iVar2;
  } while (iVar2 < 3);
  *(undefined1 *)((int)this + 0x53) = param_2;
  return;
}

