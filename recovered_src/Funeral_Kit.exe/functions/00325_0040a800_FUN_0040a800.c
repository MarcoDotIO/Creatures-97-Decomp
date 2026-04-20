/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040a800
 * Entry: 0040a800
 * Namespace: Global
 * Prototype: undefined4 FUN_0040a800(int param_1)
 */


undefined4 __fastcall FUN_0040a800(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  HBITMAP pHVar5;
  int iVar6;
  uint uVar7;
  undefined4 *unaff_FS_OFFSET;
  HDC local_28;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a9ce;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      Ordinal_731(*(int *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    puVar2 = (undefined4 *)Ordinal_729(0x228);
    *(undefined4 **)(param_1 + 0x50) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x48) + 4);
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      }
      iVar6 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x20) = 0;
      puVar3 = (undefined2 *)(*(int *)(param_1 + 0x50) + 0x28);
      do {
        *puVar3 = (short)iVar6;
        puVar3 = puVar3 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x100);
      if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x4c) + 4))(1);
      }
      puVar2 = (undefined4 *)Ordinal_729(0xc);
      local_8 = 0;
      puVar4 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar4 = FUN_00408240(puVar2);
      }
      local_8 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x4c) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        Ordinal_285(param_1);
        local_8 = 1;
        iVar6 = FUN_00408360(*(void **)(param_1 + 0x4c),*(int *)(param_1 + 0x48));
        if (iVar6 != 0) {
          if (*(HGDIOBJ *)(param_1 + 0x54) != (HGDIOBJ)0x0) {
            DeleteObject(*(HGDIOBJ *)(param_1 + 0x54));
          }
          uVar1 = Ordinal_5127(*(undefined4 *)(param_1 + 0x4c),0);
          RealizePalette(local_28);
          local_14 = (undefined4 *)0x0;
          pHVar5 = CreateDIBSection(local_28,*(BITMAPINFO **)(param_1 + 0x50),1,&local_14,
                                    (HANDLE)0x0,0);
          *(HBITMAP *)(param_1 + 0x54) = pHVar5;
          Ordinal_5127(uVar1,0);
          iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 4);
          puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x48) + 8);
          puVar4 = local_14;
          for (uVar7 = (*(int *)(iVar6 + 4) + 3U & 0xfffffffc) * *(int *)(iVar6 + 8) >> 2;
              uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar4 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar4 = puVar4 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          FUN_00405010(*(int *)(param_1 + 0x48));
          iVar6 = *(int *)(param_1 + 0x48);
          local_8 = 0xffffffff;
          *(undefined4 **)(iVar6 + 8) = local_14;
          *(undefined4 *)(iVar6 + 0xc) = 0;
          FUN_0040a9c6();
          uVar1 = 1;
          goto LAB_0040a828;
        }
        if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x4c) + 4))(1);
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        local_8 = 0xffffffff;
        FUN_0040a9c6();
      }
    }
  }
  uVar1 = 0;
LAB_0040a828:
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

