/*
 * Program: Science_Kit.exe
 * Function: FUN_00405f50
 * Entry: 00405f50
 * Namespace: Global
 * Prototype: undefined4 FUN_00405f50(void * this, int param_1, int * param_2)
 */


undefined4 __thiscall FUN_00405f50(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x2ac) != 0) || (*(int *)((int)this + 0x294) == 0)) {
    return 6;
  }
  puVar1 = FUN_00405ce0(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  iVar2 = FUN_004056e0(this,(int)puVar1);
  *param_2 = iVar2;
  if (iVar2 == -1) {
    return 3;
  }
  *(undefined4 *)(iVar2 * 0x14 + 0x18 + (int)this) = 1;
  return 0;
}

