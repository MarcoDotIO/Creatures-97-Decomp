/*
 * Program: Creatures.exe
 * Function: FUN_00423d00
 * Entry: 00423d00
 * Namespace: Global
 * Prototype: undefined4 FUN_00423d00(int param_1, int param_2, uint param_3, int param_4)
 */


undefined4 __cdecl FUN_00423d00(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00423e4f;
  *unaff_FS_OFFSET = &local_10;
  piVar6 = (int *)0x0;
  iVar7 = -1;
  iVar3 = 0;
  iVar5 = -1;
  local_14 = -1;
  iVar2 = local_14;
  if (0 < DAT_00436c24) {
    do {
      uVar1 = (&DAT_0043912c)[iVar3 * 2];
      iVar2 = iVar3;
      if (param_3 == uVar1) break;
      if ((param_3 & 0xffff00ff) == uVar1) {
        iVar5 = iVar3;
      }
      if ((param_3 & 0xff0000ff) == uVar1) {
        iVar7 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = local_14;
    } while (iVar3 < DAT_00436c24);
  }
  local_14 = iVar2;
  if (((local_14 < 0) && (local_14 = iVar5, iVar5 < 0)) && (local_14 = iVar7, iVar7 < 0)) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < DAT_00436c20) {
      piVar6 = &DAT_00439b28;
      do {
        if (*(int *)(*piVar6 + 0x94) == param_1) {
          piVar6 = (int *)(&DAT_00439b28)[iVar5];
          if ((char)param_3 != '\t') goto LAB_00423dd7;
          uVar4 = 1;
          goto LAB_00423e65;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00436c20);
      piVar6 = (int *)0x0;
    }
LAB_00423dd7:
    if ((piVar6 == (int *)0x0) || (param_4 != 0)) {
      piVar6 = (int *)0x0;
      this = (void *)Ordinal_729(0xc0);
      local_8 = 0;
      if (this != (void *)0x0) {
        piVar6 = FUN_00423f80(this,1);
      }
    }
    local_8 = 0xffffffff;
    piVar6[0x25] = param_1;
    if (param_1 == 0) {
      piVar6[0x25] = DAT_004382c4;
    }
    piVar6[0x26] = param_2;
    FUN_00424110(piVar6,(char *)(&DAT_00439128)[local_14 * 2]);
    FUN_004241f0(piVar6);
    uVar4 = 1;
  }
LAB_00423e65:
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}

