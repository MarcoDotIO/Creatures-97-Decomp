/*
 * Program: remove.exe
 * Function: FUN_004017e0
 * Entry: 004017e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004017e0(LPCSTR param_1)
 */


undefined4 FUN_004017e0(LPCSTR param_1)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 *puVar3;
  HKEY local_10c;
  DWORD local_108;
  DWORD local_104;
  BYTE local_100;
  undefined4 local_ff;
  
  local_100 = DAT_004047f0;
  puVar3 = &local_ff;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Millennium_Interactive__004047c0,0,1,&local_10c)
  ;
  if (LVar1 == 0) {
    local_108 = 0x100;
    LVar1 = RegQueryValueExA(local_10c,param_1,(LPDWORD)0x0,&local_104,&local_100,&local_108);
    RegCloseKey(local_10c);
    if (LVar1 == 0) {
      Ordinal_762(&local_100);
      return 1;
    }
  }
  return 0;
}

