/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00404ca0
 * Entry: 00404ca0
 * Namespace: Global
 * Prototype: bool FUN_00404ca0(void)
 */


bool FUN_00404ca0(void)

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
  puStack_c = &LAB_00404d6c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00408c10(local_2c);
  local_8 = 0;
  iVar1 = FUN_00408d50(local_2c,s_Millennium_Interactive_004121ac,s_Creatures_004122d0,&DAT_004121dc
                      );
  if (iVar1 != 0) {
    wsprintfA(local_8c,s_Tool_d_004122c8,2);
    wsprintfA((LPSTR)local_14c,s__s__s__s__d_004122a0,s_Owner_OLE_0041216c,s_Owner_s_Kit_004122ac,
              s_Norn_details_004122b8,2);
    FUN_00409130(local_2c,0,local_8c,local_14c);
    local_8 = 0xffffffff;
    FUN_00404d76();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00404d76();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}

