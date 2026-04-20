/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408b90
 * Entry: 00408b90
 * Namespace: Global
 * Prototype: undefined FUN_00408b90(void * this, int param_1)
 */


void __thiscall FUN_00408b90(void *this,int param_1)

{
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
    if (*(int *)((int)this + 0xd8) == param_1) {
      FUN_00408650((int)this);
    }
    Ordinal_2081();
    return;
  }
  FUN_00408570((int)this);
  return;
}

