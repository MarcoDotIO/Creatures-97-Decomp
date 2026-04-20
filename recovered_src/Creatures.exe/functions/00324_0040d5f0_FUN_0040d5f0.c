/*
 * Program: Creatures.exe
 * Function: FUN_0040d5f0
 * Entry: 0040d5f0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d5f0(void * this, uint param_1, undefined4 param_2, int param_3, HSZ param_4, int param_5, HDDEDATA param_6)
 */


undefined4 __thiscall
FUN_0040d5f0(void *this,uint param_1,undefined4 param_2,int param_3,HSZ param_4,int param_5,
            HDDEDATA param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x1063) {
    if (param_1 != 0x1062) {
      if (param_1 != 0x1030) {
        return 0;
      }
      return 0;
    }
    if ((*(int *)((int)this + 0x58) < 10) && (*(int *)((int)this + 4) == param_5)) {
      return 1;
    }
    return 0;
  }
  if (param_1 < 0x20b1) {
    if (param_1 == 0x20b0) {
      pvVar1 = (void *)FUN_0040d730(this,param_3);
      uVar2 = FUN_0040dc10(pvVar1,param_5);
      return uVar2;
    }
    if (param_1 != 0x2022) {
      return 0;
    }
    return 0;
  }
  if (param_1 < 0x4051) {
    if (param_1 == 0x4050) {
      pvVar1 = (void *)FUN_0040d730(this,param_3);
      FUN_0040dbb0(pvVar1,param_6);
      return 0x8000;
    }
    if (param_1 != 0x4010) {
      return 0;
    }
    return 0;
  }
  if (0x8002 < param_1) {
    if (param_1 == 0x8072) {
      FUN_0040d770(this,param_3,param_4);
      return 0;
    }
    if (param_1 != 0x80c2) {
      return 0;
    }
    FUN_0040d800(this,param_3);
    return 0;
  }
  if (param_1 == 0x8002) {
    return 0;
  }
  if (param_1 != 0x4090) {
    return 0;
  }
  pvVar1 = (void *)FUN_0040d730(this,param_3);
  FUN_0040dbe0(pvVar1,param_6);
  return 0x8000;
}

