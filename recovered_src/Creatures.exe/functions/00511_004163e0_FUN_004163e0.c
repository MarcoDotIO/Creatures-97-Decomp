/*
 * Program: Creatures.exe
 * Function: FUN_004163e0
 * Entry: 004163e0
 * Namespace: Global
 * Prototype: undefined FUN_004163e0(int param_1)
 */


void __fastcall FUN_004163e0(int param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_0041a4a0(*(void **)(param_1 + 0x48),&local_10);
  FUN_0041a560(*(int *)(param_1 + 0x48));
  FUN_0040f550(*(void **)(param_1 + 0x1a),&local_3c,&local_28,&local_24);
  local_3c = local_3c -
             *(int *)((uint)*(byte *)(*(int *)(param_1 + 0x48) + 8) * 0x1d + 0xd +
                     *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 4) + 4)) / 2;
  FUN_0040b1b0(&local_3c);
  this = *(void **)(param_1 + 0x48);
  local_28 = local_28 -
             *(int *)((uint)*(byte *)((int)this + 8) * 0x1d + 0x11 +
                     *(int *)(*(int *)((int)this + 4) + 4)) / 2;
  FUN_0041a310(this,local_3c,local_28);
  *(int *)(*(int *)(param_1 + 0x48) + 10) = local_24;
  FUN_0041a4a0(*(void **)(param_1 + 0x48),&local_20);
  iVar1 = FUN_0040b250(&local_10,&local_20);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0040b450(&local_38,&local_20,&local_10);
    local_38 = *piVar2;
    local_34 = piVar2[1];
    local_30 = piVar2[2];
    local_2c = piVar2[3];
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
    local_14 = local_2c;
    FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_38,local_34,local_30,local_2c);
    return;
  }
  local_38 = local_10;
  local_34 = local_c;
  local_30 = local_8;
  local_2c = local_4;
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_10,local_c,local_8,local_4);
  local_38 = local_20;
  local_34 = local_1c;
  local_30 = local_18;
  local_2c = local_14;
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_20,local_1c,local_18,local_14);
  return;
}

