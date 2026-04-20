/*
 * Program: Creatures.exe
 * Function: FUN_0040cd20
 * Entry: 0040cd20
 * Namespace: Global
 * Prototype: undefined FUN_0040cd20(void * this, int param_1, int param_2, int param_3, int param_4, undefined1 param_5)
 */


void __thiscall
FUN_0040cd20(void *this,int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0040cb50((int)this);
  uVar3 = param_2 * *(int *)((int)this + 0xd) + iVar1;
  if (uVar3 < (uint)(*(int *)((int)this + 0xd) * param_4 + iVar1)) {
    do {
      if (param_1 < param_3) {
        puVar4 = (undefined4 *)(uVar3 + param_1);
        for (uVar2 = (uint)(param_3 - param_1) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = param_3 - param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = param_5;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      uVar3 = uVar3 + *(int *)((int)this + 0xd);
    } while (uVar3 < (uint)(*(int *)((int)this + 0xd) * param_4 + iVar1));
  }
  return;
}

