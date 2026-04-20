/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00405bd0
 * Entry: 00405bd0
 * Namespace: Global
 * Prototype: bool FUN_00405bd0(void)
 */


bool FUN_00405bd0(void)

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
  puStack_c = &LAB_00405c9c;
  *unaff_FS_OFFSET = &local_10;
  FUN_004066c0(local_2c);
  local_8 = 0;
  iVar1 = FUN_00406800(local_2c,s_Millennium_Interactive_0041017c,s_Creatures_00410194,&DAT_004101a0
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_00410394,9);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_00410354,s_Funeral_OLE_00410360,
              s_Creature_Graveyard_0041036c,s_Pay_your_respects_00410380,9);
    FUN_00406e10(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_00405ca6();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00405ca6();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

