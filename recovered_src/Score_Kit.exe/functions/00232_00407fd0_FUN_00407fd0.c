/*
 * Program: Score_Kit.exe
 * Function: FUN_00407fd0
 * Entry: 00407fd0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00407fd0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00407fd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040818a;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_0040a018;
  iVar4 = 0x1f;
  puVar2 = param_1 + 4;
  local_14 = param_1;
  do {
    FUN_00407fb0(puVar2);
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 5;
  } while (-1 < iVar4);
  uVar3 = 0;
  Ordinal_374();
  local_8._0_1_ = 1;
  Ordinal_374();
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar2 = param_1 + 1;
  *param_1 = &PTR_LAB_0040acb0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xa5] = 0;
  iVar4 = DirectSoundCreate(0,puVar2,0);
  if (iVar4 == 0) {
    iVar4 = Ordinal_1035();
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0x20);
    if (iVar4 != 0) {
      uVar3 = *(undefined4 *)(iVar4 + 0x20);
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x18))((int *)*puVar2,uVar3,2);
    if (iVar4 == 0) {
      local_30 = 0;
      puVar1 = param_1 + 2;
      local_34 = 0;
      local_2c = 0;
      local_3c = 0x14;
      local_38 = 1;
      iVar4 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,&local_3c,puVar1,0);
      if (iVar4 == 0) {
        (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,local_28,0x12,0);
        local_26 = 2;
        local_24 = 0x5622;
        local_20 = 0x15888;
        local_1c = 4;
        local_1a = 0x10;
        iVar4 = (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,local_28);
        if (iVar4 == 0) {
          iVar4 = 0x20;
          param_1[3] = 0;
          param_1[0xa4] = 1;
          puVar2 = param_1;
          do {
            puVar2 = puVar2 + 5;
            *puVar2 = 0;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          param_1[0xa5] = 1;
          param_1[0xab] = 0;
        }
        else {
          (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,local_28,0x12,0);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

