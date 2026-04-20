/*
 * Program: Creatures.exe
 * Function: FUN_00422db0
 * Entry: 00422db0
 * Namespace: Global
 * Prototype: undefined FUN_00422db0(void * param_1)
 */


void __fastcall FUN_00422db0(void *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  char *pcVar1;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00422e8a;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041b520(local_2c,*(int *)((int)param_1 + 0x48),(uint)*(byte *)((int)param_1 + 0x2b6f),
               *(undefined1 *)((int)param_1 + 0x2b6e));
  local_8 = 0;
  if (*(char *)((int)param_1 + 0x2b6e) == '\0') {
    FUN_0042ba10(*(void **)((int)param_1 + 0x2ac8),local_2c);
  }
  FUN_0040f900((int)local_2c,(uint)*(byte *)((int)param_1 + 0x2b6e));
  FUN_0040a680(*(void **)((int)param_1 + 0x2acc),local_2c);
  FUN_0041f500(param_1,local_2c);
  if ((*(uint *)((int)param_1 + 4) & 0xffff0000) == 0x4010000) {
    if (*(char *)((int)param_1 + 0x2b6f) == '\x01') {
      pcVar1 = s_male_vce_00436bfc;
    }
    else {
      pcVar1 = s_female_vce_00436bf0;
    }
  }
  else {
    pcVar1 = s_grendel_vce_00436be4;
  }
  FUN_004288f0((void *)((int)param_1 + 0x2870),pcVar1);
  local_8 = 0xffffffff;
  FUN_00422e94();
  *unaff_FS_OFFSET = local_10;
  return;
}

