/*
 * Program: Launcher.exe
 * Function: FUN_00403160
 * Entry: 00403160
 * Namespace: Global
 * Prototype: undefined4 FUN_00403160(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00403160(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar4;
  undefined1 local_44 [2];
  int local_42;
  int local_3a;
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040333d;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_00404520;
  local_1c = 0;
  local_18 = 0xffffffff;
  Ordinal_762(0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = Ordinal_4619(param_1,0x20,local_24);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      pcVar4 = s_Failed_to_open_file__004051bc;
      goto LAB_004031f8;
    }
  }
  else {
    iVar1 = Ordinal_4819(local_44,0xe);
    if (iVar1 == 0xe) {
      if (*(int *)((int)this + 4) != 0) {
        Ordinal_731(*(int *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
      iVar1 = Ordinal_729(0x428);
      *(int *)((int)this + 4) = iVar1;
      if (iVar1 == 0) goto LAB_004031fd;
      iVar1 = Ordinal_4819(iVar1,0x428);
      if (iVar1 == 0x428) {
        if (*(short *)(*(int *)((int)this + 4) + 0xe) == 8) {
          iVar1 = local_42 - local_3a;
          if (*(int *)((int)this + 8) != 0) {
            Ordinal_731(*(int *)((int)this + 8));
            *(undefined4 *)((int)this + 8) = 0;
          }
          *(undefined4 *)((int)this + 0xc) = 1;
          iVar3 = Ordinal_729(iVar1);
          *(int *)((int)this + 8) = iVar3;
          if (iVar3 == 0) goto LAB_004031fd;
          iVar3 = Ordinal_4819(iVar3,iVar1);
          if (iVar3 == iVar1) {
            Ordinal_1725();
            local_8 = local_8 & 0xffffff00;
            FUN_00403335();
            local_8 = 0xffffffff;
            FUN_00403347();
            uVar2 = 1;
            goto LAB_00403214;
          }
          pcVar4 = s_Failed_to_read_file_00405170;
        }
        else {
          pcVar4 = s_256_colour_bit_map_required__00405184;
        }
      }
      else {
        pcVar4 = s_Failed_to_read_file__004051a4;
      }
    }
    else {
      pcVar4 = s_Failed_to_read_file__004051a4;
    }
LAB_004031f8:
    Ordinal_1061(pcVar4,0,0);
  }
LAB_004031fd:
  local_8 = local_8 & 0xffffff00;
  FUN_00403335();
  local_8 = 0xffffffff;
  FUN_00403347();
  uVar2 = 0;
LAB_00403214:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

