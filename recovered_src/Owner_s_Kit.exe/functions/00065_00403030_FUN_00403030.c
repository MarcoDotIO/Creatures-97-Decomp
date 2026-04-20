/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403030
 * Entry: 00403030
 * Namespace: Global
 * Prototype: undefined4 FUN_00403030(void * this, byte * param_1)
 */


undefined4 __thiscall FUN_00403030(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *unaff_FS_OFFSET;
  bool bVar8;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004030e9;
  *unaff_FS_OFFSET = &local_10;
  iVar5 = 0;
  Ordinal_486();
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xb3c)) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0xb38) + iVar6);
      pbVar3 = *(byte **)(iVar2 + 8);
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0040309d:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004030a2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0040309d;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004030a2:
      if (iVar4 == 0) {
        Ordinal_760(iVar2 + 0xc);
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0xb3c));
  }
  local_8 = 0xffffffff;
  FUN_004030f3();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}

