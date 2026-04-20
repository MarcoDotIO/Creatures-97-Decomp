/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406a50
 * Entry: 00406a50
 * Namespace: Global
 * Prototype: undefined FUN_00406a50(void * param_1)
 */


void __fastcall FUN_00406a50(void *param_1)

{
  int iVar1;
  int iVar2;
  int local_18 [3];
  int local_c;
  int local_8;
  int local_4;
  
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    if ((*(int *)((int)param_1 + 0x2194) != 0) && (*(int *)((int)param_1 + 0x884) != 0)) {
      *(undefined4 *)((int)param_1 + 0xd4c) = *(undefined4 *)((int)param_1 + 0xd50);
      Ordinal_5492(s_Health_004124b0);
    }
    iVar1 = *(int *)((int)param_1 + 0xcac) - *(int *)((int)param_1 + 0xca4);
    iVar2 = *(int *)((int)param_1 + 0xcb0) - *(int *)((int)param_1 + 0xca8);
    if (iVar1 <= *(int *)((int)param_1 + 0xca0)) {
      *(int *)((int)param_1 + 0xca0) = iVar1 + -4;
      FUN_00409890(*(void **)((int)param_1 + 0x560),-4);
    }
    local_18[1] = 0;
    local_c = 0;
    local_18[0] = *(int *)((int)param_1 + 0xca0);
    local_8 = local_18[0] + 4;
    local_4 = iVar2 - *(int *)((int)param_1 + 0xd4c);
    local_18[2] = local_18[0];
    FUN_0040c0c0((void *)((int)param_1 + 0x72c),*(void **)((int)param_1 + 0x560),0,local_18,
                 local_18 + 2,0);
    local_c = iVar2 - *(int *)((int)param_1 + 0xd4c);
    local_4 = iVar2;
    FUN_0040c0c0((void *)((int)param_1 + 0x72c),*(void **)((int)param_1 + 0x560),0,local_18,
                 local_18 + 2,1);
    *(int *)((int)param_1 + 0xca0) = *(int *)((int)param_1 + 0xca0) + 4;
    FUN_00406b80(param_1,(RECT *)0x0);
    InvalidateRect(*(HWND *)((int)param_1 + 0x2404),(RECT *)0x0,0);
  }
  return;
}

