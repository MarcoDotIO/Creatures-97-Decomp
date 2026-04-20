/*
 * Program: Creatures.exe
 * Function: FUN_00428eb0
 * Entry: 00428eb0
 * Namespace: Global
 * Prototype: undefined4 FUN_00428eb0(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00428eb0(void *this,undefined4 param_1)

{
  HINSTANCE hInstance;
  HICON pHVar1;
  HCURSOR pHVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 uVar5;
  LPCSTR lpIconName;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  Ordinal_1035();
  Ordinal_1035();
  uVar12 = 0;
  uVar11 = 0;
  uVar3 = *(undefined4 *)(DAT_00436ea8 + 0x20);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0x90c00000;
  lpIconName = (LPCSTR)0x80;
  hInstance = (HINSTANCE)Ordinal_1014(0x80,0xe);
  pHVar1 = LoadIconA(hInstance,lpIconName);
  uVar5 = 0;
  pHVar2 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  uVar5 = Ordinal_1090(3,pHVar2,uVar5,pHVar1);
  uVar3 = Ordinal_1869(0,uVar5,param_1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar3,uVar11,uVar12);
  local_10 = 0;
  local_8 = 0x80;
  local_4 = 0x60;
  local_c = 0;
  (**(code **)(*(int *)this + 100))(&local_10,0);
  FUN_004084c0(&DAT_00439e50,0,s_EyePosn_00436e90,&stack0xffffffe0,unaff_ESI,unaff_EBX);
  iVar4 = GetSystemMetrics(0x10);
  if (unaff_ESI < iVar4) {
    iVar4 = GetSystemMetrics(0x11);
    if (unaff_EBX < iVar4) goto LAB_00428f8a;
  }
  unaff_ESI = 0;
  unaff_EBX = 0;
LAB_00428f8a:
  local_10 = local_10 + unaff_ESI;
  local_c = local_c + unaff_EBX;
  Ordinal_3786(unaff_ESI,unaff_EBX,local_10 - unaff_ESI,local_c - unaff_EBX,1);
  FUN_00428d50();
  return uVar3;
}

