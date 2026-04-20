/*
 * Program: Creatures.exe
 * Function: FUN_00421830
 * Entry: 00421830
 * Namespace: Global
 * Prototype: undefined FUN_00421830(void * this, char * param_1)
 */


void __thiscall FUN_00421830(void *this,char *param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (*(int *)(DAT_00436ea0 + 0xc4) != 0) {
    this_00 = (void *)((int)this + 0x2870);
    uVar1 = FUN_004286d0(this_00,param_1);
    if (uVar1 != 0) {
      iVar2 = FUN_004287f0(this_00,&local_4,&local_8);
      while (iVar2 != 0) {
        FUN_00419180(this,local_4,local_8);
        iVar2 = FUN_004287f0(this_00,&local_4,&local_8);
      }
    }
  }
  FUN_00415020(this,param_1,0x14,0);
  return;
}

