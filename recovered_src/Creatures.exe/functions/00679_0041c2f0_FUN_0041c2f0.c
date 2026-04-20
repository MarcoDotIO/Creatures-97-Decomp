/*
 * Program: Creatures.exe
 * Function: FUN_0041c2f0
 * Entry: 0041c2f0
 * Namespace: Global
 * Prototype: undefined FUN_0041c2f0(int param_1)
 */


void __fastcall FUN_0041c2f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041c3f3;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x80); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(param_1 + 0x84 + iVar2 * 4);
    if ((*(uint *)(iVar1 + 4) & 0xff000000) == 0x4000000) {
      iVar1 = (*(char *)(iVar1 + 0x2b78) == '\0') + 0xef1b;
    }
    else {
      iVar1 = 0xef1d;
    }
    Ordinal_3656(iVar1);
    Ordinal_5374(4 - iVar2,local_14,1);
    Ordinal_5373(4 - iVar2,0);
  }
  for (iVar2 = *(int *)(param_1 + 0x80); iVar2 < 4; iVar2 = iVar2 + 1) {
    Ordinal_5373(4 - iVar2,0x4000100);
  }
  if (DAT_004382c4 == 0) {
    uVar3 = 0x4000100;
  }
  else {
    uVar3 = 0;
  }
  Ordinal_5373(6,uVar3);
  FUN_0041c410();
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  local_8 = 0xffffffff;
  FUN_0041c3fd();
  *unaff_FS_OFFSET = local_10;
  return;
}

