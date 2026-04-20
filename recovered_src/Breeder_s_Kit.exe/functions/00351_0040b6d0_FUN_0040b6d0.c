/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040b6d0
 * Entry: 0040b6d0
 * Namespace: Global
 * Prototype: undefined FUN_0040b6d0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */


void __thiscall
FUN_0040b6d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  Ordinal_762(param_3);
  *(undefined4 *)((int)this + 0x58) = param_5;
  *(undefined4 *)((int)this + 0x44) = param_6;
  Ordinal_1842(0,0x50000000,param_2,param_1,param_4);
  return;
}

