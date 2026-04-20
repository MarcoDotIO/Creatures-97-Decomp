/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403440
 * Entry: 00403440
 * Namespace: Global
 * Prototype: int FUN_00403440(void * this, byte * param_1)
 */


int __thiscall FUN_00403440(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xb3c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0xb38) + iVar3);
      pbVar5 = *(byte **)(iVar2 + 8);
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00403480:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00403485;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00403480;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00403485:
      if (iVar6 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xb3c));
  }
  return 0;
}

