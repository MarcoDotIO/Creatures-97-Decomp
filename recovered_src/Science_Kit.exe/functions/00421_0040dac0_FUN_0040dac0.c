/*
 * Program: Science_Kit.exe
 * Function: FUN_0040dac0
 * Entry: 0040dac0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040dac0(void * this, RECT * param_1, int param_2)
 */


undefined4 __thiscall FUN_0040dac0(void *this,RECT *param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  tagRECT local_28;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040dba4;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (HBRUSH)0x0;
  local_18 = &PTR_LAB_004111a8;
  local_8 = 2;
  local_14 = GetStockObject(0);
  if (param_1 == (RECT *)0x0) {
    CopyRect(&local_28,(RECT *)((int)this + 0x110));
    if (param_2 != 0) {
      local_28.left = local_28.right - param_2;
    }
  }
  else {
    CopyRect(&local_28,param_1);
  }
  FillRect(*(HDC *)((int)this + 0xe8),&local_28,local_14);
  Ordinal_2115();
  local_8 = 0xffffffff;
  FUN_0040dbae();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

