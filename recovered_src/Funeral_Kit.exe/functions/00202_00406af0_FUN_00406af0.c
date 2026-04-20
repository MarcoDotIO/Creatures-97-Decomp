/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406af0
 * Entry: 00406af0
 * Namespace: Global
 * Prototype: uint FUN_00406af0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)
 */


uint __thiscall FUN_00406af0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HKEY hKey;
  undefined4 *unaff_FS_OFFSET;
  DWORD local_1c;
  DWORD local_18;
  uint local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406b80;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    local_8 = 0xffffffff;
    FUN_00406b8a();
    local_14 = 0;
  }
  else {
    local_18 = param_4;
    if (param_1 == 0) {
      hKey = *(HKEY *)((int)this + 0x18);
    }
    else {
      hKey = *(HKEY *)((int)this + 0x14);
    }
    LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,&local_1c,param_3,&local_18);
    local_8 = 0xffffffff;
    local_14 = (uint)(LVar1 == 0);
    FUN_00406b8a();
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

