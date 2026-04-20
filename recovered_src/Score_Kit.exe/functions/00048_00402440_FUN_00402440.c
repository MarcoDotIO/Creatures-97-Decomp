/*
 * Program: Score_Kit.exe
 * Function: FUN_00402440
 * Entry: 00402440
 * Namespace: Global
 * Prototype: bool FUN_00402440(void)
 */


bool FUN_00402440(void)

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
  puStack_c = &LAB_0040250c;
  *unaff_FS_OFFSET = &local_10;
  FUN_004055b0(local_2c);
  local_8 = 0;
  iVar1 = FUN_004056f0(local_2c,s_Millennium_Interactive_0040c12c,s_Creatures_0040c1d4,&DAT_0040c158
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_0040c1cc,8);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_0040c194,s_Score_OLE_0040c1a0,
              s_Performance_Kit_0040c1ac,s_Scoring_data_0040c1bc,8);
    FUN_00405b40(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_00402516();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00402516();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

