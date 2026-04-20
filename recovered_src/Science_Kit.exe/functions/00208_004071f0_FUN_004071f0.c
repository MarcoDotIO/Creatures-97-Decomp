/*
 * Program: Science_Kit.exe
 * Function: FUN_004071f0
 * Entry: 004071f0
 * Namespace: Global
 * Prototype: undefined FUN_004071f0(void * param_1)
 */


void __fastcall FUN_004071f0(void *param_1)

{
  LRESULT LVar1;
  int iVar2;
  void *this;
  void *pvVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int local_10 [3];
  undefined4 local_4;
  
  if (*(int *)((int)param_1 + 0x950) != 0) {
    SendMessageA(*(HWND *)((int)param_1 + 0xa98),0x14e,*(WPARAM *)((int)param_1 + 0x94c),0);
    return;
  }
  LVar1 = SendMessageA(*(HWND *)((int)param_1 + 0xa98),0x147,0,0);
  *(LRESULT *)((int)param_1 + 0x118) = LVar1;
  *(LRESULT *)((int)param_1 + 0x94c) = LVar1;
  FUN_00406bd0();
  iVar2 = *(int *)((int)param_1 + 0x120);
  while (iVar2 != 0) {
    *(undefined4 *)((int)param_1 + 0xac) = 1;
    iVar2 = *(int *)((int)param_1 + 0x120) + -4;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    FUN_00406dd0(param_1,iVar2);
    iVar2 = *(int *)((int)param_1 + 0x120);
  }
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  SendMessageA(*(HWND *)((int)param_1 + 0xa58),0x405,1,0xff);
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  local_10[0] = *(int *)((int)param_1 + 0xa1c);
  *(undefined4 *)((int)param_1 + 0x950) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  local_10[2] = *(undefined4 *)((int)param_1 + 0xa24);
  local_4 = *(undefined4 *)((int)param_1 + 0xa28);
  local_10[1] = 0xdf;
  for (iVar2 = 0; iVar2 < 0x18; iVar2 = iVar2 + 4) {
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x95c) + iVar2);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(1);
    }
  }
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 4) {
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x984) + iVar2);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(1);
    }
  }
  if (*(int *)((int)param_1 + 0x9f8) != 0) {
    Ordinal_731(*(int *)((int)param_1 + 0x9f8));
    *(undefined4 *)((int)param_1 + 0x9f8) = 0;
  }
  switch(*(undefined4 *)((int)param_1 + 0x118)) {
  case 0:
    pcVar5 = s_ydosage_spr_004154ac;
    break;
  case 1:
    FUN_00406bf0(param_1,s_odosage_spr_004154a0);
    FUN_0040bba0((void *)((int)param_1 + 0x97c),*(void **)((int)param_1 + 0xfc),0,
                 (int *)((int)param_1 + 0xa14),local_10,1);
    iVar2 = 0;
    piVar4 = (int *)((int)param_1 + 0x9fc);
    piVar6 = (int *)0x0;
    pvVar3 = *(void **)((int)param_1 + 0xfc);
    this = (void *)((int)param_1 + 0x954);
    goto LAB_00407478;
  case 2:
    pcVar5 = s_bdosage_spr_00415494;
    break;
  case 3:
    pcVar5 = s_cdosage_spr_00415488;
    break;
  case 4:
    pcVar5 = s_pdosage_spr_0041547c;
    break;
  case 5:
    pcVar5 = s_sdosage_spr_00415470;
    break;
  case 6:
  case 0xb:
  case 0x10:
    pcVar5 = s_dosage_spr_00415458;
    break;
  case 7:
    pcVar5 = s_bdosage_spr_00415494;
    break;
  case 8:
    pcVar5 = s_cdosage_spr_00415488;
    break;
  case 9:
    pcVar5 = s_pdosage_spr_0041547c;
    break;
  case 10:
    pcVar5 = s_odosage_spr_004154a0;
    break;
  case 0xc:
    pcVar5 = s_pdosage_spr_0041547c;
    break;
  case 0xd:
    pcVar5 = s_cdosage_spr_00415488;
    break;
  case 0xe:
    pcVar5 = s_bdosage_spr_00415494;
    break;
  case 0xf:
    pcVar5 = s_odosage_spr_004154a0;
    break;
  default:
    pcVar5 = s_bdosage_spr_00415494;
  }
  FUN_00406bf0(param_1,pcVar5);
  FUN_0040bba0((void *)((int)param_1 + 0x954),*(void **)((int)param_1 + 0xfc),0,
               (int *)((int)param_1 + 0x9fc),(int *)0x0,0);
  piVar6 = local_10;
  iVar2 = 1;
  piVar4 = (int *)((int)param_1 + 0xa14);
  pvVar3 = *(void **)((int)param_1 + 0xfc);
  this = (void *)((int)param_1 + 0x97c);
LAB_00407478:
  FUN_0040bba0(this,pvVar3,0,piVar4,piVar6,iVar2);
  FUN_00410050((void *)((int)param_1 + 0xb4),(RECT *)0x0,0,0);
  return;
}

