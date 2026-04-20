/*
 * Program: Creatures.exe
 * Function: FUN_0041c410
 * Entry: 0041c410
 * Namespace: Global
 * Prototype: undefined FUN_0041c410(void)
 */


void FUN_0041c410(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041c5b6;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  if (DAT_004382c4 != 0) {
    Ordinal_3033(6,&local_14);
    uVar1 = ((uint)*(byte *)(*(int *)(DAT_004382c4 + 0x2acc) + 0x7e) * 100) / 0xff;
    if (*(char *)(DAT_004382c4 + 0x2b78) != '\0') {
      uVar1 = 0;
    }
    iVar2 = *(int *)(local_14 + -8);
    Ordinal_5188(iVar2 + -2,(char)(uVar1 % 10) + '0');
    if (uVar1 < 10) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (char)((uVar1 / 10) % 10) + '0';
    }
    Ordinal_5188(iVar2 + -3,cVar4);
    if (uVar1 < 100) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (char)((uVar1 / 100) % 10) + '0';
    }
    Ordinal_5188(iVar2 + -4,cVar4);
    Ordinal_5374(6,local_14,1);
  }
  Ordinal_3033(7,&local_14);
  iVar2 = FUN_0040b0a0(DAT_00436ec0,1);
  iVar3 = FUN_0040b0a0(DAT_00436ec0,4);
  iVar3 = iVar2 * 0x100 + iVar3;
  if (99999 < iVar3) {
    iVar3 = 99999;
  }
  iVar5 = 0;
  iVar2 = *(int *)(local_14 + -8);
  do {
    iVar2 = iVar2 + -1;
    if (iVar3 == 0) {
      if (iVar5 == 0) {
        uVar6 = 0x30;
      }
      else {
        uVar6 = 0x20;
      }
    }
    else {
      uVar6 = CONCAT31((int3)((uint)(iVar3 % 10) >> 8),(char)(iVar3 % 10) + '0');
    }
    Ordinal_5188(iVar2,uVar6);
    iVar3 = iVar3 / 10;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  Ordinal_5374(7,local_14,1);
  local_8 = 0xffffffff;
  FUN_0041c5c0();
  *unaff_FS_OFFSET = local_10;
  return;
}

