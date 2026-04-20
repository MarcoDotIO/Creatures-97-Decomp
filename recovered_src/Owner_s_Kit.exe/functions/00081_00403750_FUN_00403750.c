/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403750
 * Entry: 00403750
 * Namespace: Global
 * Prototype: undefined FUN_00403750(void * param_1)
 */


void __fastcall FUN_00403750(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_00402b50(param_1);
  iVar2 = FUN_00402f90(param_1,pbVar1,1);
  if (iVar2 == 0) {
    FUN_00402f60((int)param_1);
  }
  FUN_00408650((int)param_1 + 0x238);
  FUN_00405a90((void *)((int)param_1 + 0x6b0));
  return;
}

