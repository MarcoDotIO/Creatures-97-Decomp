/*
 * Program: Health_Kit.exe
 * Function: FUN_0040b170
 * Entry: 0040b170
 * Namespace: Global
 * Prototype: undefined FUN_0040b170(int param_1)
 */


void __fastcall FUN_0040b170(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = FUN_0040b1b0(param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)(param_1 + 0xc0);
    iVar2 = 5;
    this = (void *)(param_1 + 0x138);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      FUN_004055f0(this,iVar1);
      iVar2 = iVar2 + -1;
      this = (void *)((int)this + 0x484);
    } while (iVar2 != 0);
  }
  return;
}

