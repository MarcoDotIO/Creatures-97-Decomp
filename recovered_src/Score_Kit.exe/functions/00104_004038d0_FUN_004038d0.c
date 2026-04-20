/*
 * Program: Score_Kit.exe
 * Function: FUN_004038d0
 * Entry: 004038d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004038d0(int param_1)
 */


undefined4 __fastcall FUN_004038d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_EDI;
  undefined1 *puVar4;
  undefined1 *puVar5;
  tagRECT *ptVar6;
  int iVar7;
  tagRECT local_10;
  
  iVar1 = Ordinal_729();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00404270(iVar1);
  if (iVar2 == 0) {
    Ordinal_731();
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x908),&local_10);
  SetRect(&local_10,0,0,700,local_10.bottom - local_10.top);
  ptVar6 = &local_10;
  iVar7 = 1;
  iVar2 = iVar1;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x94) + 0xbc))();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00406370(*(void **)(param_1 + 0xdc),0xd6);
  GetClientRect(*(HWND *)(param_1 + 0x6c8),(LPRECT)&stack0xffffffd8);
  SetRect((LPRECT)&stack0xffffffd8,0,0,unaff_EBP - iVar7,unaff_EDI - iVar2);
  iVar7 = 0;
  puVar5 = &stack0xffffffd8;
  iVar3 = 1;
  iVar2 = (**(code **)(*(int *)(param_1 + 0xf8) + 0xbc))();
  if (iVar2 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x688),(LPRECT)&stack0xffffffc0);
  SetRect((LPRECT)&stack0xffffffc0,0,0,(param_1 + 0x8e8) - iVar3,(int)ptVar6 - iVar7);
  iVar7 = 0;
  puVar4 = &stack0xffffffc0;
  iVar3 = 1;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x224) + 0xbc))();
  if (iVar2 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x648),(LPRECT)&stack0xffffffa8);
  SetRect((LPRECT)&stack0xffffffa8,0,0,(param_1 + 0x6a8) - iVar3,(int)puVar5 - iVar7);
  iVar7 = 0;
  puVar5 = &stack0xffffffa8;
  iVar3 = 1;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x288) + 0xbc))();
  if (iVar2 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x708),(LPRECT)&stack0xffffff90);
  SetRect((LPRECT)&stack0xffffff90,0,0,(param_1 + 0x668) - iVar3,(int)puVar4 - iVar7);
  iVar7 = 0;
  puVar4 = &stack0xffffff90;
  iVar3 = 1;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2ec) + 0xbc))();
  if (iVar2 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x788),(LPRECT)&stack0xffffff78);
  SetRect((LPRECT)&stack0xffffff78,0,0,(param_1 + 0x628) - iVar3,(int)puVar5 - iVar7);
  iVar7 = 0;
  iVar3 = 1;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x15c) + 0xbc))
                    (param_1 + 0x768,&stack0xffffff78,s_Brdscore_bmp_0040c250,0x474);
  if (iVar2 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 0x748),(LPRECT)&stack0xffffff60);
  SetRect((LPRECT)&stack0xffffff60,0,0,(param_1 + 0x6e8) - iVar3,(int)puVar4 - iVar7);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x1c0) + 0xbc))
                    (param_1 + 0x728,&stack0xffffff60,s_Brdscore_bmp_0040c250,0x474,1,0);
  if (iVar2 == 0) {
    return 0;
  }
  Ordinal_731(iVar1);
  return 1;
}

