/*
 * Program: Creatures.exe
 * Function: FUN_004265c0
 * Entry: 004265c0
 * Namespace: Global
 * Prototype: undefined FUN_004265c0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004265c0(void *this,undefined4 param_1)

{
  int iVar1;
  char *_Source;
  uint uVar2;
  char local_fc [49];
  undefined1 local_cb;
  CHAR local_c8 [200];
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x94) != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 0x94) + 4);
  }
  _Source = (char *)(*(int *)((int)this + 0x10) - 0x14);
  if (_Source < *(char **)((int)this + 0xc)) {
    _Source = *(char **)((int)this + 0xc);
  }
  strncpy(local_fc,_Source,0x30);
  iVar1 = *(int *)((int)this + 0x10);
  local_cb = 0;
  wsprintfA(local_c8,s_A_macro_script_contains_a_syntax_00436cb8,(int)*(char *)(iVar1 + -5),
            (int)*(char *)(iVar1 + -4),(int)*(char *)(iVar1 + -3),(int)*(char *)(iVar1 + -2),param_1
            ,uVar2 >> 0x18,(uVar2 & 0xff0000) >> 0x10,uVar2 >> 8 & 0xff,local_fc);
  FUN_0040bb60();
  Ordinal_1061(local_c8,0x30,0);
  FUN_0040bb40();
  return;
}

