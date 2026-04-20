/*
 * Program: Creatures.exe
 * Function: FUN_00414da0
 * Entry: 00414da0
 * Namespace: Global
 * Prototype: undefined FUN_00414da0(int * param_1)
 */


void __fastcall FUN_00414da0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x27) != 0) {
    if (*(int *)((int)param_1 + 0x23) < 0) {
      bVar1 = FUN_00414c60(param_1);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        FUN_00414b00(param_1,&local_8,&local_c);
        iVar2 = FUN_00409860(DAT_00436eb8,*(int *)((int)param_1 + 0x27),&local_4);
        if ((iVar2 == 0) && (local_4 != -1)) {
          *(int *)((int)param_1 + 0x23) = local_4;
        }
      }
    }
    else {
      iVar2 = FUN_00409950(DAT_00436eb8,*(int *)((int)param_1 + 0x23));
      if (iVar2 != 0) {
        FUN_004099c0(DAT_00436eb8,*(int *)((int)param_1 + 0x23),0);
        *(undefined4 *)((int)param_1 + 0x23) = 0xffffffff;
        *(undefined4 *)((int)param_1 + 0x27) = 0;
        return;
      }
      bVar1 = FUN_00414c60(param_1);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        FUN_00414b00(param_1,&local_8,&local_c);
        FUN_004098f0(DAT_00436eb8,*(int *)((int)param_1 + 0x23),local_8);
        return;
      }
      FUN_004099c0(DAT_00436eb8,*(int *)((int)param_1 + 0x23),0);
      *(undefined4 *)((int)param_1 + 0x23) = 0xffffffff;
      if (*(int *)((int)param_1 + 0x2b) == 0) {
        *(undefined4 *)((int)param_1 + 0x27) = 0;
        return;
      }
    }
  }
  return;
}

