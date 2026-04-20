/*
 * Program: Health_Kit.exe
 * Function: FUN_00407d10
 * Entry: 00407d10
 * Namespace: Global
 * Prototype: undefined4 FUN_00407d10(void * param_1)
 */


undefined4 __fastcall FUN_00407d10(void *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  pcVar1 = *(char **)((int)param_1 + 0x1fc);
  do {
    iVar3 = FUN_00407ec0(param_1,1,*(int *)((int)param_1 + 0x1f8));
    *(int *)((int)param_1 + 0x1f8) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = FUN_00407fc0(param_1,iVar3,s_dde__putv_ownr_00411478);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return 0;
    }
    iVar3 = FUN_00408100(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*pcVar1 == '\0') || (*pcVar1 == '0')) {
      iVar3 = Ordinal_1061(s_There_is_no_subject_00411464,0x15,0);
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

