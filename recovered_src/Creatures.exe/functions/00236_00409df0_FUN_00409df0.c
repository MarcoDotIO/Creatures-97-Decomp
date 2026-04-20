/*
 * Program: Creatures.exe
 * Function: FUN_00409df0
 * Entry: 00409df0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00409df0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00409df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409eb4;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  iVar2 = 0xff;
  *param_1 = &PTR_LAB_0042f018;
  puVar1 = param_1 + 2;
  do {
    FUN_00409de0((undefined1 *)puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
  } while (-1 < iVar2);
  iVar2 = 0x7f;
  puVar1 = param_1 + 0x82;
  do {
    FUN_00409da0((int)puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (-1 < iVar2);
  iVar2 = 0x7f;
  puVar1 = param_1 + 0x202;
  do {
    FUN_00409dc0((int)puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (-1 < iVar2);
  iVar2 = 0x7f;
  puVar1 = param_1 + 0x382;
  do {
    FUN_00409f40(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 9);
  } while (-1 < iVar2);
  *param_1 = &PTR_LAB_0042fc28;
  param_1[1] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

