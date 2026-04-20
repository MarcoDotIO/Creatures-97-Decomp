/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402000
 * Entry: 00402000
 * Namespace: Global
 * Prototype: int FUN_00402000(void * this, int param_1, int param_2)
 */


int __thiscall FUN_00402000(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  if (param_1 < iVar1) {
    iVar2 = *(int *)(*(int *)((int)this + 4) + 8);
    if (param_2 < iVar2) {
      return (iVar1 + 3U & 0xfffffffc) * ((iVar2 - param_2) + -1) + *(int *)((int)this + 8) +
             param_1;
    }
  }
  return 0;
}

