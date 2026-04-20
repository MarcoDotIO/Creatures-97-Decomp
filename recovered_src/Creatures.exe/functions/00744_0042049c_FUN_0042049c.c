/*
 * Program: Creatures.exe
 * Function: FUN_0042049c
 * Entry: 0042049c
 * Namespace: Global
 * Prototype: undefined FUN_0042049c(void * this, int param_1)
 */


void __thiscall FUN_0042049c(void *this,int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int unaff_retaddr;
  
  if (*in_EAX != 0) {
    *in_EAX = 0;
    FUN_004016c0(this,this,5,0,0,0);
  }
  FUN_00402130(DAT_00436eb0,&param_1,(undefined4 *)&stack0x00000000);
  iVar1 = *(int *)this;
  iVar2 = (**(code **)(iVar1 + 0x7c))();
  (**(code **)(iVar1 + 0x54))(param_1,unaff_retaddr + iVar2);
  FUN_00415ea0(DAT_00438d0c);
  return;
}

