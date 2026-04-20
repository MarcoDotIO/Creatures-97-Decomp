/*
 * Program: Creatures.exe
 * Function: FUN_0040cda0
 * Entry: 0040cda0
 * Namespace: Global
 * Prototype: undefined FUN_0040cda0(void * this, int param_1, int param_2, char * param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6)
 */


void __thiscall
FUN_0040cda0(void *this,int param_1,int param_2,char *param_3,undefined1 param_4,undefined1 param_5,
            undefined1 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 local_8 [4];
  int local_4;
  
  local_4 = param_1;
  iVar2 = FUN_0040cb50((int)this);
  local_8[0] = param_4;
  local_8[1] = param_5;
  local_8[2] = param_6;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    if (*param_3 == '|') {
      param_2 = param_2 + 0xc;
      param_1 = local_4;
    }
    else {
      iVar8 = 0xc;
      pbVar5 = (byte *)(*param_3 * 0x48 + DAT_00438b9c);
      iVar7 = *(int *)((int)this + 0xd) * param_2 + param_1 + iVar2;
      do {
        iVar3 = 0;
        pbVar6 = pbVar5;
        do {
          pbVar5 = pbVar6 + 1;
          iVar4 = iVar3 + 1;
          *(undefined1 *)(iVar3 + iVar7) = local_8[*pbVar6];
          iVar3 = iVar4;
          pbVar6 = pbVar5;
        } while (iVar4 < 6);
        iVar7 = iVar7 + *(int *)((int)this + 0xd);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      param_1 = param_1 + *(ushort *)(&DAT_00438a20 + *param_3 * 2) + 1;
    }
    param_3 = param_3 + 1;
    cVar1 = *param_3;
  }
  return;
}

