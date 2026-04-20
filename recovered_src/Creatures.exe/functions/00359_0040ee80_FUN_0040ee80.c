/*
 * Program: Creatures.exe
 * Function: FUN_0040ee80
 * Entry: 0040ee80
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ee80(void * this, byte * param_1)
 */


undefined4 __thiscall FUN_0040ee80(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar2 = (byte *)((int)this + 0x8e);
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0040eeb1:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0040eeb6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0040eeb1;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0040eeb6:
  if (iVar3 == 0) {
    uVar4 = FUN_0040eef0((int)this);
    return uVar4;
  }
  uVar5 = 0xffffffff;
  do {
    pbVar2 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pbVar2 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar2;
  } while (bVar1 != 0);
  uVar5 = ~uVar5;
  pbVar2 = pbVar2 + -uVar5;
  pbVar7 = (byte *)((int)this + 0x8e);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar7 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar7 = pbVar7 + 1;
  }
  return 0;
}

