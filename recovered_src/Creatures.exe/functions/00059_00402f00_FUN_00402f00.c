/*
 * Program: Creatures.exe
 * Function: FUN_00402f00
 * Entry: 00402f00
 * Namespace: Global
 * Prototype: undefined FUN_00402f00(void * this, int param_1, int param_2, int param_3, int param_4)
 */


void __thiscall FUN_00402f00(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_644;
  int local_640 [200];
  int aiStack_320 [200];
  
  iVar1 = param_2 / 0x96;
  if (iVar1 <= (param_4 + -1) / 0x96) {
    iVar5 = iVar1 * 0x96;
    do {
      iVar3 = param_1 / 0x90;
      if (param_1 / 0x90 <= (param_3 + -1) / 0x90) {
        do {
          iVar4 = iVar3 + 1;
          FUN_0040cb70((void *)((iVar1 + (iVar3 % 0x3a) * 8) * 0x1d +
                               *(int *)(*(int *)(DAT_00438594 + 0xbf4) + 4)),
                       *(int *)((int)this + 0x46c),(iVar3 % 0x3a) * 0x90,iVar5,&param_1,
                       (int *)&stack0x00000014,1);
          iVar3 = iVar4;
        } while (iVar4 <= (param_3 + -1) / 0x90);
      }
      iVar5 = iVar5 + 0x96;
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (param_4 + -1) / 0x96);
  }
  iVar5 = 0;
  local_644 = 0;
  iVar1 = local_640[0];
  if (0 < DAT_00437ff0) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = FUN_0041a370(*(void **)(DAT_00437fec + iVar4),&param_1);
      iVar6 = iVar3;
      if (iVar1 != 0) {
        iVar1 = *(int *)(DAT_00437fec + iVar4);
        iVar5 = iVar5 + 1;
        *(int *)((int)local_640 + iVar3) = local_644;
        iVar6 = iVar3 + 4;
        *(undefined4 *)((int)aiStack_320 + iVar3) = *(undefined4 *)(iVar1 + 10);
      }
      iVar4 = iVar4 + 4;
      local_644 = local_644 + 1;
      iVar1 = local_640[0];
      iVar3 = iVar6;
    } while (local_644 < DAT_00437ff0);
  }
  while( true ) {
    iVar4 = 0;
    iVar3 = 0x7fff;
    if (0 < iVar5) {
      do {
        if (aiStack_320[iVar4] < iVar3) {
          iVar3 = aiStack_320[iVar4];
          iVar1 = iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    if (iVar3 == 0x7fff) break;
    FUN_0041a400(*(void **)(DAT_00437fec + local_640[iVar1] * 4),*(int *)((int)this + 0x46c),
                 &param_1,(int *)&stack0x00000014);
    aiStack_320[iVar1] = 0x7fff;
  }
  if (*(int *)((int)this + 0x490) != 0) {
    puVar2 = *(undefined4 **)((int)this + 0x494);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = FUN_0040c580(*(int *)((int)this + 0x490),0,1,0);
      *(undefined4 **)((int)this + 0x494) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x490) = 0;
        return;
      }
    }
    FUN_0040cb70((void *)puVar2[1],*(int *)((int)this + 0x46c),*(int *)((int)this + 4),
                 *(int *)((int)this + 8),&param_1,(int *)&stack0x00000014,0);
  }
  return;
}

