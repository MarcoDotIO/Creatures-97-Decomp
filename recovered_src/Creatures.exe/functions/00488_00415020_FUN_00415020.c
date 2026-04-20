/*
 * Program: Creatures.exe
 * Function: FUN_00415020
 * Entry: 00415020
 * Namespace: Global
 * Prototype: undefined FUN_00415020(void * this, char * param_1, undefined1 param_2, int param_3)
 */


void __thiscall FUN_00415020(void *this,char *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004150cb;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 4);
  iVar2 = *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 0xc);
  this_00 = (void *)Ordinal_729(0x74);
  local_8 = 0;
  if (this_00 != (void *)0x0) {
    iVar3 = (**(code **)(*(int *)this + 0x70))();
    FUN_00416ef0(this_00,this,param_2,param_1,param_3,(uint)(iVar3 <= iVar1 + (iVar2 - iVar1) / 2));
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

