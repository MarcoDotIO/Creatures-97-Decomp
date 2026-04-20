/*
 * Program: Creatures.exe
 * Function: FUN_0041a500
 * Entry: 0041a500
 * Namespace: Global
 * Prototype: char * FUN_0041a500(void * this, int param_1)
 */


char * __thiscall FUN_0041a500(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x16) == 0) {
    uVar2 = Ordinal_729(0x20);
    *(undefined4 *)((int)this + 0x16) = uVar2;
  }
  *(undefined4 *)((int)this + 0x1a) = *(undefined4 *)((int)this + 0x16);
  pcVar3 = (char *)(param_1 + 1);
  cVar1 = *(char *)(param_1 + 1);
  while (cVar1 != ']') {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    **(char **)((int)this + 0x1a) = cVar1;
    *(int *)((int)this + 0x1a) = *(int *)((int)this + 0x1a) + 1;
    cVar1 = *pcVar3;
  }
  **(undefined1 **)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1a) = *(undefined4 *)((int)this + 0x16);
  return pcVar3 + 2;
}

