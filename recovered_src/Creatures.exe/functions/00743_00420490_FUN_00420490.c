/*
 * Program: Creatures.exe
 * Function: FUN_00420490
 * Entry: 00420490
 * Namespace: Global
 * Prototype: undefined FUN_00420490(int * param_1)
 */


void __fastcall FUN_00420490(int *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)((int)DAT_00436eb0 + 100) != 0) {
    *(int *)((int)DAT_00436eb0 + 100) = 0;
    FUN_004016c0(param_1,param_1,5,0,0,0);
  }
  FUN_00402130(DAT_00436eb0,&iStack_4,&iStack_8);
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x7c))();
  (**(code **)(iVar1 + 0x54))(iStack_4,iStack_8 + iVar2);
  FUN_00415ea0(DAT_00438d0c);
  return;
}

