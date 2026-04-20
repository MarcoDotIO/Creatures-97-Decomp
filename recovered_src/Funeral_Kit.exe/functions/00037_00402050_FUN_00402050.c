/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00402050
 * Entry: 00402050
 * Namespace: Global
 * Prototype: undefined4 FUN_00402050(void * param_1)
 */


undefined4 __fastcall FUN_00402050(void *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  pcVar1 = *(char **)((int)param_1 + 0x1fc);
  do {
    iVar3 = FUN_00402200(param_1,1,*(int *)((int)param_1 + 0x1f8));
    *(int *)((int)param_1 + 0x1f8) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = FUN_00402300(param_1,iVar3,s_dde__putv_ownr_00410158);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return 0;
    }
    iVar3 = FUN_00402440(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*pcVar1 == '\0') || (*pcVar1 == '0')) {
      iVar3 = Ordinal_1061(s_There_is_no_subject_00410144,0x15,0);
      if (iVar3 == 2) {
        return 0;
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while (bVar2);
  return 1;
}

