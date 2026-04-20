/*
 * Program: Creatures.exe
 * Function: FUN_004218c0
 * Entry: 004218c0
 * Namespace: Global
 * Prototype: undefined FUN_004218c0(void * this, int param_1)
 */


void __thiscall FUN_004218c0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = *(int *)((int)this + 0x1a);
    if ((((iVar2 != 0) && (*(int *)((int)this + 0x7e6) != iVar2)) && (*(int *)(iVar2 + 300) != -1))
       && ((*(int *)((int)this + 0x7e6) != 0 && (0 < param_1)))) {
      FUN_004016c0(this,iVar2,2,0,0,0);
    }
    *(char *)((int)this + 0x833) = (char)param_1;
    *(undefined1 *)((int)this + 0x835) = 0xff;
    iVar2 = *(int *)((int)this + 0x7e6);
    iVar3 = param_1 + (-(uint)(iVar2 == 0) & 0x10) + 0x10;
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 4);
      if ((uVar1 & 0xff000000) == 0x4000000) {
        uVar1 = 0;
      }
      iVar2 = FUN_00423d00((int)this,(int)this,uVar1 + iVar3,0);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_00423d00((int)this,(int)this,*(int *)((int)this + 4) + iVar3,0);
    if (iVar2 != 0) {
      return;
    }
    param_1 = 0;
    FUN_0042beb0(*(void **)((int)this + 0x2ac8),6,(int)*(char *)((int)this + 0x833),0);
  } while( true );
}

