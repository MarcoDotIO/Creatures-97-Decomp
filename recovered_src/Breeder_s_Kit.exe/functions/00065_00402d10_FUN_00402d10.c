/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402d10
 * Entry: 00402d10
 * Namespace: Global
 * Prototype: bool FUN_00402d10(void)
 */


bool FUN_00402d10(void)

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
  puStack_c = &LAB_00402ddc;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404660(local_2c);
  local_8 = 0;
  iVar1 = FUN_004047a0(local_2c,s_Millennium_Interactive_00412170,s_Creatures_00412254,&DAT_004121a0
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_0041224c,5);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_00412210,s_Sex_OLE_0041221c,s_Breeder_s_Kit_00412224,
              s_Pregnancy_monitoring_00412234,5);
    FUN_00404bf0(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_00402de6();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00402de6();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

