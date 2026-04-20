/*
 * Program: Creatures.exe
 * Function: FUN_00403f40
 * Entry: 00403f40
 * Namespace: Global
 * Prototype: undefined FUN_00403f40(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_00403f40(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint local_4;
  
  iVar1 = -1;
  iVar3 = 0;
  pbVar2 = (byte *)((int)this + 1);
  do {
    uVar4 = (param_2 - (uint)*pbVar2) * (param_2 - (uint)*pbVar2) +
            (param_3 - (uint)pbVar2[1]) * (param_3 - (uint)pbVar2[1]) +
            (param_1 - (uint)pbVar2[-1]) * (param_1 - (uint)pbVar2[-1]);
    if ((iVar1 == -1) || (uVar4 < local_4)) {
      iVar1 = iVar3;
      local_4 = uVar4;
    }
    pbVar2 = pbVar2 + 3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xec);
  return;
}

