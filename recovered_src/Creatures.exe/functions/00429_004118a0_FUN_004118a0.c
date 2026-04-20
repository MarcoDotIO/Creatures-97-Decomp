/*
 * Program: Creatures.exe
 * Function: FUN_004118a0
 * Entry: 004118a0
 * Namespace: Global
 * Prototype: undefined FUN_004118a0(void * this, byte * param_1, undefined1 param_2)
 */


void __thiscall FUN_004118a0(void *this,byte *param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0xc0) < 1) {
    return;
  }
  pbVar4 = (byte *)((int)this + 0xc4);
  pbVar6 = param_1;
  pbVar3 = pbVar4;
LAB_004118be:
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 == *pbVar6) {
      if (bVar1 != 0) {
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004118de;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
        if (bVar1 != 0) goto LAB_004118be;
      }
      iVar5 = 0;
    }
    else {
LAB_004118de:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar5 == 0) {
      *(undefined1 *)(iVar2 * 0xae + 0x169 + (int)this) = param_2;
      return;
    }
    pbVar4 = pbVar3 + 0xae;
    iVar2 = iVar2 + 1;
    pbVar6 = param_1;
    pbVar3 = pbVar4;
    if (*(int *)((int)this + 0xc0) <= iVar2) {
      return;
    }
  } while( true );
}

