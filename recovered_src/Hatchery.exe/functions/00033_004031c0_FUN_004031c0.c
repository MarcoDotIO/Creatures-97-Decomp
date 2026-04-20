/*
 * Program: Hatchery.exe
 * Function: FUN_004031c0
 * Entry: 004031c0
 * Namespace: Global
 * Prototype: undefined FUN_004031c0(void)
 */


void FUN_004031c0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403232;
  *unaff_FS_OFFSET = &local_10;
  FUN_00403ef0(local_2c);
  local_8 = 0;
  iVar1 = FUN_00404030(local_2c,s_Millennium_Interactive_0040a0dc,s_Creatures_Hatchery_0040a408,
                       &DAT_0040a41c);
  if (iVar1 != 0) {
    FUN_00404410(local_2c,1,s_Eggstra_0040a3f8,(BYTE *)s_xxxxxx_0040a400);
  }
  local_8 = 0xffffffff;
  FUN_0040323c();
  *unaff_FS_OFFSET = local_10;
  return;
}

