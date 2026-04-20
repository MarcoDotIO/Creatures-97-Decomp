/*
 * Program: Creatures.exe
 * Function: FUN_0040c4c0
 * Entry: 0040c4c0
 * Namespace: Global
 * Prototype: undefined FUN_0040c4c0(undefined4 * param_1)
 */


void __fastcall FUN_0040c4c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040c569;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0042fc80;
  iVar2 = 0;
  local_8 = 0;
  if (0 < DAT_00438a10) {
    do {
      if (*(undefined4 **)(DAT_00438a0c + iVar2 * 4) == param_1) {
        Ordinal_4962(iVar2,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00438a10);
  }
  iVar2 = 0;
  if (0 < (int)param_1[2]) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = param_1[1] + iVar3;
      iVar3 = iVar3 + 0x1d;
      FUN_0040c9a0(iVar1);
    } while (iVar2 < (int)param_1[2]);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))(3);
  }
  local_8 = 0xffffffff;
  FUN_0040c573();
  *unaff_FS_OFFSET = local_10;
  return;
}

