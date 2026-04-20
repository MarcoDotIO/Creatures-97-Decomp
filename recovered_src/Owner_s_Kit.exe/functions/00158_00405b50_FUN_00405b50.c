/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405b50
 * Entry: 00405b50
 * Namespace: Global
 * Prototype: undefined4 FUN_00405b50(void * param_1)
 */


undefined4 __fastcall FUN_00405b50(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_6c [36];
  ushort *local_48;
  ushort *local_44;
  undefined1 local_28 [16];
  uint local_18;
  undefined2 uStack_14;
  ushort local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405d22;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  iVar2 = FUN_00409d50(*(void **)((int)param_1 + 0x8c),1,*(int *)((int)param_1 + 0x138));
  *(int *)((int)param_1 + 0x138) = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    bVar1 = FUN_00409e50(*(void **)((int)param_1 + 0x8c),iVar2,s_dde__getb_monk_004121e0);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = FUN_00409f90(*(void **)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x138),0);
      if (iVar2 != 0) {
        Ordinal_762(*(undefined4 *)(*(int *)((int)param_1 + 0x8c) + 0x1fc));
        Ordinal_836(s__Photo_Album_00412360);
        Ordinal_340();
        local_8 = 0;
        iVar2 = Ordinal_4619(*(undefined4 *)((int)param_1 + 0x118),0,0);
        if (iVar2 == 0) {
          FUN_00405fa0((int)param_1);
          local_8 = 0xffffffff;
          FUN_00405d2c();
          uVar3 = FUN_00405d34();
          return uVar3;
        }
        Ordinal_271(local_28,1,0x1000,0);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_44 < local_48 + 1) {
          Ordinal_2403((int)local_48 + (2 - (int)local_44));
        }
        iVar2 = 0;
        local_12 = *local_48;
        local_48 = local_48 + 1;
        local_18 = (uint)local_12;
        if (local_12 != 0) {
          do {
            piVar5 = (int *)0x0;
            puVar4 = (undefined4 *)Ordinal_729(0x18);
            uStack_14 = SUB42(puVar4,0);
            local_12 = (ushort)((uint)puVar4 >> 0x10);
            local_8._0_1_ = 2;
            if (puVar4 != (undefined4 *)0x0) {
              piVar5 = FUN_004073d0(puVar4);
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            if (piVar5 == (int *)0x0) {
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00405d1a();
              local_8 = 0xffffffff;
              FUN_00405d2c();
              uVar3 = FUN_00405d34();
              return uVar3;
            }
            iVar2 = iVar2 + 1;
            (**(code **)(*piVar5 + 8))(local_6c);
            FUN_004060e0(param_1,(int)piVar5);
          } while (iVar2 < (int)local_18);
        }
        Ordinal_1717();
        Ordinal_1725();
        FUN_00405fa0((int)param_1);
        local_8 = local_8 & 0xffffff00;
        FUN_00405d1a();
        local_8 = 0xffffffff;
        FUN_00405d2c();
        uVar3 = 1;
        goto LAB_00405d36;
      }
    }
    uVar3 = 0;
  }
LAB_00405d36:
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return uVar3;
}

