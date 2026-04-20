/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407d70
 * Entry: 00407d70
 * Namespace: Global
 * Prototype: undefined4 FUN_00407d70(void)
 */


undefined4 FUN_00407d70(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407df4;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  uVar4 = 0;
  uVar3 = 0x30;
  local_8 = 0;
  puVar1 = FUN_00407340();
  iVar2 = Ordinal_4619(puVar1,uVar3,uVar4);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_00407dfe();
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_2891();
    local_8 = 0xffffffff;
    FUN_00407dfe();
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

