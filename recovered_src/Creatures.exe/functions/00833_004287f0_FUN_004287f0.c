/*
 * Program: Creatures.exe
 * Function: FUN_004287f0
 * Entry: 004287f0
 * Namespace: Global
 * Prototype: undefined4 FUN_004287f0(void * this, int * param_1, undefined4 * param_2)
 */


undefined4 __thiscall FUN_004287f0(void *this,int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  *param_1 = 0;
  *param_2 = 0;
  do {
    iVar2 = *(int *)((int)this + 0x248);
    iVar3 = *(int *)((int)this + 0x24c);
    if (*(int *)(iVar2 + -8) + -1 <= iVar3) {
      return 0;
    }
    local_4 = 0;
    FUN_004285e0(this,*(char *)(iVar3 + -1 + iVar2),*(char *)(iVar3 + iVar2),
                 *(char *)(iVar3 + 1 + iVar2),param_1,&local_4);
    *param_2 = *(undefined4 *)((int)this + 0x250);
    iVar2 = *(int *)((int)this + 0x24c);
    iVar4 = iVar2 + 1;
    iVar3 = *(int *)((int)this + 0x248);
    *(int *)((int)this + 0x250) = *(int *)((int)this + 0x250) + local_4;
    *(int *)((int)this + 0x24c) = iVar4;
    if (iVar4 < *(int *)(iVar3 + -8) + -1) {
      cVar1 = *(char *)(iVar2 + 2 + iVar3);
      if (((('`' < *(char *)(iVar2 + iVar3)) && (*(char *)(iVar2 + iVar3) < '{')) &&
          ('`' < *(char *)(iVar4 + iVar3))) &&
         (((*(char *)(iVar4 + iVar3) < '{' && ('`' < cVar1)) && (cVar1 < '{')))) {
        *(int *)((int)this + 0x24c) = iVar2 + 2;
      }
    }
  } while (*param_1 == 0);
  return 1;
}

