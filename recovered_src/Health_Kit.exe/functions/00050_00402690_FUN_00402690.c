/*
 * Program: Health_Kit.exe
 * Function: FUN_00402690
 * Entry: 00402690
 * Namespace: Global
 * Prototype: undefined FUN_00402690(void * this, undefined1 param_1, int * param_2)
 */


void __thiscall FUN_00402690(void *this,undefined1 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = param_2[2] - *param_2;
  iVar4 = param_2[3] - param_2[1];
  puVar2 = (undefined4 *)FUN_00402620(this,*param_2,param_2[1] + iVar4 + -1);
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    puVar6 = puVar2;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = param_1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar2 = (undefined4 *)((int)puVar2 + (iVar1 + 3U & 0xfffffffc));
  }
  return;
}

