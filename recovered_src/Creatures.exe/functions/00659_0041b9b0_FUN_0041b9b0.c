/*
 * Program: Creatures.exe
 * Function: FUN_0041b9b0
 * Entry: 0041b9b0
 * Namespace: Global
 * Prototype: undefined FUN_0041b9b0(void * this, void * param_1, void * param_2)
 */


void __thiscall FUN_0041b9b0(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 local_4;
  
  FUN_0041bd90((int)param_1);
  FUN_0041bd90((int)param_2);
  FUN_0041bd90((int)this);
  uVar2 = rand();
  uVar4 = (int)uVar2 >> 0x1f;
  if (((uVar2 ^ uVar4) - uVar4 & 1 ^ uVar4) == uVar4) {
    local_4 = param_1;
    param_1 = param_2;
    pvVar1 = local_4;
  }
  else {
    local_4 = param_2;
    pvVar1 = local_4;
  }
  do {
    do {
      while( true ) {
        do {
          local_4 = pvVar1;
          pvVar5 = param_1;
          iVar6 = 0;
          iVar3 = rand();
          iVar3 = iVar3 % 0x28 + 1;
          if (0 < iVar3) {
            do {
              if (**(int **)((int)pvVar5 + 8) == 0x646e6567) {
                FUN_0041baf0((int)this);
                return;
              }
              iVar6 = iVar6 + 1;
              FUN_0041bba0(this,(int)pvVar5);
            } while (iVar6 < iVar3);
          }
          uVar2 = FUN_0041bb40((int)pvVar5);
          iVar3 = FUN_0041bb60(local_4,uVar2);
          param_1 = pvVar5;
          pvVar1 = local_4;
        } while (iVar3 == 0);
        iVar3 = 0;
        iVar6 = rand();
        if (iVar6 % 0x51 == 0) {
          uVar2 = rand();
          uVar4 = (int)uVar2 >> 0x1f;
          iVar3 = (((uVar2 ^ uVar4) - uVar4 & 1 ^ uVar4) - uVar4) + 1;
        }
        pvVar1 = pvVar5;
        if ((iVar3 != 1) || (iVar6 = *(int *)((int)pvVar5 + 8), (*(byte *)(iVar6 + 9) & 2) == 0))
        break;
        *(char *)(iVar6 + 7) = *(char *)(iVar6 + 7) + '\x01';
        FUN_0041bba0(this,(int)pvVar5);
        param_1 = local_4;
      }
      param_1 = local_4;
    } while ((iVar3 != 2) ||
            (param_1 = local_4, (*(byte *)(*(int *)((int)local_4 + 8) + 9) & 4) == 0));
    iVar3 = FUN_0041bb10((int)local_4);
    param_1 = local_4;
  } while (iVar3 != 0);
  FUN_0041baf0((int)this);
  return;
}

