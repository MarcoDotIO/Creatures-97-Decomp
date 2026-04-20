/*
 * Program: Creatures.exe
 * Function: FUN_00419180
 * Entry: 00419180
 * Namespace: Global
 * Prototype: undefined FUN_00419180(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00419180(void *this,int param_1,int param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  int local_8;
  int local_4;
  
  bVar1 = FUN_00414c60(this);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00414b00(this,&local_4,&local_8);
    FUN_004096c0(DAT_00436eb8,param_1,param_2,local_4,local_8);
  }
  return;
}

