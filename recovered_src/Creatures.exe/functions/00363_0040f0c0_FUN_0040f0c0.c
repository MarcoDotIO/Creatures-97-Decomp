/*
 * Program: Creatures.exe
 * Function: FUN_0040f0c0
 * Entry: 0040f0c0
 * Namespace: Global
 * Prototype: uint FUN_0040f0c0(void * this, int param_1)
 */


uint __thiscall FUN_0040f0c0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte local_10 [16];
  
  if (*(int *)((int)this + 0x7e6) != 0) {
    if (*(int *)((int)this + 0x7ee) <= *(int *)((int)this + 0x76)) {
      if (*(void **)(*(int *)((int)this + 0x7e6) + 0x1a) == this) {
        return 1;
      }
      iVar2 = (*(int *)((int)this + 0x76) - *(int *)((int)this + 0x7ee)) / 0x12;
      iVar3 = (*(int *)((int)this + 0x7ea) - *(int *)((int)this + 0x72)) / 0x12;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (2 < iVar3) {
        iVar3 = 2;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (3 < iVar2) {
        iVar2 = 3;
      }
      *(undefined1 **)((int)this + 0xbe) = (undefined1 *)((int)this + 0x9e);
      *(undefined1 *)((int)this + 0x9e) = 0;
      pbVar6 = (byte *)((iVar2 + iVar3 * 4) * 0x10 + 0x116 + (int)this);
      if (param_1 == 0) {
        iVar2 = FUN_0040ee80(this,pbVar6);
        return (uint)(iVar2 != 0);
      }
      uVar4 = 0xffffffff;
      do {
        pbVar7 = pbVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar7;
      } while (bVar1 != 0);
      uVar4 = ~uVar4;
      pbVar6 = pbVar7 + -uVar4;
      pbVar7 = local_10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar7 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      local_10[1] = 0x34;
      iVar2 = FUN_0040ee80(this,local_10);
      return (uint)(iVar2 != 0);
    }
  }
  return 0xffffffff;
}

