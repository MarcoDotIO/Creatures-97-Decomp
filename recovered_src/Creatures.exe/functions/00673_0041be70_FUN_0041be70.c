/*
 * Program: Creatures.exe
 * Function: FUN_0041be70
 * Entry: 0041be70
 * Namespace: Global
 * Prototype: undefined4 FUN_0041be70(void * this, uint param_1, uint param_2, int param_3, int param_4)
 */


undefined4 __thiscall FUN_0041be70(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  do {
    do {
      do {
        do {
          iVar2 = FUN_0041bdf0((int)this);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_0041bda0(this,0,2);
        } while (uVar3 != param_1);
        uVar3 = FUN_0041bda0(this,0,param_3 + -1);
      } while (uVar3 != param_2);
      iVar2 = *(int *)((int)this + 8);
      *(int *)((int)this + 8) = iVar2 + 1;
      *(int *)((int)this + 8) = iVar2 + 2;
      iVar2 = param_4;
      uVar3 = FUN_0041bda0(this,0,0xff);
      bVar1 = FUN_0041bf20(this,(char)uVar3,iVar2);
    } while (CONCAT31(extraout_var,bVar1) == 0);
    uVar3 = FUN_0041bda0(this,0,0xff);
  } while ((((uVar3 & 0x18) != 0) && (((uVar3 & 8) == 0 || (*(int *)((int)this + 0x14) != 1)))) &&
          (((uVar3 & 0x10) == 0 || (*(int *)((int)this + 0x14) != 2))));
  return 1;
}

