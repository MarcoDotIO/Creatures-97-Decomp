/*
 * Program: Creatures.exe
 * Function: FUN_004191d0
 * Entry: 004191d0
 * Namespace: Global
 * Prototype: undefined FUN_004191d0(void * this, int param_1, int param_2)
 */


void __thiscall FUN_004191d0(void *this,int param_1,int param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  bVar1 = FUN_00414c60(this);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (param_2 != 0) {
      if (-1 < *(int *)((int)this + 0x23)) {
        FUN_004099c0(DAT_00436eb8,*(int *)((int)this + 0x23),1);
      }
      *(int *)((int)this + 0x2b) = param_2;
      *(undefined4 *)((int)this + 0x23) = 0xffffffff;
      *(int *)((int)this + 0x27) = param_1;
    }
  }
  else {
    FUN_00414b00(this,&local_8,&local_c);
    iVar2 = FUN_00409860(DAT_00436eb8,param_1,&local_4);
    if (iVar2 == 0) {
      if (-1 < *(int *)((int)this + 0x23)) {
        FUN_004099c0(DAT_00436eb8,*(int *)((int)this + 0x23),1);
      }
      *(int *)((int)this + 0x27) = param_1;
      *(int *)((int)this + 0x23) = local_4;
      *(int *)((int)this + 0x2b) = param_2;
      return;
    }
  }
  return;
}

