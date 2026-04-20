/*
 * Program: Creatures.exe
 * Function: FUN_00402b90
 * Entry: 00402b90
 * Namespace: Global
 * Prototype: undefined FUN_00402b90(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)
 */


void __thiscall FUN_00402b90(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *(int *)((int)this + 4);
  local_c = *(int *)((int)this + 8);
  local_8 = *(int *)((int)this + 0xc);
  local_4 = *(int *)((int)this + 0x10);
  if (((*(int *)((int)this + 0x30) != 0) && (param_2 < param_4)) && (param_3 < param_5)) {
    iVar1 = FUN_0040b300(&local_10,&param_2);
    if (iVar1 != 0) {
      FUN_00402c30(this,param_1,local_10,local_c,local_8,local_4,*(int *)((int)this + 4),
                   *(undefined4 *)((int)this + 8),*(int *)((int)this + 0xc),
                   *(undefined4 *)((int)this + 0x10));
    }
  }
  return;
}

