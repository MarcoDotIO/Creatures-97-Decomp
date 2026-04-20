/*
 * Program: Creatures.exe
 * Function: FUN_0042c210
 * Entry: 0042c210
 * Namespace: Global
 * Prototype: undefined FUN_0042c210(void * this, int param_1, int param_2, int param_3, char * param_4)
 */


void __thiscall FUN_0042c210(void *this,int param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  iVar3 = param_2 * 0x10 + *(int *)((int)this + param_1 * 0xc2 + 0x9f);
  uVar2 = (uint)*(byte *)(param_3 + 0xc + iVar3);
  iVar1 = *(int *)(iVar3 + 4 + param_3 * 4);
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar5 = iVar5 + (uint)*(byte *)(iVar1 + 6);
    iVar7 = iVar7 + (uint)*(byte *)(iVar1 + 7);
    iVar8 = iVar8 + (uint)*(byte *)(iVar1 + 8);
    iVar6 = iVar6 + (uint)*(byte *)(iVar1 + 9);
    iVar1 = iVar1 + 10;
  }
  sprintf(param_4,s__d__d__d__d__d__d__d__00437070,(uint)*(byte *)(iVar3 + 2),
          (uint)*(byte *)(iVar3 + 3),uVar2,iVar5,iVar7,iVar8,iVar6);
  return;
}

