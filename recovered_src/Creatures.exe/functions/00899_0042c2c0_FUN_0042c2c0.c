/*
 * Program: Creatures.exe
 * Function: FUN_0042c2c0
 * Entry: 0042c2c0
 * Namespace: Global
 * Prototype: undefined FUN_0042c2c0(void * this, uint param_1)
 */


void __thiscall FUN_0042c2c0(void *this,uint param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar6 = 5;
  pvVar4 = (void *)((int)this + 0xca);
  do {
    FUN_0042c3d0(pvVar4,this,param_1);
    iVar6 = iVar6 + -1;
    pvVar4 = (void *)((int)pvVar4 + 0xc2);
  } while (iVar6 != 0);
  iVar6 = 0;
  local_4 = 1;
  if (1 < *(int *)((int)this + 0xc28)) {
    piVar3 = (int *)((int)this + 0x169);
    do {
      if ((piVar3[4] != 0) && (local_8 = 0, 0 < *piVar3)) {
        iVar2 = 0;
        iVar5 = iVar6 << 4;
        do {
          bVar1 = *(byte *)(piVar3[-2] + 2 + iVar2);
          if (*(byte *)(*(int *)((int)this + 0x9f) + 3 + iVar5) < bVar1) {
            *(byte *)(*(int *)((int)this + 0x9f) + 3 + iVar5) = bVar1;
          }
          iVar5 = iVar5 + 0x10;
          iVar6 = iVar6 + 1;
          if (*(int *)((int)this + 0xa7) <= iVar6) goto LAB_0042c37b;
          iVar2 = iVar2 + 0x10;
          local_8 = local_8 + 1;
        } while (local_8 < *piVar3);
      }
      if (*(int *)((int)this + 0xa7) <= iVar6) break;
      piVar3 = (int *)((int)piVar3 + 0xc2);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)((int)this + 0xc28));
  }
LAB_0042c37b:
  iVar6 = 6;
  FUN_0042c3d0((void *)((int)this + 8),this,param_1);
  if (6 < *(int *)((int)this + 0xc28)) {
    pvVar4 = (void *)((int)this + 0x494);
    do {
      iVar6 = iVar6 + 1;
      FUN_0042c500(pvVar4,(int)this,param_1);
      pvVar4 = (void *)((int)pvVar4 + 0xc2);
    } while (iVar6 < *(int *)((int)this + 0xc28));
  }
  return;
}

