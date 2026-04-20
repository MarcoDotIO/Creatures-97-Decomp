/*
 * Program: Score_Kit.exe
 * Function: FUN_00406200
 * Entry: 00406200
 * Namespace: Global
 * Prototype: bool FUN_00406200(void * this, int param_1, int param_2, undefined4 * param_3)
 */


bool __thiscall FUN_00406200(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 + 3U & 0xfffffffc;
  if (*(int *)((int)this + 4) != 0) {
    Ordinal_731(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = (undefined4 *)Ordinal_729(0x428);
  *(undefined4 **)((int)this + 4) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return false;
  }
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  **(undefined4 **)((int)this + 4) = 0x28;
  *(uint *)(*(int *)((int)this + 4) + 4) = uVar3;
  *(int *)(*(int *)((int)this + 4) + 8) = param_2;
  *(undefined2 *)(*(int *)((int)this + 4) + 0xc) = 1;
  *(undefined2 *)(*(int *)((int)this + 4) + 0xe) = 8;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = 0;
  *(uint *)(*(int *)((int)this + 4) + 0x14) = param_2 * uVar3;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x18) = 0xece;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1c) = 0xec4;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x20) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x24) = 0;
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + 0x28);
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  if (*(int *)((int)this + 8) != 0) {
    Ordinal_731(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar2 = Ordinal_729(*(undefined4 *)(*(int *)((int)this + 4) + 0x14));
  *(int *)((int)this + 8) = iVar2;
  return (bool)('\x01' - (iVar2 == 0));
}

