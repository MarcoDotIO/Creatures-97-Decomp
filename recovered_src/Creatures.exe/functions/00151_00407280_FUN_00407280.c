/*
 * Program: Creatures.exe
 * Function: FUN_00407280
 * Entry: 00407280
 * Namespace: Global
 * Prototype: undefined4 FUN_00407280(void * this, LPCSTR param_1, undefined2 param_2, undefined2 param_3)
 */


undefined4 __thiscall FUN_00407280(void *this,LPCSTR param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  BOOL BVar2;
  UINT_PTR local_30 [12];
  
  local_30[0] = 0x8053;
  local_30[1] = 0x8054;
  local_30[2] = 0x8055;
  local_30[3] = 0x8056;
  local_30[4] = 0x8057;
  local_30[5] = 0x8058;
  local_30[6] = 0x8059;
  local_30[7] = 0x805a;
  local_30[8] = 0x805b;
  local_30[9] = 0x805c;
  local_30[10] = 0x805d;
  local_30[0xb] = 0x805e;
  if (*(int *)((int)this + 0xe0) == 6) {
    return 0;
  }
  Ordinal_762(param_1);
  *(undefined2 *)((int)this + *(int *)((int)this + 0xe0) * 0xc + 0xa0) = param_2;
  *(undefined2 *)((int)this + *(int *)((int)this + 0xe0) * 0xc + 0xa2) = param_3;
  iVar1 = FUN_004071a0();
  BVar2 = AppendMenuA(*(HMENU *)(iVar1 + 4),0,local_30[*(int *)((int)this + 0xe0)],param_1);
  if (BVar2 == 0) {
    Ordinal_762(&DAT_00435c44);
    return 0;
  }
  *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + 1;
  return 1;
}

