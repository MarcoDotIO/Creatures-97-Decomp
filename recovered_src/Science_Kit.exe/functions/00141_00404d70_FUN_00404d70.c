/*
 * Program: Science_Kit.exe
 * Function: FUN_00404d70
 * Entry: 00404d70
 * Namespace: Global
 * Prototype: bool FUN_00404d70(void * this, int param_1, LPCSTR param_2)
 */


bool __thiscall FUN_00404d70(void *this,int param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  HKEY hKey;
  undefined4 *unaff_FS_OFFSET;
  bool bVar2;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404df6;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    local_8 = 0xffffffff;
    FUN_00404e00();
    bVar2 = false;
  }
  else {
    if (param_1 == 0) {
      hKey = *(HKEY *)((int)this + 0x18);
    }
    else {
      hKey = *(HKEY *)((int)this + 0x14);
    }
    LVar1 = RegSetValueExA(hKey,param_2,0,4,&stack0x0000000c,4);
    bVar2 = LVar1 == 0;
    local_8 = 0xffffffff;
    FUN_00404e00();
  }
  *unaff_FS_OFFSET = local_10;
  return bVar2;
}

