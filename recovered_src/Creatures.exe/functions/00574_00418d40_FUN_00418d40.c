/*
 * Program: Creatures.exe
 * Function: FUN_00418d40
 * Entry: 00418d40
 * Namespace: Global
 * Prototype: undefined FUN_00418d40(void * this, int param_1)
 */


void __thiscall FUN_00418d40(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  uint local_14;
  uint local_10 [4];
  
  iVar2 = *(int *)((int)this + 0x4c);
  local_10[0] = (uint)*(byte *)((int)this + 0x22f);
  local_10[1] = (uint)*(byte *)((int)this + 0x230);
  local_10[2] = local_10[0] + 0x3c;
  local_10[3] = local_10[1] + 0xc;
  FUN_0040cd20((void *)(*(int *)(*(int *)(iVar2 + 4) + 4) + (uint)*(byte *)(iVar2 + 8) * 0x1d),
               local_10[0],local_10[1],local_10[2],local_10[3],*(undefined1 *)((int)this + 0x22c));
  if (param_1 != 0) {
    uVar3 = 0xffffffff;
    pcVar7 = (char *)(*(int *)((int)this + 0x2f) * 0xb + 0x13c + (int)this);
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    puVar6 = (uint *)(pcVar9 + -uVar3);
    puVar8 = local_10;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar8 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    if (*(char *)((int)this + 0x231) != '\0') {
      uVar3 = 0xffffffff;
      pcVar7 = (char *)&DAT_0043644c;
      do {
        pcVar9 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      puVar6 = local_10;
      do {
        puVar8 = puVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        puVar8 = (uint *)((int)puVar6 + 1);
        uVar4 = *puVar6;
        puVar6 = puVar8;
      } while ((char)uVar4 != '\0');
      pcVar7 = pcVar9 + -uVar3;
      pcVar9 = (char *)((int)puVar8 + -1);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    local_14 = (uint)*(byte *)((int)this + 0x22f);
    FUN_0040cda0((void *)(*(int *)(*(int *)(iVar2 + 4) + 4) + (uint)*(byte *)(iVar2 + 8) * 0x1d),
                 local_14,(uint)*(byte *)((int)this + 0x230),(char *)local_10,
                 *(undefined1 *)((int)this + 0x22c),*(undefined1 *)((int)this + 0x22d),
                 *(undefined1 *)((int)this + 0x22e));
  }
  FUN_00417840((int)this);
  return;
}

