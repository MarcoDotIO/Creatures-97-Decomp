/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402f90
 * Entry: 00402f90
 * Namespace: Global
 * Prototype: undefined4 FUN_00402f90(void * this, byte * param_1, int param_2)
 */


undefined4 __thiscall FUN_00402f90(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0xb3c)) {
    iVar3 = 0;
    do {
      pbVar6 = *(byte **)(*(int *)(*(int *)((int)this + 0xb38) + iVar3) + 8);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00402fd4:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00402fd9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00402fd4;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00402fd9:
      if (iVar4 == 0) {
        if (param_2 != 0) {
          if (*(int *)((int)this + 0xb4c) != 0) {
            Ordinal_4993((int)this + 0x52c);
          }
          FUN_00402cf0(this,0);
        }
        return 1;
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0xb3c));
  }
  return 0;
}

