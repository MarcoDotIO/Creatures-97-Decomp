/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040a590
 * Entry: 0040a590
 * Namespace: Global
 * Prototype: undefined4 FUN_0040a590(int param_1)
 */


undefined4 __fastcall FUN_0040a590(int param_1)

{
  UINT UVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  HDC local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a60f;
  *unaff_FS_OFFSET = &local_10;
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    Ordinal_285(param_1);
    local_8 = 0;
    Ordinal_5127(*(undefined4 *)(param_1 + 0x4c),0);
    UVar1 = RealizePalette(local_20);
    local_8 = 0xffffffff;
    if (UVar1 != 0) {
      FUN_0040a619();
      uVar2 = 1;
      goto LAB_0040a600;
    }
    FUN_0040a619();
  }
  uVar2 = 0;
LAB_0040a600:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

