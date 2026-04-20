/*
 * Program: Creatures.exe
 * Function: FUN_00415380
 * Entry: 00415380
 * Namespace: Global
 * Prototype: undefined FUN_00415380(undefined4 * param_1)
 */


void __fastcall FUN_00415380(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041540d;
  *param_1 = &PTR_LAB_004307a0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))(1);
  }
  iVar1 = 0;
  param_1[0x12] = 0;
  if (0 < DAT_00438880) {
    do {
      if (*(undefined4 **)(DAT_0043887c + iVar1 * 4) == param_1) {
        Ordinal_4960(iVar1,1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00438880);
  }
  local_8 = 0xffffffff;
  FUN_00415417();
  *unaff_FS_OFFSET = local_10;
  return;
}

