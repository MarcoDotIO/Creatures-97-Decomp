/*
 * Program: Creatures.exe
 * Function: FUN_0040d230
 * Entry: 0040d230
 * Namespace: Global
 * Prototype: undefined FUN_0040d230(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, uint param_9, int param_10)
 */


void __cdecl
FUN_0040d230(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,uint param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_1 + param_4 * param_3 + param_2);
  puVar5 = (undefined4 *)(param_5 + param_8 * param_7 + param_6);
  iVar1 = param_4 - param_9;
  iVar4 = param_8 - param_9;
  if ((param_9 & 3) == 0) {
    uVar2 = param_9 >> 2;
    do {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar3 + iVar1);
      puVar5 = (undefined4 *)((int)puVar5 + iVar4);
      param_10 = param_10 + -1;
      uVar2 = param_9 >> 2;
    } while (param_10 != 0);
  }
  else {
    uVar2 = param_9;
    if ((param_9 & 3) == 0) {
      uVar2 = param_9 >> 1;
      do {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 2);
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        }
        puVar3 = (undefined4 *)((int)puVar3 + iVar1);
        puVar5 = (undefined4 *)((int)puVar5 + iVar4);
        param_10 = param_10 + -1;
        uVar2 = param_9 >> 1;
      } while (param_10 != 0);
    }
    else {
      do {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar3 = (undefined4 *)((int)puVar3 + iVar1);
        puVar5 = (undefined4 *)((int)puVar5 + iVar4);
        param_10 = param_10 + -1;
        uVar2 = param_9;
      } while (param_10 != 0);
    }
  }
  return;
}

