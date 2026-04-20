/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004081b0
 * Entry: 004081b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004081b0(void * param_1)
 */


undefined4 __fastcall FUN_004081b0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_6c [36];
  ushort *local_48;
  ushort *local_44;
  undefined1 local_28 [16];
  uint local_18;
  undefined2 local_14;
  ushort uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040835c;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_340();
  local_8 = 0;
  iVar1 = Ordinal_4619(*(undefined4 *)((int)param_1 + 0xb4),0,0);
  if (iVar1 == 0) {
LAB_004081f6:
    local_8 = 0xffffffff;
    FUN_00408366();
    uVar2 = 0;
  }
  else {
    Ordinal_271(local_28,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_44 < local_48 + 1) {
      Ordinal_2403((int)local_48 + (2 - (int)local_44));
    }
    iVar1 = 0;
    uStack_12 = *local_48;
    local_48 = local_48 + 1;
    local_18 = (uint)uStack_12;
    if (uStack_12 != 0) {
      do {
        piVar4 = (int *)0x0;
        puVar3 = (undefined4 *)Ordinal_729(0x24);
        local_14 = SUB42(puVar3,0);
        uStack_12 = (ushort)((uint)puVar3 >> 0x10);
        local_8._0_1_ = 2;
        if (puVar3 != (undefined4 *)0x0) {
          piVar4 = FUN_00403110(puVar3);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (piVar4 == (int *)0x0) {
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408354();
          goto LAB_004081f6;
        }
        iVar1 = iVar1 + 1;
        (**(code **)(*piVar4 + 8))(local_6c);
        FUN_00408620(param_1,(int)piVar4);
      } while (iVar1 < (int)local_18);
    }
    FUN_00408550((int)param_1);
    InvalidateRect(*(HWND *)((int)param_1 + 0x3b4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)((int)param_1 + 0x3f4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)((int)param_1 + 0x334),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)((int)param_1 + 500),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)((int)param_1 + 0x2b4),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)((int)param_1 + 0x254),(RECT *)0x0,0);
    Ordinal_1717();
    Ordinal_1725();
    local_8 = local_8 & 0xffffff00;
    FUN_00408354();
    local_8 = 0xffffffff;
    FUN_00408366();
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return uVar2;
}

