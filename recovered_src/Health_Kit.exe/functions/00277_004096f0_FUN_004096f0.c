/*
 * Program: Health_Kit.exe
 * Function: FUN_004096f0
 * Entry: 004096f0
 * Namespace: Global
 * Prototype: undefined FUN_004096f0(undefined4 * param_1)
 */


void __fastcall FUN_004096f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004097a2;
  *param_1 = &PTR_LAB_0040efd0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  iVar2 = 0;
  if (0 < (int)param_1[3]) {
    do {
      iVar3 = iVar2 + 1;
      piVar1 = *(int **)(param_1[2] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar2 = iVar3;
    } while (iVar3 < (int)param_1[3]);
  }
  Ordinal_5439(0,0xffffffff);
  if ((param_1[7] != 0) && (param_1[6] != 0)) {
    Ordinal_731(param_1[6]);
    param_1[6] = 0;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_00409797();
  local_8 = 0xffffffff;
  FUN_004097ac();
  *unaff_FS_OFFSET = local_10;
  return;
}

