/*
 * Program: Science_Kit.exe
 * Function: FUN_00406dd0
 * Entry: 00406dd0
 * Namespace: Global
 * Prototype: undefined FUN_00406dd0(void * this, int param_1)
 */


void __thiscall FUN_00406dd0(void *this,int param_1)

{
  int iVar1;
  RECT local_10;
  
  iVar1 = *(int *)((int)this + 0x120);
  if (iVar1 == param_1) {
    return;
  }
  local_10.left = *(LONG *)((int)this + 0xa1c);
  local_10.right = *(LONG *)((int)this + 0xa24);
  local_10.bottom = *(int *)((int)this + 0x530);
  if (iVar1 < param_1) {
    local_10.top = local_10.bottom - param_1;
    local_10.bottom = local_10.bottom - iVar1;
    iVar1 = 1;
  }
  else {
    local_10.top = local_10.bottom - iVar1;
    local_10.bottom = local_10.bottom - param_1;
    iVar1 = 0;
    if (*(int *)((int)this + 0xac) != 1) {
      *(undefined4 *)((int)this + 0xa8) = 5;
      goto LAB_00406e58;
    }
  }
  *(undefined4 *)((int)this + 0xa8) = 0;
LAB_00406e58:
  *(int *)((int)this + 0x120) = param_1;
  FUN_0040bba0((void *)((int)this + 0x97c),*(void **)((int)this + 0xfc),0,(int *)((int)this + 0xa14)
               ,&local_10.left,iVar1);
  FUN_0040bba0((void *)((int)this + 0x954),*(void **)((int)this + 0xfc),0,(int *)((int)this + 0x9fc)
               ,(int *)0x0,*(int *)((int)this + 0xa8));
  FUN_00410050((void *)((int)this + 0xb4),(RECT *)((int)this + 0xa04),0,0);
  FUN_00410050((void *)((int)this + 0xb4),&local_10,0,0);
  *(undefined4 *)((int)this + 0xac) = 0;
  return;
}

