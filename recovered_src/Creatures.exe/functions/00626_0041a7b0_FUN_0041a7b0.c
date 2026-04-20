/*
 * Program: Creatures.exe
 * Function: FUN_0041a7b0
 * Entry: 0041a7b0
 * Namespace: Global
 * Prototype: undefined FUN_0041a7b0(void * this, char param_1)
 */


void __thiscall FUN_0041a7b0(void *this,char param_1)

{
  char cVar1;
  int *piVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [4];
  
  FUN_0041a4a0(this,local_10);
  cVar1 = *(char *)((int)this + 9);
  *(char *)((int)this + 9) = param_1;
  *(char *)((int)this + 8) = param_1 + (*(char *)((int)this + 8) - cVar1);
  FUN_0041a4a0(this,&local_20);
  piVar2 = (int *)FUN_0040b450(&local_30,local_10,&local_20);
  local_30 = *piVar2;
  local_2c = piVar2[1];
  local_28 = piVar2[2];
  local_24 = piVar2[3];
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  local_14 = local_24;
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_30,local_2c,local_28,local_24);
  return;
}

