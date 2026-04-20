/*
 * Program: Launcher.exe
 * Function: FUN_004023b0
 * Entry: 004023b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004023b0(int param_1)
 */


undefined4 __fastcall FUN_004023b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT local_10;
  
  Ordinal_4173();
  GetClientRect(*(HWND *)(param_1 + 0xf4),&local_10);
  (**(code **)(*(int *)(param_1 + 0x70) + 0xbc))
            (param_1 + 0xd4,&local_10,*(undefined4 *)(param_1 + 0x68),0x3eb,2,0);
  Ordinal_5492(*(undefined4 *)(param_1 + 0x6c));
  iVar2 = GetSystemMetrics(7);
  iVar3 = GetSystemMetrics(8);
  iVar1 = *(int *)(*(int *)(param_1 + 0xb8) + 4);
  Ordinal_5490(Ordinal_5653_exref,0,0,*(int *)(iVar1 + 4) + iVar2 * 2,
               *(int *)(iVar1 + 8) + iVar3 * 2,0x82);
  Ordinal_1532(0);
  Ordinal_5490(0,0,0,0,0,0x47);
  return 1;
}

