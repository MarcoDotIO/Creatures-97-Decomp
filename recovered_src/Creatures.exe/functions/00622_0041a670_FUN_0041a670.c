/*
 * Program: Creatures.exe
 * Function: FUN_0041a670
 * Entry: 0041a670
 * Namespace: Global
 * Prototype: char * FUN_0041a670(void * this, int param_1)
 */


char * __thiscall FUN_0041a670(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 1);
  cVar1 = *(char *)(param_1 + 1);
  while (cVar1 != ']') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    FUN_0040cb50(*(int *)(*(int *)((int)this + 4) + 4) +
                 ((*(byte *)((int)this + 9) - 0x30) + (int)cVar1) * 0x1d);
    cVar1 = *pcVar2;
  }
  return pcVar2 + 2;
}

