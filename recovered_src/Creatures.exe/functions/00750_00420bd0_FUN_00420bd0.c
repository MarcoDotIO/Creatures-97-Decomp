/*
 * Program: Creatures.exe
 * Function: FUN_00420bd0
 * Entry: 00420bd0
 * Namespace: Global
 * Prototype: undefined FUN_00420bd0(void * this, int param_1, char * param_2)
 */


void __thiscall FUN_00420bd0(void *this,int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = -1;
  local_20 = -1;
  local_1c = -1;
  local_c = 0xb4;
  local_14 = 0xb4;
  local_18 = 0xffffffff;
  local_8 = -1;
  if (*param_2 == '\0') {
    return;
  }
  do {
    pcVar5 = param_2;
    if (*param_2 == '\0') {
LAB_00420c38:
      pcVar5 = (char *)0x0;
    }
    else {
      do {
        if (*pcVar5 == ' ') break;
        pcVar3 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar3 != '\0');
      if (*pcVar5 == '\0') goto LAB_00420c38;
      *pcVar5 = '\0';
    }
    iVar4 = 0;
    pcVar3 = (char *)((int)this + 0xab6);
    do {
      iVar1 = _stricmp(param_2,pcVar3);
      if ((iVar1 == 0) || (iVar1 = _stricmp(param_2,pcVar3 + 0x19), iVar1 == 0)) break;
      pcVar3 = pcVar3 + 0x36;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x50);
    if (iVar4 == 0x50) {
      if (*(int *)((int)this + 0x7e6) == 0) {
        FUN_00420720(this,param_2,0x10,param_1);
        iVar4 = local_1c;
      }
      else {
        iVar4 = param_1;
        uVar2 = FUN_00414ec0(*(int *)((int)this + 0x7e6));
        FUN_00420720(this,param_2,uVar2 + 0x10,iVar4);
        iVar4 = local_1c;
      }
    }
    else if (iVar4 == 0x10) {
      local_10 = 0x10;
      iVar4 = local_1c;
    }
    else if ((0x10 < iVar4) && (iVar4 < 0x38)) {
      local_20 = iVar4;
      iVar4 = local_1c;
    }
    local_1c = iVar4;
    if (pcVar5 == (char *)0x0) break;
    param_2 = pcVar5 + 1;
  } while( true );
  if (((local_10 == -1) && (local_20 == -1)) && (local_1c == -1)) {
    iVar4 = 9;
LAB_00420d22:
    FUN_004219b0(this,param_1,iVar4,0);
  }
  else {
    if (DAT_00438d0c == param_1) {
      iVar4 = 10;
      goto LAB_00420d22;
    }
    if ((*(uint *)(param_1 + 4) & 0xff000000) == 0x4000000) {
      iVar4 = 0xb;
      goto LAB_00420d22;
    }
  }
  if ((*(int *)((int)this + 0x7e6) != 0) &&
     (uVar2 = FUN_00414ec0(*(int *)((int)this + 0x7e6)), uVar2 - local_20 == -0x10)) {
    FUN_00420720(this,(char *)((int)this + local_20 * 0x36 + 0xab6),local_20,param_1);
  }
  if (local_10 == -1) {
LAB_00420d95:
    if (local_20 == -1) goto LAB_00420da5;
  }
  else if (local_20 == -1) {
    if (local_1c == -1) {
      local_18 = FUN_00414ec0(param_1);
    }
    goto LAB_00420d95;
  }
  local_18 = local_20 - 0x10;
LAB_00420da5:
  switch(local_1c) {
  case 8:
    local_18 = FUN_00414ec0(param_1);
    break;
  case 9:
    local_18 = 0;
    break;
  case 0x48:
    if (DAT_00438d0c == param_1) {
      FUN_004219b0(this,param_1,1,0);
    }
    else {
      FUN_004219b0(this,param_1,2,0);
    }
    break;
  case 0x49:
    if (DAT_00438d0c == param_1) {
      FUN_004219b0(this,param_1,3,0);
    }
    else {
      FUN_004219b0(this,param_1,4,0);
    }
    break;
  case 0x4a:
    local_18 = FUN_00421040(this);
    local_14 = 0xff;
    break;
  case 0x4b:
    FUN_00421250(this);
  }
  if ((-1 < local_1c) && (local_1c < 0x10)) {
    local_8 = local_1c;
  }
  if ((*(int *)((int)this + 0x7e6) == param_1) || (local_10 != -1)) {
    local_c = 0xff;
    local_14 = 0xff;
  }
  if (-1 < local_20) {
    local_c = *(byte *)(local_20 * 0x36 + 0xae8 + (int)this) * local_c >> 8;
  }
  if (-1 < local_1c) {
    local_14 = *(byte *)(local_1c * 0x36 + 0xae8 + (int)this) * local_14 >> 8;
  }
  FUN_00420f80(this,local_18,local_8,(byte)local_c,(byte)local_14);
  return;
}

