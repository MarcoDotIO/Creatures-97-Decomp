/*
 * Program: Creatures.exe
 * Function: FUN_00414430
 * Entry: 00414430
 * Namespace: Global
 * Prototype: undefined FUN_00414430(void)
 */


void FUN_00414430(void)

{
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041448b;
  *unaff_FS_OFFSET = &local_10;
  this = (void *)Ordinal_729(0x79);
  local_8 = 0;
  if (this != (void *)0x0) {
    FUN_00416670(this,0x74737973,0,9);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

