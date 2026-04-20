/*
 * Program: Health_Kit.exe
 * Function: FUN_00407a40
 * Entry: 00407a40
 * Namespace: Global
 * Prototype: undefined FUN_00407a40(int * param_1)
 */


void __fastcall FUN_00407a40(int *param_1)

{
  int iVar1;
  CHAR aCStack_60 [96];
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0xdc))();
  param_1[0x8c] = 1;
  if (param_1[0x23] == 0) {
    (**(code **)(iVar1 + 0x70))(0,2);
    PostMessageA((HWND)param_1[8],0x111,0xe141,0);
  }
  else {
    wsprintfA(aCStack_60,s_inst_app__quit__d_endm_00411444,(uint)*(byte *)(param_1 + 0x81));
    FUN_00408040(param_1,aCStack_60);
  }
  Ordinal_3900();
  return;
}

