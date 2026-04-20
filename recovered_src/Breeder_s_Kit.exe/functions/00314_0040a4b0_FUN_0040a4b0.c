/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040a4b0
 * Entry: 0040a4b0
 * Namespace: Global
 * Prototype: int FUN_0040a4b0(void * this, int param_1)
 */


/* WARNING: Removing unreachable block (ram,0x0040a51b) */

int __thiscall FUN_0040a4b0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int iVar5;
  undefined4 unaff_retaddr;
  undefined4 local_4;
  
  iVar5 = 0;
  piVar2 = *(int **)(param_1 + 0x14);
  if ((*(int *)((int)this + 0x294) != 0) && (*(int *)((int)this + 0xc) != 0x20)) {
    piVar3 = (int *)((int)this + 0x14);
    iVar4 = *piVar3;
    for (; (iVar4 != 0 && (iVar5 < 0x20)); iVar5 = iVar5 + 1) {
      piVar3 = piVar3 + 5;
      iVar4 = *piVar3;
    }
    puVar1 = (undefined4 *)((int)this + iVar5 * 0x14 + 0x10);
    (**(code **)(*piVar2 + 0x24))(piVar2,&local_4);
    *puVar1 = piVar2;
    *(undefined4 *)((int)this + iVar5 * 0x14 + 0x20) = 0;
    if (unaff_EBX == 0) {
      piVar2 = (int *)*puVar1;
      (**(code **)(*piVar2 + 0x3c))(piVar2,unaff_retaddr);
      (**(code **)(*piVar2 + 0x40))(piVar2,local_4);
      iVar4 = (**(code **)(*piVar2 + 0x30))(piVar2,0,0,unaff_EBP);
      if (iVar4 == 0) {
        iVar4 = *(int *)((int)this + 0x290) + 1;
        *(int *)((int)this + 0x290) = iVar4;
        *(int *)((int)this + iVar5 * 0x14 + 0x14) = iVar4;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      }
    }
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return iVar5;
  }
  return -1;
}

