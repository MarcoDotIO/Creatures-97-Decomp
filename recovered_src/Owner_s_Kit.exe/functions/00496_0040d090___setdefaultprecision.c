/*
 * Program: Owner_s_Kit.exe
 * Function: __setdefaultprecision
 * Entry: 0040d090
 * Namespace: Global
 * Prototype: undefined __setdefaultprecision(void)
 */


/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 1998 Release */

void __setdefaultprecision(void)

{
  _controlfp(0x10000,0x30000);
  return;
}

