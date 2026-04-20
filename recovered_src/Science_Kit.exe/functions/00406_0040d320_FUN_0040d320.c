/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d320
 * Entry: 0040d320
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d320(int param_1)
 */


undefined4 __fastcall FUN_0040d320(int param_1)

{
  HDC pHVar1;
  int iVar2;
  undefined4 uVar3;
  HBITMAP pHVar4;
  LONG LVar5;
  uint uVar6;
  uint cb;
  int cy;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_40 [18];
  ushort local_2e;
  HDC local_24;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040d4a7;
  *unaff_FS_OFFSET = &local_10;
  GetClientRect(*(HWND *)(param_1 + 3000),(LPRECT)(param_1 + 0x100));
  Ordinal_285(param_1 + 0xb98);
  local_8 = 0;
  pHVar1 = CreateCompatibleDC(local_24);
  iVar2 = Ordinal_1425(pHVar1);
  if (iVar2 != 0) {
    cy = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x104);
    local_14 = (undefined4 *)
               (((*(int *)(param_1 + 0x108) - ((LPRECT)(param_1 + 0x100))->left) + 7U & 0xfffffff8)
               + 8);
    pHVar4 = CreateCompatibleBitmap(local_24,(int)local_14,cy);
    iVar2 = Ordinal_1426(pHVar4);
    if (iVar2 != 0) {
      iVar2 = GetObjectA(*(HANDLE *)(param_1 + 0xf8),0x18,local_40);
      if (iVar2 != 0) {
        cb = (uint)local_2e * (int)local_14 * cy;
        local_14 = (undefined4 *)Ordinal_729(cb);
        if (local_14 != (undefined4 *)0x0) {
          puVar7 = local_14;
          for (uVar6 = cb >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0xffffffff;
            puVar7 = puVar7 + 1;
          }
          for (uVar6 = cb & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar7 = 0xff;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          LVar5 = SetBitmapBits(*(HBITMAP *)(param_1 + 0xf8),cb,local_14);
          if (LVar5 == 0) {
            Ordinal_731(local_14);
          }
          else {
            Ordinal_731(local_14);
            uVar3 = 0;
            if (param_1 != -0xf4) {
              uVar3 = *(undefined4 *)(param_1 + 0xf8);
            }
            iVar2 = Ordinal_5121(*(undefined4 *)(param_1 + 0xe8),uVar3);
            *(int *)(param_1 + 0xfc) = iVar2;
            if (iVar2 != 0) {
              FUN_0040dfc0(param_1);
              local_8 = 0xffffffff;
              FUN_0040d4b1();
              uVar3 = 1;
              goto LAB_0040d392;
            }
          }
        }
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_0040d4b1();
  uVar3 = 0;
LAB_0040d392:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

