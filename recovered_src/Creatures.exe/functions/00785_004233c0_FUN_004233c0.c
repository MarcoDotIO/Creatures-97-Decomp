/*
 * Program: Creatures.exe
 * Function: FUN_004233c0
 * Entry: 004233c0
 * Namespace: Global
 * Prototype: undefined FUN_004233c0(void * this, int * param_1)
 */


void __thiscall FUN_004233c0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00423546;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = 0;
  FUN_0041b520(local_2c,*(int *)((int)this + 0x48),(uint)*(byte *)((int)this + 0x2b6f),
               *(undefined1 *)((int)this + 0x2b6e));
  local_8 = 0;
  iVar1 = FUN_0041be20(local_2c,0,0,1);
  *param_1 = iVar1;
  iVar1 = FUN_0041be20(local_2c,1,0,5);
  param_1[1] = iVar1;
  iVar1 = FUN_0041be20(local_2c,1,1,5);
  param_1[2] = iVar1;
  iVar1 = FUN_0041be20(local_2c,1,2,5);
  param_1[3] = iVar1;
  iVar1 = FUN_0041be20(local_2c,1,3,5);
  param_1[4] = iVar1;
  iVar1 = FUN_0041be20(local_2c,1,4,5);
  param_1[5] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,0,7);
  param_1[6] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,1,7);
  param_1[7] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,2,7);
  param_1[8] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,3,7);
  param_1[9] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,4,7);
  param_1[10] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,5,7);
  param_1[0xb] = iVar1;
  iVar1 = FUN_0041be20(local_2c,2,6,7);
  param_1[0xc] = iVar1;
  FUN_0041bd90((int)local_2c);
  iVar1 = FUN_0041be70(local_2c,2,6,7,1);
  while (iVar1 != 0) {
    FUN_0041bda0(local_2c,0,2);
    uVar2 = FUN_0041bda0(local_2c,0,0xff);
    iVar3 = iVar3 + uVar2;
    iVar1 = FUN_0041be70(local_2c,2,6,7,1);
  }
  local_8 = 0xffffffff;
  param_1[0xd] = iVar3;
  FUN_00423550();
  *unaff_FS_OFFSET = local_10;
  return;
}

