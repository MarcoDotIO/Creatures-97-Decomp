/*
 * Program: Score_Kit.exe
 * Function: FUN_00406370
 * Entry: 00406370
 * Namespace: Global
 * Prototype: undefined FUN_00406370(void * this, undefined1 param_1)
 */


void __thiscall FUN_00406370(void *this,undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 8);
  for (uVar1 = (*(int *)(*(int *)((int)this + 4) + 4) + 3U & 0xfffffffc) *
               *(int *)(*(int *)((int)this + 4) + 8) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = param_1;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}

