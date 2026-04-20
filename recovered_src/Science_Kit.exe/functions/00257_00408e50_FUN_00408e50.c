/*
 * Program: Science_Kit.exe
 * Function: FUN_00408e50
 * Entry: 00408e50
 * Namespace: Global
 * Prototype: undefined FUN_00408e50(void * this, int param_1, int param_2, undefined1 param_3)
 */


void __thiscall FUN_00408e50(void *this,int param_1,int param_2,undefined1 param_3)

{
  void *this_00;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  this_00 = *(void **)((int)this + 0x7118);
  iVar3 = param_1 * 0x30 + param_2;
  puVar1 = (undefined1 *)
           FUN_0040f510(this_00,*(int *)((int)this + iVar3 * 8 + 0xb0),
                        *(int *)((int)this + iVar3 * 8 + 0xb4));
  iVar3 = *(int *)(*(int *)((int)this_00 + 4) + 4);
  *puVar1 = param_3;
  uVar2 = iVar3 + 3U & 0xfffffffc;
  puVar1[-1] = param_3;
  puVar1[1] = param_3;
  puVar1[-uVar2] = param_3;
  puVar1[uVar2] = param_3;
  return;
}

