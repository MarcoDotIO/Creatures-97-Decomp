/*
 * Program: Creatures.exe
 * Function: FUN_004013b0
 * Entry: 004013b0
 * Namespace: Global
 * Prototype: int FUN_004013b0(void * this, void * param_1)
 */


int __thiscall FUN_004013b0(void *this,void *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_004011c0(param_1,(int)this);
  iVar3 = rand();
  iVar4 = iVar3 / 0x65;
  iVar3 = iVar3 % 0x65;
  if (0x50 < iVar3) {
    uVar5 = rand();
    uVar7 = (int)uVar5 >> 0x1f;
    uVar6 = rand();
    uVar8 = (int)uVar6 >> 0x1f;
    iVar3 = ((uVar6 ^ uVar8) - uVar8 & 3 ^ uVar8) - uVar8;
    *(char *)((((uVar5 ^ uVar7) - uVar7 & 3 ^ uVar7) - uVar7) + 8 + (int)param_1) = (char)iVar3;
    *(undefined1 *)((int)param_1 + 4) = 1;
    return iVar3;
  }
  if (iVar3 < 0x47) {
    if (iVar3 < 0x3d) {
      if (0x32 < iVar3) {
        uVar5 = rand();
        uVar6 = (int)uVar5 >> 0x1f;
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = ((uVar5 ^ uVar6) - uVar6 & 7 ^ uVar6) - uVar6;
        cVar1 = (char)iVar3 + -8;
        *(char *)((int)param_1 + 5) = cVar1;
        return CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
      }
    }
    else {
      iVar3 = rand();
      bVar2 = *(char *)((int)param_1 + 6) + (char)(iVar3 % 0x15) + -10;
      iVar4 = CONCAT31((int3)((uint)(iVar3 / 0x15) >> 8),bVar2);
      *(byte *)((int)param_1 + 6) = bVar2;
      if (bVar2 < 0x82) {
        *(undefined1 *)((int)param_1 + 6) = 0x82;
        *(undefined1 *)((int)param_1 + 4) = 1;
        return iVar4;
      }
    }
  }
  else {
    iVar3 = rand();
    bVar2 = *(char *)((int)param_1 + 7) + (char)(iVar3 % 0x15) + -10;
    iVar4 = CONCAT31((int3)((uint)(iVar3 / 0x15) >> 8),bVar2);
    *(byte *)((int)param_1 + 7) = bVar2;
    if (0x82 < bVar2) {
      *(undefined1 *)((int)param_1 + 7) = 0x82;
    }
  }
  *(undefined1 *)((int)param_1 + 4) = 1;
  return iVar4;
}

