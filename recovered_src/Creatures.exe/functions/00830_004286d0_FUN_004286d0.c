/*
 * Program: Creatures.exe
 * Function: FUN_004286d0
 * Entry: 004286d0
 * Namespace: Global
 * Prototype: uint FUN_004286d0(void * this, undefined4 param_1)
 */


uint __thiscall FUN_004286d0(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004287dd;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_483(param_1);
  local_8 = 0;
  Ordinal_3695();
  Ordinal_483(&DAT_00436d80);
  local_14 = local_14 & 0xffffff;
  local_20 = 0;
  local_8._0_1_ = 1;
  if (0 < *(int *)(local_18 + -8)) {
    do {
      cVar1 = *(char *)(local_18 + local_20);
      if ((((cVar1 == ' ') && (local_14._3_1_ != '\0')) && (local_14._3_1_ != ' ')) ||
         (('`' < cVar1 && (cVar1 < '{')))) {
        Ordinal_835(cVar1);
        local_14 = CONCAT13(cVar1,(undefined3)local_14);
      }
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(local_18 + -8));
  }
  Ordinal_836(&DAT_00436d80);
  Ordinal_760(&local_1c);
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x24c) = 1;
  local_8 = (uint)local_8._1_3_ << 8;
  local_14 = (uint)(2 < *(int *)(local_1c + -8));
  FUN_004287d5();
  local_8 = 0xffffffff;
  FUN_004287e7();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

