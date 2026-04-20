/*
 * Program: Health_Kit.exe
 * Function: FUN_0040ab90
 * Entry: 0040ab90
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ab90(int param_1)
 */


undefined4 __fastcall FUN_0040ab90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  tagRECT local_10;
  
  iVar1 = Ordinal_729();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0040aca0(iVar1);
  if (iVar2 == 0) {
    Ordinal_731();
    return 0;
  }
  GetClientRect(*(HWND *)(*(int *)(param_1 + 0x17cc) + 0x20),&local_10);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x138) + 0xc4))
                    (*(undefined4 *)(param_1 + 0x17cc),&local_10,0,0x474,1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x19c);
  piVar4 = (int *)(param_1 + 0x5bc);
  iVar2 = 1;
  piVar5 = (int *)(param_1 + 0x17d0);
  do {
    GetClientRect(*(HWND *)(*piVar5 + 0x20),(LPRECT)&stack0xffffffd4);
    iVar3 = (**(code **)(*piVar4 + 0xc4))(*piVar5,&stack0xffffffd4,0,0x474,1,iVar1,uVar6);
    if (iVar3 == 0) {
      return 0;
    }
    piVar4 = piVar4 + 0x121;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  Ordinal_731(iVar1);
  return 1;
}

