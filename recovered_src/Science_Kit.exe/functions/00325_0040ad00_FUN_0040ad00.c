/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ad00
 * Entry: 0040ad00
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ad00(int param_1)
 */


undefined4 __fastcall FUN_0040ad00(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_30;
  tagRECT local_10;
  
  iStack_30 = 0x40ad24;
  GetClientRect(*(HWND *)(param_1 + 0x7e8),&local_10);
  iVar1 = Ordinal_729();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0040af90(iVar1);
  if (iVar2 == 0) {
    Ordinal_731();
    return 0;
  }
  iStack_30 = 0x474;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x94) + 0xbc))(param_1 + 0x7c8,&local_10,0);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0040bba0((void *)(param_1 + 0xf8),*(void **)(param_1 + 0xdc),1,&iStack_30,(int *)0x0,0);
  FUN_00410050((int *)(param_1 + 0x94),(RECT *)0x0,0,0);
  Ordinal_731(iVar1);
  return 1;
}

