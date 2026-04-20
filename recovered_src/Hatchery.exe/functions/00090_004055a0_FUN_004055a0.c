/*
 * Program: Hatchery.exe
 * Function: FUN_004055a0
 * Entry: 004055a0
 * Namespace: Global
 * Prototype: undefined4 FUN_004055a0(void * this, int param_1, int * param_2)
 */


undefined4 __thiscall FUN_004055a0(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x2ac) != 0) || (*(int *)((int)this + 0x294) == 0)) {
    return 6;
  }
  puVar1 = FUN_00405330(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  iVar2 = FUN_00404d30(this,(int)puVar1);
  *param_2 = iVar2;
  if (iVar2 == -1) {
    return 3;
  }
  *(undefined4 *)(iVar2 * 0x14 + 0x18 + (int)this) = 1;
  return 0;
}

