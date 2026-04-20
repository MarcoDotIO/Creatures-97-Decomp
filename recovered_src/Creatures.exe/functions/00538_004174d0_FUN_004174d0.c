/*
 * Program: Creatures.exe
 * Function: FUN_004174d0
 * Entry: 004174d0
 * Namespace: Global
 * Prototype: undefined FUN_004174d0(undefined4 * param_1)
 */


void __fastcall FUN_004174d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00417535;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_00430af0;
  iVar1 = 0;
  piVar2 = param_1 + 0x13;
  local_8 = 0;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))(1);
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  local_8 = 0xffffffff;
  FUN_0041753f();
  *unaff_FS_OFFSET = local_10;
  return;
}

