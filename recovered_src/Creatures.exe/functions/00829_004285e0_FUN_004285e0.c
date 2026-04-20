/*
 * Program: Creatures.exe
 * Function: FUN_004285e0
 * Entry: 004285e0
 * Namespace: Global
 * Prototype: undefined FUN_004285e0(void * this, char param_1, char param_2, char param_3, undefined4 * param_4, undefined4 * param_5)
 */


void __thiscall
FUN_004285e0(void *this,char param_1,char param_2,char param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_4 [4];
  
  local_4[0] = param_1;
  iVar3 = 0;
  local_4[1] = param_2;
  local_4[2] = param_3;
  do {
    cVar2 = local_4[iVar3];
    if ((cVar2 == ' ') || (cVar2 == '.')) {
      local_4[iVar3] = '\x1a';
    }
    else {
      local_4[iVar3] = cVar2 + -0x61;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar6 = (int)local_4[2];
  iVar5 = (int)local_4[1];
  iVar7 = (int)local_4[0];
  iVar3 = FUN_00428530(this,iVar7,iVar5,iVar6);
  if ((0x1f < iVar3) || (iVar3 < 0)) {
    if (local_4[1] == '\x1a') {
      uVar1 = iVar5 + iVar6 + iVar7;
      uVar4 = (int)uVar1 >> 0x1f;
      iVar3 = ((uVar1 ^ uVar4) - uVar4 & 3 ^ uVar4) - uVar4;
    }
    else if (local_4[0] == '\x1a') {
      iVar3 = (iVar5 + iVar6 + iVar7) % 7 + 4;
    }
    else if (local_4[2] == '\x1a') {
      iVar3 = (iVar5 + iVar6 + iVar7) % 7 + 10;
    }
    else {
      iVar3 = (iVar5 + iVar6 + iVar7) % 0xe + 0x12;
    }
  }
  *param_4 = *(undefined4 *)((int)this + iVar3 * 4 + 0x148);
  *param_5 = *(undefined4 *)((int)this + iVar3 * 4 + 0x1c8);
  return;
}

