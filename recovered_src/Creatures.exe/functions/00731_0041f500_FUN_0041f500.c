/*
 * Program: Creatures.exe
 * Function: FUN_0041f500
 * Entry: 0041f500
 * Namespace: Global
 * Prototype: undefined FUN_0041f500(void * this, void * param_1)
 */


void __thiscall FUN_0041f500(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  void *this_00;
  uint *puVar5;
  char cVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041f806;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041bd90((int)param_1);
  iVar1 = FUN_0041be70(param_1,2,0,7,0);
  while (iVar1 != 0) {
    uVar2 = FUN_0041bda0(param_1,0,0x23);
    iVar1 = uVar2 * 0x14;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25a8) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25a9) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25aa) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25ab) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25ac) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25b0) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25ad) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25b1) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25ae) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25b2) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25af) = (char)uVar2;
    uVar2 = FUN_0041bda0(param_1,0,0xff);
    *(char *)((int)this + iVar1 + 0x25b3) = (char)uVar2;
    iVar1 = FUN_0041be70(param_1,2,0,7,0);
  }
  FUN_0041bd90((int)param_1);
  iVar1 = FUN_0041be70(param_1,2,3,7,0);
  while (iVar1 != 0) {
    uVar2 = FUN_0041bda0(param_1,0,99);
    iVar1 = 0;
    do {
      uVar3 = FUN_0041bda0(param_1,0x20,0x5a);
      cVar6 = (char)uVar3;
      pcVar4 = strchr(s___X0123456789_00436b9c,(int)cVar6);
      if (pcVar4 == (char *)0x0) {
        cVar6 = 'X';
      }
      iVar7 = iVar1 + 1;
      *(char *)((int)this + uVar2 * 0x10 + iVar1 + 0x116) = cVar6;
      iVar1 = iVar7;
    } while (iVar7 < 0xf);
    *(undefined1 *)(uVar2 * 0x10 + 0x125 + (int)this) = 0;
    iVar1 = FUN_0041be70(param_1,2,3,7,0);
  }
  FUN_0041bd90((int)param_1);
  iVar1 = FUN_0041be70(param_1,2,4,7,0);
  do {
    if (iVar1 == 0) {
      FUN_0041bd90((int)param_1);
      iVar1 = FUN_0041be70(param_1,2,5,7,0);
      while (iVar1 != 0) {
        if (*(int *)((int)this + 0x2b66) < 0x14) {
          this_00 = (void *)Ordinal_729(0x2c);
          local_8 = 0;
          puVar5 = (uint *)0x0;
          if (this_00 != (void *)0x0) {
            puVar5 = FUN_0041e040(this_00,param_1,*(int *)((int)this + 0x2ac8));
          }
          local_8 = 0xffffffff;
          *(uint **)((int)this + *(int *)((int)this + 0x2b66) * 4 + 0x2b16) = puVar5;
          *(int *)((int)this + 0x2b66) = *(int *)((int)this + 0x2b66) + 1;
        }
        iVar1 = FUN_0041be70(param_1,2,5,7,0);
      }
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar1 = 0;
    uVar2 = FUN_0041bda0(param_1,0,7);
    pcVar4 = (char *)(uVar2 * 0x12 + 0x756 + (int)this);
    do {
      uVar3 = FUN_0041bda0(param_1,0,99);
      cVar6 = (char)uVar3;
      if (cVar6 == '\0') break;
      iVar1 = iVar1 + 1;
      *pcVar4 = cVar6 / '\n' + '0';
      pcVar4[1] = cVar6 % '\n' + '0';
      pcVar4 = pcVar4 + 2;
    } while (iVar1 < 8);
    iVar1 = uVar2 * 9 + iVar1;
    *(undefined1 *)((int)this + iVar1 * 2 + 0x756) = 0x52;
    *(undefined1 *)((int)this + iVar1 * 2 + 0x757) = 0;
    iVar1 = FUN_0041be70(param_1,2,4,7,0);
  } while( true );
}

