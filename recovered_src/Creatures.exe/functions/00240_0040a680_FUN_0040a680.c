/*
 * Program: Creatures.exe
 * Function: FUN_0040a680
 * Entry: 0040a680
 * Namespace: Global
 * Prototype: undefined FUN_0040a680(void * this, void * param_1)
 */


void __thiscall FUN_0040a680(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  char *local_10;
  char local_8;
  char local_4;
  
  FUN_0041bd90((int)param_1);
  iVar1 = FUN_0041be70(param_1,1,0,5,0);
  pcVar8 = local_10;
  while ((iVar1 != 0 && (local_10 = this, *(int *)((int)this + 0x1288) != 0x80))) {
    uVar2 = FUN_0041bda0(param_1,0,1);
    uVar3 = FUN_0041bda0(param_1,0,0xff);
    uVar4 = FUN_0041bda0(param_1,0,0xff);
    iVar9 = 0;
    iVar5 = FUN_0040aae0(this,0,(char)uVar2,uVar3,uVar4);
    iVar1 = *(int *)((int)this + 0x1288);
    if (iVar1 < 1) {
LAB_0040a743:
      *(int *)((int)this + 0x1288) = iVar1 + 1;
      pcVar8 = (char *)((int)this + iVar1 * 0xc + 0x208);
    }
    else {
      piVar7 = (int *)((int)this + 0x210);
      do {
        if (*piVar7 == iVar5) {
          pcVar8 = (char *)((int)this + iVar9 * 0xc + 0x208);
          break;
        }
        piVar7 = piVar7 + 3;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
      if (iVar1 <= iVar9) goto LAB_0040a743;
    }
    local_8 = (char)uVar3;
    *pcVar8 = (char)uVar2;
    local_4 = (char)uVar4;
    pcVar8[1] = local_8;
    pcVar8[2] = local_4;
    *(int *)(pcVar8 + 8) = iVar5;
    if (iVar5 != 0) {
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      pcVar8[3] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      pcVar8[4] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      pcVar8[5] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      pcVar8[6] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      pcVar8[7] = (char)uVar2;
      **(char **)(pcVar8 + 8) = pcVar8[5];
    }
    iVar1 = FUN_0041be70(param_1,1,0,5,0);
  }
  FUN_0041bd90((int)param_1);
  iVar1 = FUN_0041be70(param_1,1,1,5,0);
  do {
    if ((iVar1 == 0) || (*(int *)((int)this + 0x128c) == 0x80)) {
      FUN_0041bd90((int)param_1);
      iVar1 = FUN_0041be70(param_1,1,2,5,0);
      while ((iVar1 != 0 && (iVar1 = *(int *)((int)this + 0x1290), iVar1 != 0x80))) {
        *(int *)((int)this + 0x1290) = iVar1 + 1;
        puVar10 = (undefined1 *)(iVar1 * 9 + 0xe08 + (int)this);
        uVar2 = FUN_0041bda0(param_1,1,8);
        *puVar10 = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        puVar10[1] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,1,8);
        puVar10[2] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        puVar10[3] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,1,8);
        puVar10[5] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        puVar10[6] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,1,8);
        puVar10[7] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        puVar10[8] = (char)uVar2;
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        puVar10[4] = (char)uVar2;
        iVar1 = FUN_0041be70(param_1,1,2,5,0);
      }
      FUN_0041bd90((int)param_1);
      iVar1 = FUN_0041be70(param_1,1,3,5,0);
      while (iVar1 != 0) {
        iVar1 = 0x100;
        puVar10 = (undefined1 *)((int)this + 9);
        do {
          uVar2 = FUN_0041bda0(param_1,0,0xff);
          iVar1 = iVar1 + -1;
          *puVar10 = (char)uVar2;
          puVar10 = puVar10 + 2;
        } while (iVar1 != 0);
        iVar1 = FUN_0041be70(param_1,1,3,5,0);
      }
      FUN_0041bd90((int)param_1);
      iVar1 = FUN_0041be70(param_1,1,4,5,0);
      while (iVar1 != 0) {
        uVar2 = FUN_0041bda0(param_1,0,0xff);
        uVar3 = FUN_0041bda0(param_1,0,0xff);
        *(char *)((int)this + uVar2 * 2 + 8) = (char)uVar3;
        iVar1 = FUN_0041be70(param_1,1,4,5,0);
      }
      return;
    }
    uVar2 = FUN_0041bda0(param_1,0,1);
    uVar3 = FUN_0041bda0(param_1,0,0xff);
    uVar4 = FUN_0041bda0(param_1,0,0xff);
    iVar5 = FUN_0040aae0(this,1,(char)uVar2,uVar3,uVar4);
    uVar6 = FUN_0041bda0(param_1,0,0xff);
    iVar9 = 0;
    iVar1 = *(int *)((int)this + 0x128c);
    if (iVar1 < 1) {
LAB_0040a8c3:
      *(int *)((int)this + 0x128c) = iVar1 + 1;
      local_10 = (char *)((int)this + iVar1 * 0xc + 0x808);
    }
    else {
      piVar7 = (int *)((int)this + 0x810);
      do {
        if ((*piVar7 == iVar5) && (*(byte *)((int)piVar7 + -5) == uVar6)) {
          local_10 = (char *)((int)this + iVar9 * 0xc + 0x808);
          break;
        }
        piVar7 = piVar7 + 3;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)((int)this + 0x128c));
      iVar1 = *(int *)((int)this + 0x128c);
      if (iVar1 <= iVar9) goto LAB_0040a8c3;
    }
    local_8 = (char)uVar3;
    *local_10 = (char)uVar2;
    local_4 = (char)uVar4;
    local_10[1] = local_8;
    local_10[2] = local_4;
    *(int *)(local_10 + 8) = iVar5;
    if (iVar5 != 0) {
      local_10[3] = (char)uVar6;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      local_10[4] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,1,0xff);
      local_10[5] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      local_10[6] = (char)uVar2;
      uVar2 = FUN_0041bda0(param_1,0,0xff);
      local_10[7] = (char)uVar2;
    }
    iVar1 = FUN_0041be70(param_1,1,1,5,0);
  } while( true );
}

