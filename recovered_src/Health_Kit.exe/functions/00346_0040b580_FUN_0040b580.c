/*
 * Program: Health_Kit.exe
 * Function: FUN_0040b580
 * Entry: 0040b580
 * Namespace: Global
 * Prototype: undefined FUN_0040b580(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)
 */


void __thiscall
FUN_0040b580(void *this,int param_1,byte param_2,byte param_3,byte param_4,byte param_5,
            LPCSTR param_6)

{
  HFONT pHVar1;
  
  pHVar1 = CreateFontA(param_1,param_1 >> 1,0,0,*(int *)((int)this + (uint)param_2 * 4 + 8),
                       (uint)(param_3 & 2),(uint)(param_3 & 4),param_3 & 8,0,4,0x20,2,
                       (param_5 | param_4) | 4,param_6);
  Ordinal_1426(pHVar1);
  return;
}

