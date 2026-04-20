/*
 * Program: Hatchery.exe
 * Function: FUN_00402fe0
 * Entry: 00402fe0
 * Namespace: Global
 * Prototype: undefined4 FUN_00402fe0(int param_1)
 */


undefined4 __fastcall FUN_00402fe0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_130 [256];
  undefined4 local_30 [7];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004030d9;
  *unaff_FS_OFFSET = &local_10;
  FUN_00403ef0(local_30);
  local_8 = 0;
  iVar1 = FUN_00404030(local_30,s_Millennium_Interactive_0040a0dc,s_Creatures_Hatchery_0040a408,
                       &DAT_0040a41c);
  if (iVar1 != 0) {
    FUN_00404350(local_30,1,s_Eggstra_0040a3f8,local_130,0xff,(BYTE *)s_xxxxxx_0040a400);
    iVar1 = _stricmp((char *)local_130,s_xxxxxx_0040a400);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar3 = (undefined4 *)(param_1 + 0x1d0);
      local_14 = 0;
      do {
        iVar2 = (int)(char)local_130[iVar1];
        if ((iVar2 < 0x30) || (0x31 < iVar2)) {
          *puVar3 = 0;
        }
        else {
          local_14 = 1;
          puVar3[0x1e] = iVar2 + -0x30;
          *puVar3 = 1;
        }
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 6);
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = local_14;
      FUN_004030e3();
      goto LAB_00403072;
    }
  }
  local_8 = 0xffffffff;
  FUN_004030e3();
  local_14 = 0;
LAB_00403072:
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

