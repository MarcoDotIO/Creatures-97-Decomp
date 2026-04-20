/*
 * Program: Creatures.exe
 * Function: FUN_0041b920
 * Entry: 0041b920
 * Namespace: Global
 * Prototype: undefined FUN_0041b920(int param_1)
 */


void __fastcall FUN_0041b920(int param_1)

{
  undefined1 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041b9a0;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = 0x1001;
  puVar1 = FUN_0040b5c0(*(undefined4 *)(param_1 + 0x10),0x4365b8,5);
  Ordinal_339(puVar1,uVar2);
  local_8 = 0;
  Ordinal_5658(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  Ordinal_1725();
  local_8 = 0xffffffff;
  FUN_0041b998();
  *unaff_FS_OFFSET = local_10;
  return;
}

