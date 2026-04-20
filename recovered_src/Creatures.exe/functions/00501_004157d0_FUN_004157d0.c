/*
 * Program: Creatures.exe
 * Function: FUN_004157d0
 * Entry: 004157d0
 * Namespace: Global
 * Prototype: undefined FUN_004157d0(int * param_1)
 */


void __fastcall FUN_004157d0(int *param_1)

{
  int iVar1;
  
  DAT_004352c8 = 0;
  if (*(int *)(DAT_00436ea0 + 200) == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  FUN_00414f10(param_1);
  FUN_004016c0(param_1,param_1,8,0,0,0);
  if (*(int *)(DAT_00436ea0 + 200) == 0) {
    iVar1 = param_1[0x12];
    (**(code **)(*param_1 + 0x54))
              (*(undefined4 *)(iVar1 + 0xe),
               *(int *)((int)param_1 + 0x16) -
               *(int *)((uint)*(byte *)(iVar1 + 8) * 0x1d + 0x11 + *(int *)(*(int *)(iVar1 + 4) + 4)
                       ));
  }
  return;
}

