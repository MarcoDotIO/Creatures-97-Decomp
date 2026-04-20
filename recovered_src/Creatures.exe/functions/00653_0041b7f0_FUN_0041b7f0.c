/*
 * Program: Creatures.exe
 * Function: FUN_0041b7f0
 * Entry: 0041b7f0
 * Namespace: Global
 * Prototype: undefined4 FUN_0041b7f0(int param_1, int param_2)
 */


undefined4 __cdecl FUN_0041b7f0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_68 [12];
  uint local_5c;
  undefined1 local_4c [4];
  undefined4 *local_48;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041b90b;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041b520(local_4c,param_1,1,0);
  local_8 = 0;
  FUN_0041b520(local_68,param_2,1,0);
  local_8._0_1_ = 1;
  FUN_0041b420(&local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0041bca0((int)&local_2c);
  uVar1 = local_40;
  if ((int)local_40 < (int)local_5c) {
    uVar1 = local_5c;
  }
  local_28 = (undefined4 *)Ordinal_729(uVar1 + 500);
  local_20 = 0;
  if (param_2 == 0) {
    puVar2 = local_28;
    for (uVar1 = local_40 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *local_48;
      local_48 = local_48 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = local_40 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)local_48;
      local_48 = (undefined4 *)((int)local_48 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    local_20 = local_40;
  }
  else {
    FUN_0041b9b0(&local_2c,local_4c,local_68);
  }
  FUN_0041bd90((int)&local_2c);
  *(int *)(local_24 + 0xb) = param_1;
  *(int *)(local_24 + 0xf) = param_2;
  FUN_0041b920((int)&local_2c);
  local_8._0_1_ = 1;
  local_30 = local_1c;
  FUN_0041b8fb();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041b903();
  local_8 = 0xffffffff;
  FUN_0041b915();
  *unaff_FS_OFFSET = local_10;
  return local_30;
}

