/*
 * Program: Creatures.exe
 * Function: FUN_004011c0
 * Entry: 004011c0
 * Namespace: Global
 * Prototype: int FUN_004011c0(void * this, int param_1)
 */


int __thiscall FUN_004011c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)(iVar1 + 8 + (int)this) = *(undefined1 *)(iVar1 + 8 + param_1);
    iVar1 = iVar2;
  } while (iVar2 < 4);
  return (int)this;
}

