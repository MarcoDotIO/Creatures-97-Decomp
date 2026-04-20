/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004025d0
 * Entry: 004025d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004025d0(int * param_1)
 */


undefined4 __fastcall FUN_004025d0(int *param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  BVar2 = IsWindow((HWND)param_1[8]);
  if (BVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_00403c90(param_1,1,param_1[0xd67]);
  param_1[0xd67] = iVar3;
  bVar1 = FUN_00403d90(param_1,iVar3,s_dde__getb_monk_004121b8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = FUN_00403ed0(param_1,param_1[0xd67],0);
    if (iVar3 == 0) {
      return 0;
    }
    Ordinal_762(param_1[0x7f]);
  }
  iVar3 = _mbscmp((uchar *)param_1[0xd64],(uchar *)param_1[0xd65]);
  if (iVar3 != 0) {
    bVar1 = FUN_00403d90(param_1,param_1[0xd67],s_dde__getb_cnam_004121c8);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      iVar3 = FUN_00403ed0(param_1,param_1[0xd67],0);
      if (iVar3 != 0) {
        Ordinal_762(param_1[0x7f]);
      }
    }
    Ordinal_760(param_1 + 0xd64);
    (**(code **)(*param_1 + 0xd0))();
    return 1;
  }
  return 0;
}

