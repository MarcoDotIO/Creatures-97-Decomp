/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405970
 * Entry: 00405970
 * Namespace: Global
 * Prototype: undefined4 FUN_00405970(void * param_1)
 */


undefined4 __fastcall FUN_00405970(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  HINSTANCE pHVar3;
  RECT *pRVar4;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR pCVar5;
  CHAR local_94 [96];
  int local_34 [3];
  HICON local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405c50;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)param_1 + 0xc88) = 0;
  *(undefined4 *)((int)param_1 + 0xc8c) = 0;
  *(undefined4 *)((int)param_1 + 0xc90) = 0;
  *(undefined4 *)((int)param_1 + 0xc94) = 0;
  *(undefined4 *)((int)param_1 + 0xc98) = 0;
  *(undefined4 *)((int)param_1 + 0xd40) = 0;
  *(undefined4 *)((int)param_1 + 0xd44) = 0;
  *(undefined4 *)((int)param_1 + 0xd48) = 0;
  *(undefined4 *)((int)param_1 + 0xd4c) = 0;
  *(undefined4 *)((int)param_1 + 0xca0) = 0;
  *(undefined4 *)((int)param_1 + 0xd54) = 0;
  *(undefined4 *)((int)param_1 + 0xd58) = 0;
  *(undefined4 *)((int)param_1 + 0x870) = 0;
  *(undefined4 *)((int)param_1 + 0x87c) = 0;
  *(undefined4 *)((int)param_1 + 0x880) = 0;
  *(undefined4 *)((int)param_1 + 0x878) = 1;
  local_14 = param_1;
  iVar1 = FUN_00405c70(param_1,local_34 + 2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *(uint *)((int)local_14 + 0x2194) = (uint)(local_34[2] == 2);
    FUN_004066f0((int)local_14);
    if (*(int *)((int)local_14 + 0x2194) == 0) {
      local_34[0] = 0;
      local_34[1] = 0;
      Ordinal_486();
      local_8 = 2;
      Ordinal_3656(0x67);
      Ordinal_486();
      local_8._0_1_ = 3;
      Ordinal_3656(0x68);
      local_24 = 0x3b;
      local_20 = 0x40;
      Ordinal_5492(local_18);
      Ordinal_5492(local_1c);
      pRVar4 = (RECT *)((int)local_14 + 0x828);
      FUN_004016f0((void *)((int)local_14 + 0x2168),
                   *(void **)(*(int *)((int)local_14 + 0x70c) + 0x48),0,local_34,(int *)pRVar4);
      FUN_0040ba60(*(void **)((int)local_14 + 0x70c),pRVar4,0,0);
      Ordinal_1035();
      pCVar5 = (LPCSTR)0xbc;
      pHVar3 = (HINSTANCE)Ordinal_1014(0xbc,0xe);
      local_28 = LoadIconA(pHVar3,pCVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      *(undefined4 *)((int)local_14 + 0x884) = 0;
      FUN_00405c48();
      local_8 = 0xffffffff;
      FUN_00405c5a();
    }
    else {
      local_20 = 0x3f;
      local_24 = 0x42;
      Ordinal_486();
      local_8 = 0;
      Ordinal_3656(0x65);
      Ordinal_486();
      local_8._0_1_ = 1;
      Ordinal_3656(0x66);
      Ordinal_5492(local_18);
      Ordinal_5492(local_1c);
      Ordinal_1035();
      pCVar5 = (LPCSTR)0xbb;
      pHVar3 = (HINSTANCE)Ordinal_1014(0xbb,0xe);
      local_28 = LoadIconA(pHVar3,pCVar5);
      FUN_0040ba60(*(void **)((int)local_14 + 0x70c),(RECT *)0x0,0,0);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00405ae1();
      local_8 = 0xffffffff;
      FUN_00405ae9();
    }
    SendMessageA(*(HWND *)((int)local_14 + 0x2404),0x170,(WPARAM)local_28,0);
    InvalidateRect(*(HWND *)((int)local_14 + 0x2404),(RECT *)0x0,0);
    wsprintfA(local_94,s_inst_dde__putv_chem__d_dde__putv_004123d8,local_20,0xd,local_24,0x41,0x3b);
    FUN_00406fc0(local_14,local_94);
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

