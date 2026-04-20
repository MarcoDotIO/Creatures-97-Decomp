/*
 * Program: Science_Kit.exe
 * Function: FUN_00405dc0
 * Entry: 00405dc0
 * Namespace: Global
 * Prototype: uint FUN_00405dc0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 */


uint __thiscall
FUN_00405dc0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405e84;
  *unaff_FS_OFFSET = &local_10;
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    if (param_2 == 0) {
      puVar2 = FUN_00405ce0(this,param_1);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 3;
      }
      else {
        iVar3 = FUN_004056e0(this,(int)puVar2);
        uVar4 = -(uint)(iVar3 == -1) & 3;
      }
    }
    else {
      bVar1 = FUN_00405d90(this,param_1);
      uVar4 = CONCAT31(extraout_var,bVar1);
      if (uVar4 == 0) {
        puVar2 = (undefined4 *)Ordinal_729(0x14);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = &PTR_LAB_004112c0;
          *puVar2 = &PTR_LAB_00411750;
        }
        local_8 = 0xffffffff;
        puVar2[1] = param_1;
        puVar2[2] = param_2;
        puVar2[3] = param_3;
        puVar2[4] = param_4;
        Ordinal_5191(*(undefined4 *)((int)this + 0x2a0),puVar2);
      }
    }
  }
  else {
    uVar4 = 6;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}

