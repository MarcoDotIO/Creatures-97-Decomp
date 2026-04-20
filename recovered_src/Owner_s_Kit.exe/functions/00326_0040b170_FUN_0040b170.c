/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040b170
 * Entry: 0040b170
 * Namespace: Global
 * Prototype: undefined FUN_0040b170(void * param_1)
 */


void __fastcall FUN_0040b170(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x294) != 0) {
    FUN_0040b1a0((int)param_1);
    if (*(int *)((int)param_1 + 0xc) != 0) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 1;
        FUN_0040b2f0(param_1,iVar1);
        iVar1 = iVar2;
      } while (iVar2 < 0x20);
    }
  }
  return;
}

