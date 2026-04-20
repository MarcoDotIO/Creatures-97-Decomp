/*
 * Program: Creatures.exe
 * Function: FUN_00406660
 * Entry: 00406660
 * Namespace: Global
 * Prototype: undefined FUN_00406660(void)
 */


void FUN_00406660(void)

{
  undefined4 local_8;
  int local_4;
  
  FUN_00402130(DAT_00436eb0,&local_4,&local_8);
  (**(code **)(*DAT_004352c8 + 0x54))(local_4,local_8);
  if ((*(uint *)((int)DAT_00436eb0 + 100) & 2) != 0) {
    *(undefined4 *)((int)DAT_00436eb0 + 100) = 0;
    (**(code **)(*DAT_004352c8 + 0x34))();
    DAT_004352c8 = (int *)0x0;
  }
  return;
}

