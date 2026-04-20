/*
 * Program: Creatures.exe
 * Function: FUN_004294e0
 * Entry: 004294e0
 * Namespace: Global
 * Prototype: undefined FUN_004294e0(void)
 */


void FUN_004294e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00429517;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00429521();
  *unaff_FS_OFFSET = local_10;
  return;
}

