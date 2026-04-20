/*
 * Program: Hatchery.exe
 * Function: FUN_00405ee0
 * Entry: 00405ee0
 * Namespace: Global
 * Prototype: bool FUN_00405ee0(void)
 */


bool FUN_00405ee0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_1ac [256];
  CHAR local_ac [128];
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405fac;
  *unaff_FS_OFFSET = &local_10;
  FUN_00403ef0(local_2c);
  local_8 = 0;
  iVar1 = FUN_00404030(local_2c,s_Millennium_Interactive_0040a0dc,s_Creatures_0040a0f4,&DAT_0040a100
                      );
  if (iVar1 != 0) {
    wsprintfA(local_ac,s_Tool_d_0040a5e4,0);
    wsprintfA((LPSTR)local_1ac,s__s__s__s__d_0040a5b4,s_Hatchery_OLE_0040a07c,
              s_The_Hatchery_0040a5c0,s_Hatch_a_new_norn_0040a5d0,0);
    FUN_00404410(local_2c,0,local_ac,local_1ac);
    local_8 = 0xffffffff;
    FUN_00405fb6();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00405fb6();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

