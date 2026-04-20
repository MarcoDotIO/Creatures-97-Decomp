/*
 * Program: Science_Kit.exe
 * Function: FUN_00404270
 * Entry: 00404270
 * Namespace: Global
 * Prototype: bool FUN_00404270(void)
 */


bool FUN_00404270(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_14c [192];
  CHAR local_8c [96];
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040433c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404520(local_2c);
  local_8 = 0;
  iVar1 = FUN_00404660(local_2c,s_Millennium_Interactive_00415184,s_Creatures_004152d8,&DAT_004151b4
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_004152d0,4);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_00415298,s_Science_OLE_004152a4,s_Science_Kit_004152b0,
              s_Advanced_monitoring_004152bc,4);
    FUN_00404ce0(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_00404346();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00404346();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

