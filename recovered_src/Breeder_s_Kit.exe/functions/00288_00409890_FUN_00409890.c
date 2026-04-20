/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00409890
 * Entry: 00409890
 * Namespace: Global
 * Prototype: undefined FUN_00409890(void * this, int param_1)
 */


void __thiscall FUN_00409890(void *this,int param_1)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = *(int *)(*(int *)((int)this + 4) + 8);
  uVar2 = *(int *)(*(int *)((int)this + 4) + 4) + 3U & 0xfffffffc;
  if (param_1 < 1) {
    iVar1 = -param_1;
  }
  else {
    iVar1 = param_1;
    param_1 = -param_1;
  }
  local_4 = uVar2 + param_1;
  _Dst = *(void **)((int)this + 8);
  _Src = (void *)((int)*(void **)((int)this + 8) + iVar1);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    memmove(_Dst,_Src,local_4);
    _Dst = (void *)((int)_Dst + uVar2);
    _Src = (void *)((int)_Src + uVar2);
  }
  return;
}

