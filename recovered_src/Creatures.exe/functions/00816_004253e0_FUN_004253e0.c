/*
 * Program: Creatures.exe
 * Function: FUN_004253e0
 * Entry: 004253e0
 * Namespace: Global
 * Prototype: undefined FUN_004253e0(void * this, undefined1 * param_1)
 */


void __thiscall FUN_004253e0(void *this,undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)((int)this + 0x10) + 1);
  *(char **)((int)this + 0x10) = pcVar2;
  cVar1 = *pcVar2;
  while (cVar1 != ']') {
    *param_1 = **(undefined1 **)((int)this + 0x10);
    pcVar2 = (char *)(*(int *)((int)this + 0x10) + 1);
    *(char **)((int)this + 0x10) = pcVar2;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  *param_1 = 0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 2;
  return;
}

