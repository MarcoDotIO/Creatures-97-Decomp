/*
 * Program: Health_Kit.exe
 * Function: FUN_0040d130
 * Entry: 0040d130
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d130(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_0040d130(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar4;
  undefined1 local_46c [1024];
  undefined1 local_6c [4];
  int local_68;
  undefined4 local_64;
  short local_5e;
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
  puStack_c = &LAB_0040d31e;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  Ordinal_336();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  local_24[0] = &PTR_LAB_0040e268;
  local_1c = 0;
  local_18 = 0xffffffff;
  Ordinal_762(0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = Ordinal_4619(param_1,0x20,local_24);
  if (iVar1 == 0) {
    iVar1 = Ordinal_5003(0,0);
    if (iVar1 == 0) {
      pcVar4 = s_Failed_to_open_file__0041115c;
      goto LAB_0040d1cb;
    }
  }
  else {
    iVar1 = Ordinal_4819(local_44,0xe);
    if (iVar1 == 0xe) {
      iVar1 = Ordinal_4819(local_6c,0x28);
      if (iVar1 == 0x28) {
        if (local_5e == 8) {
          *(int *)((int)this + 0x14) = local_68;
          *(undefined4 *)((int)this + 0x10) = local_64;
          *(uint *)((int)this + 0xc) = local_68 + 3U & 0xfffffffc;
          iVar1 = Ordinal_4819(local_46c,0x400);
          if (iVar1 == 0x400) {
            iVar1 = local_42 - local_3a;
            if ((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) {
              Ordinal_731(*(int *)((int)this + 4));
              *(undefined4 *)((int)this + 4) = 0;
            }
            *(undefined4 *)((int)this + 8) = 1;
            iVar3 = Ordinal_729(iVar1);
            *(int *)((int)this + 4) = iVar3;
            if (iVar3 == 0) goto LAB_0040d1d0;
            iVar3 = Ordinal_4819(iVar3,iVar1);
            if (iVar3 == iVar1) {
              Ordinal_1725();
              local_8 = local_8 & 0xffffff00;
              FUN_0040d316();
              local_8 = 0xffffffff;
              FUN_0040d328();
              uVar2 = 1;
              goto LAB_0040d1e7;
            }
            pcVar4 = s_Failed_to_read_file_00411110;
          }
          else {
            pcVar4 = s_Failed_to_read_file__00411144;
          }
        }
        else {
          pcVar4 = s_256_colour_bit_map_required__00411124;
        }
      }
      else {
        pcVar4 = s_Failed_to_read_file__00411144;
      }
    }
    else {
      pcVar4 = s_Failed_to_read_file__00411144;
    }
LAB_0040d1cb:
    Ordinal_1061(pcVar4,0,0);
  }
LAB_0040d1d0:
  local_8 = local_8 & 0xffffff00;
  FUN_0040d316();
  local_8 = 0xffffffff;
  FUN_0040d328();
  uVar2 = 0;
LAB_0040d1e7:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

