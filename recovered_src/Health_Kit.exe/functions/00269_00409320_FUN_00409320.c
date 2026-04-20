/*
 * Program: Health_Kit.exe
 * Function: FUN_00409320
 * Entry: 00409320
 * Namespace: Global
 * Prototype: bool FUN_00409320(void)
 */


bool FUN_00409320(void)

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
  puStack_c = &LAB_004093ec;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404a90(local_2c);
  local_8 = 0;
  iVar1 = FUN_00404bd0(local_2c,s_Millennium_Interactive_00411238,s_Creatures_00411250,&DAT_0041125c
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_0041154c,3);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_00411520,s_Health_OLE_004113f4,s_Health_Kit_0041152c,
              s_Initial_monitoring_00411538,3);
    FUN_00405020(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_004093f6();
  }
  else {
    local_8 = 0xffffffff;
    FUN_004093f6();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

