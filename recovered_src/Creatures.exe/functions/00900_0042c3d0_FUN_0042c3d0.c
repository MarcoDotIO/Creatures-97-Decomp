/*
 * Program: Creatures.exe
 * Function: FUN_0042c3d0
 * Entry: 0042c3d0
 * Namespace: Global
 * Prototype: undefined FUN_0042c3d0(void * this, undefined4 param_1, uint param_2)
 */


void __thiscall FUN_0042c3d0(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte local_21;
  byte local_20 [32];
  
  iVar5 = 0;
  iVar4 = 0;
  pbVar6 = local_20;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  iVar3 = *(int *)((int)this + 0x97);
  *(undefined4 *)((int)this + 0xab) = 0;
  if (0 < *(int *)((int)this + 0x9f)) {
    do {
      iVar1 = (uint)*(byte *)(iVar3 + 3) - (uint)*(byte *)((int)this + 0x14);
      if (iVar1 < 1) {
        *(undefined1 *)(iVar3 + 2) = 0;
      }
      else {
        iVar5 = iVar5 + 1;
        *(char *)(iVar3 + 2) = (char)iVar1;
        *(int *)(*(int *)((int)this + 0xa7) + *(int *)((int)this + 0xab) * 4) = iVar3;
        *(int *)((int)this + 0xab) = *(int *)((int)this + 0xab) + 1;
      }
      local_21 = *(byte *)(iVar3 + 3);
      local_20[0] = *(byte *)((int)this + 0x15);
      if (local_21 != *(byte *)((int)this + 0x16)) {
        local_21 = FUN_00428b80(&local_21,*(byte *)((int)this + 0x15),*(byte *)((int)this + 0x16),
                                param_2);
      }
      *(byte *)(iVar3 + 3) = local_21;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < *(int *)((int)this + 0x9f));
  }
  iVar3 = (iVar5 << 8) / *(int *)((int)this + 0x9f);
  if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)((int)this + 0xbb) = (char)iVar3;
  if ((*(int *)((int)this + 0xab) != 0) && ((*(byte *)((int)this + 0x22) & 1) != 0)) {
    bVar2 = 0;
    iVar3 = *(int *)((int)this + 0x97);
    iVar5 = 0;
    iVar4 = iVar3;
    if (0 < *(int *)((int)this + 0x9f)) {
      do {
        if ((*(char *)(iVar4 + 0xe) == '\0') && (bVar2 < *(byte *)(iVar4 + 2))) {
          iVar3 = iVar4;
          bVar2 = *(byte *)(iVar4 + 2);
        }
        *(undefined1 *)(iVar4 + 2) = 0;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar5 < *(int *)((int)this + 0x9f));
    }
    if (bVar2 != 0) {
      *(byte *)(iVar3 + 2) = bVar2;
    }
  }
  return;
}

