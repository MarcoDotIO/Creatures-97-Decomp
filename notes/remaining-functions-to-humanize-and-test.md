# Remaining Functions To Humanize And Test

Generated from the current `analysis/ghidra_exports/*/functions.tsv` exports minus unique covered `program_name + entry_point` pairs from `manifests/reconstruction_naming_map.tsv`.

Coverage rows that describe multiple recovered sub-slices for the same original function entry point are collapsed to one covered function in this backlog.

## Summary

- Total exported functions: 4630
- Unique covered entry points: 148
- Remaining functions to humanize and test: 4482

| Binary | Exported | Covered | Remaining |
| --- | ---: | ---: | ---: |
| `Backup.exe` | 49 | 0 | 49 |
| `Breeder_s_Kit.exe` | 527 | 0 | 527 |
| `Creatures.exe` | 1116 | 136 | 980 |
| `Funeral_Kit.exe` | 496 | 0 | 496 |
| `Hatchery.exe` | 225 | 4 | 221 |
| `Health_Kit.exe` | 510 | 0 | 510 |
| `Launcher.exe` | 174 | 6 | 168 |
| `Owner_s_Kit.exe` | 501 | 0 | 501 |
| `Science_Kit.exe` | 610 | 0 | 610 |
| `Score_Kit.exe` | 363 | 0 | 363 |
| `remove.exe` | 59 | 2 | 57 |

## Remaining Functions By Binary

### Backup.exe

Remaining: **49** of **49** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010c9` | `FUN_004010c9` | `undefined FUN_004010c9(void)` | `pending` |
| `00401169` | `FUN_00401169` | `undefined FUN_00401169(void)` | `pending` |
| `00401180` | `FUN_00401180` | `undefined4 * FUN_00401180(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00401312` | `FUN_00401312` | `undefined FUN_00401312(void)` | `pending` |
| `004022f9` | `FUN_004022f9` | `undefined FUN_004022f9(void)` | `pending` |
| `00402409` | `FUN_00402409` | `undefined FUN_00402409(void)` | `pending` |
| `00402470` | `FUN_00402470` | `undefined4 * FUN_00402470(undefined4 * param_1)` | `pending` |
| `00402529` | `FUN_00402529` | `undefined FUN_00402529(void)` | `pending` |
| `00402550` | `FUN_00402550` | `undefined FUN_00402550(void)` | `pending` |
| `00402560` | `FUN_00402560` | `undefined FUN_00402560(void)` | `pending` |
| `004025ab` | `FUN_004025ab` | `undefined FUN_004025ab(void)` | `pending` |
| `004026de` | `FUN_004026de` | `undefined FUN_004026de(void)` | `pending` |
| `004026f3` | `FUN_004026f3` | `undefined FUN_004026f3(void)` | `pending` |
| `00402741` | `FUN_00402741` | `undefined FUN_00402741(void)` | `pending` |
| `00402750` | `FUN_00402750` | `undefined FUN_00402750(void)` | `pending` |
| `00402791` | `FUN_00402791` | `undefined FUN_00402791(void)` | `pending` |
| `00402869` | `FUN_00402869` | `undefined FUN_00402869(void)` | `pending` |
| `00402979` | `FUN_00402979` | `undefined FUN_00402979(void)` | `pending` |
| `004029c0` | `FUN_004029c0` | `undefined4 * FUN_004029c0(void * this, undefined4 param_1)` | `pending` |
| `00402a89` | `FUN_00402a89` | `undefined FUN_00402a89(void)` | `pending` |
| `00402ade` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `00402ae4` | `Ordinal_2199` | `undefined Ordinal_2199()` | `pending` |
| `00402bd4` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `00402bda` | `Ordinal_315` | `undefined Ordinal_315()` | `pending` |
| `00402be0` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `00402be6` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `00402bec` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `00402bf2` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `00402bf8` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `00402bfe` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `00402c04` | `Ordinal_2514` | `undefined Ordinal_2514()` | `pending` |
| `00402cd6` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `00402cdc` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `00402ce2` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `00402ce8` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `00402cf0` | `FUN_00402cf0` | `type_info * FUN_00402cf0(void * this, byte param_1)` | `pending` |
| `00402d10` | `FUN_00402d10` | `undefined FUN_00402d10(_onexit_t param_1)` | `pending` |
| `00402db0` | `FUN_00402db0` | `int FUN_00402db0(_onexit_t param_1)` | `pending` |
| `00402dd0` | `entry` | `undefined entry(void)` | `pending` |
| `00402f72` | `~type_info` | `void ~type_info(type_info * this)` | `pending` |
| `00402f78` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `00402f7e` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `00402f84` | `initterm` | `undefined initterm()` | `pending` |
| `00402f90` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `00402fc0` | `FUN_00402fc0` | `undefined FUN_00402fc0(void)` | `pending` |
| `00402fc8` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `00402fd0` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00402fe9` | `FUN_00402fe9` | `undefined4 FUN_00402fe9(int param_1, undefined4 param_2)` | `pending` |
| `00403038` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Breeder_s_Kit.exe

Remaining: **527** of **527** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(undefined4 * param_1)` | `pending` |
| `00401120` | `FUN_00401120` | `undefined4 * FUN_00401120(void * this, byte param_1)` | `pending` |
| `00401140` | `FUN_00401140` | `undefined FUN_00401140(undefined4 * param_1)` | `pending` |
| `004011ae` | `FUN_004011ae` | `undefined FUN_004011ae(void)` | `pending` |
| `004011c0` | `FUN_004011c0` | `undefined FUN_004011c0(void * this, int param_1, int param_2)` | `pending` |
| `004012c0` | `FUN_004012c0` | `undefined4 FUN_004012c0(void * this, char * param_1)` | `pending` |
| `00401370` | `FUN_00401370` | `undefined4 FUN_00401370(void * this, undefined4 param_1)` | `pending` |
| `00401556` | `FUN_00401556` | `undefined FUN_00401556(void)` | `pending` |
| `00401568` | `FUN_00401568` | `undefined FUN_00401568(void)` | `pending` |
| `00401570` | `FUN_00401570` | `undefined4 FUN_00401570(void * this, undefined4 param_1)` | `pending` |
| `0040168d` | `FUN_0040168d` | `undefined FUN_0040168d(void)` | `pending` |
| `004016a5` | `FUN_004016a5` | `undefined FUN_004016a5(void)` | `pending` |
| `004016b7` | `FUN_004016b7` | `undefined FUN_004016b7(void)` | `pending` |
| `004016c0` | `FUN_004016c0` | `int FUN_004016c0(void * this, int param_1, int param_2)` | `pending` |
| `004016f0` | `FUN_004016f0` | `undefined FUN_004016f0(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `00401840` | `FUN_00401840` | `undefined FUN_00401840(undefined4 * param_1)` | `pending` |
| `00401890` | `FUN_00401890` | `undefined FUN_00401890(undefined4 * param_1)` | `pending` |
| `004018d7` | `FUN_004018d7` | `undefined FUN_004018d7(void)` | `pending` |
| `0040193f` | `FUN_0040193f` | `undefined FUN_0040193f(void)` | `pending` |
| `004019b2` | `FUN_004019b2` | `undefined FUN_004019b2(void)` | `pending` |
| `004019c7` | `FUN_004019c7` | `undefined FUN_004019c7(void)` | `pending` |
| `004019d0` | `FUN_004019d0` | `undefined FUN_004019d0(undefined4 * param_1)` | `pending` |
| `00401a1a` | `FUN_00401a1a` | `undefined FUN_00401a1a(void)` | `pending` |
| `00401a2f` | `FUN_00401a2f` | `undefined FUN_00401a2f(void)` | `pending` |
| `00401b10` | `FUN_00401b10` | `undefined4 * FUN_00401b10(undefined4 * param_1)` | `pending` |
| `00401b80` | `FUN_00401b80` | `undefined4 * FUN_00401b80(void * this, byte param_1)` | `pending` |
| `00401ba0` | `FUN_00401ba0` | `undefined FUN_00401ba0(undefined4 * param_1)` | `pending` |
| `00401be7` | `FUN_00401be7` | `undefined FUN_00401be7(void)` | `pending` |
| `00401d30` | `FUN_00401d30` | `undefined FUN_00401d30(int param_1)` | `pending` |
| `00401d90` | `thunk_FUN_00401da0` | `undefined4 thunk_FUN_00401da0(int param_1)` | `pending` |
| `00401da0` | `FUN_00401da0` | `undefined4 FUN_00401da0(int param_1)` | `pending` |
| `00401ed5` | `FUN_00401ed5` | `undefined FUN_00401ed5(void)` | `pending` |
| `00401eed` | `FUN_00401eed` | `undefined FUN_00401eed(void)` | `pending` |
| `00401eff` | `FUN_00401eff` | `undefined FUN_00401eff(void)` | `pending` |
| `00401f10` | `FUN_00401f10` | `undefined FUN_00401f10(int param_1)` | `pending` |
| `00401f40` | `FUN_00401f40` | `undefined FUN_00401f40(void * this, int param_1)` | `pending` |
| `00402110` | `FUN_00402110` | `undefined4 * FUN_00402110(void * this, byte param_1)` | `pending` |
| `00402130` | `FUN_00402130` | `undefined4 * FUN_00402130(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00402240` | `FUN_00402240` | `undefined FUN_00402240(undefined4 * param_1)` | `pending` |
| `004022b5` | `FUN_004022b5` | `undefined FUN_004022b5(void)` | `pending` |
| `004022c3` | `FUN_004022c3` | `undefined FUN_004022c3(void)` | `pending` |
| `004022d1` | `FUN_004022d1` | `undefined FUN_004022d1(void)` | `pending` |
| `004022df` | `FUN_004022df` | `undefined FUN_004022df(void)` | `pending` |
| `004022ed` | `FUN_004022ed` | `undefined FUN_004022ed(void)` | `pending` |
| `00402305` | `FUN_00402305` | `undefined FUN_00402305(void)` | `pending` |
| `00402310` | `FUN_00402310` | `undefined FUN_00402310(void * this, undefined4 param_1)` | `pending` |
| `00402370` | `FUN_00402370` | `undefined4 FUN_00402370(int param_1)` | `pending` |
| `00402500` | `FUN_00402500` | `undefined FUN_00402500(int param_1)` | `pending` |
| `00402580` | `FUN_00402580` | `undefined FUN_00402580(void * param_1)` | `pending` |
| `004025d0` | `FUN_004025d0` | `undefined4 FUN_004025d0(int * param_1)` | `pending` |
| `0040277d` | `FUN_0040277d` | `undefined FUN_0040277d(void)` | `pending` |
| `00402785` | `FUN_00402785` | `undefined FUN_00402785(void)` | `pending` |
| `0040278d` | `FUN_0040278d` | `undefined FUN_0040278d(void)` | `pending` |
| `0040279f` | `FUN_0040279f` | `undefined FUN_0040279f(void)` | `pending` |
| `00402835` | `FUN_00402835` | `undefined FUN_00402835(void)` | `pending` |
| `00402847` | `FUN_00402847` | `undefined FUN_00402847(void)` | `pending` |
| `00402870` | `FUN_00402870` | `undefined FUN_00402870(void * this, int param_1)` | `pending` |
| `00402930` | `FUN_00402930` | `undefined4 * FUN_00402930(undefined4 * param_1)` | `pending` |
| `00402a5c` | `FUN_00402a5c` | `undefined FUN_00402a5c(void)` | `pending` |
| `00402a74` | `FUN_00402a74` | `undefined FUN_00402a74(void)` | `pending` |
| `00402aa0` | `FUN_00402aa0` | `undefined FUN_00402aa0(void)` | `pending` |
| `00402ab0` | `FUN_00402ab0` | `undefined FUN_00402ab0(void)` | `pending` |
| `00402afe` | `FUN_00402afe` | `undefined FUN_00402afe(void)` | `pending` |
| `00402b12` | `FUN_00402b12` | `undefined FUN_00402b12(void)` | `pending` |
| `00402d10` | `FUN_00402d10` | `bool FUN_00402d10(void)` | `pending` |
| `00402de6` | `FUN_00402de6` | `undefined FUN_00402de6(void)` | `pending` |
| `00402df0` | `FUN_00402df0` | `undefined FUN_00402df0(void)` | `pending` |
| `00402f2b` | `FUN_00402f2b` | `undefined FUN_00402f2b(void)` | `pending` |
| `00402f40` | `FUN_00402f40` | `undefined FUN_00402f40(undefined4 * param_1)` | `pending` |
| `00402f93` | `FUN_00402f93` | `undefined FUN_00402f93(void)` | `pending` |
| `00402fff` | `FUN_00402fff` | `undefined FUN_00402fff(void)` | `pending` |
| `00403010` | `FUN_00403010` | `undefined FUN_00403010(undefined4 * param_1)` | `pending` |
| `00403057` | `FUN_00403057` | `undefined FUN_00403057(void)` | `pending` |
| `00403110` | `FUN_00403110` | `undefined4 * FUN_00403110(undefined4 * param_1)` | `pending` |
| `004031b0` | `FUN_004031b0` | `undefined4 * FUN_004031b0(void * this, byte param_1)` | `pending` |
| `004031d0` | `FUN_004031d0` | `undefined FUN_004031d0(undefined4 * param_1)` | `pending` |
| `0040322a` | `FUN_0040322a` | `undefined FUN_0040322a(void)` | `pending` |
| `00403235` | `FUN_00403235` | `undefined FUN_00403235(void)` | `pending` |
| `0040324a` | `FUN_0040324a` | `undefined FUN_0040324a(void)` | `pending` |
| `00403260` | `FUN_00403260` | `undefined FUN_00403260(void * this, int param_1)` | `pending` |
| `004033d0` | `FUN_004033d0` | `undefined4 * FUN_004033d0(void * this, byte param_1)` | `pending` |
| `004033f0` | `FUN_004033f0` | `undefined FUN_004033f0(void)` | `pending` |
| `00403431` | `FUN_00403431` | `undefined FUN_00403431(void)` | `pending` |
| `00403440` | `FUN_00403440` | `undefined4 * FUN_00403440(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00403540` | `FUN_00403540` | `undefined FUN_00403540(undefined4 * param_1)` | `pending` |
| `004035ac` | `FUN_004035ac` | `undefined FUN_004035ac(void)` | `pending` |
| `004035ba` | `FUN_004035ba` | `undefined FUN_004035ba(void)` | `pending` |
| `004035c8` | `FUN_004035c8` | `undefined FUN_004035c8(void)` | `pending` |
| `004035d6` | `FUN_004035d6` | `undefined FUN_004035d6(void)` | `pending` |
| `004035ee` | `FUN_004035ee` | `undefined FUN_004035ee(void)` | `pending` |
| `00403600` | `FUN_00403600` | `undefined FUN_00403600(void * this, undefined4 param_1)` | `pending` |
| `00403660` | `FUN_00403660` | `undefined4 FUN_00403660(void * this, undefined4 param_1)` | `pending` |
| `004036c0` | `FUN_004036c0` | `undefined4 FUN_004036c0(int param_1)` | `pending` |
| `00403710` | `FUN_00403710` | `undefined FUN_00403710(int * param_1)` | `pending` |
| `00403810` | `FUN_00403810` | `undefined FUN_00403810(int * param_1)` | `pending` |
| `00403890` | `FUN_00403890` | `undefined4 FUN_00403890(int param_1)` | `pending` |
| `00403ae0` | `FUN_00403ae0` | `undefined4 FUN_00403ae0(void * param_1)` | `pending` |
| `00403b70` | `FUN_00403b70` | `undefined FUN_00403b70(void * param_1)` | `pending` |
| `00403c90` | `FUN_00403c90` | `int FUN_00403c90(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00403d10` | `FUN_00403d10` | `undefined4 FUN_00403d10(void * this, int param_1)` | `pending` |
| `00403d60` | `FUN_00403d60` | `undefined4 FUN_00403d60(int param_1)` | `pending` |
| `00403d70` | `FUN_00403d70` | `undefined FUN_00403d70(void * this, int param_1)` | `pending` |
| `00403d90` | `FUN_00403d90` | `bool FUN_00403d90(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00403e10` | `FUN_00403e10` | `undefined4 FUN_00403e10(void * this, char * param_1)` | `pending` |
| `00403ed0` | `FUN_00403ed0` | `undefined4 FUN_00403ed0(void * this, undefined4 param_1, int param_2)` | `pending` |
| `00403ff0` | `FUN_00403ff0` | `undefined4 FUN_00403ff0(void * this, undefined1 * param_1)` | `pending` |
| `0040428f` | `FUN_0040428f` | `undefined FUN_0040428f(void)` | `pending` |
| `004042f0` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `004043b0` | `FUN_004043b0` | `undefined4 * FUN_004043b0(undefined4 * param_1)` | `pending` |
| `00404450` | `FUN_00404450` | `undefined4 * FUN_00404450(void * this, byte param_1)` | `pending` |
| `00404470` | `FUN_00404470` | `undefined FUN_00404470(undefined4 * param_1)` | `pending` |
| `004044ea` | `FUN_004044ea` | `undefined FUN_004044ea(void)` | `pending` |
| `004044f5` | `FUN_004044f5` | `undefined FUN_004044f5(void)` | `pending` |
| `0040450a` | `FUN_0040450a` | `undefined FUN_0040450a(void)` | `pending` |
| `00404520` | `FUN_00404520` | `undefined FUN_00404520(void * this, int param_1)` | `pending` |
| `00404600` | `FUN_00404600` | `undefined FUN_00404600(void * this, void * param_1, int * param_2, int param_3)` | `pending` |
| `00404660` | `FUN_00404660` | `undefined4 * FUN_00404660(undefined4 * param_1)` | `pending` |
| `004046d0` | `FUN_004046d0` | `undefined4 * FUN_004046d0(void * this, byte param_1)` | `pending` |
| `004046f0` | `FUN_004046f0` | `undefined FUN_004046f0(undefined4 * param_1)` | `pending` |
| `0040478e` | `FUN_0040478e` | `undefined FUN_0040478e(void)` | `pending` |
| `004047a0` | `FUN_004047a0` | `undefined4 FUN_004047a0(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00404a30` | `FUN_00404a30` | `bool FUN_00404a30(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00404a90` | `FUN_00404a90` | `bool FUN_00404a90(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404ac0` | `FUN_00404ac0` | `bool FUN_00404ac0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404af0` | `FUN_00404af0` | `undefined FUN_00404af0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `00404b60` | `FUN_00404b60` | `undefined FUN_00404b60(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00404ba0` | `FUN_00404ba0` | `undefined FUN_00404ba0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00404bf0` | `FUN_00404bf0` | `bool FUN_00404bf0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00404c40` | `FUN_00404c40` | `bool FUN_00404c40(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00404c80` | `FUN_00404c80` | `bool FUN_00404c80(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00404d90` | `FUN_00404d90` | `undefined4 * FUN_00404d90(undefined4 * param_1)` | `pending` |
| `00405220` | `FUN_00405220` | `undefined4 * FUN_00405220(void * this, byte param_1)` | `pending` |
| `00405240` | `FUN_00405240` | `undefined FUN_00405240(undefined4 * param_1)` | `pending` |
| `0040532a` | `FUN_0040532a` | `undefined FUN_0040532a(void)` | `pending` |
| `00405338` | `FUN_00405338` | `undefined FUN_00405338(void)` | `pending` |
| `00405346` | `FUN_00405346` | `undefined FUN_00405346(void)` | `pending` |
| `00405354` | `FUN_00405354` | `undefined FUN_00405354(void)` | `pending` |
| `00405362` | `FUN_00405362` | `undefined FUN_00405362(void)` | `pending` |
| `00405370` | `FUN_00405370` | `undefined FUN_00405370(void)` | `pending` |
| `0040537e` | `FUN_0040537e` | `undefined FUN_0040537e(void)` | `pending` |
| `0040538c` | `FUN_0040538c` | `undefined FUN_0040538c(void)` | `pending` |
| `0040539a` | `FUN_0040539a` | `undefined FUN_0040539a(void)` | `pending` |
| `004053a8` | `FUN_004053a8` | `undefined FUN_004053a8(void)` | `pending` |
| `004053b6` | `FUN_004053b6` | `undefined FUN_004053b6(void)` | `pending` |
| `004053c4` | `FUN_004053c4` | `undefined FUN_004053c4(void)` | `pending` |
| `004053d2` | `FUN_004053d2` | `undefined FUN_004053d2(void)` | `pending` |
| `004053ea` | `FUN_004053ea` | `undefined FUN_004053ea(void)` | `pending` |
| `00405402` | `FUN_00405402` | `undefined FUN_00405402(void)` | `pending` |
| `0040541a` | `FUN_0040541a` | `undefined FUN_0040541a(void)` | `pending` |
| `00405432` | `FUN_00405432` | `undefined FUN_00405432(void)` | `pending` |
| `00405440` | `FUN_00405440` | `undefined FUN_00405440(void)` | `pending` |
| `00405458` | `FUN_00405458` | `undefined FUN_00405458(void)` | `pending` |
| `00405530` | `FUN_00405530` | `undefined4 FUN_00405530(int param_1)` | `pending` |
| `004055b0` | `FUN_004055b0` | `undefined FUN_004055b0(int param_1)` | `pending` |
| `004058a0` | `FUN_004058a0` | `undefined4 FUN_004058a0(int param_1)` | `pending` |
| `00405970` | `FUN_00405970` | `undefined4 FUN_00405970(void * param_1)` | `pending` |
| `00405ae1` | `FUN_00405ae1` | `undefined FUN_00405ae1(void)` | `pending` |
| `00405ae9` | `FUN_00405ae9` | `undefined FUN_00405ae9(void)` | `pending` |
| `00405c48` | `FUN_00405c48` | `undefined FUN_00405c48(void)` | `pending` |
| `00405c5a` | `FUN_00405c5a` | `undefined FUN_00405c5a(void)` | `pending` |
| `00405c70` | `FUN_00405c70` | `undefined4 FUN_00405c70(void * this, int * param_1)` | `pending` |
| `00405ce0` | `FUN_00405ce0` | `undefined FUN_00405ce0(int param_1)` | `pending` |
| `00405d70` | `FUN_00405d70` | `undefined4 FUN_00405d70(void * param_1)` | `pending` |
| `00405da0` | `FUN_00405da0` | `bool FUN_00405da0(int param_1)` | `pending` |
| `00405dc0` | `FUN_00405dc0` | `bool FUN_00405dc0(int param_1)` | `pending` |
| `00405de0` | `FUN_00405de0` | `undefined4 FUN_00405de0(int param_1)` | `pending` |
| `00406080` | `FUN_00406080` | `undefined4 FUN_00406080(int param_1)` | `verified_slice` |
| `004062e4` | `FUN_004062e4` | `undefined FUN_004062e4(void)` | `pending` |
| `004062fc` | `FUN_004062fc` | `undefined FUN_004062fc(void)` | `pending` |
| `00406304` | `FUN_00406304` | `undefined FUN_00406304(void)` | `pending` |
| `00406316` | `FUN_00406316` | `undefined FUN_00406316(void)` | `pending` |
| `00406330` | `FUN_00406330` | `undefined4 FUN_00406330(int param_1)` | `pending` |
| `00406360` | `FUN_00406360` | `undefined FUN_00406360(int param_1)` | `pending` |
| `00406380` | `FUN_00406380` | `undefined4 FUN_00406380(void)` | `pending` |
| `00406390` | `FUN_00406390` | `undefined4 FUN_00406390(int param_1)` | `pending` |
| `00406693` | `FUN_00406693` | `undefined FUN_00406693(void)` | `pending` |
| `004066ab` | `FUN_004066ab` | `undefined FUN_004066ab(void)` | `pending` |
| `004066bd` | `FUN_004066bd` | `undefined FUN_004066bd(void)` | `pending` |
| `004066d0` | `FUN_004066d0` | `undefined FUN_004066d0(void)` | `pending` |
| `004066e0` | `FUN_004066e0` | `undefined FUN_004066e0(void)` | `pending` |
| `004066f0` | `FUN_004066f0` | `undefined FUN_004066f0(int param_1)` | `pending` |
| `00406780` | `FUN_00406780` | `undefined FUN_00406780(void * param_1)` | `pending` |
| `004067d0` | `FUN_004067d0` | `undefined FUN_004067d0(void * param_1)` | `pending` |
| `004068d0` | `FUN_004068d0` | `undefined FUN_004068d0(void * this, RECT * param_1)` | `pending` |
| `004068f0` | `FUN_004068f0` | `undefined FUN_004068f0(void * param_1)` | `pending` |
| `00406a30` | `FUN_00406a30` | `undefined FUN_00406a30(void * this, RECT * param_1)` | `pending` |
| `00406a50` | `FUN_00406a50` | `undefined FUN_00406a50(void * param_1)` | `pending` |
| `00406b80` | `FUN_00406b80` | `undefined FUN_00406b80(void * this, RECT * param_1)` | `pending` |
| `00406ba0` | `FUN_00406ba0` | `undefined FUN_00406ba0(void * param_1)` | `pending` |
| `00406ce0` | `FUN_00406ce0` | `undefined FUN_00406ce0(void * this, RECT * param_1)` | `pending` |
| `00406d00` | `FUN_00406d00` | `undefined FUN_00406d00(void * param_1)` | `pending` |
| `00406e40` | `FUN_00406e40` | `undefined FUN_00406e40(void * this, RECT * param_1)` | `pending` |
| `00406e60` | `thunk_FUN_004067d0` | `undefined thunk_FUN_004067d0(void * param_1)` | `pending` |
| `00406e70` | `FUN_00406e70` | `undefined4 FUN_00406e70(int param_1)` | `pending` |
| `00406fc0` | `FUN_00406fc0` | `undefined4 FUN_00406fc0(void * this, char * param_1)` | `pending` |
| `00407030` | `FUN_00407030` | `undefined FUN_00407030(int param_1)` | `pending` |
| `00407080` | `FUN_00407080` | `undefined FUN_00407080(int param_1)` | `pending` |
| `004070a0` | `FUN_004070a0` | `undefined FUN_004070a0(void * this, int param_1)` | `pending` |
| `00407110` | `FUN_00407110` | `undefined4 FUN_00407110(undefined4 param_1)` | `pending` |
| `00407120` | `FUN_00407120` | `undefined4 FUN_00407120(void * this, byte param_1)` | `pending` |
| `00407260` | `FUN_00407260` | `undefined FUN_00407260(void)` | `pending` |
| `00407280` | `FUN_00407280` | `undefined FUN_00407280(void)` | `pending` |
| `004072b0` | `FUN_004072b0` | `undefined4 * FUN_004072b0(undefined4 * param_1)` | `pending` |
| `00407320` | `FUN_00407320` | `undefined4 * FUN_00407320(void * this, byte param_1)` | `pending` |
| `00407340` | `FUN_00407340` | `undefined FUN_00407340(undefined4 * param_1)` | `pending` |
| `00407393` | `FUN_00407393` | `undefined FUN_00407393(void)` | `pending` |
| `004073a0` | `FUN_004073a0` | `undefined FUN_004073a0(void)` | `pending` |
| `004074c0` | `FUN_004074c0` | `undefined4 * FUN_004074c0(undefined4 * param_1)` | `pending` |
| `00407ae0` | `FUN_00407ae0` | `undefined4 * FUN_00407ae0(void * this, byte param_1)` | `pending` |
| `00407b00` | `FUN_00407b00` | `undefined FUN_00407b00(undefined4 * param_1)` | `pending` |
| `00407bea` | `FUN_00407bea` | `undefined FUN_00407bea(void)` | `pending` |
| `00407bf8` | `FUN_00407bf8` | `undefined FUN_00407bf8(void)` | `pending` |
| `00407c06` | `FUN_00407c06` | `undefined FUN_00407c06(void)` | `pending` |
| `00407c14` | `FUN_00407c14` | `undefined FUN_00407c14(void)` | `pending` |
| `00407c22` | `FUN_00407c22` | `undefined FUN_00407c22(void)` | `pending` |
| `00407c30` | `FUN_00407c30` | `undefined FUN_00407c30(void)` | `pending` |
| `00407c3e` | `FUN_00407c3e` | `undefined FUN_00407c3e(void)` | `pending` |
| `00407c4c` | `FUN_00407c4c` | `undefined FUN_00407c4c(void)` | `pending` |
| `00407c5a` | `FUN_00407c5a` | `undefined FUN_00407c5a(void)` | `pending` |
| `00407c68` | `FUN_00407c68` | `undefined FUN_00407c68(void)` | `pending` |
| `00407c76` | `FUN_00407c76` | `undefined FUN_00407c76(void)` | `pending` |
| `00407c84` | `FUN_00407c84` | `undefined FUN_00407c84(void)` | `pending` |
| `00407c92` | `FUN_00407c92` | `undefined FUN_00407c92(void)` | `pending` |
| `00407ca0` | `FUN_00407ca0` | `undefined FUN_00407ca0(void)` | `pending` |
| `00407cae` | `FUN_00407cae` | `undefined FUN_00407cae(void)` | `pending` |
| `00407cbc` | `FUN_00407cbc` | `undefined FUN_00407cbc(void)` | `pending` |
| `00407cca` | `FUN_00407cca` | `undefined FUN_00407cca(void)` | `pending` |
| `00407cd8` | `FUN_00407cd8` | `undefined FUN_00407cd8(void)` | `pending` |
| `00407cf0` | `FUN_00407cf0` | `undefined FUN_00407cf0(void)` | `pending` |
| `00407dc0` | `FUN_00407dc0` | `undefined4 FUN_00407dc0(int param_1)` | `pending` |
| `00407e40` | `FUN_00407e40` | `undefined FUN_00407e40(int param_1)` | `pending` |
| `00408140` | `FUN_00408140` | `undefined FUN_00408140(void)` | `pending` |
| `00408150` | `FUN_00408150` | `bool FUN_00408150(int param_1)` | `pending` |
| `00408170` | `FUN_00408170` | `bool FUN_00408170(int param_1)` | `pending` |
| `00408190` | `FUN_00408190` | `undefined FUN_00408190(int param_1)` | `pending` |
| `004081b0` | `FUN_004081b0` | `undefined4 FUN_004081b0(void * param_1)` | `pending` |
| `00408354` | `FUN_00408354` | `undefined FUN_00408354(void)` | `pending` |
| `00408366` | `FUN_00408366` | `undefined FUN_00408366(void)` | `pending` |
| `00408370` | `FUN_00408370` | `undefined4 FUN_00408370(int param_1)` | `pending` |
| `004084f1` | `FUN_004084f1` | `undefined FUN_004084f1(void)` | `pending` |
| `00408509` | `FUN_00408509` | `undefined FUN_00408509(void)` | `pending` |
| `0040851b` | `FUN_0040851b` | `undefined FUN_0040851b(void)` | `pending` |
| `00408530` | `FUN_00408530` | `undefined FUN_00408530(int param_1)` | `pending` |
| `00408550` | `FUN_00408550` | `undefined FUN_00408550(int param_1)` | `pending` |
| `00408620` | `FUN_00408620` | `undefined4 FUN_00408620(void * this, int param_1)` | `pending` |
| `00408660` | `FUN_00408660` | `undefined FUN_00408660(int param_1)` | `pending` |
| `00408a50` | `FUN_00408a50` | `undefined4 * FUN_00408a50(undefined4 * param_1)` | `pending` |
| `00408ab0` | `FUN_00408ab0` | `undefined4 * FUN_00408ab0(undefined4 * param_1)` | `pending` |
| `00408b8f` | `FUN_00408b8f` | `undefined FUN_00408b8f(void)` | `pending` |
| `00408ba0` | `FUN_00408ba0` | `undefined FUN_00408ba0(undefined4 * param_1)` | `pending` |
| `00408be7` | `FUN_00408be7` | `undefined FUN_00408be7(void)` | `pending` |
| `00408bf0` | `FUN_00408bf0` | `undefined4 FUN_00408bf0(void * this, byte param_1)` | `pending` |
| `00408c8e` | `FUN_00408c8e` | `undefined FUN_00408c8e(void)` | `pending` |
| `00408c99` | `FUN_00408c99` | `undefined FUN_00408c99(void)` | `pending` |
| `00408ca4` | `FUN_00408ca4` | `undefined FUN_00408ca4(void)` | `pending` |
| `00408caf` | `FUN_00408caf` | `undefined FUN_00408caf(void)` | `pending` |
| `00408cc4` | `FUN_00408cc4` | `undefined FUN_00408cc4(void)` | `pending` |
| `00408cd0` | `FUN_00408cd0` | `undefined FUN_00408cd0(void)` | `pending` |
| `00408d36` | `FUN_00408d36` | `undefined FUN_00408d36(void)` | `pending` |
| `00408d41` | `FUN_00408d41` | `undefined FUN_00408d41(void)` | `pending` |
| `00408d4c` | `FUN_00408d4c` | `undefined FUN_00408d4c(void)` | `pending` |
| `00408d57` | `FUN_00408d57` | `undefined FUN_00408d57(void)` | `pending` |
| `00408d6c` | `FUN_00408d6c` | `undefined FUN_00408d6c(void)` | `pending` |
| `00408e50` | `FUN_00408e50` | `undefined4 * FUN_00408e50(undefined4 * param_1)` | `pending` |
| `00408f50` | `FUN_00408f50` | `undefined4 * FUN_00408f50(void * this, byte param_1)` | `pending` |
| `00408f70` | `FUN_00408f70` | `undefined FUN_00408f70(undefined4 * param_1)` | `pending` |
| `00408fdc` | `FUN_00408fdc` | `undefined FUN_00408fdc(void)` | `pending` |
| `00408fea` | `FUN_00408fea` | `undefined FUN_00408fea(void)` | `pending` |
| `00408ff8` | `FUN_00408ff8` | `undefined FUN_00408ff8(void)` | `pending` |
| `00409006` | `FUN_00409006` | `undefined FUN_00409006(void)` | `pending` |
| `0040901e` | `FUN_0040901e` | `undefined FUN_0040901e(void)` | `pending` |
| `00409050` | `FUN_00409050` | `undefined4 FUN_00409050(int param_1)` | `pending` |
| `004090a0` | `FUN_004090a0` | `undefined FUN_004090a0(void)` | `pending` |
| `00409170` | `FUN_00409170` | `undefined4 FUN_00409170(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00409220` | `FUN_00409220` | `int FUN_00409220(char * param_1, int * param_2)` | `pending` |
| `00409310` | `FUN_00409310` | `undefined4 * FUN_00409310(undefined4 * param_1)` | `pending` |
| `00409380` | `FUN_00409380` | `undefined4 * FUN_00409380(void * this, byte param_1)` | `pending` |
| `004093a0` | `FUN_004093a0` | `undefined FUN_004093a0(undefined4 * param_1)` | `pending` |
| `0040942b` | `FUN_0040942b` | `undefined FUN_0040942b(void)` | `pending` |
| `00409440` | `FUN_00409440` | `undefined FUN_00409440(void * this, int param_1)` | `pending` |
| `004094f0` | `FUN_004094f0` | `undefined4 FUN_004094f0(int param_1)` | `pending` |
| `00409530` | `FUN_00409530` | `undefined4 FUN_00409530(void * this, undefined4 param_1)` | `pending` |
| `00409705` | `FUN_00409705` | `undefined FUN_00409705(void)` | `pending` |
| `00409717` | `FUN_00409717` | `undefined FUN_00409717(void)` | `pending` |
| `00409720` | `FUN_00409720` | `bool FUN_00409720(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00409820` | `FUN_00409820` | `int FUN_00409820(void * this, int param_1, int param_2)` | `pending` |
| `00409860` | `FUN_00409860` | `undefined FUN_00409860(void * this, undefined4 * param_1)` | `pending` |
| `00409890` | `FUN_00409890` | `undefined FUN_00409890(void * this, int param_1)` | `pending` |
| `00409900` | `FUN_00409900` | `undefined FUN_00409900(void * this, undefined1 param_1, int * param_2)` | `pending` |
| `00409980` | `FUN_00409980` | `undefined4 * FUN_00409980(undefined4 * param_1)` | `pending` |
| `00409a30` | `FUN_00409a30` | `undefined4 * FUN_00409a30(void * this, byte param_1)` | `pending` |
| `00409a50` | `FUN_00409a50` | `undefined FUN_00409a50(undefined4 * param_1)` | `pending` |
| `00409aad` | `FUN_00409aad` | `undefined FUN_00409aad(void)` | `pending` |
| `00409ac0` | `FUN_00409ac0` | `undefined FUN_00409ac0(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)` | `pending` |
| `00409b30` | `FUN_00409b30` | `undefined4 FUN_00409b30(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409b60` | `FUN_00409b60` | `undefined4 FUN_00409b60(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409b90` | `FUN_00409b90` | `undefined4 FUN_00409b90(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409bc0` | `FUN_00409bc0` | `undefined4 FUN_00409bc0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409bf0` | `FUN_00409bf0` | `undefined4 FUN_00409bf0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409c20` | `FUN_00409c20` | `undefined4 * FUN_00409c20(undefined4 * param_1)` | `pending` |
| `00409c90` | `FUN_00409c90` | `undefined4 * FUN_00409c90(void * this, byte param_1)` | `pending` |
| `00409cb0` | `FUN_00409cb0` | `undefined FUN_00409cb0(undefined4 * param_1)` | `pending` |
| `00409d0e` | `FUN_00409d0e` | `undefined FUN_00409d0e(void)` | `pending` |
| `00409d20` | `FUN_00409d20` | `undefined4 * FUN_00409d20(undefined4 * param_1)` | `pending` |
| `00409d40` | `FUN_00409d40` | `undefined4 * FUN_00409d40(undefined4 * param_1)` | `pending` |
| `00409f10` | `FUN_00409f10` | `undefined4 * FUN_00409f10(void * this, byte param_1)` | `pending` |
| `00409f30` | `FUN_00409f30` | `undefined FUN_00409f30(undefined4 * param_1)` | `pending` |
| `00409fa8` | `FUN_00409fa8` | `undefined FUN_00409fa8(void)` | `pending` |
| `00409fb6` | `FUN_00409fb6` | `undefined FUN_00409fb6(void)` | `pending` |
| `00409fce` | `FUN_00409fce` | `undefined FUN_00409fce(void)` | `pending` |
| `00409fe0` | `FUN_00409fe0` | `undefined * FUN_00409fe0(void)` | `pending` |
| `0040a000` | `FUN_0040a000` | `undefined4 * FUN_0040a000(void * this, undefined4 param_1)` | `pending` |
| `0040a4a4` | `FUN_0040a4a4` | `undefined FUN_0040a4a4(void)` | `pending` |
| `0040a4b0` | `FUN_0040a4b0` | `int FUN_0040a4b0(void * this, int param_1)` | `pending` |
| `0040a5c0` | `FUN_0040a5c0` | `undefined FUN_0040a5c0(void * param_1)` | `pending` |
| `0040a5f0` | `FUN_0040a5f0` | `undefined FUN_0040a5f0(int param_1)` | `pending` |
| `0040a640` | `FUN_0040a640` | `undefined FUN_0040a640(void * param_1)` | `pending` |
| `0040a740` | `FUN_0040a740` | `undefined FUN_0040a740(void * this, int param_1)` | `pending` |
| `0040a7a0` | `FUN_0040a7a0` | `undefined FUN_0040a7a0(void * this, int * param_1)` | `pending` |
| `0040a820` | `FUN_0040a820` | `undefined FUN_0040a820(void * this, int param_1)` | `pending` |
| `0040a850` | `FUN_0040a850` | `undefined4 FUN_0040a850(void * param_1)` | `pending` |
| `0040a8c0` | `FUN_0040a8c0` | `undefined4 FUN_0040a8c0(void * this, int param_1)` | `pending` |
| `0040a910` | `FUN_0040a910` | `undefined4 FUN_0040a910(void * this, int param_1)` | `pending` |
| `0040aa10` | `FUN_0040aa10` | `undefined4 FUN_0040aa10(void)` | `pending` |
| `0040aa9e` | `FUN_0040aa9e` | `undefined FUN_0040aa9e(void)` | `pending` |
| `0040aab0` | `FUN_0040aab0` | `undefined4 * FUN_0040aab0(void * this, int param_1)` | `pending` |
| `0040ab60` | `FUN_0040ab60` | `byte FUN_0040ab60(void * this, int param_1)` | `pending` |
| `0040ab90` | `FUN_0040ab90` | `uint FUN_0040ab90(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040ad09` | `FUN_0040ad09` | `undefined FUN_0040ad09(void)` | `pending` |
| `0040ad20` | `FUN_0040ad20` | `undefined4 FUN_0040ad20(void * this, int param_1, int * param_2)` | `pending` |
| `0040ada0` | `FUN_0040ada0` | `undefined4 FUN_0040ada0(void * this, int param_1, int param_2)` | `pending` |
| `0040aee0` | `FUN_0040aee0` | `undefined4 * FUN_0040aee0(undefined4 * param_1)` | `pending` |
| `0040af70` | `FUN_0040af70` | `undefined4 * FUN_0040af70(void * this, byte param_1)` | `pending` |
| `0040af90` | `FUN_0040af90` | `undefined FUN_0040af90(undefined4 * param_1)` | `pending` |
| `0040afed` | `FUN_0040afed` | `undefined FUN_0040afed(void)` | `pending` |
| `0040b000` | `FUN_0040b000` | `undefined4 FUN_0040b000(void * this, int param_1)` | `pending` |
| `0040b16f` | `FUN_0040b16f` | `undefined FUN_0040b16f(void)` | `pending` |
| `0040b180` | `FUN_0040b180` | `undefined FUN_0040b180(undefined4 * param_1)` | `pending` |
| `0040b1c7` | `FUN_0040b1c7` | `undefined FUN_0040b1c7(void)` | `pending` |
| `0040b2a0` | `FUN_0040b2a0` | `undefined4 * FUN_0040b2a0(undefined4 * param_1)` | `pending` |
| `0040b340` | `FUN_0040b340` | `undefined4 * FUN_0040b340(void * this, byte param_1)` | `pending` |
| `0040b360` | `FUN_0040b360` | `undefined FUN_0040b360(undefined4 * param_1)` | `pending` |
| `0040b3b5` | `FUN_0040b3b5` | `undefined FUN_0040b3b5(void)` | `pending` |
| `0040b3ca` | `FUN_0040b3ca` | `undefined FUN_0040b3ca(void)` | `pending` |
| `0040b3e0` | `FUN_0040b3e0` | `undefined4 FUN_0040b3e0(int param_1)` | `pending` |
| `0040b560` | `FUN_0040b560` | `undefined FUN_0040b560(int param_1)` | `pending` |
| `0040b5d0` | `FUN_0040b5d0` | `undefined FUN_0040b5d0(void * this, int param_1)` | `pending` |
| `0040b600` | `FUN_0040b600` | `undefined4 FUN_0040b600(int param_1)` | `pending` |
| `0040b689` | `FUN_0040b689` | `undefined FUN_0040b689(void)` | `pending` |
| `0040b6a0` | `FUN_0040b6a0` | `undefined FUN_0040b6a0(void * param_1)` | `pending` |
| `0040b6d0` | `FUN_0040b6d0` | `undefined FUN_0040b6d0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)` | `pending` |
| `0040b710` | `FUN_0040b710` | `undefined4 FUN_0040b710(int param_1)` | `pending` |
| `0040b820` | `FUN_0040b820` | `bool FUN_0040b820(int param_1)` | `pending` |
| `0040b870` | `FUN_0040b870` | `undefined4 FUN_0040b870(int param_1)` | `pending` |
| `0040ba36` | `FUN_0040ba36` | `undefined FUN_0040ba36(void)` | `pending` |
| `0040ba60` | `FUN_0040ba60` | `undefined FUN_0040ba60(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `0040bbb2` | `FUN_0040bbb2` | `undefined FUN_0040bbb2(void)` | `pending` |
| `0040bc70` | `FUN_0040bc70` | `undefined4 * FUN_0040bc70(undefined4 * param_1)` | `pending` |
| `0040bd00` | `FUN_0040bd00` | `undefined4 * FUN_0040bd00(void * this, byte param_1)` | `pending` |
| `0040bd20` | `FUN_0040bd20` | `undefined FUN_0040bd20(undefined4 * param_1)` | `pending` |
| `0040bdc7` | `FUN_0040bdc7` | `undefined FUN_0040bdc7(void)` | `pending` |
| `0040bddc` | `FUN_0040bddc` | `undefined FUN_0040bddc(void)` | `pending` |
| `0040bdf0` | `FUN_0040bdf0` | `undefined FUN_0040bdf0(void * this, int param_1, int param_2)` | `pending` |
| `0040bfd0` | `FUN_0040bfd0` | `undefined4 FUN_0040bfd0(void * this, undefined4 param_1, int param_2)` | `pending` |
| `0040c0c0` | `FUN_0040c0c0` | `undefined FUN_0040c0c0(void * this, void * param_1, int param_2, int * param_3, int * param_4, int param_5)` | `pending` |
| `0040c210` | `FUN_0040c210` | `undefined4 * FUN_0040c210(undefined4 * param_1)` | `pending` |
| `0040c440` | `FUN_0040c440` | `undefined4 * FUN_0040c440(void * this, byte param_1)` | `pending` |
| `0040c460` | `FUN_0040c460` | `undefined FUN_0040c460(undefined4 * param_1)` | `pending` |
| `0040c4f0` | `FUN_0040c4f0` | `undefined FUN_0040c4f0(void)` | `pending` |
| `0040c4fe` | `FUN_0040c4fe` | `undefined FUN_0040c4fe(void)` | `pending` |
| `0040c50c` | `FUN_0040c50c` | `undefined FUN_0040c50c(void)` | `pending` |
| `0040c51a` | `FUN_0040c51a` | `undefined FUN_0040c51a(void)` | `pending` |
| `0040c528` | `FUN_0040c528` | `undefined FUN_0040c528(void)` | `pending` |
| `0040c540` | `FUN_0040c540` | `undefined FUN_0040c540(void)` | `pending` |
| `0040c558` | `FUN_0040c558` | `undefined FUN_0040c558(void)` | `pending` |
| `0040c566` | `FUN_0040c566` | `undefined FUN_0040c566(void)` | `pending` |
| `0040c57e` | `FUN_0040c57e` | `undefined FUN_0040c57e(void)` | `pending` |
| `0040c600` | `FUN_0040c600` | `undefined4 FUN_0040c600(int param_1)` | `pending` |
| `0040c6e0` | `FUN_0040c6e0` | `undefined4 FUN_0040c6e0(void * param_1)` | `pending` |
| `0040c7d0` | `FUN_0040c7d0` | `undefined4 FUN_0040c7d0(int param_1)` | `pending` |
| `0040c810` | `FUN_0040c810` | `undefined4 FUN_0040c810(void * param_1)` | `pending` |
| `0040c860` | `FUN_0040c860` | `undefined FUN_0040c860(int param_1)` | `pending` |
| `0040c8a0` | `FUN_0040c8a0` | `bool FUN_0040c8a0(int param_1)` | `pending` |
| `0040c8e0` | `FUN_0040c8e0` | `undefined4 FUN_0040c8e0(int param_1)` | `pending` |
| `0040ca00` | `FUN_0040ca00` | `undefined4 FUN_0040ca00(int param_1)` | `pending` |
| `0040cc64` | `FUN_0040cc64` | `undefined FUN_0040cc64(void)` | `pending` |
| `0040cc7c` | `FUN_0040cc7c` | `undefined FUN_0040cc7c(void)` | `pending` |
| `0040cc84` | `FUN_0040cc84` | `undefined FUN_0040cc84(void)` | `pending` |
| `0040cc96` | `FUN_0040cc96` | `undefined FUN_0040cc96(void)` | `pending` |
| `0040ccb0` | `FUN_0040ccb0` | `undefined FUN_0040ccb0(int param_1)` | `pending` |
| `0040cce0` | `FUN_0040cce0` | `undefined FUN_0040cce0(int param_1)` | `pending` |
| `0040cd00` | `FUN_0040cd00` | `undefined4 FUN_0040cd00(void)` | `pending` |
| `0040ce68` | `FUN_0040ce68` | `undefined FUN_0040ce68(void)` | `pending` |
| `0040ce80` | `FUN_0040ce80` | `undefined FUN_0040ce80(void)` | `pending` |
| `0040ce92` | `FUN_0040ce92` | `undefined FUN_0040ce92(void)` | `pending` |
| `0040cea0` | `FUN_0040cea0` | `undefined4 FUN_0040cea0(int param_1)` | `pending` |
| `0040d077` | `FUN_0040d077` | `undefined FUN_0040d077(void)` | `pending` |
| `0040d08f` | `FUN_0040d08f` | `undefined FUN_0040d08f(void)` | `pending` |
| `0040d0a1` | `FUN_0040d0a1` | `undefined FUN_0040d0a1(void)` | `pending` |
| `0040d0b0` | `FUN_0040d0b0` | `undefined FUN_0040d0b0(int param_1)` | `pending` |
| `0040d1e6` | `FUN_0040d1e6` | `undefined FUN_0040d1e6(void)` | `pending` |
| `0040d1fe` | `FUN_0040d1fe` | `undefined FUN_0040d1fe(void)` | `pending` |
| `0040d210` | `FUN_0040d210` | `undefined FUN_0040d210(void)` | `pending` |
| `0040d220` | `FUN_0040d220` | `undefined FUN_0040d220(int param_1)` | `pending` |
| `0040d3b1` | `FUN_0040d3b1` | `undefined FUN_0040d3b1(void)` | `pending` |
| `0040d3c9` | `FUN_0040d3c9` | `undefined FUN_0040d3c9(void)` | `pending` |
| `0040d3db` | `FUN_0040d3db` | `undefined FUN_0040d3db(void)` | `pending` |
| `0040d3f0` | `FUN_0040d3f0` | `undefined FUN_0040d3f0(int param_1)` | `pending` |
| `0040d440` | `FUN_0040d440` | `undefined FUN_0040d440(void * param_1)` | `pending` |
| `0040d460` | `FUN_0040d460` | `undefined FUN_0040d460(void * param_1)` | `pending` |
| `0040d550` | `FUN_0040d550` | `undefined FUN_0040d550(void * this, RECT * param_1)` | `pending` |
| `0040d570` | `FUN_0040d570` | `undefined FUN_0040d570(int param_1)` | `pending` |
| `0040d590` | `FUN_0040d590` | `undefined4 FUN_0040d590(int param_1)` | `pending` |
| `0040d680` | `FUN_0040d680` | `undefined4 FUN_0040d680(void * this, char * param_1)` | `pending` |
| `0040d722` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0040d728` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `0040d72e` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0040d73a` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0040d740` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `0040d746` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0040d74c` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `0040d752` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `0040d764` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `0040d76a` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `0040d770` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0040d776` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0040d77c` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `0040d782` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0040d788` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0040d78e` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0040d794` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0040d79a` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `0040d7a0` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0040d7a6` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `0040d7ac` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `0040d7e8` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `0040d8c6` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0040d8cc` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `0040d8d2` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0040d8d8` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040d8de` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `0040d8e4` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0040d8ea` | `Ordinal_817` | `undefined Ordinal_817()` | `pending` |
| `0040d8f0` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `0040d95c` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `0040d974` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040d97a` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `0040d980` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0040d986` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040d98c` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `0040d992` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `0040d998` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0040d99e` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `0040d9a4` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0040d9aa` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `0040d9b0` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `0040d9b6` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `0040d9bc` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `0040d9c2` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0040d9c8` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `0040d9ce` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `0040d9d4` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `0040d9da` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0040d9e0` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `0040d9e6` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `0040d9ec` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040d9f2` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `0040d9f8` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `0040d9fe` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `0040da04` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `0040da8e` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `0040da94` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `0040daa0` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `0040daa6` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `0040daac` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `0040dab2` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `0040dab8` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0040dabe` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0040dac4` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `0040daca` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `0040dad0` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0040dad6` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `0040dadc` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `0040dae2` | `Ordinal_1067` | `undefined Ordinal_1067()` | `pending` |
| `0040dae8` | `Ordinal_2301` | `undefined Ordinal_2301()` | `pending` |
| `0040daee` | `Ordinal_286` | `undefined Ordinal_286()` | `pending` |
| `0040daf4` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `0040db1e` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0040db24` | `Ordinal_542` | `undefined Ordinal_542()` | `pending` |
| `0040db2a` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `0040db30` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `0040db36` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `0040db3c` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `0040db42` | `Ordinal_2001` | `undefined Ordinal_2001()` | `pending` |
| `0040db48` | `Ordinal_2064` | `undefined Ordinal_2064()` | `pending` |
| `0040db4e` | `Ordinal_1440` | `undefined Ordinal_1440()` | `pending` |
| `0040db54` | `Ordinal_1717` | `undefined Ordinal_1717()` | `pending` |
| `0040db5a` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0040db60` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0040db66` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `0040db6c` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `0040db72` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0040db7e` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `0040db84` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0040db8a` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `0040db90` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0040db96` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `0040db9c` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `0040dbb0` | `FUN_0040dbb0` | `undefined FUN_0040dbb0(_onexit_t param_1)` | `pending` |
| `0040dc50` | `FUN_0040dc50` | `int FUN_0040dc50(_onexit_t param_1)` | `pending` |
| `0040dc70` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040dce0` | `FUN_0040dce0` | `undefined FUN_0040dce0(void)` | `pending` |
| `0040dd00` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040dd80` | `FUN_0040dd80` | `undefined4 FUN_0040dd80(undefined4 * param_1)` | `pending` |
| `0040dda0` | `FUN_0040dda0` | `undefined FUN_0040dda0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)` | `pending` |
| `0040de10` | `FUN_0040de10` | `undefined FUN_0040de10(void)` | `pending` |
| `0040de30` | `entry` | `undefined entry(void)` | `pending` |
| `0040dfd2` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040dfde` | `terminate` | `void terminate(void)` | `pending` |
| `0040dfe4` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `0040dfea` | `initterm` | `undefined initterm()` | `pending` |
| `0040dff0` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `0040e020` | `FUN_0040e020` | `undefined FUN_0040e020(void)` | `pending` |
| `0040e022` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `0040e028` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040e041` | `FUN_0040e041` | `undefined4 FUN_0040e041(int param_1, undefined4 param_2)` | `pending` |
| `0040e090` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Creatures.exe

Remaining: **1064** of **1116** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(undefined4 * param_1)` | `pending` |
| `004011aa` | `FUN_004011aa` | `undefined FUN_004011aa(void)` | `pending` |
| `004011c0` | `FUN_004011c0` | `int FUN_004011c0(void * this, int param_1)` | `pending` |
| `00401390` | `FUN_00401390` | `undefined FUN_00401390(void * this, int param_1)` | `pending` |
| `004013b0` | `FUN_004013b0` | `int FUN_004013b0(void * this, void * param_1)` | `pending` |
| `004014a0` | `FUN_004014a0` | `undefined FUN_004014a0(undefined4 * param_1)` | `pending` |
| `004014b0` | `FUN_004014b0` | `undefined FUN_004014b0(void * this, int param_1)` | `pending` |
| `00401580` | `FUN_00401580` | `uint FUN_00401580(void * this, int * param_1)` | `pending` |
| `00401680` | `FUN_00401680` | `int FUN_00401680(int param_1)` | `pending` |
| `004016c0` | `FUN_004016c0` | `undefined FUN_004016c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)` | `pending` |
| `004017c0` | `FUN_004017c0` | `undefined * FUN_004017c0(void)` | `pending` |
| `00401870` | `FUN_00401870` | `undefined FUN_00401870(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)` | `pending` |
| `004018d0` | `FUN_004018d0` | `undefined FUN_004018d0(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)` | `pending` |
| `00401930` | `FUN_00401930` | `undefined FUN_00401930(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)` | `pending` |
| `00401a00` | `FUN_00401a00` | `undefined4 FUN_00401a00(undefined4 param_1)` | `pending` |
| `00401a10` | `FUN_00401a10` | `undefined4 * FUN_00401a10(void * this, undefined4 param_1, undefined4 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8, undefined1 param_9, undefined1 param_10, undefined1 param_11, undefined1 param_12, undefined1 param_13, undefined1 param_14)` | `pending` |
| `00401a80` | `FUN_00401a80` | `undefined FUN_00401a80(void * this, undefined4 param_1, int param_2)` | `pending` |
| `00401ae0` | `FUN_00401ae0` | `undefined FUN_00401ae0(void * this, int * param_1)` | `pending` |
| `00401b40` | `FUN_00401b40` | `undefined FUN_00401b40(void * this, int * param_1)` | `pending` |
| `00401ba0` | `FUN_00401ba0` | `undefined FUN_00401ba0(int * param_1)` | `pending` |
| `00401c30` | `FUN_00401c30` | `undefined * FUN_00401c30(void)` | `pending` |
| `00401c60` | `FUN_00401c60` | `undefined FUN_00401c60(undefined4 param_1, int param_2, int param_3)` | `pending` |
| `00401ca0` | `FUN_00401ca0` | `undefined FUN_00401ca0(int * param_1, int param_2)` | `pending` |
| `00401d00` | `FUN_00401d00` | `undefined FUN_00401d00(int * param_1, int param_2)` | `pending` |
| `00401d60` | `FUN_00401d60` | `undefined FUN_00401d60(int * param_1, int param_2)` | `pending` |
| `00401fd0` | `FUN_00401fd0` | `undefined4 * FUN_00401fd0(void * this, uint param_1)` | `pending` |
| `00401ff0` | `FUN_00401ff0` | `undefined FUN_00401ff0(undefined4 * param_1)` | `pending` |
| `00402091` | `FUN_00402091` | `undefined FUN_00402091(void)` | `pending` |
| `004020a0` | `FUN_004020a0` | `undefined FUN_004020a0(int param_1)` | `pending` |
| `00402130` | `FUN_00402130` | `undefined FUN_00402130(void * this, int * param_1, undefined4 * param_2)` | `pending` |
| `00402170` | `FUN_00402170` | `undefined FUN_00402170(void * this, undefined4 param_1, uint param_2, int param_3)` | `pending` |
| `004021a0` | `FUN_004021a0` | `undefined FUN_004021a0(void * this, int param_1)` | `pending` |
| `004021c0` | `FUN_004021c0` | `undefined FUN_004021c0(int param_1)` | `pending` |
| `00402220` | `FUN_00402220` | `undefined FUN_00402220(void * this, uint param_1)` | `pending` |
| `00402260` | `FUN_00402260` | `undefined FUN_00402260(int param_1)` | `pending` |
| `004022a0` | `FUN_004022a0` | `undefined FUN_004022a0(void)` | `verified_slice` |
| `004023d0` | `FUN_004023d0` | `undefined FUN_004023d0(void * this, undefined4 param_1, int param_2)` | `pending` |
| `00402520` | `FUN_00402520` | `undefined FUN_00402520(int param_1)` | `pending` |
| `00402550` | `FUN_00402550` | `undefined FUN_00402550(int param_1)` | `pending` |
| `00402570` | `FUN_00402570` | `undefined FUN_00402570(int param_1)` | `pending` |
| `004025a0` | `FUN_004025a0` | `undefined FUN_004025a0(int param_1)` | `pending` |
| `004025d0` | `FUN_004025d0` | `undefined FUN_004025d0(int param_1)` | `pending` |
| `00402600` | `FUN_00402600` | `undefined FUN_00402600(int param_1)` | `pending` |
| `00402630` | `FUN_00402630` | `undefined FUN_00402630(void * this, int param_1)` | `pending` |
| `00402680` | `FUN_00402680` | `undefined FUN_00402680(int param_1)` | `verified_slice` |
| `00402700` | `FUN_00402700` | `undefined FUN_00402700(int param_1)` | `verified_slice` |
| `004027e0` | `FUN_004027e0` | `undefined FUN_004027e0(int param_1)` | `pending` |
| `00402950` | `FUN_00402950` | `undefined FUN_00402950(int param_1)` | `pending` |
| `00402980` | `FUN_00402980` | `undefined FUN_00402980(void * this, int param_1)` | `pending` |
| `004029b0` | `FUN_004029b0` | `undefined FUN_004029b0(void * this, undefined4 param_1, uint param_2, int param_3)` | `pending` |
| `00402a10` | `FUN_00402a10` | `undefined FUN_00402a10(void * this, int param_1)` | `pending` |
| `00402a30` | `FUN_00402a30` | `UINT FUN_00402a30(int param_1)` | `verified_slice` |
| `00402ab0` | `FUN_00402ab0` | `undefined FUN_00402ab0(void * this, int param_1, int param_2, int param_3, int param_4)` | `verified_slice` |
| `00402b78` | `FUN_00402b78` | `undefined FUN_00402b78(void)` | `pending` |
| `00402b90` | `FUN_00402b90` | `undefined FUN_00402b90(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)` | `verified_slice` |
| `00402c30` | `FUN_00402c30` | `undefined FUN_00402c30(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8, undefined4 param_9)` | `verified_slice` |
| `00402eea` | `FUN_00402eea` | `undefined FUN_00402eea(void)` | `pending` |
| `00402f00` | `FUN_00402f00` | `undefined FUN_00402f00(void * this, int param_1, int param_2, int param_3, int param_4)` | `verified_slice` |
| `00403110` | `FUN_00403110` | `undefined FUN_00403110(void * this, int * param_1, int * param_2)` | `verified_slice` |
| `004031a0` | `FUN_004031a0` | `undefined FUN_004031a0(void * this, int * param_1, int * param_2)` | `pending` |
| `004031e0` | `FUN_004031e0` | `undefined FUN_004031e0(void * this, int param_1, int param_2)` | `verified_slice` |
| `00403200` | `FUN_00403200` | `int FUN_00403200(void * this, int param_1)` | `verified_slice` |
| `00403230` | `FUN_00403230` | `int FUN_00403230(void * this, int param_1)` | `verified_slice` |
| `00403260` | `FUN_00403260` | `undefined FUN_00403260(void * this, int * param_1, int * param_2)` | `verified_slice` |
| `004033db` | `FUN_004033db` | `undefined FUN_004033db(void)` | `pending` |
| `004033f0` | `FUN_004033f0` | `undefined FUN_004033f0(int param_1)` | `verified_slice` |
| `00403450` | `FUN_00403450` | `undefined4 FUN_00403450(int param_1)` | `verified_slice` |
| `0040345b` | `FUN_0040345b` | `BOOL FUN_0040345b(int param_1)` | `pending` |
| `00403530` | `FUN_00403530` | `undefined FUN_00403530(void * this, int param_1, int param_2)` | `verified_slice` |
| `00403640` | `FUN_00403640` | `undefined FUN_00403640(int param_1)` | `verified_slice` |
| `0040364b` | `FUN_0040364b` | `undefined FUN_0040364b(void * param_1)` | `pending` |
| `00403700` | `FUN_00403700` | `undefined FUN_00403700(int param_1)` | `verified_slice` |
| `0040370b` | `FUN_0040370b` | `undefined FUN_0040370b(void * param_1)` | `pending` |
| `004037c0` | `FUN_004037c0` | `undefined FUN_004037c0(int * param_1)` | `verified_slice` |
| `004037cb` | `FUN_004037cb` | `undefined FUN_004037cb(int * param_1)` | `pending` |
| `004039c0` | `FUN_004039c0` | `undefined4 FUN_004039c0(int * param_1)` | `verified_slice` |
| `00403b70` | `FUN_00403b70` | `undefined FUN_00403b70(void * this, int param_1, int param_2)` | `verified_slice` |
| `00403c34` | `FUN_00403c34` | `undefined FUN_00403c34(void)` | `pending` |
| `00403c90` | `FUN_00403c90` | `undefined FUN_00403c90(int param_1)` | `pending` |
| `00403cf0` | `FUN_00403cf0` | `HGDIOBJ FUN_00403cf0(void * this, int param_1, int param_2)` | `pending` |
| `00403dc0` | `FUN_00403dc0` | `undefined FUN_00403dc0(int param_1)` | `pending` |
| `00403e40` | `FUN_00403e40` | `undefined4 FUN_00403e40(undefined4 param_1)` | `pending` |
| `00403e50` | `FUN_00403e50` | `undefined4 FUN_00403e50(void * this, char * param_1)` | `verified_slice` |
| `00404220` | `FUN_00404220` | `LOGPALETTE * FUN_00404220(LOGPALETTE * param_1)` | `verified_slice` |
| `004042f0` | `FUN_004042f0` | `undefined4 FUN_004042f0(undefined4 param_1)` | `pending` |
| `00404310` | `FUN_00404310` | `bool FUN_00404310(void * this, undefined1 * param_1)` | `verified_slice` |
| `004043dc` | `FUN_004043dc` | `undefined FUN_004043dc(void)` | `pending` |
| `004043f0` | `FUN_004043f0` | `undefined FUN_004043f0(undefined4 * param_1)` | `pending` |
| `00404443` | `FUN_00404443` | `undefined FUN_00404443(void)` | `pending` |
| `004044b0` | `FUN_004044b0` | `undefined FUN_004044b0(void)` | `pending` |
| `004044c0` | `FUN_004044c0` | `undefined FUN_004044c0(undefined4 * param_1)` | `pending` |
| `00404507` | `FUN_00404507` | `undefined FUN_00404507(void)` | `pending` |
| `00404520` | `FUN_00404520` | `undefined FUN_00404520(void)` | `pending` |
| `00404580` | `FUN_00404580` | `undefined FUN_00404580(void)` | `pending` |
| `004045cb` | `FUN_004045cb` | `undefined FUN_004045cb(void)` | `pending` |
| `0040463a` | `FUN_0040463a` | `undefined FUN_0040463a(void)` | `pending` |
| `00404660` | `FUN_00404660` | `undefined FUN_00404660(void)` | `pending` |
| `004046c0` | `FUN_004046c0` | `undefined FUN_004046c0(void)` | `pending` |
| `0040470b` | `FUN_0040470b` | `undefined FUN_0040470b(void)` | `pending` |
| `0040477a` | `FUN_0040477a` | `undefined FUN_0040477a(void)` | `pending` |
| `004047a0` | `FUN_004047a0` | `undefined FUN_004047a0(void)` | `pending` |
| `00404800` | `FUN_00404800` | `undefined FUN_00404800(void)` | `pending` |
| `0040484b` | `FUN_0040484b` | `undefined FUN_0040484b(void)` | `pending` |
| `004048ba` | `FUN_004048ba` | `undefined FUN_004048ba(void)` | `pending` |
| `004048e0` | `FUN_004048e0` | `undefined FUN_004048e0(void)` | `pending` |
| `00404940` | `FUN_00404940` | `undefined FUN_00404940(void)` | `pending` |
| `0040498b` | `FUN_0040498b` | `undefined FUN_0040498b(void)` | `pending` |
| `004049b0` | `FUN_004049b0` | `undefined FUN_004049b0(void)` | `pending` |
| `00404a10` | `FUN_00404a10` | `undefined FUN_00404a10(void)` | `pending` |
| `00404a5b` | `FUN_00404a5b` | `undefined FUN_00404a5b(void)` | `pending` |
| `00404aca` | `FUN_00404aca` | `undefined FUN_00404aca(void)` | `pending` |
| `00404af0` | `FUN_00404af0` | `undefined FUN_00404af0(void)` | `pending` |
| `00404b50` | `FUN_00404b50` | `undefined FUN_00404b50(void)` | `pending` |
| `00404b9b` | `FUN_00404b9b` | `undefined FUN_00404b9b(void)` | `pending` |
| `00404c40` | `FUN_00404c40` | `undefined FUN_00404c40(void)` | `pending` |
| `00404c50` | `FUN_00404c50` | `undefined FUN_00404c50(void)` | `pending` |
| `00404e60` | `FUN_00404e60` | `undefined4 * FUN_00404e60(void * this, uint param_1)` | `pending` |
| `00404ec4` | `FUN_00404ec4` | `undefined FUN_00404ec4(void)` | `pending` |
| `00404ed9` | `FUN_00404ed9` | `undefined FUN_00404ed9(void)` | `pending` |
| `00404ef0` | `FUN_00404ef0` | `undefined FUN_00404ef0(void)` | `pending` |
| `00404f31` | `FUN_00404f31` | `undefined FUN_00404f31(void)` | `pending` |
| `00404f40` | `FUN_00404f40` | `undefined FUN_00404f40(undefined4 * param_1)` | `pending` |
| `00404f9b` | `FUN_00404f9b` | `undefined FUN_00404f9b(void)` | `pending` |
| `00404fa9` | `FUN_00404fa9` | `undefined FUN_00404fa9(void)` | `pending` |
| `00404fcb` | `FUN_00404fcb` | `undefined FUN_00404fcb(void)` | `pending` |
| `004052f0` | `FUN_004052f0` | `undefined4 FUN_004052f0(undefined4 param_1)` | `verified_slice` |
| `00405380` | `FUN_00405380` | `bool FUN_00405380(void)` | `verified_slice` |
| `004054f0` | `FUN_004054f0` | `undefined FUN_004054f0(int * param_1)` | `pending` |
| `00405696` | `FUN_00405696` | `undefined FUN_00405696(void)` | `pending` |
| `004056a0` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `004056b0` | `FUN_004056b0` | `undefined FUN_004056b0(void * this, void * param_1)` | `pending` |
| `00405d40` | `FUN_00405d40` | `undefined FUN_00405d40(undefined4 param_1)` | `pending` |
| `00405e06` | `FUN_00405e06` | `undefined FUN_00405e06(void)` | `pending` |
| `00405e18` | `FUN_00405e18` | `undefined FUN_00405e18(void)` | `pending` |
| `00405fbc` | `FUN_00405fbc` | `undefined FUN_00405fbc(void)` | `pending` |
| `00406059` | `FUN_00406059` | `undefined FUN_00406059(void)` | `pending` |
| `0040606b` | `FUN_0040606b` | `undefined FUN_0040606b(void)` | `pending` |
| `00406080` | `FUN_00406080` | `int FUN_00406080(void * this, undefined4 * param_1)` | `verified_slice` |
| `00406660` | `FUN_00406660` | `undefined FUN_00406660(void)` | `pending` |
| `00406880` | `FUN_00406880` | `undefined4 FUN_00406880(byte param_1, byte param_2, int * param_3, undefined4 param_4)` | `verified_slice` |
| `004068a5` | `FUN_004068a5` | `undefined4 FUN_004068a5(undefined4 * param_1)` | `pending` |
| `004069e4` | `FUN_004069e4` | `undefined FUN_004069e4(void)` | `pending` |
| `004069f0` | `FUN_004069f0` | `undefined FUN_004069f0(int param_1, int param_2)` | `verified_slice` |
| `00406ec0` | `FUN_00406ec0` | `undefined FUN_00406ec0(void)` | `pending` |
| `00406ee0` | `FUN_00406ee0` | `undefined FUN_00406ee0(void)` | `pending` |
| `004071a0` | `FUN_004071a0` | `undefined4 FUN_004071a0(void)` | `pending` |
| `00407280` | `FUN_00407280` | `undefined4 FUN_00407280(void * this, LPCSTR param_1, undefined2 param_2, undefined2 param_3)` | `pending` |
| `004073a0` | `FUN_004073a0` | `undefined FUN_004073a0(void * this, int param_1)` | `pending` |
| `004074d0` | `FUN_004074d0` | `undefined FUN_004074d0(int param_1)` | `pending` |
| `00407820` | `FUN_00407820` | `undefined FUN_00407820(undefined4 param_1, undefined4 param_2)` | `verified_slice` |
| `00407949` | `FUN_00407949` | `undefined FUN_00407949(void)` | `pending` |
| `00407951` | `FUN_00407951` | `undefined FUN_00407951(void)` | `pending` |
| `00407963` | `FUN_00407963` | `undefined FUN_00407963(void)` | `pending` |
| `00407970` | `FUN_00407970` | `undefined FUN_00407970(undefined4 param_1, undefined4 param_2, undefined4 param_3)` | `verified_slice` |
| `00407ae9` | `FUN_00407ae9` | `undefined FUN_00407ae9(void)` | `pending` |
| `00407af1` | `FUN_00407af1` | `undefined FUN_00407af1(void)` | `pending` |
| `00407af9` | `FUN_00407af9` | `undefined FUN_00407af9(void)` | `pending` |
| `00407b0b` | `FUN_00407b0b` | `undefined FUN_00407b0b(void)` | `pending` |
| `00407b20` | `FUN_00407b20` | `undefined FUN_00407b20(void)` | `verified_slice` |
| `00407c90` | `FUN_00407c90` | `undefined FUN_00407c90(void)` | `pending` |
| `00407c98` | `FUN_00407c98` | `undefined FUN_00407c98(void)` | `pending` |
| `00407ca0` | `FUN_00407ca0` | `undefined FUN_00407ca0(void)` | `pending` |
| `00407ca8` | `FUN_00407ca8` | `undefined FUN_00407ca8(void)` | `pending` |
| `00407cba` | `FUN_00407cba` | `undefined FUN_00407cba(void)` | `pending` |
| `00407cd0` | `FUN_00407cd0` | `undefined FUN_00407cd0(void)` | `verified_slice` |
| `00407def` | `FUN_00407def` | `undefined FUN_00407def(void)` | `pending` |
| `00407df7` | `FUN_00407df7` | `undefined FUN_00407df7(void)` | `pending` |
| `00407dff` | `FUN_00407dff` | `undefined FUN_00407dff(void)` | `pending` |
| `00407e07` | `FUN_00407e07` | `undefined FUN_00407e07(void)` | `pending` |
| `00407e19` | `FUN_00407e19` | `undefined FUN_00407e19(void)` | `pending` |
| `00408070` | `FUN_00408070` | `undefined FUN_00408070(void * this, undefined4 param_1)` | `pending` |
| `004080a0` | `FUN_004080a0` | `undefined FUN_004080a0(int param_1)` | `pending` |
| `00408150` | `FUN_00408150` | `PHKEY FUN_00408150(void * this, char * param_1, char * param_2, char * param_3)` | `verified_slice` |
| `00408300` | `FUN_00408300` | `bool FUN_00408300(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `verified_slice` |
| `00408350` | `FUN_00408350` | `undefined FUN_00408350(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00408370` | `FUN_00408370` | `undefined FUN_00408370(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `verified_slice` |
| `00408390` | `FUN_00408390` | `undefined FUN_00408390(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `004083b0` | `FUN_004083b0` | `undefined FUN_004083b0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `00408420` | `FUN_00408420` | `undefined FUN_00408420(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00408460` | `FUN_00408460` | `undefined FUN_00408460(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)` | `verified_slice` |
| `004084c0` | `FUN_004084c0` | `undefined FUN_004084c0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4, undefined4 param_5)` | `pending` |
| `00408510` | `FUN_00408510` | `bool FUN_00408510(void * this, int param_1, LPCSTR param_2, BYTE * param_3, DWORD param_4)` | `pending` |
| `00408550` | `FUN_00408550` | `bool FUN_00408550(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `verified_slice` |
| `004085a0` | `FUN_004085a0` | `bool FUN_004085a0(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `004085e0` | `FUN_004085e0` | `bool FUN_004085e0(void * this, int param_1, LPCSTR param_2)` | `verified_slice` |
| `00408620` | `FUN_00408620` | `bool FUN_00408620(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00408660` | `FUN_00408660` | `undefined4 * FUN_00408660(undefined4 * param_1)` | `pending` |
| `004086d0` | `FUN_004086d0` | `undefined4 * FUN_004086d0(void * this, uint param_1)` | `pending` |
| `004086f0` | `FUN_004086f0` | `undefined FUN_004086f0(undefined4 * param_1)` | `pending` |
| `0040874e` | `FUN_0040874e` | `undefined FUN_0040874e(void)` | `pending` |
| `00408760` | `FUN_00408760` | `undefined4 * FUN_00408760(undefined4 * param_1)` | `pending` |
| `00408780` | `FUN_00408780` | `undefined4 * FUN_00408780(undefined4 * param_1)` | `pending` |
| `00408960` | `FUN_00408960` | `undefined4 * FUN_00408960(void * this, uint param_1)` | `pending` |
| `00408980` | `FUN_00408980` | `undefined FUN_00408980(undefined4 * param_1)` | `pending` |
| `004089fb` | `FUN_004089fb` | `undefined FUN_004089fb(void)` | `pending` |
| `00408a09` | `FUN_00408a09` | `undefined FUN_00408a09(void)` | `pending` |
| `00408a21` | `FUN_00408a21` | `undefined FUN_00408a21(void)` | `pending` |
| `00408a30` | `FUN_00408a30` | `undefined4 * FUN_00408a30(void * this, undefined4 param_1)` | `pending` |
| `00408ee3` | `FUN_00408ee3` | `undefined FUN_00408ee3(void)` | `pending` |
| `00408ef0` | `FUN_00408ef0` | `int FUN_00408ef0(void * this, int param_1)` | `pending` |
| `00409020` | `FUN_00409020` | `undefined FUN_00409020(void * param_1)` | `pending` |
| `00409050` | `FUN_00409050` | `undefined FUN_00409050(int param_1)` | `pending` |
| `004090a0` | `FUN_004090a0` | `undefined FUN_004090a0(void * param_1)` | `pending` |
| `004091b0` | `FUN_004091b0` | `undefined FUN_004091b0(void * this, int param_1)` | `pending` |
| `00409210` | `FUN_00409210` | `undefined FUN_00409210(void * this, int * param_1)` | `pending` |
| `004092a0` | `FUN_004092a0` | `undefined FUN_004092a0(void * this, int param_1)` | `pending` |
| `004092d0` | `FUN_004092d0` | `undefined4 FUN_004092d0(void * param_1)` | `pending` |
| `00409340` | `FUN_00409340` | `undefined4 FUN_00409340(void * param_1)` | `pending` |
| `00409380` | `FUN_00409380` | `undefined4 FUN_00409380(int param_1)` | `pending` |
| `004093b0` | `FUN_004093b0` | `undefined4 FUN_004093b0(void * this, int param_1)` | `pending` |
| `00409410` | `FUN_00409410` | `undefined4 FUN_00409410(void * this, int param_1)` | `pending` |
| `00409520` | `FUN_00409520` | `undefined4 FUN_00409520(undefined4 param_1)` | `pending` |
| `004095b2` | `FUN_004095b2` | `undefined FUN_004095b2(void)` | `pending` |
| `004095c0` | `FUN_004095c0` | `undefined4 * FUN_004095c0(void * this, int param_1)` | `pending` |
| `00409680` | `FUN_00409680` | `byte FUN_00409680(void * this, int param_1)` | `pending` |
| `004096c0` | `FUN_004096c0` | `uint FUN_004096c0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040984a` | `FUN_0040984a` | `undefined FUN_0040984a(void)` | `pending` |
| `00409860` | `FUN_00409860` | `undefined4 FUN_00409860(void * this, int param_1, int * param_2)` | `pending` |
| `004098f0` | `FUN_004098f0` | `undefined4 FUN_004098f0(void * this, int param_1, undefined4 param_2)` | `pending` |
| `00409950` | `FUN_00409950` | `undefined4 FUN_00409950(void * this, int param_1)` | `pending` |
| `004099c0` | `FUN_004099c0` | `undefined4 FUN_004099c0(void * this, int param_1, int param_2)` | `pending` |
| `00409b10` | `FUN_00409b10` | `undefined4 * FUN_00409b10(undefined4 * param_1)` | `pending` |
| `00409baa` | `FUN_00409baa` | `undefined FUN_00409baa(void)` | `pending` |
| `00409be0` | `FUN_00409be0` | `undefined4 * FUN_00409be0(void * this, uint param_1)` | `pending` |
| `00409c00` | `FUN_00409c00` | `undefined FUN_00409c00(undefined4 * param_1)` | `pending` |
| `00409c66` | `FUN_00409c66` | `undefined FUN_00409c66(void)` | `pending` |
| `00409c86` | `FUN_00409c86` | `undefined FUN_00409c86(void)` | `pending` |
| `00409d80` | `FUN_00409d80` | `undefined4 FUN_00409d80(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00409da0` | `FUN_00409da0` | `int FUN_00409da0(int param_1)` | `pending` |
| `00409dc0` | `FUN_00409dc0` | `int FUN_00409dc0(int param_1)` | `pending` |
| `00409de0` | `FUN_00409de0` | `undefined1 * FUN_00409de0(undefined1 * param_1)` | `pending` |
| `00409df0` | `FUN_00409df0` | `undefined4 * FUN_00409df0(undefined4 * param_1)` | `pending` |
| `00409f2a` | `FUN_00409f2a` | `undefined FUN_00409f2a(void)` | `pending` |
| `00409f40` | `FUN_00409f40` | `undefined4 FUN_00409f40(undefined4 param_1)` | `pending` |
| `00409f50` | `FUN_00409f50` | `undefined FUN_00409f50(void * this, void * param_1)` | `pending` |
| `0040a680` | `FUN_0040a680` | `undefined FUN_0040a680(void * this, void * param_1)` | `pending` |
| `0040aae0` | `FUN_0040aae0` | `undefined4 FUN_0040aae0(void * this, undefined4 param_1, char param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040ab40` | `FUN_0040ab40` | `undefined FUN_0040ab40(void * this, uint param_1)` | `pending` |
| `0040ae40` | `FUN_0040ae40` | `int FUN_0040ae40(void * this, undefined1 param_1)` | `pending` |
| `0040ae70` | `FUN_0040ae70` | `int FUN_0040ae70(void * this, undefined4 param_1)` | `pending` |
| `0040aea0` | `FUN_0040aea0` | `int FUN_0040aea0(void * this, undefined1 * param_1)` | `pending` |
| `0040b05a` | `FUN_0040b05a` | `undefined FUN_0040b05a(void)` | `pending` |
| `0040b070` | `FUN_0040b070` | `undefined4 FUN_0040b070(void * this, int param_1, int param_2)` | `pending` |
| `0040b0a0` | `FUN_0040b0a0` | `undefined4 FUN_0040b0a0(void * this, int param_1)` | `pending` |
| `0040b0c0` | `FUN_0040b0c0` | `undefined FUN_0040b0c0(void)` | `pending` |
| `0040b1e0` | `FUN_0040b1e0` | `BOOL FUN_0040b1e0(RECT * param_1, POINT * param_2)` | `pending` |
| `0040b250` | `FUN_0040b250` | `undefined4 FUN_0040b250(int * param_1, int * param_2)` | `pending` |
| `0040b300` | `FUN_0040b300` | `undefined4 FUN_0040b300(int * param_1, int * param_2)` | `pending` |
| `0040b560` | `FUN_0040b560` | `undefined FUN_0040b560(int * param_1)` | `pending` |
| `0040b840` | `FUN_0040b840` | `undefined4 FUN_0040b840(undefined4 param_1, int param_2)` | `pending` |
| `0040b929` | `FUN_0040b929` | `undefined FUN_0040b929(void)` | `pending` |
| `0040b93b` | `FUN_0040b93b` | `undefined FUN_0040b93b(void)` | `pending` |
| `0040b950` | `FUN_0040b950` | `undefined4 FUN_0040b950(undefined4 param_1, char * param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040ba9f` | `FUN_0040ba9f` | `undefined FUN_0040ba9f(void)` | `pending` |
| `0040baa7` | `FUN_0040baa7` | `undefined FUN_0040baa7(void)` | `pending` |
| `0040bab9` | `FUN_0040bab9` | `undefined FUN_0040bab9(void)` | `pending` |
| `0040bb14` | `FUN_0040bb14` | `undefined FUN_0040bb14(void)` | `pending` |
| `0040bb2c` | `FUN_0040bb2c` | `undefined FUN_0040bb2c(void)` | `pending` |
| `0040bb40` | `FUN_0040bb40` | `undefined FUN_0040bb40(void)` | `verified_slice` |
| `0040bb60` | `FUN_0040bb60` | `undefined FUN_0040bb60(void)` | `verified_slice` |
| `0040bc10` | `FUN_0040bc10` | `undefined FUN_0040bc10(undefined4 param_1, undefined4 param_2, undefined1 param_3)` | `pending` |
| `0040bc40` | `FUN_0040bc40` | `undefined FUN_0040bc40(void)` | `pending` |
| `0040bda0` | `FUN_0040bda0` | `undefined FUN_0040bda0(void)` | `pending` |
| `0040bde1` | `FUN_0040bde1` | `undefined FUN_0040bde1(void)` | `pending` |
| `0040bea0` | `FUN_0040bea0` | `undefined4 FUN_0040bea0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `0040bf80` | `FUN_0040bf80` | `undefined FUN_0040bf80(void)` | `pending` |
| `0040bfe0` | `FUN_0040bfe0` | `undefined FUN_0040bfe0(void)` | `pending` |
| `0040c02b` | `FUN_0040c02b` | `undefined FUN_0040c02b(void)` | `pending` |
| `0040c09a` | `FUN_0040c09a` | `undefined FUN_0040c09a(void)` | `pending` |
| `0040c0e0` | `FUN_0040c0e0` | `undefined4 * FUN_0040c0e0(undefined4 * param_1)` | `pending` |
| `0040c2b0` | `FUN_0040c2b0` | `undefined4 * FUN_0040c2b0(void * this, uint param_1)` | `pending` |
| `0040c2d0` | `FUN_0040c2d0` | `undefined4 * FUN_0040c2d0(void * this, undefined4 param_1, int param_2, int param_3, int param_4)` | `pending` |
| `0040c430` | `FUN_0040c430` | `undefined FUN_0040c430(void)` | `pending` |
| `0040c460` | `FUN_0040c460` | `undefined4 * FUN_0040c460(void * this, uint param_1)` | `pending` |
| `0040c4c0` | `FUN_0040c4c0` | `undefined FUN_0040c4c0(undefined4 * param_1)` | `pending` |
| `0040c573` | `FUN_0040c573` | `undefined FUN_0040c573(void)` | `pending` |
| `0040c940` | `FUN_0040c940` | `undefined FUN_0040c940(undefined4 * param_1)` | `pending` |
| `0040c993` | `FUN_0040c993` | `undefined FUN_0040c993(void)` | `pending` |
| `0040c9a0` | `FUN_0040c9a0` | `undefined FUN_0040c9a0(int param_1)` | `pending` |
| `0040c9c0` | `FUN_0040c9c0` | `undefined FUN_0040c9c0(void * this, int param_1)` | `pending` |
| `0040cb70` | `FUN_0040cb70` | `undefined FUN_0040cb70(void * this, int param_1, int param_2, int param_3, int * param_4, int * param_5, int param_6)` | `verified_slice` |
| `0040cd20` | `FUN_0040cd20` | `undefined FUN_0040cd20(void * this, int param_1, int param_2, int param_3, int param_4, undefined1 param_5)` | `pending` |
| `0040cda0` | `FUN_0040cda0` | `undefined FUN_0040cda0(void * this, int param_1, int param_2, char * param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6)` | `pending` |
| `0040ceb0` | `FUN_0040ceb0` | `undefined4 FUN_0040ceb0(int param_1)` | `pending` |
| `0040cf00` | `FUN_0040cf00` | `undefined FUN_0040cf00(int param_1)` | `pending` |
| `0040cf60` | `FUN_0040cf60` | `undefined FUN_0040cf60(void)` | `pending` |
| `0040cf6b` | `FUN_0040cf6b` | `undefined FUN_0040cf6b(void)` | `pending` |
| `0040cfd0` | `FUN_0040cfd0` | `undefined FUN_0040cfd0(int param_1)` | `pending` |
| `0040d020` | `FUN_0040d020` | `undefined FUN_0040d020(void)` | `pending` |
| `0040d108` | `FUN_0040d108` | `undefined FUN_0040d108(void)` | `pending` |
| `0040d120` | `FUN_0040d120` | `short FUN_0040d120(char * param_1)` | `pending` |
| `0040d150` | `FUN_0040d150` | `undefined FUN_0040d150(void)` | `verified_slice` |
| `0040d170` | `FUN_0040d170` | `undefined FUN_0040d170(void)` | `pending` |
| `0040d1b0` | `FUN_0040d1b0` | `undefined FUN_0040d1b0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)` | `verified_slice` |
| `0040d230` | `FUN_0040d230` | `undefined FUN_0040d230(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, uint param_9, int param_10)` | `verified_slice` |
| `0040d2e0` | `FUN_0040d2e0` | `undefined FUN_0040d2e0(void)` | `pending` |
| `0040d300` | `FUN_0040d300` | `undefined FUN_0040d300(void)` | `pending` |
| `0040d330` | `FUN_0040d330` | `undefined FUN_0040d330(void)` | `pending` |
| `0040d350` | `FUN_0040d350` | `undefined FUN_0040d350(void)` | `pending` |
| `0040d380` | `FUN_0040d380` | `undefined FUN_0040d380(void)` | `pending` |
| `0040d3a0` | `FUN_0040d3a0` | `undefined FUN_0040d3a0(void)` | `pending` |
| `0040d3d0` | `FUN_0040d3d0` | `undefined FUN_0040d3d0(void)` | `pending` |
| `0040d3f0` | `FUN_0040d3f0` | `undefined FUN_0040d3f0(void)` | `pending` |
| `0040d420` | `FUN_0040d420` | `undefined FUN_0040d420(void)` | `pending` |
| `0040d450` | `FUN_0040d450` | `undefined FUN_0040d450(void)` | `pending` |
| `0040d470` | `FUN_0040d470` | `undefined FUN_0040d470(uint param_1, undefined4 param_2, int param_3, HSZ param_4, int param_5, HDDEDATA param_6)` | `pending` |
| `0040d4b0` | `FUN_0040d4b0` | `undefined4 * FUN_0040d4b0(void * this, LPCSTR param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9)` | `pending` |
| `0040d5f0` | `FUN_0040d5f0` | `undefined4 FUN_0040d5f0(void * this, uint param_1, undefined4 param_2, int param_3, HSZ param_4, int param_5, HDDEDATA param_6)` | `pending` |
| `0040d730` | `FUN_0040d730` | `undefined4 FUN_0040d730(void * this, int param_1)` | `pending` |
| `0040d770` | `FUN_0040d770` | `undefined FUN_0040d770(void * this, undefined4 param_1, HSZ param_2)` | `pending` |
| `0040d800` | `FUN_0040d800` | `undefined FUN_0040d800(void * this, int param_1)` | `pending` |
| `0040d860` | `FUN_0040d860` | `undefined4 FUN_0040d860(void * this, int param_1)` | `pending` |
| `0040d8a0` | `FUN_0040d8a0` | `undefined FUN_0040d8a0(void * this, LPCSTR param_1)` | `pending` |
| `0040d8c0` | `FUN_0040d8c0` | `undefined FUN_0040d8c0(void * this, HSZ param_1, LPSTR param_2, DWORD param_3)` | `pending` |
| `0040d8f0` | `FUN_0040d8f0` | `undefined FUN_0040d8f0(void * this, HSZ param_1)` | `pending` |
| `0040d910` | `FUN_0040d910` | `undefined4 * FUN_0040d910(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `0040d940` | `FUN_0040d940` | `undefined FUN_0040d940(undefined4 * param_1)` | `pending` |
| `0040d960` | `FUN_0040d960` | `undefined FUN_0040d960(void * this, LPBYTE param_1, DWORD param_2)` | `pending` |
| `0040d990` | `FUN_0040d990` | `undefined4 FUN_0040d990(void * this, void * param_1)` | `pending` |
| `0040d9d0` | `FUN_0040d9d0` | `undefined FUN_0040d9d0(void)` | `pending` |
| `0040dad0` | `FUN_0040dad0` | `undefined4 * FUN_0040dad0(void * this, undefined4 param_1, HSZ param_2)` | `pending` |
| `0040db80` | `FUN_0040db80` | `undefined FUN_0040db80(undefined4 * param_1)` | `pending` |
| `0040dbb0` | `FUN_0040dbb0` | `undefined FUN_0040dbb0(void * this, HDDEDATA param_1)` | `pending` |
| `0040dbe0` | `FUN_0040dbe0` | `undefined FUN_0040dbe0(void * this, HDDEDATA param_1)` | `pending` |
| `0040dc10` | `FUN_0040dc10` | `undefined FUN_0040dc10(void * this, int param_1)` | `pending` |
| `0040de10` | `FUN_0040de10` | `undefined4 * FUN_0040de10(void * this, uint param_1)` | `pending` |
| `0040de30` | `FUN_0040de30` | `undefined4 * FUN_0040de30(void * this, undefined4 param_1)` | `pending` |
| `0040dea0` | `FUN_0040dea0` | `undefined FUN_0040dea0(undefined4 * param_1)` | `pending` |
| `0040def3` | `FUN_0040def3` | `undefined FUN_0040def3(void)` | `pending` |
| `0040df00` | `FUN_0040df00` | `undefined FUN_0040df00(int param_1)` | `pending` |
| `0040e090` | `FUN_0040e090` | `undefined FUN_0040e090(void * param_1)` | `pending` |
| `0040e383` | `FUN_0040e383` | `undefined FUN_0040e383(void)` | `pending` |
| `0040e38b` | `FUN_0040e38b` | `undefined FUN_0040e38b(void)` | `pending` |
| `0040e393` | `FUN_0040e393` | `undefined FUN_0040e393(void)` | `pending` |
| `0040e6f0` | `FUN_0040e6f0` | `undefined FUN_0040e6f0(void)` | `pending` |
| `0040ebd0` | `FUN_0040ebd0` | `undefined FUN_0040ebd0(int * param_1)` | `pending` |
| `0040ee80` | `FUN_0040ee80` | `undefined4 FUN_0040ee80(void * this, byte * param_1)` | `pending` |
| `0040eef0` | `FUN_0040eef0` | `undefined4 FUN_0040eef0(int param_1)` | `pending` |
| `0040ef20` | `FUN_0040ef20` | `undefined FUN_0040ef20(int * param_1)` | `pending` |
| `0040efb0` | `FUN_0040efb0` | `undefined FUN_0040efb0(void * this, char * param_1)` | `pending` |
| `0040f0c0` | `FUN_0040f0c0` | `uint FUN_0040f0c0(void * this, int param_1)` | `pending` |
| `0040f1d0` | `FUN_0040f1d0` | `undefined FUN_0040f1d0(int param_1)` | `pending` |
| `0040f500` | `FUN_0040f500` | `undefined FUN_0040f500(void * this, undefined4 param_1)` | `pending` |
| `0040f520` | `FUN_0040f520` | `undefined FUN_0040f520(int param_1)` | `pending` |
| `0040f550` | `FUN_0040f550` | `undefined FUN_0040f550(void * this, undefined4 * param_1, undefined4 * param_2, int * param_3)` | `pending` |
| `0040f75f` | `FUN_0040f75f` | `undefined FUN_0040f75f(void)` | `pending` |
| `0040f85a` | `FUN_0040f85a` | `undefined FUN_0040f85a(void)` | `pending` |
| `0041028e` | `FUN_0041028e` | `undefined FUN_0041028e(void)` | `pending` |
| `00410320` | `FUN_00410320` | `undefined4 FUN_00410320(void * this, int param_1)` | `pending` |
| `00410350` | `FUN_00410350` | `undefined FUN_00410350(int param_1)` | `pending` |
| `00410420` | `FUN_00410420` | `undefined4 * FUN_00410420(undefined4 * param_1)` | `pending` |
| `00410480` | `FUN_00410480` | `undefined4 * FUN_00410480(void * this, uint param_1)` | `pending` |
| `004104a0` | `FUN_004104a0` | `undefined FUN_004104a0(undefined4 * param_1)` | `pending` |
| `004104e7` | `FUN_004104e7` | `undefined FUN_004104e7(void)` | `pending` |
| `00410520` | `FUN_00410520` | `undefined4 FUN_00410520(int param_1, int param_2, int * param_3, undefined4 param_4)` | `verified_slice` |
| `0041071a` | `FUN_0041071a` | `undefined FUN_0041071a(void)` | `pending` |
| `0041072c` | `FUN_0041072c` | `undefined FUN_0041072c(void)` | `pending` |
| `00410750` | `FUN_00410750` | `undefined FUN_00410750(undefined4 * param_1)` | `pending` |
| `00410797` | `FUN_00410797` | `undefined FUN_00410797(void)` | `pending` |
| `00410800` | `FUN_00410800` | `undefined FUN_00410800(void)` | `pending` |
| `00410873` | `FUN_00410873` | `undefined FUN_00410873(void)` | `pending` |
| `00410888` | `FUN_00410888` | `undefined FUN_00410888(void)` | `pending` |
| `00410890` | `FUN_00410890` | `undefined FUN_00410890(undefined4 * param_1)` | `pending` |
| `004108da` | `FUN_004108da` | `undefined FUN_004108da(void)` | `pending` |
| `004108ef` | `FUN_004108ef` | `undefined FUN_004108ef(void)` | `pending` |
| `00410960` | `FUN_00410960` | `undefined FUN_00410960(void)` | `pending` |
| `00410b40` | `FUN_00410b40` | `undefined4 * FUN_00410b40(void * this, uint param_1)` | `pending` |
| `00410b60` | `FUN_00410b60` | `undefined FUN_00410b60(undefined4 * param_1)` | `pending` |
| `00410bba` | `FUN_00410bba` | `undefined FUN_00410bba(void)` | `pending` |
| `00410e10` | `FUN_00410e10` | `undefined4 * FUN_00410e10(void * this, uint param_1)` | `pending` |
| `00410e30` | `FUN_00410e30` | `undefined FUN_00410e30(undefined4 * param_1)` | `pending` |
| `00410e96` | `FUN_00410e96` | `undefined FUN_00410e96(void)` | `pending` |
| `00410eb6` | `FUN_00410eb6` | `undefined FUN_00410eb6(void)` | `pending` |
| `00410ffd` | `FUN_00410ffd` | `undefined FUN_00410ffd(void)` | `pending` |
| `00411012` | `FUN_00411012` | `undefined FUN_00411012(void)` | `pending` |
| `00411060` | `FUN_00411060` | `undefined FUN_00411060(int * param_1)` | `pending` |
| `004110c0` | `FUN_004110c0` | `undefined FUN_004110c0(int * param_1)` | `pending` |
| `00411120` | `FUN_00411120` | `undefined4 FUN_00411120(int param_1)` | `pending` |
| `004111f0` | `FUN_004111f0` | `undefined4 FUN_004111f0(void * this, uint param_1)` | `pending` |
| `004113d0` | `FUN_004113d0` | `undefined4 * FUN_004113d0(void * this, uint param_1)` | `pending` |
| `00411470` | `FUN_00411470` | `undefined FUN_00411470(void)` | `pending` |
| `004114b1` | `FUN_004114b1` | `undefined FUN_004114b1(void)` | `pending` |
| `004114c0` | `FUN_004114c0` | `undefined FUN_004114c0(void)` | `pending` |
| `00411501` | `FUN_00411501` | `undefined FUN_00411501(void)` | `pending` |
| `00411510` | `FUN_00411510` | `undefined FUN_00411510(void)` | `pending` |
| `00411564` | `FUN_00411564` | `undefined FUN_00411564(void)` | `pending` |
| `00411572` | `FUN_00411572` | `undefined FUN_00411572(void)` | `pending` |
| `0041158a` | `FUN_0041158a` | `undefined FUN_0041158a(void)` | `pending` |
| `004115a0` | `FUN_004115a0` | `undefined FUN_004115a0(void)` | `pending` |
| `004115e1` | `FUN_004115e1` | `undefined FUN_004115e1(void)` | `pending` |
| `004115f0` | `FUN_004115f0` | `undefined FUN_004115f0(undefined4 * param_1)` | `pending` |
| `00411653` | `FUN_00411653` | `undefined FUN_00411653(void)` | `pending` |
| `00411661` | `FUN_00411661` | `undefined FUN_00411661(void)` | `pending` |
| `0041166f` | `FUN_0041166f` | `undefined FUN_0041166f(void)` | `pending` |
| `00411694` | `FUN_00411694` | `undefined FUN_00411694(void)` | `pending` |
| `00411790` | `FUN_00411790` | `undefined FUN_00411790(int param_1)` | `verified_slice` |
| `004118a0` | `FUN_004118a0` | `undefined FUN_004118a0(void * this, byte * param_1, undefined1 param_2)` | `pending` |
| `00411a90` | `FUN_00411a90` | `undefined FUN_00411a90(void * this, int param_1)` | `pending` |
| `00411ac0` | `FUN_00411ac0` | `undefined FUN_00411ac0(int param_1)` | `verified_slice` |
| `00411b20` | `FUN_00411b20` | `int * FUN_00411b20(void * this, int param_1)` | `pending` |
| `00411e45` | `FUN_00411e45` | `undefined FUN_00411e45(void)` | `pending` |
| `00411e53` | `FUN_00411e53` | `undefined FUN_00411e53(void)` | `pending` |
| `00411e6b` | `FUN_00411e6b` | `undefined FUN_00411e6b(void)` | `pending` |
| `00411e80` | `FUN_00411e80` | `undefined4 FUN_00411e80(void * this, undefined4 param_1)` | `pending` |
| `004120c0` | `FUN_004120c0` | `undefined FUN_004120c0(void * this, LPARAM * param_1)` | `pending` |
| `00412256` | `FUN_00412256` | `undefined FUN_00412256(void)` | `pending` |
| `004122fa` | `FUN_004122fa` | `undefined FUN_004122fa(void)` | `pending` |
| `00412350` | `FUN_00412350` | `undefined4 FUN_00412350(void)` | `pending` |
| `00412549` | `FUN_00412549` | `undefined FUN_00412549(void)` | `pending` |
| `00412690` | `FUN_00412690` | `undefined FUN_00412690(void)` | `pending` |
| `004126a2` | `FUN_004126a2` | `undefined FUN_004126a2(void)` | `pending` |
| `004126c0` | `FUN_004126c0` | `undefined FUN_004126c0(void)` | `verified_slice` |
| `00412776` | `FUN_00412776` | `undefined FUN_00412776(void)` | `pending` |
| `004127e0` | `FUN_004127e0` | `undefined FUN_004127e0(void)` | `pending` |
| `004127f0` | `FUN_004127f0` | `undefined FUN_004127f0(undefined4 * param_1)` | `pending` |
| `00412837` | `FUN_00412837` | `undefined FUN_00412837(void)` | `pending` |
| `00412840` | `FUN_00412840` | `undefined4 FUN_00412840(void * this, uint param_1)` | `pending` |
| `00412860` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0041295d` | `FUN_0041295d` | `undefined FUN_0041295d(void)` | `pending` |
| `00412972` | `FUN_00412972` | `undefined FUN_00412972(void)` | `pending` |
| `004129e0` | `FUN_004129e0` | `undefined4 FUN_004129e0(void)` | `pending` |
| `00412afd` | `FUN_00412afd` | `undefined FUN_00412afd(void)` | `pending` |
| `00412b12` | `FUN_00412b12` | `undefined FUN_00412b12(void)` | `pending` |
| `00412c87` | `FUN_00412c87` | `undefined FUN_00412c87(void)` | `pending` |
| `00412d40` | `FUN_00412d40` | `undefined4 FUN_00412d40(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00412ec0` | `FUN_00412ec0` | `undefined4 FUN_00412ec0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00413040` | `FUN_00413040` | `undefined4 FUN_00413040(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00413110` | `FUN_00413110` | `undefined4 FUN_00413110(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00413340` | `FUN_00413340` | `undefined4 FUN_00413340(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00413410` | `FUN_00413410` | `undefined FUN_00413410(void * this, void * param_1)` | `pending` |
| `004136f0` | `FUN_004136f0` | `undefined FUN_004136f0(void * this, void * param_1)` | `pending` |
| `00413730` | `FUN_00413730` | `undefined FUN_00413730(void * this, void * param_1)` | `pending` |
| `00413a20` | `FUN_00413a20` | `undefined FUN_00413a20(void * this, void * param_1)` | `pending` |
| `00413b80` | `FUN_00413b80` | `undefined FUN_00413b80(void * this, void * param_1)` | `pending` |
| `00413da0` | `FUN_00413da0` | `undefined FUN_00413da0(void * this, void * param_1)` | `pending` |
| `00414180` | `FUN_00414180` | `undefined FUN_00414180(void * this, void * param_1)` | `pending` |
| `00414430` | `FUN_00414430` | `undefined FUN_00414430(void)` | `pending` |
| `004144a0` | `FUN_004144a0` | `undefined FUN_004144a0(int param_1)` | `pending` |
| `00414500` | `FUN_00414500` | `undefined4 * FUN_00414500(undefined4 * param_1)` | `pending` |
| `00414610` | `FUN_00414610` | `undefined4 * FUN_00414610(void * this, uint param_1)` | `pending` |
| `00414630` | `FUN_00414630` | `undefined4 * FUN_00414630(void * this, int param_1, int param_2, int param_3, int param_4)` | `pending` |
| `004146b0` | `FUN_004146b0` | `undefined FUN_004146b0(undefined4 * param_1)` | `pending` |
| `00414722` | `FUN_00414722` | `undefined FUN_00414722(void)` | `pending` |
| `00414730` | `FUN_00414730` | `undefined FUN_00414730(undefined4 param_1)` | `pending` |
| `00414750` | `FUN_00414750` | `undefined FUN_00414750(int * param_1)` | `pending` |
| `00414780` | `FUN_00414780` | `undefined FUN_00414780(int param_1)` | `pending` |
| `004147c0` | `FUN_004147c0` | `undefined FUN_004147c0(void * this, int param_1)` | `pending` |
| `00414860` | `FUN_00414860` | `int FUN_00414860(void * this, undefined4 * param_1)` | `verified_slice` |
| `00414970` | `FUN_00414970` | `undefined FUN_00414970(int * param_1)` | `pending` |
| `004149a0` | `FUN_004149a0` | `int * FUN_004149a0(void * this, byte param_1, byte param_2)` | `pending` |
| `00414b00` | `FUN_00414b00` | `undefined FUN_00414b00(void * this, int * param_1, int * param_2)` | `pending` |
| `00414c60` | `FUN_00414c60` | `byte FUN_00414c60(int * param_1)` | `pending` |
| `00414da0` | `FUN_00414da0` | `undefined FUN_00414da0(int * param_1)` | `pending` |
| `00414ec0` | `FUN_00414ec0` | `uint FUN_00414ec0(int param_1)` | `pending` |
| `00415020` | `FUN_00415020` | `undefined FUN_00415020(void * this, char * param_1, undefined1 param_2, int param_3)` | `pending` |
| `004150e0` | `FUN_004150e0` | `undefined FUN_004150e0(void * this, uint param_1, undefined4 param_2, undefined4 param_3)` | `pending` |
| `00415190` | `FUN_00415190` | `undefined FUN_00415190(int * param_1)` | `pending` |
| `004152a0` | `FUN_004152a0` | `undefined4 * FUN_004152a0(void * this, uint param_1)` | `pending` |
| `004152c0` | `FUN_004152c0` | `int * FUN_004152c0(void * this, int param_1, int param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)` | `pending` |
| `00415380` | `FUN_00415380` | `undefined FUN_00415380(undefined4 * param_1)` | `pending` |
| `00415417` | `FUN_00415417` | `undefined FUN_00415417(void)` | `pending` |
| `00415460` | `FUN_00415460` | `undefined FUN_00415460(void * this, undefined4 param_1)` | `pending` |
| `00415550` | `FUN_00415550` | `undefined FUN_00415550(int * param_1)` | `pending` |
| `00415650` | `FUN_00415650` | `undefined4 * FUN_00415650(void * this, uint param_1)` | `pending` |
| `00415670` | `FUN_00415670` | `int * FUN_00415670(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, int param_7, undefined1 param_8, int param_9, undefined1 param_10, undefined1 param_11, undefined1 param_12, undefined1 param_13)` | `pending` |
| `00415760` | `FUN_00415760` | `undefined FUN_00415760(undefined4 * param_1)` | `pending` |
| `004157c6` | `FUN_004157c6` | `undefined FUN_004157c6(void)` | `pending` |
| `004157d0` | `FUN_004157d0` | `undefined FUN_004157d0(int * param_1)` | `pending` |
| `00415890` | `FUN_00415890` | `undefined FUN_00415890(void * this, undefined4 param_1)` | `pending` |
| `004159f0` | `FUN_004159f0` | `undefined FUN_004159f0(void * this, undefined4 param_1)` | `pending` |
| `00415b30` | `FUN_00415b30` | `undefined FUN_00415b30(int * param_1)` | `pending` |
| `00415ba0` | `FUN_00415ba0` | `undefined FUN_00415ba0(void * this, int * param_1)` | `pending` |
| `00415cc0` | `FUN_00415cc0` | `undefined FUN_00415cc0(void * this, int * param_1)` | `pending` |
| `00415ea0` | `FUN_00415ea0` | `undefined FUN_00415ea0(int * param_1)` | `pending` |
| `004160f0` | `FUN_004160f0` | `undefined FUN_004160f0(int * param_1)` | `pending` |
| `00416220` | `FUN_00416220` | `undefined FUN_00416220(int * param_1)` | `pending` |
| `00416270` | `FUN_00416270` | `undefined FUN_00416270(void * this, undefined4 param_1)` | `pending` |
| `004163e0` | `FUN_004163e0` | `undefined FUN_004163e0(int param_1)` | `pending` |
| `00416640` | `FUN_00416640` | `undefined FUN_00416640(void * this, int param_1, undefined1 param_2)` | `pending` |
| `00416670` | `FUN_00416670` | `int * FUN_00416670(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `00416730` | `FUN_00416730` | `undefined4 * FUN_00416730(void * this, uint param_1)` | `pending` |
| `004167c0` | `FUN_004167c0` | `undefined FUN_004167c0(undefined4 * param_1)` | `pending` |
| `00416830` | `FUN_00416830` | `undefined FUN_00416830(void)` | `pending` |
| `00416840` | `FUN_00416840` | `undefined FUN_00416840(void * this, int * param_1)` | `pending` |
| `00416890` | `FUN_00416890` | `undefined FUN_00416890(void * this, int * param_1)` | `pending` |
| `00416a00` | `FUN_00416a00` | `undefined FUN_00416a00(void * this, char * param_1)` | `pending` |
| `00416ac0` | `FUN_00416ac0` | `undefined FUN_00416ac0(void * this, int param_1, int param_2)` | `pending` |
| `00416b40` | `FUN_00416b40` | `int * FUN_00416b40(int * param_1)` | `pending` |
| `00416c20` | `FUN_00416c20` | `undefined FUN_00416c20(int param_1)` | `pending` |
| `00416cfa` | `FUN_00416cfa` | `undefined FUN_00416cfa(void)` | `pending` |
| `00416d10` | `FUN_00416d10` | `undefined4 * FUN_00416d10(void * this, int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6)` | `pending` |
| `00416e40` | `FUN_00416e40` | `undefined FUN_00416e40(void * param_1)` | `pending` |
| `00416e50` | `FUN_00416e50` | `undefined FUN_00416e50(int param_1)` | `pending` |
| `00416ed0` | `FUN_00416ed0` | `undefined4 * FUN_00416ed0(void * this, uint param_1)` | `pending` |
| `00416ef0` | `FUN_00416ef0` | `int * FUN_00416ef0(void * this, undefined4 param_1, undefined1 param_2, char * param_3, int param_4, int param_5)` | `pending` |
| `00416fc0` | `FUN_00416fc0` | `undefined FUN_00416fc0(undefined4 * param_1)` | `pending` |
| `00417007` | `FUN_00417007` | `undefined FUN_00417007(void)` | `pending` |
| `00417010` | `FUN_00417010` | `undefined FUN_00417010(int * param_1)` | `pending` |
| `00417090` | `FUN_00417090` | `undefined FUN_00417090(void * this, char * param_1)` | `pending` |
| `00417200` | `FUN_00417200` | `undefined FUN_00417200(int * param_1)` | `pending` |
| `004172c0` | `FUN_004172c0` | `undefined FUN_004172c0(int param_1)` | `pending` |
| `00417400` | `FUN_00417400` | `undefined4 FUN_00417400(undefined4 param_1)` | `pending` |
| `00417410` | `FUN_00417410` | `undefined4 * FUN_00417410(void * this, uint param_1)` | `pending` |
| `00417430` | `FUN_00417430` | `undefined4 * FUN_00417430(void * this, int param_1, int param_2, int param_3, int param_4)` | `pending` |
| `004174d0` | `FUN_004174d0` | `undefined FUN_004174d0(undefined4 * param_1)` | `pending` |
| `0041753f` | `FUN_0041753f` | `undefined FUN_0041753f(void)` | `pending` |
| `00417550` | `FUN_00417550` | `undefined FUN_00417550(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5)` | `pending` |
| `00417600` | `FUN_00417600` | `undefined FUN_00417600(void * this, int param_1, int param_2)` | `pending` |
| `00417650` | `FUN_00417650` | `undefined FUN_00417650(void * this, int param_1, int param_2)` | `pending` |
| `004176a0` | `FUN_004176a0` | `undefined FUN_004176a0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00417760` | `FUN_00417760` | `undefined FUN_00417760(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00417840` | `FUN_00417840` | `undefined FUN_00417840(int param_1)` | `pending` |
| `00417ac0` | `FUN_00417ac0` | `undefined FUN_00417ac0(int * param_1)` | `pending` |
| `00417b40` | `FUN_00417b40` | `int FUN_00417b40(void * this, int param_1, int param_2)` | `pending` |
| `00417d60` | `FUN_00417d60` | `undefined FUN_00417d60(int param_1)` | `pending` |
| `00417e7a` | `FUN_00417e7a` | `undefined FUN_00417e7a(void)` | `pending` |
| `00417e90` | `FUN_00417e90` | `undefined4 * FUN_00417e90(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `00417f10` | `FUN_00417f10` | `undefined FUN_00417f10(int * param_1)` | `pending` |
| `00417f30` | `FUN_00417f30` | `undefined FUN_00417f30(int * param_1)` | `pending` |
| `00417fc0` | `FUN_00417fc0` | `int FUN_00417fc0(int param_1)` | `pending` |
| `00417fe0` | `FUN_00417fe0` | `undefined FUN_00417fe0(void * param_1)` | `pending` |
| `00418060` | `FUN_00418060` | `undefined FUN_00418060(int param_1)` | `pending` |
| `004180b0` | `FUN_004180b0` | `undefined FUN_004180b0(int * param_1)` | `pending` |
| `00418380` | `FUN_00418380` | `undefined FUN_00418380(void * this, int * param_1)` | `pending` |
| `00418400` | `FUN_00418400` | `undefined FUN_00418400(void * this, int * param_1)` | `pending` |
| `004184e0` | `FUN_004184e0` | `undefined FUN_004184e0(int * param_1)` | `pending` |
| `00418520` | `FUN_00418520` | `undefined FUN_00418520(int param_1)` | `pending` |
| `004185d0` | `FUN_004185d0` | `undefined FUN_004185d0(void)` | `pending` |
| `00418611` | `FUN_00418611` | `undefined FUN_00418611(void)` | `pending` |
| `0041867a` | `FUN_0041867a` | `undefined FUN_0041867a(void)` | `pending` |
| `00418690` | `FUN_00418690` | `undefined4 * FUN_00418690(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `00418710` | `FUN_00418710` | `undefined FUN_00418710(int * param_1)` | `pending` |
| `004187c0` | `FUN_004187c0` | `undefined FUN_004187c0(void * this, LONG param_1)` | `pending` |
| `00418a20` | `FUN_00418a20` | `undefined FUN_00418a20(void * this, void * param_1)` | `pending` |
| `00418a60` | `FUN_00418a60` | `undefined FUN_00418a60(void * param_1)` | `pending` |
| `00418b30` | `FUN_00418b30` | `undefined4 FUN_00418b30(void * this, int param_1)` | `pending` |
| `00418b60` | `FUN_00418b60` | `undefined FUN_00418b60(int param_1)` | `pending` |
| `00418c7a` | `FUN_00418c7a` | `undefined FUN_00418c7a(void)` | `pending` |
| `00418c90` | `FUN_00418c90` | `undefined4 * FUN_00418c90(void * this, int param_1, int param_2, int param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8)` | `pending` |
| `00418d40` | `FUN_00418d40` | `undefined FUN_00418d40(void * this, int param_1)` | `pending` |
| `00418e90` | `FUN_00418e90` | `undefined FUN_00418e90(void * this, int param_1)` | `pending` |
| `00418ef0` | `FUN_00418ef0` | `undefined4 FUN_00418ef0(int param_1)` | `pending` |
| `00418f00` | `FUN_00418f00` | `undefined FUN_00418f00(void * this, int param_1)` | `pending` |
| `00418f90` | `FUN_00418f90` | `undefined FUN_00418f90(void * this, char * param_1)` | `pending` |
| `00419010` | `FUN_00419010` | `undefined4 FUN_00419010(int param_1)` | `pending` |
| `00419090` | `FUN_00419090` | `undefined4 FUN_00419090(void * this, int param_1)` | `pending` |
| `004190b0` | `FUN_004190b0` | `undefined FUN_004190b0(int * param_1)` | `pending` |
| `00419180` | `FUN_00419180` | `undefined FUN_00419180(void * this, int param_1, int param_2)` | `pending` |
| `004191d0` | `FUN_004191d0` | `undefined FUN_004191d0(void * this, int param_1, int param_2)` | `pending` |
| `00419280` | `FUN_00419280` | `undefined FUN_00419280(void * this, int param_1)` | `pending` |
| `004192f0` | `FUN_004192f0` | `undefined4 FUN_004192f0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00419330` | `FUN_00419330` | `undefined4 * FUN_00419330(undefined4 param_1)` | `pending` |
| `004194de` | `FUN_004194de` | `undefined FUN_004194de(void)` | `pending` |
| `004194e6` | `FUN_004194e6` | `undefined FUN_004194e6(void)` | `pending` |
| `00419510` | `FUN_00419510` | `undefined4 * FUN_00419510(void * this, uint param_1)` | `pending` |
| `00419530` | `FUN_00419530` | `undefined FUN_00419530(undefined4 * param_1)` | `pending` |
| `004195b2` | `FUN_004195b2` | `undefined FUN_004195b2(void)` | `pending` |
| `004195c7` | `FUN_004195c7` | `undefined FUN_004195c7(void)` | `pending` |
| `00419640` | `FUN_00419640` | `undefined FUN_00419640(int param_1)` | `pending` |
| `004196c0` | `FUN_004196c0` | `undefined FUN_004196c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)` | `pending` |
| `00419700` | `FUN_00419700` | `undefined FUN_00419700(void)` | `pending` |
| `00419720` | `FUN_00419720` | `undefined4 FUN_00419720(int param_1)` | `pending` |
| `004199f0` | `FUN_004199f0` | `undefined FUN_004199f0(void)` | `pending` |
| `00419b00` | `FUN_00419b00` | `undefined4 FUN_00419b00(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00419c60` | `FUN_00419c60` | `undefined FUN_00419c60(undefined4 * param_1)` | `pending` |
| `00419ca7` | `FUN_00419ca7` | `undefined FUN_00419ca7(void)` | `pending` |
| `00419d10` | `FUN_00419d10` | `undefined FUN_00419d10(void)` | `pending` |
| `00419d20` | `FUN_00419d20` | `undefined4 * FUN_00419d20(void * this, uint param_1)` | `pending` |
| `00419d80` | `FUN_00419d80` | `undefined4 FUN_00419d80(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00419e30` | `FUN_00419e30` | `undefined4 * FUN_00419e30(void * this, uint param_1)` | `pending` |
| `00419e90` | `FUN_00419e90` | `undefined4 FUN_00419e90(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00419eb0` | `FUN_00419eb0` | `undefined4 * FUN_00419eb0(undefined4 * param_1)` | `pending` |
| `00419f30` | `FUN_00419f30` | `undefined4 * FUN_00419f30(void * this, uint param_1)` | `pending` |
| `00419f50` | `FUN_00419f50` | `undefined4 * FUN_00419f50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5)` | `pending` |
| `00419ff0` | `FUN_00419ff0` | `undefined FUN_00419ff0(undefined4 * param_1)` | `pending` |
| `0041a052` | `FUN_0041a052` | `undefined FUN_0041a052(void)` | `pending` |
| `0041a060` | `FUN_0041a060` | `undefined FUN_0041a060(void * this, void * param_1)` | `pending` |
| `0041a340` | `FUN_0041a340` | `undefined FUN_0041a340(void * this, int param_1, int param_2)` | `pending` |
| `0041a370` | `FUN_0041a370` | `undefined4 FUN_0041a370(void * this, int * param_1)` | `verified_slice` |
| `0041a400` | `FUN_0041a400` | `undefined FUN_0041a400(void * this, int param_1, int * param_2, int * param_3)` | `verified_slice` |
| `0041a440` | `FUN_0041a440` | `undefined FUN_0041a440(undefined4 param_1)` | `pending` |
| `0041a460` | `FUN_0041a460` | `undefined FUN_0041a460(int param_1)` | `pending` |
| `0041a4a0` | `FUN_0041a4a0` | `undefined FUN_0041a4a0(void * this, undefined4 * param_1)` | `pending` |
| `0041a500` | `FUN_0041a500` | `char * FUN_0041a500(void * this, int param_1)` | `pending` |
| `0041a560` | `FUN_0041a560` | `undefined FUN_0041a560(int param_1)` | `pending` |
| `0041a590` | `FUN_0041a590` | `undefined FUN_0041a590(void * param_1)` | `pending` |
| `0041a670` | `FUN_0041a670` | `char * FUN_0041a670(void * this, int param_1)` | `pending` |
| `0041a6c0` | `FUN_0041a6c0` | `undefined4 FUN_0041a6c0(int param_1)` | `pending` |
| `0041a6e0` | `FUN_0041a6e0` | `undefined FUN_0041a6e0(void * this, char param_1)` | `pending` |
| `0041a790` | `FUN_0041a790` | `undefined FUN_0041a790(void * this, char param_1)` | `pending` |
| `0041a7b0` | `FUN_0041a7b0` | `undefined FUN_0041a7b0(void * this, char param_1)` | `pending` |
| `0041a8d0` | `FUN_0041a8d0` | `undefined FUN_0041a8d0(void * this, void * param_1)` | `pending` |
| `0041aad0` | `FUN_0041aad0` | `undefined FUN_0041aad0(undefined4 * param_1)` | `pending` |
| `0041ab23` | `FUN_0041ab23` | `undefined FUN_0041ab23(void)` | `pending` |
| `0041ad30` | `FUN_0041ad30` | `undefined FUN_0041ad30(undefined4 * param_1)` | `pending` |
| `0041ad83` | `FUN_0041ad83` | `undefined FUN_0041ad83(void)` | `pending` |
| `0041ad90` | `FUN_0041ad90` | `undefined FUN_0041ad90(void * this, void * param_1)` | `pending` |
| `0041afc0` | `FUN_0041afc0` | `undefined FUN_0041afc0(void)` | `pending` |
| `0041afe0` | `FUN_0041afe0` | `undefined FUN_0041afe0(void)` | `pending` |
| `0041b0a0` | `FUN_0041b0a0` | `undefined4 * FUN_0041b0a0(void * this, uint param_1)` | `pending` |
| `0041b0c0` | `FUN_0041b0c0` | `undefined FUN_0041b0c0(undefined4 * param_1)` | `pending` |
| `0041b149` | `FUN_0041b149` | `undefined FUN_0041b149(void)` | `pending` |
| `0041b15e` | `FUN_0041b15e` | `undefined FUN_0041b15e(void)` | `pending` |
| `0041b3e0` | `FUN_0041b3e0` | `undefined4 FUN_0041b3e0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `0041b400` | `FUN_0041b400` | `undefined FUN_0041b400(int param_1)` | `pending` |
| `0041b420` | `FUN_0041b420` | `undefined4 * FUN_0041b420(undefined4 * param_1)` | `pending` |
| `0041b490` | `FUN_0041b490` | `undefined4 * FUN_0041b490(void * this, uint param_1)` | `pending` |
| `0041b4b0` | `FUN_0041b4b0` | `undefined FUN_0041b4b0(undefined4 * param_1)` | `pending` |
| `0041b50a` | `FUN_0041b50a` | `undefined FUN_0041b50a(void)` | `pending` |
| `0041b520` | `FUN_0041b520` | `undefined4 * FUN_0041b520(void * this, int param_1, undefined4 param_2, undefined1 param_3)` | `pending` |
| `0041b603` | `FUN_0041b603` | `undefined FUN_0041b603(void)` | `pending` |
| `0041b620` | `FUN_0041b620` | `undefined FUN_0041b620(void * this, int param_1)` | `pending` |
| `0041b7f0` | `FUN_0041b7f0` | `undefined4 FUN_0041b7f0(int param_1, int param_2)` | `pending` |
| `0041b8fb` | `FUN_0041b8fb` | `undefined FUN_0041b8fb(void)` | `pending` |
| `0041b903` | `FUN_0041b903` | `undefined FUN_0041b903(void)` | `pending` |
| `0041b915` | `FUN_0041b915` | `undefined FUN_0041b915(void)` | `pending` |
| `0041b920` | `FUN_0041b920` | `undefined FUN_0041b920(int param_1)` | `pending` |
| `0041b998` | `FUN_0041b998` | `undefined FUN_0041b998(void)` | `pending` |
| `0041b9b0` | `FUN_0041b9b0` | `undefined FUN_0041b9b0(void * this, void * param_1, void * param_2)` | `pending` |
| `0041baf0` | `FUN_0041baf0` | `undefined FUN_0041baf0(int param_1)` | `pending` |
| `0041bb10` | `FUN_0041bb10` | `undefined4 FUN_0041bb10(int param_1)` | `pending` |
| `0041bb40` | `FUN_0041bb40` | `uint FUN_0041bb40(int param_1)` | `pending` |
| `0041bb60` | `FUN_0041bb60` | `undefined4 FUN_0041bb60(void * this, uint param_1)` | `pending` |
| `0041bba0` | `FUN_0041bba0` | `undefined FUN_0041bba0(void * this, int param_1)` | `pending` |
| `0041bc20` | `FUN_0041bc20` | `undefined FUN_0041bc20(void * this, int param_1, int param_2)` | `pending` |
| `0041bca0` | `FUN_0041bca0` | `undefined FUN_0041bca0(int param_1)` | `pending` |
| `0041bd10` | `FUN_0041bd10` | `undefined4 FUN_0041bd10(int param_1)` | `pending` |
| `0041be20` | `FUN_0041be20` | `int FUN_0041be20(void * this, uint param_1, uint param_2, int param_3)` | `pending` |
| `0041bf70` | `FUN_0041bf70` | `undefined1 FUN_0041bf70(int param_1)` | `pending` |
| `0041c11a` | `FUN_0041c11a` | `undefined FUN_0041c11a(void)` | `pending` |
| `0041c130` | `FUN_0041c130` | `undefined FUN_0041c130(void * this, int param_1)` | `verified_slice` |
| `0041c1b0` | `FUN_0041c1b0` | `undefined FUN_0041c1b0(void * this, int param_1, int param_2)` | `verified_slice` |
| `0041c2f0` | `FUN_0041c2f0` | `undefined FUN_0041c2f0(int param_1)` | `verified_slice` |
| `0041c3fd` | `FUN_0041c3fd` | `undefined FUN_0041c3fd(void)` | `pending` |
| `0041c410` | `FUN_0041c410` | `undefined FUN_0041c410(void)` | `verified_slice` |
| `0041c5c0` | `FUN_0041c5c0` | `undefined FUN_0041c5c0(void)` | `pending` |
| `0041c930` | `FUN_0041c930` | `undefined FUN_0041c930(byte * param_1, char * param_2, char * param_3, undefined1 param_4)` | `pending` |
| `0041c952` | `FUN_0041c952` | `undefined FUN_0041c952(void)` | `pending` |
| `0041cae3` | `FUN_0041cae3` | `undefined FUN_0041cae3(void)` | `pending` |
| `0041caf0` | `FUN_0041caf0` | `undefined FUN_0041caf0(void)` | `pending` |
| `0041cb12` | `FUN_0041cb12` | `undefined FUN_0041cb12(void)` | `pending` |
| `0041cd27` | `FUN_0041cd27` | `undefined FUN_0041cd27(void)` | `pending` |
| `0041cd40` | `FUN_0041cd40` | `undefined4 FUN_0041cd40(char * param_1, int param_2)` | `pending` |
| `0041cdd0` | `FUN_0041cdd0` | `undefined4 FUN_0041cdd0(char * param_1, undefined4 param_2, int param_3)` | `pending` |
| `0041cf1d` | `FUN_0041cf1d` | `undefined FUN_0041cf1d(void)` | `pending` |
| `0041d060` | `FUN_0041d060` | `undefined FUN_0041d060(byte param_1, byte param_2, byte param_3, byte param_4)` | `pending` |
| `0041d0e0` | `FUN_0041d0e0` | `undefined4 FUN_0041d0e0(void)` | `pending` |
| `0041d190` | `FUN_0041d190` | `undefined FUN_0041d190(void)` | `pending` |
| `0041d1a0` | `FUN_0041d1a0` | `undefined FUN_0041d1a0(undefined4 * param_1)` | `pending` |
| `0041d1e7` | `FUN_0041d1e7` | `undefined FUN_0041d1e7(void)` | `pending` |
| `0041d39d` | `FUN_0041d39d` | `undefined FUN_0041d39d(void)` | `pending` |
| `0041d3b2` | `FUN_0041d3b2` | `undefined FUN_0041d3b2(void)` | `pending` |
| `0041d3c0` | `FUN_0041d3c0` | `undefined FUN_0041d3c0(void * this, int param_1)` | `pending` |
| `0041d57a` | `FUN_0041d57a` | `undefined FUN_0041d57a(void)` | `pending` |
| `0041d5d0` | `FUN_0041d5d0` | `undefined4 FUN_0041d5d0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `0041d6a0` | `FUN_0041d6a0` | `undefined4 FUN_0041d6a0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `0041dfc0` | `FUN_0041dfc0` | `undefined1 * FUN_0041dfc0(undefined1 * param_1)` | `pending` |
| `0041dfd0` | `FUN_0041dfd0` | `int FUN_0041dfd0(void * this, char * param_1)` | `pending` |
| `0041e040` | `FUN_0041e040` | `uint * FUN_0041e040(void * this, void * param_1, int param_2)` | `pending` |
| `0041e130` | `FUN_0041e130` | `undefined FUN_0041e130(void * this, void * param_1)` | `pending` |
| `0041e8da` | `FUN_0041e8da` | `undefined FUN_0041e8da(void)` | `pending` |
| `0041e8e2` | `FUN_0041e8e2` | `undefined FUN_0041e8e2(void)` | `pending` |
| `0041ed17` | `FUN_0041ed17` | `undefined FUN_0041ed17(void)` | `pending` |
| `0041ed20` | `FUN_0041ed20` | `undefined FUN_0041ed20(undefined4 param_1)` | `pending` |
| `0041ed40` | `FUN_0041ed40` | `undefined FUN_0041ed40(int param_1)` | `pending` |
| `0041ed80` | `FUN_0041ed80` | `undefined FUN_0041ed80(void * this, char * param_1)` | `pending` |
| `0041ee84` | `FUN_0041ee84` | `undefined FUN_0041ee84(void)` | `pending` |
| `0041ee90` | `FUN_0041ee90` | `undefined FUN_0041ee90(void * param_1)` | `pending` |
| `0041eee0` | `FUN_0041eee0` | `undefined FUN_0041eee0(int param_1)` | `pending` |
| `0041ef00` | `FUN_0041ef00` | `undefined FUN_0041ef00(void * param_1)` | `pending` |
| `0041ef60` | `FUN_0041ef60` | `undefined FUN_0041ef60(int param_1)` | `pending` |
| `0041f1de` | `FUN_0041f1de` | `undefined FUN_0041f1de(void)` | `pending` |
| `0041f310` | `FUN_0041f310` | `undefined4 * FUN_0041f310(void * this, uint param_1)` | `pending` |
| `0041f330` | `FUN_0041f330` | `undefined FUN_0041f330(void)` | `pending` |
| `0041f374` | `FUN_0041f374` | `undefined FUN_0041f374(void)` | `pending` |
| `0041f38c` | `FUN_0041f38c` | `undefined FUN_0041f38c(void)` | `pending` |
| `0041f3a0` | `FUN_0041f3a0` | `undefined FUN_0041f3a0(void)` | `pending` |
| `0041f3e1` | `FUN_0041f3e1` | `undefined FUN_0041f3e1(void)` | `pending` |
| `0041f3f0` | `FUN_0041f3f0` | `undefined FUN_0041f3f0(undefined4 * param_1)` | `pending` |
| `0041f4b9` | `FUN_0041f4b9` | `undefined FUN_0041f4b9(void)` | `pending` |
| `0041f4c7` | `FUN_0041f4c7` | `undefined FUN_0041f4c7(void)` | `pending` |
| `0041f4d5` | `FUN_0041f4d5` | `undefined FUN_0041f4d5(void)` | `pending` |
| `0041f4ed` | `FUN_0041f4ed` | `undefined FUN_0041f4ed(void)` | `pending` |
| `0041f500` | `FUN_0041f500` | `undefined FUN_0041f500(void * this, void * param_1)` | `pending` |
| `0041fb10` | `FUN_0041fb10` | `undefined FUN_0041fb10(int * param_1)` | `pending` |
| `0041fc80` | `FUN_0041fc80` | `uint FUN_0041fc80(int param_1)` | `pending` |
| `0041fcc0` | `FUN_0041fcc0` | `undefined FUN_0041fcc0(int param_1)` | `pending` |
| `0041fd20` | `FUN_0041fd20` | `int FUN_0041fd20(void * this, LONG param_1, LONG param_2)` | `pending` |
| `0041fe30` | `FUN_0041fe30` | `undefined4 FUN_0041fe30(void * this, int * param_1)` | `pending` |
| `0041fea0` | `FUN_0041fea0` | `undefined4 FUN_0041fea0(void * this, int * param_1)` | `pending` |
| `0041fff0` | `FUN_0041fff0` | `char FUN_0041fff0(void * this, int * param_1)` | `pending` |
| `004200b0` | `FUN_004200b0` | `undefined4 FUN_004200b0(int * param_1)` | `pending` |
| `004201c0` | `FUN_004201c0` | `undefined FUN_004201c0(void * this, int * param_1)` | `pending` |
| `004203a0` | `FUN_004203a0` | `undefined FUN_004203a0(int * param_1)` | `pending` |
| `004203d0` | `FUN_004203d0` | `undefined FUN_004203d0(void * this, undefined4 param_1)` | `pending` |
| `00420490` | `FUN_00420490` | `undefined FUN_00420490(int * param_1)` | `pending` |
| `0042049c` | `FUN_0042049c` | `undefined FUN_0042049c(void * this, int param_1)` | `pending` |
| `004205e0` | `FUN_004205e0` | `undefined FUN_004205e0(int param_1)` | `pending` |
| `00420720` | `FUN_00420720` | `undefined FUN_00420720(void * this, char * param_1, int param_2, int param_3)` | `pending` |
| `00420870` | `FUN_00420870` | `undefined FUN_00420870(void * this, int param_1)` | `pending` |
| `004209e0` | `FUN_004209e0` | `undefined FUN_004209e0(void * this, int param_1)` | `pending` |
| `00420b20` | `FUN_00420b20` | `undefined FUN_00420b20(void * param_1)` | `verified_slice` |
| `00420bd0` | `FUN_00420bd0` | `undefined FUN_00420bd0(void * this, int param_1, char * param_2)` | `pending` |
| `00420f80` | `FUN_00420f80` | `undefined FUN_00420f80(void * this, uint param_1, int param_2, byte param_3, byte param_4)` | `pending` |
| `00421040` | `FUN_00421040` | `undefined FUN_00421040(int * param_1)` | `pending` |
| `004211e0` | `FUN_004211e0` | `undefined FUN_004211e0(void * this, char * param_1)` | `pending` |
| `00421250` | `FUN_00421250` | `undefined FUN_00421250(int * param_1)` | `pending` |
| `00421430` | `FUN_00421430` | `undefined FUN_00421430(void * param_1)` | `pending` |
| `00421750` | `FUN_00421750` | `undefined FUN_00421750(void * this, int param_1)` | `pending` |
| `00421790` | `FUN_00421790` | `undefined FUN_00421790(void * this, char * param_1, int * param_2)` | `pending` |
| `00421830` | `FUN_00421830` | `undefined FUN_00421830(void * this, char * param_1)` | `pending` |
| `004218c0` | `FUN_004218c0` | `undefined FUN_004218c0(void * this, int param_1)` | `pending` |
| `00421990` | `FUN_00421990` | `undefined4 * FUN_00421990(undefined4 * param_1)` | `pending` |
| `004219b0` | `FUN_004219b0` | `undefined FUN_004219b0(void * this, undefined4 param_1, int param_2, uint param_3)` | `pending` |
| `004219f0` | `FUN_004219f0` | `undefined FUN_004219f0(void * this, int * param_1, undefined4 param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint param_6)` | `pending` |
| `00421bd0` | `FUN_00421bd0` | `undefined FUN_00421bd0(int param_1)` | `pending` |
| `00421c20` | `FUN_00421c20` | `undefined FUN_00421c20(void * param_1)` | `pending` |
| `00421dc0` | `FUN_00421dc0` | `undefined FUN_00421dc0(void * param_1)` | `pending` |
| `00421e20` | `FUN_00421e20` | `undefined FUN_00421e20(void * this, int param_1)` | `pending` |
| `00421e90` | `FUN_00421e90` | `undefined FUN_00421e90(int * param_1)` | `pending` |
| `00421f50` | `FUN_00421f50` | `undefined FUN_00421f50(int * param_1)` | `pending` |
| `004222e0` | `FUN_004222e0` | `undefined4 FUN_004222e0(void * this, int param_1)` | `pending` |
| `00422320` | `FUN_00422320` | `undefined FUN_00422320(int * param_1)` | `pending` |
| `004224c0` | `FUN_004224c0` | `undefined FUN_004224c0(int * param_1)` | `verified_slice` |
| `00422630` | `FUN_00422630` | `undefined FUN_00422630(int param_1)` | `pending` |
| `00422670` | `FUN_00422670` | `undefined FUN_00422670(void * this, int param_1)` | `pending` |
| `004226d0` | `FUN_004226d0` | `undefined FUN_004226d0(int * param_1)` | `pending` |
| `00422e94` | `FUN_00422e94` | `undefined FUN_00422e94(void)` | `pending` |
| `00422ea0` | `FUN_00422ea0` | `undefined FUN_00422ea0(int * param_1)` | `pending` |
| `00422ed0` | `FUN_00422ed0` | `undefined FUN_00422ed0(void * this, uint param_1)` | `pending` |
| `00422eef` | `FUN_00422eef` | `undefined FUN_00422eef(int * param_1)` | `pending` |
| `00422ff0` | `FUN_00422ff0` | `undefined FUN_00422ff0(void * param_1)` | `pending` |
| `00423070` | `FUN_00423070` | `undefined FUN_00423070(void * param_1)` | `pending` |
| `004230c0` | `FUN_004230c0` | `undefined FUN_004230c0(void * this, undefined4 param_1)` | `verified_slice` |
| `00423340` | `FUN_00423340` | `undefined FUN_00423340(int param_1)` | `pending` |
| `004233c0` | `FUN_004233c0` | `undefined FUN_004233c0(void * this, int * param_1)` | `pending` |
| `00423550` | `FUN_00423550` | `undefined FUN_00423550(void)` | `pending` |
| `00423660` | `FUN_00423660` | `undefined4 FUN_00423660(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `004236b0` | `FUN_004236b0` | `undefined4 * FUN_004236b0(undefined4 * param_1)` | `pending` |
| `00423965` | `FUN_00423965` | `undefined FUN_00423965(void)` | `pending` |
| `00423c27` | `FUN_00423c27` | `undefined FUN_00423c27(void)` | `pending` |
| `00423c60` | `FUN_00423c60` | `undefined FUN_00423c60(void)` | `pending` |
| `00423cc0` | `FUN_00423cc0` | `undefined FUN_00423cc0(int param_1)` | `pending` |
| `00423d00` | `FUN_00423d00` | `undefined4 FUN_00423d00(int param_1, int param_2, uint param_3, int param_4)` | `pending` |
| `00423e80` | `FUN_00423e80` | `int FUN_00423e80(void * this, int param_1)` | `pending` |
| `00423f60` | `FUN_00423f60` | `undefined4 * FUN_00423f60(void * this, uint param_1)` | `pending` |
| `00423f80` | `FUN_00423f80` | `undefined4 * FUN_00423f80(void * this, undefined4 param_1)` | `pending` |
| `00424010` | `FUN_00424010` | `undefined FUN_00424010(undefined4 * param_1)` | `pending` |
| `0042406a` | `FUN_0042406a` | `undefined FUN_0042406a(void)` | `pending` |
| `00424080` | `FUN_00424080` | `undefined FUN_00424080(int param_1)` | `pending` |
| `00424100` | `FUN_00424100` | `undefined FUN_00424100(int * param_1)` | `pending` |
| `00424110` | `FUN_00424110` | `undefined FUN_00424110(void * this, char * param_1)` | `pending` |
| `004241f0` | `FUN_004241f0` | `undefined FUN_004241f0(int * param_1)` | `pending` |
| `00424210` | `FUN_00424210` | `undefined FUN_00424210(int param_1)` | `pending` |
| `00424250` | `FUN_00424250` | `undefined FUN_00424250(int * param_1)` | `pending` |
| `004242c0` | `FUN_004242c0` | `undefined4 FUN_004242c0(int param_1)` | `pending` |
| `00424300` | `FUN_00424300` | `undefined FUN_00424300(int param_1, char * param_2)` | `pending` |
| `004243a0` | `FUN_004243a0` | `undefined FUN_004243a0(int param_1)` | `pending` |
| `00424410` | `FUN_00424410` | `undefined FUN_00424410(int param_1, uint param_2)` | `pending` |
| `00424523` | `FUN_00424523` | `undefined FUN_00424523(void)` | `pending` |
| `00424540` | `FUN_00424540` | `undefined FUN_00424540(int param_1)` | `pending` |
| `00424620` | `FUN_00424620` | `undefined FUN_00424620(void)` | `pending` |
| `00424640` | `FUN_00424640` | `undefined FUN_00424640(int param_1)` | `pending` |
| `00424706` | `FUN_00424706` | `undefined FUN_00424706(void)` | `pending` |
| `00424710` | `FUN_00424710` | `uint FUN_00424710(void * param_1)` | `pending` |
| `004251f0` | `FUN_004251f0` | `undefined FUN_004251f0(void * this, uint param_1, int param_2)` | `pending` |
| `004253e0` | `FUN_004253e0` | `undefined FUN_004253e0(void * this, undefined1 * param_1)` | `pending` |
| `00425420` | `FUN_00425420` | `undefined FUN_00425420(void * param_1)` | `pending` |
| `00425cd0` | `FUN_00425cd0` | `undefined FUN_00425cd0(void * param_1)` | `pending` |
| `00425f80` | `FUN_00425f80` | `undefined FUN_00425f80(void * param_1)` | `pending` |
| `00425fb0` | `FUN_00425fb0` | `undefined FUN_00425fb0(void * param_1)` | `pending` |
| `004264b0` | `FUN_004264b0` | `undefined FUN_004264b0(void * param_1)` | `pending` |
| `004265c0` | `FUN_004265c0` | `undefined FUN_004265c0(void * this, undefined4 param_1)` | `pending` |
| `00426670` | `FUN_00426670` | `undefined FUN_00426670(int * param_1)` | `pending` |
| `004282d0` | `FUN_004282d0` | `undefined4 FUN_004282d0(void * this, int param_1)` | `pending` |
| `004283d0` | `FUN_004283d0` | `undefined4 * FUN_004283d0(undefined4 * param_1)` | `pending` |
| `0042850d` | `FUN_0042850d` | `undefined FUN_0042850d(void)` | `pending` |
| `00428525` | `FUN_00428525` | `undefined FUN_00428525(void)` | `pending` |
| `00428530` | `FUN_00428530` | `int FUN_00428530(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `004285e0` | `FUN_004285e0` | `undefined FUN_004285e0(void * this, char param_1, char param_2, char param_3, undefined4 * param_4, undefined4 * param_5)` | `pending` |
| `004286d0` | `FUN_004286d0` | `uint FUN_004286d0(void * this, undefined4 param_1)` | `pending` |
| `004287d5` | `FUN_004287d5` | `undefined FUN_004287d5(void)` | `pending` |
| `004287e7` | `FUN_004287e7` | `undefined FUN_004287e7(void)` | `pending` |
| `004287f0` | `FUN_004287f0` | `undefined4 FUN_004287f0(void * this, int * param_1, undefined4 * param_2)` | `pending` |
| `004288e0` | `FUN_004288e0` | `undefined4 FUN_004288e0(int param_1)` | `pending` |
| `004288f0` | `FUN_004288f0` | `undefined FUN_004288f0(void * this, undefined4 param_1)` | `pending` |
| `0042890f` | `FUN_0042890f` | `undefined FUN_0042890f(int param_1)` | `pending` |
| `00428994` | `FUN_00428994` | `undefined FUN_00428994(void)` | `pending` |
| `004289a0` | `FUN_004289a0` | `undefined FUN_004289a0(void * this, int param_1)` | `pending` |
| `00428b80` | `FUN_00428b80` | `byte FUN_00428b80(byte * param_1, byte param_2, byte param_3, uint param_4)` | `pending` |
| `00428cc0` | `FUN_00428cc0` | `undefined4 * FUN_00428cc0(void * this, uint param_1)` | `pending` |
| `00428ce0` | `FUN_00428ce0` | `undefined FUN_00428ce0(undefined4 * param_1)` | `pending` |
| `00428d47` | `FUN_00428d47` | `undefined FUN_00428d47(void)` | `pending` |
| `00428d50` | `FUN_00428d50` | `undefined FUN_00428d50(void)` | `pending` |
| `00428df5` | `FUN_00428df5` | `undefined FUN_00428df5(void)` | `pending` |
| `00428e00` | `FUN_00428e00` | `undefined FUN_00428e00(int param_1)` | `pending` |
| `00428eb0` | `FUN_00428eb0` | `undefined4 FUN_00428eb0(void * this, undefined4 param_1)` | `pending` |
| `00429000` | `FUN_00429000` | `undefined FUN_00429000(int * param_1)` | `verified_slice` |
| `00429040` | `FUN_00429040` | `undefined FUN_00429040(void * this, undefined4 param_1, uint param_2, int param_3)` | `pending` |
| `00429070` | `FUN_00429070` | `undefined FUN_00429070(void * this, int param_1)` | `pending` |
| `00429090` | `FUN_00429090` | `undefined FUN_00429090(int param_1)` | `pending` |
| `004290b0` | `FUN_004290b0` | `undefined FUN_004290b0(int param_1)` | `pending` |
| `004290bb` | `FUN_004290bb` | `undefined FUN_004290bb(int param_1)` | `pending` |
| `00429250` | `FUN_00429250` | `undefined FUN_00429250(void)` | `verified_slice` |
| `00429270` | `FUN_00429270` | `undefined FUN_00429270(void)` | `pending` |
| `00429360` | `FUN_00429360` | `undefined4 * FUN_00429360(undefined4 * param_1)` | `pending` |
| `004294bd` | `FUN_004294bd` | `undefined FUN_004294bd(void)` | `pending` |
| `004294d5` | `FUN_004294d5` | `undefined FUN_004294d5(void)` | `pending` |
| `004294e0` | `FUN_004294e0` | `undefined FUN_004294e0(void)` | `pending` |
| `00429521` | `FUN_00429521` | `undefined FUN_00429521(void)` | `pending` |
| `00429540` | `FUN_00429540` | `undefined FUN_00429540(void)` | `pending` |
| `00429550` | `FUN_00429550` | `undefined FUN_00429550(void)` | `pending` |
| `0042959e` | `FUN_0042959e` | `undefined FUN_0042959e(void)` | `pending` |
| `004295b2` | `FUN_004295b2` | `undefined FUN_004295b2(void)` | `pending` |
| `0042983c` | `FUN_0042983c` | `undefined FUN_0042983c(void)` | `pending` |
| `00429860` | `FUN_00429860` | `undefined FUN_00429860(void)` | `pending` |
| `00429bf0` | `FUN_00429bf0` | `undefined FUN_00429bf0(void)` | `pending` |
| `00429c4f` | `FUN_00429c4f` | `undefined FUN_00429c4f(void)` | `pending` |
| `00429d60` | `FUN_00429d60` | `undefined FUN_00429d60(void)` | `pending` |
| `00429d80` | `FUN_00429d80` | `undefined FUN_00429d80(void)` | `pending` |
| `00429e80` | `FUN_00429e80` | `undefined4 FUN_00429e80(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `00429ea0` | `FUN_00429ea0` | `undefined FUN_00429ea0(void * this, void * param_1)` | `pending` |
| `00429ed0` | `FUN_00429ed0` | `undefined FUN_00429ed0(void * this, void * param_1)` | `pending` |
| `00429f40` | `FUN_00429f40` | `undefined FUN_00429f40(void * this, void * param_1)` | `pending` |
| `0042a120` | `FUN_0042a120` | `undefined4 FUN_0042a120(undefined4 param_1)` | `pending` |
| `0042a170` | `FUN_0042a170` | `undefined FUN_0042a170(int * param_1, int * param_2, int param_3)` | `pending` |
| `0042a1b0` | `FUN_0042a1b0` | `undefined FUN_0042a1b0(void * this, void * param_1, int param_2)` | `pending` |
| `0042a2f0` | `FUN_0042a2f0` | `undefined FUN_0042a2f0(int param_1)` | `pending` |
| `0042a30f` | `FUN_0042a30f` | `undefined FUN_0042a30f(int param_1)` | `pending` |
| `0042a5e0` | `FUN_0042a5e0` | `int FUN_0042a5e0(int param_1)` | `pending` |
| `0042a600` | `FUN_0042a600` | `undefined4 FUN_0042a600(undefined4 param_1)` | `pending` |
| `0042a610` | `FUN_0042a610` | `int FUN_0042a610(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4)` | `pending` |
| `0042a6a0` | `FUN_0042a6a0` | `undefined4 * FUN_0042a6a0(undefined4 * param_1)` | `pending` |
| `0042a750` | `FUN_0042a750` | `undefined4 * FUN_0042a750(void * this, uint param_1)` | `pending` |
| `0042a770` | `FUN_0042a770` | `undefined FUN_0042a770(undefined4 * param_1)` | `pending` |
| `0042a7c1` | `FUN_0042a7c1` | `undefined FUN_0042a7c1(void)` | `pending` |
| `0042a7e4` | `FUN_0042a7e4` | `undefined FUN_0042a7e4(void)` | `pending` |
| `0042ba10` | `FUN_0042ba10` | `undefined FUN_0042ba10(void * this, void * param_1)` | `pending` |
| `0042bbb0` | `FUN_0042bbb0` | `undefined FUN_0042bbb0(int param_1)` | `pending` |
| `0042bc20` | `FUN_0042bc20` | `undefined FUN_0042bc20(void * this, int param_1, int param_2)` | `pending` |
| `0042bde0` | `FUN_0042bde0` | `int FUN_0042bde0(void * this, undefined4 param_1)` | `pending` |
| `0042be10` | `FUN_0042be10` | `undefined FUN_0042be10(void * this, int param_1, int param_2, byte param_3)` | `pending` |
| `0042be60` | `FUN_0042be60` | `undefined FUN_0042be60(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `0042beb0` | `FUN_0042beb0` | `undefined FUN_0042beb0(void * this, int param_1, int param_2, undefined1 param_3)` | `pending` |
| `0042bef0` | `FUN_0042bef0` | `undefined FUN_0042bef0(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `0042bfc0` | `FUN_0042bfc0` | `char * FUN_0042bfc0(void * this, char * param_1, undefined4 param_2, int param_3)` | `pending` |
| `0042c210` | `FUN_0042c210` | `undefined FUN_0042c210(void * this, int param_1, int param_2, int param_3, char * param_4)` | `pending` |
| `0042c2c0` | `FUN_0042c2c0` | `undefined FUN_0042c2c0(void * this, uint param_1)` | `pending` |
| `0042c3d0` | `FUN_0042c3d0` | `undefined FUN_0042c3d0(void * this, undefined4 param_1, uint param_2)` | `pending` |
| `0042c500` | `FUN_0042c500` | `undefined FUN_0042c500(void * this, int param_1, uint param_2)` | `pending` |
| `0042cf10` | `FUN_0042cf10` | `undefined FUN_0042cf10(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `0042d000` | `FUN_0042d000` | `undefined FUN_0042d000(void * this, int param_1, int param_2, int param_3)` | `pending` |
| `0042d2a0` | `FUN_0042d2a0` | `uint FUN_0042d2a0(void * this, int param_1)` | `pending` |
| `0042d2e0` | `FUN_0042d2e0` | `undefined FUN_0042d2e0(int param_1)` | `pending` |
| `0042d380` | `FUN_0042d380` | `undefined FUN_0042d380(int param_1)` | `pending` |
| `0042d4d0` | `FUN_0042d4d0` | `undefined4 FUN_0042d4d0(undefined4 param_1, undefined4 * param_2)` | `pending` |
| `0042d4f0` | `FUN_0042d4f0` | `undefined4 * FUN_0042d4f0(undefined4 * param_1)` | `pending` |
| `0042d640` | `FUN_0042d640` | `undefined4 * FUN_0042d640(void * this, uint param_1)` | `pending` |
| `0042d660` | `FUN_0042d660` | `undefined4 FUN_0042d660(undefined4 param_1)` | `pending` |
| `0042d720` | `FUN_0042d720` | `undefined FUN_0042d720(undefined4 * param_1)` | `pending` |
| `0042d778` | `FUN_0042d778` | `undefined FUN_0042d778(void)` | `pending` |
| `0042d79a` | `FUN_0042d79a` | `undefined FUN_0042d79a(void)` | `pending` |
| `0042d7b0` | `FUN_0042d7b0` | `undefined FUN_0042d7b0(void * this, int param_1)` | `verified_slice` |
| `0042daa0` | `FUN_0042daa0` | `int FUN_0042daa0(void * this, LONG param_1, LONG param_2)` | `pending` |
| `0042db10` | `FUN_0042db10` | `int FUN_0042db10(int param_1)` | `pending` |
| `0042db40` | `FUN_0042db40` | `int FUN_0042db40(void * this, LONG param_1, LONG param_2)` | `pending` |
| `0042db90` | `FUN_0042db90` | `int FUN_0042db90(void * this, int param_1)` | `pending` |
| `0042dbc0` | `FUN_0042dbc0` | `undefined FUN_0042dbc0(int param_1)` | `pending` |
| `0042dc20` | `WinGBitBlt` | `undefined WinGBitBlt()` | `pending` |
| `0042dc32` | `WinGCreateBitmap` | `undefined WinGCreateBitmap()` | `pending` |
| `0042dc38` | `WinGSetDIBColorTable` | `undefined WinGSetDIBColorTable()` | `pending` |
| `0042dc3e` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0042dc44` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `0042dc4a` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0042dc50` | `Ordinal_4836` | `undefined Ordinal_4836()` | `pending` |
| `0042dc5c` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0042dc62` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0042dc68` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `0042ddb8` | `Ordinal_719` | `undefined Ordinal_719()` | `pending` |
| `0042ddc4` | `Ordinal_4676` | `undefined Ordinal_4676()` | `pending` |
| `0042ddca` | `Ordinal_1090` | `undefined Ordinal_1090()` | `pending` |
| `0042ddd0` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0042ddd6` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0042dddc` | `Ordinal_4186` | `undefined Ordinal_4186()` | `pending` |
| `0042dde2` | `Ordinal_2310` | `undefined Ordinal_2310()` | `pending` |
| `0042dde8` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `0042ddee` | `Ordinal_5427` | `undefined Ordinal_5427()` | `pending` |
| `0042ddf4` | `Ordinal_5428` | `undefined Ordinal_5428()` | `pending` |
| `0042ddfa` | `Ordinal_3273` | `undefined Ordinal_3273()` | `pending` |
| `0042de00` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `0042de06` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0042de0c` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0042de1e` | `Ordinal_5124` | `undefined Ordinal_5124()` | `pending` |
| `0042de24` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `0042de2a` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `0042de42` | `Ordinal_679` | `undefined Ordinal_679()` | `pending` |
| `0042de48` | `Ordinal_450` | `undefined Ordinal_450()` | `pending` |
| `0042de5a` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0042de60` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `0042ded8` | `Ordinal_578` | `undefined Ordinal_578()` | `pending` |
| `0042deea` | `Ordinal_325` | `undefined Ordinal_325()` | `pending` |
| `0042def0` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `0042def6` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `0042defc` | `Ordinal_4282` | `undefined Ordinal_4282()` | `pending` |
| `0042df02` | `Ordinal_4316` | `undefined Ordinal_4316()` | `pending` |
| `0042df08` | `Ordinal_2100` | `undefined Ordinal_2100()` | `pending` |
| `0042df0e` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `0042df14` | `Ordinal_5440` | `undefined Ordinal_5440()` | `pending` |
| `0042df1a` | `Ordinal_3902` | `undefined Ordinal_3902()` | `pending` |
| `0042df20` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `0042df26` | `Ordinal_4407` | `undefined Ordinal_4407()` | `pending` |
| `0042df2c` | `Ordinal_267` | `undefined Ordinal_267()` | `pending` |
| `0042df32` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0042df38` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `0042df3e` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `0042df44` | `Ordinal_5671` | `undefined Ordinal_5671()` | `pending` |
| `0042df4a` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `0042df50` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `0042df56` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `0042df5c` | `Ordinal_339` | `undefined Ordinal_339()` | `pending` |
| `0042df62` | `Ordinal_4940` | `undefined Ordinal_4940()` | `pending` |
| `0042df68` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0042df6e` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0042df74` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0042df7a` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0042df80` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0042df86` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `0042df8c` | `Ordinal_4090` | `undefined Ordinal_4090()` | `pending` |
| `0042df92` | `Ordinal_4091` | `undefined Ordinal_4091()` | `pending` |
| `0042df98` | `Ordinal_2199` | `undefined Ordinal_2199()` | `pending` |
| `0042df9e` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `0042dfa4` | `Ordinal_2514` | `undefined Ordinal_2514()` | `pending` |
| `0042dfaa` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `0042dfb0` | `Ordinal_834` | `undefined Ordinal_834()` | `pending` |
| `0042dfb6` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `0042dfbc` | `Ordinal_836` | `undefined Ordinal_836()` | `pending` |
| `0042dfc2` | `Ordinal_819` | `undefined Ordinal_819()` | `pending` |
| `0042dfc8` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `0042dfce` | `Ordinal_3383` | `undefined Ordinal_3383()` | `pending` |
| `0042dfd4` | `Ordinal_606` | `undefined Ordinal_606()` | `pending` |
| `0042dfda` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0042dfe0` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0042dfe6` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0042dfec` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0042dff2` | `Ordinal_2473` | `undefined Ordinal_2473()` | `pending` |
| `0042dff8` | `Ordinal_3326` | `undefined Ordinal_3326()` | `pending` |
| `0042dffe` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0042e004` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `0042e00a` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0042e010` | `Ordinal_3307` | `undefined Ordinal_3307()` | `pending` |
| `0042e016` | `Ordinal_481` | `undefined Ordinal_481()` | `pending` |
| `0042e01c` | `Ordinal_3696` | `undefined Ordinal_3696()` | `pending` |
| `0042e022` | `Ordinal_835` | `undefined Ordinal_835()` | `pending` |
| `0042e028` | `Ordinal_2426` | `undefined Ordinal_2426()` | `pending` |
| `0042e02e` | `Ordinal_2200` | `undefined Ordinal_2200()` | `pending` |
| `0042e034` | `Ordinal_3046` | `undefined Ordinal_3046()` | `pending` |
| `0042e03a` | `Ordinal_341` | `undefined Ordinal_341()` | `pending` |
| `0042e040` | `Ordinal_5192` | `undefined Ordinal_5192()` | `pending` |
| `0042e046` | `Ordinal_4962` | `undefined Ordinal_4962()` | `pending` |
| `0042e04c` | `Ordinal_5658` | `undefined Ordinal_5658()` | `pending` |
| `0042e05e` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0042e064` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `0042e0a0` | `Ordinal_4312` | `undefined Ordinal_4312()` | `pending` |
| `0042e11e` | `Ordinal_724` | `undefined Ordinal_724()` | `pending` |
| `0042e12a` | `Ordinal_315` | `undefined Ordinal_315()` | `pending` |
| `0042e130` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `0042e136` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0042e13c` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0042e1c0` | `Ordinal_600` | `undefined Ordinal_600()` | `pending` |
| `0042e1cc` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `0042e1d2` | `Ordinal_702` | `undefined Ordinal_702()` | `pending` |
| `0042e1d8` | `Ordinal_713` | `undefined Ordinal_713()` | `pending` |
| `0042e1de` | `Ordinal_548` | `undefined Ordinal_548()` | `pending` |
| `0042e202` | `Ordinal_4668` | `undefined Ordinal_4668()` | `pending` |
| `0042e208` | `Ordinal_2962` | `undefined Ordinal_2962()` | `pending` |
| `0042e20e` | `Ordinal_4333` | `undefined Ordinal_4333()` | `pending` |
| `0042e214` | `Ordinal_3896` | `undefined Ordinal_3896()` | `pending` |
| `0042e2b6` | `Ordinal_1808` | `undefined Ordinal_1808()` | `pending` |
| `0042e2bc` | `Ordinal_5213` | `undefined Ordinal_5213()` | `pending` |
| `0042e2c2` | `Ordinal_5214` | `undefined Ordinal_5214()` | `pending` |
| `0042e2c8` | `Ordinal_3643` | `undefined Ordinal_3643()` | `pending` |
| `0042e2ce` | `Ordinal_1846` | `undefined Ordinal_1846()` | `pending` |
| `0042e2d4` | `Ordinal_2890` | `undefined Ordinal_2890()` | `pending` |
| `0042e2da` | `Ordinal_862` | `undefined Ordinal_862()` | `pending` |
| `0042e2e0` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0042e2e6` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `0042e2ec` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `0042e2f2` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `0042e2f8` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `0042e2fe` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `0042e304` | `Ordinal_5570` | `undefined Ordinal_5570()` | `pending` |
| `0042e30a` | `Ordinal_2007` | `undefined Ordinal_2007()` | `pending` |
| `0042e310` | `Ordinal_4931` | `undefined Ordinal_4931()` | `pending` |
| `0042e316` | `Ordinal_2557` | `undefined Ordinal_2557()` | `pending` |
| `0042e31c` | `Ordinal_3956` | `undefined Ordinal_3956()` | `pending` |
| `0042e322` | `Ordinal_2704` | `undefined Ordinal_2704()` | `pending` |
| `0042e328` | `Ordinal_2317` | `undefined Ordinal_2317()` | `pending` |
| `0042e32e` | `Ordinal_2707` | `undefined Ordinal_2707()` | `pending` |
| `0042e346` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0042e34c` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `0042e352` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `0042e358` | `Ordinal_626` | `undefined Ordinal_626()` | `pending` |
| `0042e36a` | `Ordinal_4953` | `undefined Ordinal_4953()` | `pending` |
| `0042e388` | `Ordinal_3306` | `undefined Ordinal_3306()` | `pending` |
| `0042e3be` | `Ordinal_5373` | `undefined Ordinal_5373()` | `pending` |
| `0042e3ca` | `Ordinal_5374` | `undefined Ordinal_5374()` | `pending` |
| `0042e3d0` | `Ordinal_5188` | `undefined Ordinal_5188()` | `pending` |
| `0042e3d6` | `Ordinal_3033` | `undefined Ordinal_3033()` | `pending` |
| `0042e3e2` | `Ordinal_745` | `undefined Ordinal_745()` | `pending` |
| `0042e3f4` | `Ordinal_1862` | `undefined Ordinal_1862()` | `pending` |
| `0042e3fa` | `Ordinal_3786` | `undefined Ordinal_3786()` | `pending` |
| `0042e400` | `Ordinal_3695` | `undefined Ordinal_3695()` | `pending` |
| `0042e40c` | `Ordinal_1869` | `undefined Ordinal_1869()` | `pending` |
| `0042e46c` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0042e472` | `Ordinal_411` | `undefined Ordinal_411()` | `pending` |
| `0042e478` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `0042e47e` | `Ordinal_549` | `undefined Ordinal_549()` | `pending` |
| `0042e484` | `Ordinal_2238` | `undefined Ordinal_2238()` | `pending` |
| `0042e48a` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0042e490` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0042e496` | `Ordinal_5628` | `undefined Ordinal_5628()` | `pending` |
| `0042e49c` | `Ordinal_4635` | `undefined Ordinal_4635()` | `pending` |
| `0042e4a2` | `Ordinal_292` | `undefined Ordinal_292()` | `pending` |
| `0042e4a8` | `Ordinal_1764` | `undefined Ordinal_1764()` | `pending` |
| `0042e4ae` | `Ordinal_873` | `undefined Ordinal_873()` | `pending` |
| `0042e4b4` | `Ordinal_469` | `undefined Ordinal_469()` | `pending` |
| `0042e4ba` | `Ordinal_3655` | `undefined Ordinal_3655()` | `pending` |
| `0042e4c0` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0042e4c6` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0042e4cc` | `Ordinal_4165` | `undefined Ordinal_4165()` | `pending` |
| `0042e4d2` | `Ordinal_4703` | `undefined Ordinal_4703()` | `pending` |
| `0042e4d8` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `0042e4de` | `Ordinal_4086` | `undefined Ordinal_4086()` | `pending` |
| `0042e4e4` | `Ordinal_4084` | `undefined Ordinal_4084()` | `pending` |
| `0042e4ea` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `0042e4f0` | `FUN_0042e4f0` | `undefined FUN_0042e4f0(_onexit_t param_1)` | `pending` |
| `0042e590` | `FUN_0042e590` | `int FUN_0042e590(_onexit_t param_1)` | `pending` |
| `0042e5b0` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0042e620` | `FUN_0042e620` | `undefined FUN_0042e620(void)` | `pending` |
| `0042e640` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0042e6e0` | ``eh_vector_constructor_iterator'` | `void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)` | `pending` |
| `0042e750` | `FUN_0042e750` | `undefined FUN_0042e750(void)` | `pending` |
| `0042e770` | `FUN_0042e770` | `type_info * FUN_0042e770(void * this, byte param_1)` | `pending` |
| `0042e790` | `FUN_0042e790` | `undefined FUN_0042e790(void)` | `pending` |
| `0042e7d0` | `entry` | `undefined entry(void)` | `pending` |
| `0042e972` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0042e984` | `~type_info` | `void ~type_info(type_info * this)` | `pending` |
| `0042e990` | `initterm` | `undefined initterm()` | `pending` |
| `0042e9a0` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `0042e9d0` | `FUN_0042e9d0` | `undefined FUN_0042e9d0(void)` | `pending` |
| `0042e9d2` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `0042e9d8` | `DdeNameService` | `HDDEDATA DdeNameService(DWORD idInst, HSZ hsz1, HSZ hsz2, UINT afCmd)` | `pending` |
| `0042e9de` | `DdeInitializeA` | `UINT DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)` | `pending` |
| `0042e9e4` | `DdeUninitialize` | `BOOL DdeUninitialize(DWORD idInst)` | `pending` |
| `0042e9ea` | `DdeCreateStringHandleA` | `HSZ DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)` | `pending` |
| `0042e9f0` | `DdeQueryStringA` | `DWORD DdeQueryStringA(DWORD idInst, HSZ hsz, LPSTR psz, DWORD cchMax, int iCodePage)` | `pending` |
| `0042e9f6` | `DdeFreeStringHandle` | `BOOL DdeFreeStringHandle(DWORD idInst, HSZ hsz)` | `pending` |
| `0042e9fc` | `DdeCreateDataHandle` | `HDDEDATA DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)` | `pending` |
| `0042ea02` | `DdeDisconnect` | `BOOL DdeDisconnect(HCONV hConv)` | `pending` |
| `0042ea08` | `DdeUnaccessData` | `BOOL DdeUnaccessData(HDDEDATA hData)` | `pending` |
| `0042ea0e` | `DdeAccessData` | `LPBYTE DdeAccessData(HDDEDATA hData, LPDWORD pcbDataSize)` | `pending` |
| `0042ea20` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0042ea39` | `FUN_0042ea39` | `undefined4 FUN_0042ea39(int param_1, undefined4 param_2)` | `pending` |
| `0042ea88` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Funeral_Kit.exe

Remaining: **496** of **496** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(undefined4 * param_1)` | `pending` |
| `00401120` | `FUN_00401120` | `undefined4 * FUN_00401120(void * this, byte param_1)` | `pending` |
| `00401140` | `FUN_00401140` | `undefined FUN_00401140(undefined4 * param_1)` | `pending` |
| `004011ae` | `FUN_004011ae` | `undefined FUN_004011ae(void)` | `pending` |
| `004011c0` | `FUN_004011c0` | `undefined FUN_004011c0(void * this, int param_1, int param_2)` | `pending` |
| `004012c0` | `FUN_004012c0` | `undefined4 FUN_004012c0(void * this, undefined4 param_1)` | `pending` |
| `004014a6` | `FUN_004014a6` | `undefined FUN_004014a6(void)` | `pending` |
| `004014b8` | `FUN_004014b8` | `undefined FUN_004014b8(void)` | `pending` |
| `004014c0` | `FUN_004014c0` | `int FUN_004014c0(void * this, int param_1, int param_2)` | `pending` |
| `004014f0` | `FUN_004014f0` | `undefined FUN_004014f0(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `00401640` | `FUN_00401640` | `undefined FUN_00401640(undefined4 * param_1)` | `pending` |
| `00401690` | `FUN_00401690` | `undefined FUN_00401690(undefined4 * param_1)` | `pending` |
| `004016d7` | `FUN_004016d7` | `undefined FUN_004016d7(void)` | `pending` |
| `0040173f` | `FUN_0040173f` | `undefined FUN_0040173f(void)` | `pending` |
| `004017b2` | `FUN_004017b2` | `undefined FUN_004017b2(void)` | `pending` |
| `004017c7` | `FUN_004017c7` | `undefined FUN_004017c7(void)` | `pending` |
| `004017d0` | `FUN_004017d0` | `undefined FUN_004017d0(undefined4 * param_1)` | `pending` |
| `0040181a` | `FUN_0040181a` | `undefined FUN_0040181a(void)` | `pending` |
| `0040182f` | `FUN_0040182f` | `undefined FUN_0040182f(void)` | `pending` |
| `00401930` | `FUN_00401930` | `undefined4 * FUN_00401930(void * this, byte param_1)` | `pending` |
| `00401950` | `FUN_00401950` | `undefined FUN_00401950(void)` | `pending` |
| `00401991` | `FUN_00401991` | `undefined FUN_00401991(void)` | `pending` |
| `004019a0` | `FUN_004019a0` | `undefined4 * FUN_004019a0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00401aa0` | `FUN_00401aa0` | `undefined FUN_00401aa0(undefined4 * param_1)` | `pending` |
| `00401b0c` | `FUN_00401b0c` | `undefined FUN_00401b0c(void)` | `pending` |
| `00401b1a` | `FUN_00401b1a` | `undefined FUN_00401b1a(void)` | `pending` |
| `00401b28` | `FUN_00401b28` | `undefined FUN_00401b28(void)` | `pending` |
| `00401b36` | `FUN_00401b36` | `undefined FUN_00401b36(void)` | `pending` |
| `00401b4e` | `FUN_00401b4e` | `undefined FUN_00401b4e(void)` | `pending` |
| `00401b60` | `FUN_00401b60` | `undefined FUN_00401b60(void * this, undefined4 param_1)` | `pending` |
| `00401bc0` | `FUN_00401bc0` | `undefined4 FUN_00401bc0(void * this, undefined4 param_1)` | `pending` |
| `00401c20` | `FUN_00401c20` | `undefined4 FUN_00401c20(int param_1)` | `pending` |
| `00401c70` | `FUN_00401c70` | `undefined FUN_00401c70(int * param_1)` | `pending` |
| `00401d70` | `FUN_00401d70` | `undefined FUN_00401d70(int * param_1)` | `pending` |
| `00401df0` | `FUN_00401df0` | `undefined4 FUN_00401df0(int param_1)` | `pending` |
| `00401f40` | `FUN_00401f40` | `undefined FUN_00401f40(int param_1)` | `pending` |
| `00402050` | `FUN_00402050` | `undefined4 FUN_00402050(void * param_1)` | `pending` |
| `004020e0` | `FUN_004020e0` | `undefined FUN_004020e0(void * param_1)` | `pending` |
| `00402200` | `FUN_00402200` | `int FUN_00402200(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00402280` | `FUN_00402280` | `undefined4 FUN_00402280(void * this, int param_1)` | `pending` |
| `004022d0` | `FUN_004022d0` | `undefined4 FUN_004022d0(int param_1)` | `pending` |
| `004022e0` | `FUN_004022e0` | `undefined FUN_004022e0(void * this, int param_1)` | `pending` |
| `00402300` | `FUN_00402300` | `bool FUN_00402300(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00402380` | `FUN_00402380` | `undefined4 FUN_00402380(void * this, char * param_1)` | `pending` |
| `00402440` | `FUN_00402440` | `undefined4 FUN_00402440(void * this, undefined4 param_1, int param_2)` | `pending` |
| `0040282f` | `FUN_0040282f` | `undefined FUN_0040282f(void)` | `pending` |
| `00402890` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00402970` | `FUN_00402970` | `undefined4 * FUN_00402970(undefined4 * param_1)` | `pending` |
| `00403130` | `FUN_00403130` | `undefined4 * FUN_00403130(void * this, byte param_1)` | `pending` |
| `00403150` | `FUN_00403150` | `undefined FUN_00403150(undefined4 * param_1)` | `pending` |
| `00403270` | `FUN_00403270` | `undefined FUN_00403270(void)` | `pending` |
| `0040327e` | `FUN_0040327e` | `undefined FUN_0040327e(void)` | `pending` |
| `0040328c` | `FUN_0040328c` | `undefined FUN_0040328c(void)` | `pending` |
| `0040329a` | `FUN_0040329a` | `undefined FUN_0040329a(void)` | `pending` |
| `004032a8` | `FUN_004032a8` | `undefined FUN_004032a8(void)` | `pending` |
| `004032b6` | `FUN_004032b6` | `undefined FUN_004032b6(void)` | `pending` |
| `004032c4` | `FUN_004032c4` | `undefined FUN_004032c4(void)` | `pending` |
| `004032d2` | `FUN_004032d2` | `undefined FUN_004032d2(void)` | `pending` |
| `004032e0` | `FUN_004032e0` | `undefined FUN_004032e0(void)` | `pending` |
| `004032ee` | `FUN_004032ee` | `undefined FUN_004032ee(void)` | `pending` |
| `004032fc` | `FUN_004032fc` | `undefined FUN_004032fc(void)` | `pending` |
| `0040330a` | `FUN_0040330a` | `undefined FUN_0040330a(void)` | `pending` |
| `00403318` | `FUN_00403318` | `undefined FUN_00403318(void)` | `pending` |
| `00403326` | `FUN_00403326` | `undefined FUN_00403326(void)` | `pending` |
| `00403334` | `FUN_00403334` | `undefined FUN_00403334(void)` | `pending` |
| `00403342` | `FUN_00403342` | `undefined FUN_00403342(void)` | `pending` |
| `00403350` | `FUN_00403350` | `undefined FUN_00403350(void)` | `pending` |
| `0040335e` | `FUN_0040335e` | `undefined FUN_0040335e(void)` | `pending` |
| `0040336c` | `FUN_0040336c` | `undefined FUN_0040336c(void)` | `pending` |
| `0040337a` | `FUN_0040337a` | `undefined FUN_0040337a(void)` | `pending` |
| `00403388` | `FUN_00403388` | `undefined FUN_00403388(void)` | `pending` |
| `00403396` | `FUN_00403396` | `undefined FUN_00403396(void)` | `pending` |
| `004033a4` | `FUN_004033a4` | `undefined FUN_004033a4(void)` | `pending` |
| `004033b2` | `FUN_004033b2` | `undefined FUN_004033b2(void)` | `pending` |
| `004033ca` | `FUN_004033ca` | `undefined FUN_004033ca(void)` | `pending` |
| `00403490` | `FUN_00403490` | `undefined4 FUN_00403490(int param_1)` | `pending` |
| `004034e0` | `FUN_004034e0` | `undefined FUN_004034e0(int param_1)` | `pending` |
| `00403690` | `FUN_00403690` | `undefined4 FUN_00403690(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)` | `pending` |
| `00403700` | `FUN_00403700` | `bool FUN_00403700(int param_1)` | `pending` |
| `004037b4` | `FUN_004037b4` | `undefined FUN_004037b4(void)` | `pending` |
| `004037c0` | `FUN_004037c0` | `bool FUN_004037c0(int param_1)` | `pending` |
| `00403867` | `FUN_00403867` | `undefined FUN_00403867(void)` | `pending` |
| `00403870` | `FUN_00403870` | `undefined4 FUN_00403870(void)` | `pending` |
| `00403880` | `FUN_00403880` | `undefined4 FUN_00403880(int param_1)` | `pending` |
| `004038a3` | `FUN_004038a3` | `undefined4 FUN_004038a3(int param_1, undefined4 * param_2)` | `pending` |
| `00403a46` | `FUN_00403a46` | `undefined FUN_00403a46(void)` | `pending` |
| `00403a4e` | `FUN_00403a4e` | `undefined FUN_00403a4e(void)` | `pending` |
| `00403a69` | `FUN_00403a69` | `undefined FUN_00403a69(void)` | `pending` |
| `00403a7b` | `FUN_00403a7b` | `undefined FUN_00403a7b(void)` | `pending` |
| `00403a90` | `FUN_00403a90` | `undefined4 FUN_00403a90(void)` | `pending` |
| `00403caf` | `FUN_00403caf` | `undefined FUN_00403caf(void)` | `pending` |
| `00403cb7` | `FUN_00403cb7` | `undefined FUN_00403cb7(void)` | `pending` |
| `00403cd9` | `FUN_00403cd9` | `undefined FUN_00403cd9(void)` | `pending` |
| `00403d30` | `FUN_00403d30` | `undefined FUN_00403d30(int param_1)` | `pending` |
| `00403ef0` | `FUN_00403ef0` | `undefined FUN_00403ef0(void)` | `pending` |
| `00403f90` | `FUN_00403f90` | `undefined4 FUN_00403f90(void * this, undefined4 param_1, int param_2)` | `pending` |
| `00404000` | `FUN_00404000` | `undefined4 FUN_00404000(void * this, int param_1)` | `pending` |
| `00404040` | `FUN_00404040` | `undefined FUN_00404040(int param_1)` | `pending` |
| `00404160` | `FUN_00404160` | `undefined4 FUN_00404160(int param_1)` | `pending` |
| `00404170` | `FUN_00404170` | `undefined4 FUN_00404170(int param_1)` | `pending` |
| `004042e0` | `FUN_004042e0` | `undefined4 * FUN_004042e0(undefined4 * param_1)` | `pending` |
| `004043ab` | `FUN_004043ab` | `undefined FUN_004043ab(void)` | `pending` |
| `004043c0` | `FUN_004043c0` | `undefined FUN_004043c0(undefined4 * param_1)` | `pending` |
| `00404413` | `FUN_00404413` | `undefined FUN_00404413(void)` | `pending` |
| `00404420` | `FUN_00404420` | `undefined4 * FUN_00404420(undefined4 * param_1)` | `pending` |
| `004044ff` | `FUN_004044ff` | `undefined FUN_004044ff(void)` | `pending` |
| `00404510` | `FUN_00404510` | `undefined FUN_00404510(undefined4 * param_1)` | `pending` |
| `00404557` | `FUN_00404557` | `undefined FUN_00404557(void)` | `pending` |
| `00404560` | `FUN_00404560` | `undefined4 FUN_00404560(void * this, byte param_1)` | `pending` |
| `00404580` | `FUN_00404580` | `undefined4 FUN_00404580(void * this, byte param_1)` | `pending` |
| `004045a0` | `FUN_004045a0` | `undefined4 FUN_004045a0(void * this, byte param_1)` | `pending` |
| `004045c0` | `FUN_004045c0` | `undefined4 * FUN_004045c0(undefined4 * param_1)` | `pending` |
| `004047de` | `FUN_004047de` | `undefined FUN_004047de(void)` | `pending` |
| `004047e9` | `FUN_004047e9` | `undefined FUN_004047e9(void)` | `pending` |
| `004047f4` | `FUN_004047f4` | `undefined FUN_004047f4(void)` | `pending` |
| `004047ff` | `FUN_004047ff` | `undefined FUN_004047ff(void)` | `pending` |
| `00404814` | `FUN_00404814` | `undefined FUN_00404814(void)` | `pending` |
| `00404820` | `FUN_00404820` | `undefined FUN_00404820(void)` | `pending` |
| `00404886` | `FUN_00404886` | `undefined FUN_00404886(void)` | `pending` |
| `00404891` | `FUN_00404891` | `undefined FUN_00404891(void)` | `pending` |
| `0040489c` | `FUN_0040489c` | `undefined FUN_0040489c(void)` | `pending` |
| `004048a7` | `FUN_004048a7` | `undefined FUN_004048a7(void)` | `pending` |
| `004048bc` | `FUN_004048bc` | `undefined FUN_004048bc(void)` | `pending` |
| `00404980` | `FUN_00404980` | `undefined4 * FUN_00404980(undefined4 * param_1)` | `pending` |
| `00404a0d` | `FUN_00404a0d` | `undefined FUN_00404a0d(void)` | `pending` |
| `00404a40` | `FUN_00404a40` | `undefined4 * FUN_00404a40(void * this, byte param_1)` | `pending` |
| `00404a60` | `FUN_00404a60` | `undefined FUN_00404a60(undefined4 * param_1)` | `pending` |
| `00404ab5` | `FUN_00404ab5` | `undefined FUN_00404ab5(void)` | `pending` |
| `00404aca` | `FUN_00404aca` | `undefined FUN_00404aca(void)` | `pending` |
| `00404bc0` | `FUN_00404bc0` | `undefined4 * FUN_00404bc0(undefined4 * param_1)` | `pending` |
| `00404c5a` | `FUN_00404c5a` | `undefined FUN_00404c5a(void)` | `pending` |
| `00404c90` | `FUN_00404c90` | `undefined4 * FUN_00404c90(void * this, byte param_1)` | `pending` |
| `00404cb0` | `FUN_00404cb0` | `undefined FUN_00404cb0(undefined4 * param_1)` | `pending` |
| `00404d16` | `FUN_00404d16` | `undefined FUN_00404d16(void)` | `pending` |
| `00404d36` | `FUN_00404d36` | `undefined FUN_00404d36(void)` | `pending` |
| `00404e30` | `FUN_00404e30` | `undefined4 * FUN_00404e30(undefined4 * param_1)` | `pending` |
| `00404ea0` | `FUN_00404ea0` | `undefined4 * FUN_00404ea0(void * this, byte param_1)` | `pending` |
| `00404ec0` | `FUN_00404ec0` | `undefined FUN_00404ec0(undefined4 * param_1)` | `pending` |
| `00404f4b` | `FUN_00404f4b` | `undefined FUN_00404f4b(void)` | `pending` |
| `00404f60` | `FUN_00404f60` | `undefined FUN_00404f60(void * this, int param_1)` | `pending` |
| `00405010` | `FUN_00405010` | `undefined4 FUN_00405010(int param_1)` | `pending` |
| `00405050` | `FUN_00405050` | `undefined4 FUN_00405050(void * this, undefined4 param_1)` | `pending` |
| `00405225` | `FUN_00405225` | `undefined FUN_00405225(void)` | `pending` |
| `00405237` | `FUN_00405237` | `undefined FUN_00405237(void)` | `pending` |
| `00405240` | `FUN_00405240` | `bool FUN_00405240(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00405340` | `FUN_00405340` | `int FUN_00405340(void * this, int param_1, int param_2)` | `pending` |
| `00405380` | `FUN_00405380` | `undefined FUN_00405380(void * this, undefined4 * param_1)` | `pending` |
| `00405460` | `FUN_00405460` | `undefined4 * FUN_00405460(undefined4 * param_1)` | `pending` |
| `00405540` | `FUN_00405540` | `undefined4 * FUN_00405540(void * this, byte param_1)` | `pending` |
| `00405560` | `FUN_00405560` | `undefined FUN_00405560(undefined4 * param_1)` | `pending` |
| `004055c3` | `FUN_004055c3` | `undefined FUN_004055c3(void)` | `pending` |
| `004055d1` | `FUN_004055d1` | `undefined FUN_004055d1(void)` | `pending` |
| `004055df` | `FUN_004055df` | `undefined FUN_004055df(void)` | `pending` |
| `004055f7` | `FUN_004055f7` | `undefined FUN_004055f7(void)` | `pending` |
| `004056a0` | `FUN_004056a0` | `undefined4 FUN_004056a0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `0040575d` | `FUN_0040575d` | `undefined FUN_0040575d(void)` | `pending` |
| `004057b0` | `FUN_004057b0` | `undefined4 * FUN_004057b0(undefined4 * param_1)` | `pending` |
| `004058dc` | `FUN_004058dc` | `undefined FUN_004058dc(void)` | `pending` |
| `004058f4` | `FUN_004058f4` | `undefined FUN_004058f4(void)` | `pending` |
| `00405910` | `FUN_00405910` | `undefined FUN_00405910(void)` | `pending` |
| `00405920` | `FUN_00405920` | `undefined FUN_00405920(void)` | `pending` |
| `0040596e` | `FUN_0040596e` | `undefined FUN_0040596e(void)` | `pending` |
| `00405982` | `FUN_00405982` | `undefined FUN_00405982(void)` | `pending` |
| `00405b5b` | `FUN_00405b5b` | `undefined FUN_00405b5b(void)` | `pending` |
| `00405b70` | `FUN_00405b70` | `undefined FUN_00405b70(int param_1)` | `pending` |
| `00405ba0` | `FUN_00405ba0` | `undefined FUN_00405ba0(int param_1)` | `pending` |
| `00405bd0` | `FUN_00405bd0` | `bool FUN_00405bd0(void)` | `pending` |
| `00405ca6` | `FUN_00405ca6` | `undefined FUN_00405ca6(void)` | `pending` |
| `00405cb0` | `FUN_00405cb0` | `undefined FUN_00405cb0(void)` | `pending` |
| `00405ddf` | `FUN_00405ddf` | `undefined FUN_00405ddf(void)` | `pending` |
| `00405df0` | `FUN_00405df0` | `undefined FUN_00405df0(undefined4 * param_1)` | `pending` |
| `00405e37` | `FUN_00405e37` | `undefined FUN_00405e37(void)` | `pending` |
| `00405f60` | `FUN_00405f60` | `undefined FUN_00405f60(void)` | `pending` |
| `00405f80` | `FUN_00405f80` | `undefined FUN_00405f80(void)` | `pending` |
| `00405fb0` | `FUN_00405fb0` | `undefined4 * FUN_00405fb0(undefined4 * param_1)` | `pending` |
| `00406020` | `FUN_00406020` | `undefined4 * FUN_00406020(void * this, byte param_1)` | `pending` |
| `00406040` | `FUN_00406040` | `undefined FUN_00406040(undefined4 * param_1)` | `pending` |
| `00406093` | `FUN_00406093` | `undefined FUN_00406093(void)` | `pending` |
| `004060a0` | `FUN_004060a0` | `undefined FUN_004060a0(void)` | `pending` |
| `004060f0` | `FUN_004060f0` | `undefined4 FUN_004060f0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00406120` | `FUN_00406120` | `undefined4 FUN_00406120(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00406150` | `FUN_00406150` | `undefined4 FUN_00406150(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00406180` | `FUN_00406180` | `undefined4 FUN_00406180(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `004061b0` | `FUN_004061b0` | `undefined4 FUN_004061b0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `004062b0` | `FUN_004062b0` | `undefined4 * FUN_004062b0(undefined4 * param_1)` | `pending` |
| `004063b0` | `FUN_004063b0` | `undefined4 * FUN_004063b0(void * this, byte param_1)` | `pending` |
| `004063d0` | `FUN_004063d0` | `undefined FUN_004063d0(undefined4 * param_1)` | `pending` |
| `0040643c` | `FUN_0040643c` | `undefined FUN_0040643c(void)` | `pending` |
| `0040644a` | `FUN_0040644a` | `undefined FUN_0040644a(void)` | `pending` |
| `00406458` | `FUN_00406458` | `undefined FUN_00406458(void)` | `pending` |
| `00406466` | `FUN_00406466` | `undefined FUN_00406466(void)` | `pending` |
| `0040647e` | `FUN_0040647e` | `undefined FUN_0040647e(void)` | `pending` |
| `004064b0` | `FUN_004064b0` | `undefined4 FUN_004064b0(int param_1)` | `pending` |
| `00406500` | `FUN_00406500` | `undefined FUN_00406500(void)` | `pending` |
| `004065d0` | `FUN_004065d0` | `undefined4 FUN_004065d0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `004066c0` | `FUN_004066c0` | `undefined4 * FUN_004066c0(undefined4 * param_1)` | `pending` |
| `00406730` | `FUN_00406730` | `undefined4 * FUN_00406730(void * this, byte param_1)` | `pending` |
| `00406750` | `FUN_00406750` | `undefined FUN_00406750(undefined4 * param_1)` | `pending` |
| `004067ee` | `FUN_004067ee` | `undefined FUN_004067ee(void)` | `pending` |
| `00406800` | `FUN_00406800` | `undefined4 FUN_00406800(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00406a90` | `FUN_00406a90` | `bool FUN_00406a90(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00406af0` | `FUN_00406af0` | `uint FUN_00406af0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00406b8a` | `FUN_00406b8a` | `undefined FUN_00406b8a(void)` | `pending` |
| `00406ba0` | `FUN_00406ba0` | `bool FUN_00406ba0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00406bd0` | `FUN_00406bd0` | `uint FUN_00406bd0(void * this, int param_1, undefined4 param_2, LPBYTE param_3)` | `pending` |
| `00406c6b` | `FUN_00406c6b` | `undefined FUN_00406c6b(void)` | `pending` |
| `00406c80` | `FUN_00406c80` | `bool FUN_00406c80(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00406cb0` | `FUN_00406cb0` | `undefined FUN_00406cb0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00406cf0` | `FUN_00406cf0` | `undefined FUN_00406cf0(void * this, int param_1, undefined4 param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00406daf` | `FUN_00406daf` | `undefined FUN_00406daf(void)` | `pending` |
| `00406dc0` | `FUN_00406dc0` | `undefined FUN_00406dc0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00406e10` | `FUN_00406e10` | `bool FUN_00406e10(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00406e60` | `FUN_00406e60` | `bool FUN_00406e60(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00406ea0` | `FUN_00406ea0` | `bool FUN_00406ea0(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00406f30` | `FUN_00406f30` | `undefined FUN_00406f30(void)` | `pending` |
| `00406f40` | `FUN_00406f40` | `bool FUN_00406f40(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00406f80` | `FUN_00406f80` | `undefined4 * FUN_00406f80(undefined4 * param_1)` | `pending` |
| `00406ff0` | `FUN_00406ff0` | `undefined4 * FUN_00406ff0(void * this, byte param_1)` | `pending` |
| `00407010` | `FUN_00407010` | `undefined FUN_00407010(undefined4 * param_1)` | `pending` |
| `0040706e` | `FUN_0040706e` | `undefined FUN_0040706e(void)` | `pending` |
| `00407080` | `FUN_00407080` | `undefined4 * FUN_00407080(undefined4 * param_1)` | `pending` |
| `004070a0` | `FUN_004070a0` | `undefined4 * FUN_004070a0(undefined4 * param_1)` | `pending` |
| `00407270` | `FUN_00407270` | `undefined4 * FUN_00407270(void * this, byte param_1)` | `pending` |
| `00407290` | `FUN_00407290` | `undefined FUN_00407290(undefined4 * param_1)` | `pending` |
| `00407308` | `FUN_00407308` | `undefined FUN_00407308(void)` | `pending` |
| `00407316` | `FUN_00407316` | `undefined FUN_00407316(void)` | `pending` |
| `0040732e` | `FUN_0040732e` | `undefined FUN_0040732e(void)` | `pending` |
| `00407340` | `FUN_00407340` | `undefined * FUN_00407340(void)` | `pending` |
| `00407360` | `FUN_00407360` | `undefined4 * FUN_00407360(void * this, undefined4 param_1)` | `pending` |
| `00407804` | `FUN_00407804` | `undefined FUN_00407804(void)` | `pending` |
| `00407810` | `FUN_00407810` | `int FUN_00407810(void * this, int param_1)` | `pending` |
| `00407920` | `FUN_00407920` | `undefined FUN_00407920(void * param_1)` | `pending` |
| `00407950` | `FUN_00407950` | `undefined FUN_00407950(int param_1)` | `pending` |
| `004079a0` | `FUN_004079a0` | `undefined FUN_004079a0(void * param_1)` | `pending` |
| `00407aa0` | `FUN_00407aa0` | `undefined FUN_00407aa0(void * this, int param_1)` | `pending` |
| `00407b00` | `FUN_00407b00` | `undefined FUN_00407b00(void * this, int * param_1)` | `pending` |
| `00407b80` | `FUN_00407b80` | `undefined FUN_00407b80(void * this, int param_1)` | `pending` |
| `00407bb0` | `FUN_00407bb0` | `undefined4 FUN_00407bb0(void * param_1)` | `pending` |
| `00407c20` | `FUN_00407c20` | `undefined4 FUN_00407c20(void * this, int param_1)` | `pending` |
| `00407c70` | `FUN_00407c70` | `undefined4 FUN_00407c70(void * this, int param_1)` | `pending` |
| `00407d70` | `FUN_00407d70` | `undefined4 FUN_00407d70(void)` | `pending` |
| `00407dfe` | `FUN_00407dfe` | `undefined FUN_00407dfe(void)` | `pending` |
| `00407e10` | `FUN_00407e10` | `undefined4 * FUN_00407e10(void * this, int param_1)` | `pending` |
| `00407ec0` | `FUN_00407ec0` | `byte FUN_00407ec0(void * this, int param_1)` | `pending` |
| `00407ef0` | `FUN_00407ef0` | `uint FUN_00407ef0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00408069` | `FUN_00408069` | `undefined FUN_00408069(void)` | `pending` |
| `00408080` | `FUN_00408080` | `undefined4 FUN_00408080(void * this, int param_1, int * param_2)` | `pending` |
| `00408100` | `FUN_00408100` | `undefined4 FUN_00408100(void * this, int param_1, int param_2)` | `pending` |
| `00408240` | `FUN_00408240` | `undefined4 * FUN_00408240(undefined4 * param_1)` | `pending` |
| `004082d0` | `FUN_004082d0` | `undefined4 * FUN_004082d0(void * this, byte param_1)` | `pending` |
| `004082f0` | `FUN_004082f0` | `undefined FUN_004082f0(undefined4 * param_1)` | `pending` |
| `0040834d` | `FUN_0040834d` | `undefined FUN_0040834d(void)` | `pending` |
| `00408360` | `FUN_00408360` | `undefined4 FUN_00408360(void * this, int param_1)` | `pending` |
| `004084cf` | `FUN_004084cf` | `undefined FUN_004084cf(void)` | `pending` |
| `004084e0` | `FUN_004084e0` | `undefined FUN_004084e0(undefined4 * param_1)` | `pending` |
| `00408527` | `FUN_00408527` | `undefined FUN_00408527(void)` | `pending` |
| `00408600` | `FUN_00408600` | `undefined4 * FUN_00408600(undefined4 * param_1)` | `pending` |
| `00408b70` | `FUN_00408b70` | `undefined4 * FUN_00408b70(void * this, byte param_1)` | `pending` |
| `00408b90` | `FUN_00408b90` | `undefined FUN_00408b90(undefined4 * param_1)` | `pending` |
| `00408c68` | `FUN_00408c68` | `undefined FUN_00408c68(void)` | `pending` |
| `00408c76` | `FUN_00408c76` | `undefined FUN_00408c76(void)` | `pending` |
| `00408c84` | `FUN_00408c84` | `undefined FUN_00408c84(void)` | `pending` |
| `00408c92` | `FUN_00408c92` | `undefined FUN_00408c92(void)` | `pending` |
| `00408ca0` | `FUN_00408ca0` | `undefined FUN_00408ca0(void)` | `pending` |
| `00408cae` | `FUN_00408cae` | `undefined FUN_00408cae(void)` | `pending` |
| `00408cbc` | `FUN_00408cbc` | `undefined FUN_00408cbc(void)` | `pending` |
| `00408cca` | `FUN_00408cca` | `undefined FUN_00408cca(void)` | `pending` |
| `00408cd8` | `FUN_00408cd8` | `undefined FUN_00408cd8(void)` | `pending` |
| `00408ce6` | `FUN_00408ce6` | `undefined FUN_00408ce6(void)` | `pending` |
| `00408cf4` | `FUN_00408cf4` | `undefined FUN_00408cf4(void)` | `pending` |
| `00408d02` | `FUN_00408d02` | `undefined FUN_00408d02(void)` | `pending` |
| `00408d10` | `FUN_00408d10` | `undefined FUN_00408d10(void)` | `pending` |
| `00408d1e` | `FUN_00408d1e` | `undefined FUN_00408d1e(void)` | `pending` |
| `00408d2c` | `FUN_00408d2c` | `undefined FUN_00408d2c(void)` | `pending` |
| `00408d3a` | `FUN_00408d3a` | `undefined FUN_00408d3a(void)` | `pending` |
| `00408d52` | `FUN_00408d52` | `undefined FUN_00408d52(void)` | `pending` |
| `00408df0` | `FUN_00408df0` | `undefined4 FUN_00408df0(int param_1)` | `pending` |
| `00408e40` | `FUN_00408e40` | `undefined FUN_00408e40(int param_1)` | `pending` |
| `004090b0` | `FUN_004090b0` | `undefined4 FUN_004090b0(undefined4 param_1, byte * param_2, undefined4 param_3)` | `pending` |
| `00409280` | `FUN_00409280` | `undefined FUN_00409280(void)` | `pending` |
| `00409320` | `FUN_00409320` | `undefined FUN_00409320(void)` | `pending` |
| `00409328` | `FUN_00409328` | `undefined FUN_00409328(void)` | `pending` |
| `00409330` | `FUN_00409330` | `undefined FUN_00409330(void)` | `pending` |
| `0040934d` | `FUN_0040934d` | `undefined FUN_0040934d(void)` | `pending` |
| `00409360` | `FUN_00409360` | `undefined4 FUN_00409360(int * param_1, byte * param_2)` | `pending` |
| `0040953f` | `FUN_0040953f` | `undefined FUN_0040953f(void)` | `pending` |
| `00409557` | `FUN_00409557` | `undefined FUN_00409557(void)` | `pending` |
| `00409569` | `FUN_00409569` | `undefined FUN_00409569(void)` | `pending` |
| `00409580` | `FUN_00409580` | `undefined4 FUN_00409580(undefined4 param_1, undefined4 param_2)` | `pending` |
| `00409682` | `FUN_00409682` | `undefined FUN_00409682(void)` | `pending` |
| `00409694` | `FUN_00409694` | `undefined FUN_00409694(void)` | `pending` |
| `004096a0` | `FUN_004096a0` | `bool FUN_004096a0(int param_1)` | `pending` |
| `004096c0` | `FUN_004096c0` | `bool FUN_004096c0(int param_1)` | `pending` |
| `004096e0` | `FUN_004096e0` | `undefined4 FUN_004096e0(void)` | `pending` |
| `004096f0` | `FUN_004096f0` | `undefined FUN_004096f0(void * this, undefined4 param_1)` | `pending` |
| `00409770` | `FUN_00409770` | `undefined4 FUN_00409770(void)` | `pending` |
| `0040998a` | `FUN_0040998a` | `undefined FUN_0040998a(void)` | `pending` |
| `00409992` | `FUN_00409992` | `undefined FUN_00409992(void)` | `pending` |
| `004099a7` | `FUN_004099a7` | `undefined FUN_004099a7(void)` | `pending` |
| `004099b0` | `FUN_004099b0` | `undefined FUN_004099b0(int param_1)` | `pending` |
| `004099f0` | `FUN_004099f0` | `undefined4 FUN_004099f0(void * this, int param_1)` | `pending` |
| `00409a20` | `FUN_00409a20` | `undefined FUN_00409a20(int param_1)` | `pending` |
| `00409a90` | `FUN_00409a90` | `undefined4 FUN_00409a90(void * this, undefined4 param_1)` | `pending` |
| `00409de0` | `FUN_00409de0` | `undefined4 * FUN_00409de0(undefined4 * param_1)` | `pending` |
| `00409ef0` | `FUN_00409ef0` | `undefined4 * FUN_00409ef0(undefined4 * param_1)` | `pending` |
| `00409f90` | `FUN_00409f90` | `undefined4 * FUN_00409f90(void * this, byte param_1)` | `pending` |
| `00409fb0` | `FUN_00409fb0` | `undefined FUN_00409fb0(undefined4 * param_1)` | `pending` |
| `0040a02a` | `FUN_0040a02a` | `undefined FUN_0040a02a(void)` | `pending` |
| `0040a035` | `FUN_0040a035` | `undefined FUN_0040a035(void)` | `pending` |
| `0040a04a` | `FUN_0040a04a` | `undefined FUN_0040a04a(void)` | `pending` |
| `0040a060` | `FUN_0040a060` | `undefined FUN_0040a060(void * this, int param_1)` | `pending` |
| `0040a140` | `FUN_0040a140` | `undefined FUN_0040a140(void * this, void * param_1, int * param_2, int param_3)` | `pending` |
| `0040a230` | `FUN_0040a230` | `undefined4 * FUN_0040a230(undefined4 * param_1)` | `pending` |
| `0040a2d0` | `FUN_0040a2d0` | `undefined4 * FUN_0040a2d0(void * this, byte param_1)` | `pending` |
| `0040a2f0` | `FUN_0040a2f0` | `undefined FUN_0040a2f0(undefined4 * param_1)` | `pending` |
| `0040a345` | `FUN_0040a345` | `undefined FUN_0040a345(void)` | `pending` |
| `0040a35a` | `FUN_0040a35a` | `undefined FUN_0040a35a(void)` | `pending` |
| `0040a370` | `FUN_0040a370` | `undefined4 FUN_0040a370(int param_1)` | `pending` |
| `0040a560` | `FUN_0040a560` | `undefined FUN_0040a560(void * this, int param_1)` | `pending` |
| `0040a590` | `FUN_0040a590` | `undefined4 FUN_0040a590(int param_1)` | `pending` |
| `0040a619` | `FUN_0040a619` | `undefined FUN_0040a619(void)` | `pending` |
| `0040a630` | `FUN_0040a630` | `undefined FUN_0040a630(void * param_1)` | `pending` |
| `0040a6a0` | `FUN_0040a6a0` | `undefined4 FUN_0040a6a0(int param_1)` | `pending` |
| `0040a7b0` | `FUN_0040a7b0` | `bool FUN_0040a7b0(int param_1)` | `pending` |
| `0040a800` | `FUN_0040a800` | `undefined4 FUN_0040a800(int param_1)` | `pending` |
| `0040a9c6` | `FUN_0040a9c6` | `undefined FUN_0040a9c6(void)` | `pending` |
| `0040a9f0` | `FUN_0040a9f0` | `undefined FUN_0040a9f0(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `0040ab42` | `FUN_0040ab42` | `undefined FUN_0040ab42(void)` | `pending` |
| `0040abc0` | `FUN_0040abc0` | `undefined4 * FUN_0040abc0(void * this, byte param_1)` | `pending` |
| `0040abe0` | `FUN_0040abe0` | `undefined4 * FUN_0040abe0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040ad30` | `FUN_0040ad30` | `undefined FUN_0040ad30(undefined4 * param_1)` | `pending` |
| `0040adb7` | `FUN_0040adb7` | `undefined FUN_0040adb7(void)` | `pending` |
| `0040adc5` | `FUN_0040adc5` | `undefined FUN_0040adc5(void)` | `pending` |
| `0040add3` | `FUN_0040add3` | `undefined FUN_0040add3(void)` | `pending` |
| `0040ade1` | `FUN_0040ade1` | `undefined FUN_0040ade1(void)` | `pending` |
| `0040adef` | `FUN_0040adef` | `undefined FUN_0040adef(void)` | `pending` |
| `0040adfd` | `FUN_0040adfd` | `undefined FUN_0040adfd(void)` | `pending` |
| `0040ae0b` | `FUN_0040ae0b` | `undefined FUN_0040ae0b(void)` | `pending` |
| `0040ae23` | `FUN_0040ae23` | `undefined FUN_0040ae23(void)` | `pending` |
| `0040ae30` | `FUN_0040ae30` | `undefined FUN_0040ae30(void * this, undefined4 param_1)` | `pending` |
| `0040ae80` | `FUN_0040ae80` | `uint FUN_0040ae80(void * param_1)` | `pending` |
| `0040aef0` | `FUN_0040aef0` | `undefined FUN_0040aef0(int * param_1)` | `pending` |
| `0040afb0` | `FUN_0040afb0` | `undefined4 FUN_0040afb0(int param_1)` | `pending` |
| `0040b0d0` | `FUN_0040b0d0` | `undefined4 FUN_0040b0d0(int param_1)` | `pending` |
| `0040b250` | `FUN_0040b250` | `undefined FUN_0040b250(void)` | `pending` |
| `0040b258` | `FUN_0040b258` | `undefined FUN_0040b258(void)` | `pending` |
| `0040b26a` | `FUN_0040b26a` | `undefined FUN_0040b26a(void)` | `pending` |
| `0040b280` | `FUN_0040b280` | `undefined4 FUN_0040b280(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `0040b2fa` | `FUN_0040b2fa` | `undefined FUN_0040b2fa(void)` | `pending` |
| `0040b310` | `FUN_0040b310` | `undefined4 FUN_0040b310(int param_1)` | `pending` |
| `0040b517` | `FUN_0040b517` | `undefined FUN_0040b517(void)` | `pending` |
| `0040b51f` | `FUN_0040b51f` | `undefined FUN_0040b51f(void)` | `pending` |
| `0040b527` | `FUN_0040b527` | `undefined FUN_0040b527(void)` | `pending` |
| `0040b542` | `FUN_0040b542` | `undefined FUN_0040b542(void)` | `pending` |
| `0040b554` | `FUN_0040b554` | `undefined FUN_0040b554(void)` | `pending` |
| `0040b55c` | `FUN_0040b55c` | `undefined4 FUN_0040b55c(void)` | `pending` |
| `0040b570` | `FUN_0040b570` | `undefined4 FUN_0040b570(int param_1)` | `pending` |
| `0040b5d0` | `FUN_0040b5d0` | `undefined4 FUN_0040b5d0(int param_1)` | `pending` |
| `0040b7a0` | `FUN_0040b7a0` | `undefined FUN_0040b7a0(void)` | `pending` |
| `0040b7b8` | `FUN_0040b7b8` | `undefined FUN_0040b7b8(void)` | `pending` |
| `0040b7ca` | `FUN_0040b7ca` | `undefined FUN_0040b7ca(void)` | `pending` |
| `0040b7e0` | `FUN_0040b7e0` | `undefined4 FUN_0040b7e0(int param_1)` | `pending` |
| `0040ba36` | `FUN_0040ba36` | `undefined FUN_0040ba36(void)` | `pending` |
| `0040ba51` | `FUN_0040ba51` | `undefined FUN_0040ba51(void)` | `pending` |
| `0040ba63` | `FUN_0040ba63` | `undefined FUN_0040ba63(void)` | `pending` |
| `0040bbb0` | `FUN_0040bbb0` | `undefined4 FUN_0040bbb0(void * this, byte * param_1)` | `pending` |
| `0040bd30` | `FUN_0040bd30` | `undefined FUN_0040bd30(void * this, int param_1)` | `pending` |
| `0040bdc4` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0040bdca` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `0040bdd0` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0040bddc` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0040bde2` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `0040bde8` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0040bdee` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `0040bdf4` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `0040be06` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `0040be0c` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `0040be12` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0040be18` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0040be1e` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `0040be24` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0040be2a` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0040be30` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0040be36` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0040be3c` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `0040be42` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0040be48` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `0040be4e` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `0040bf4a` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `0040bf50` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `0040bf56` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `0040bf5c` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0040bf62` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0040bf68` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040bf6e` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `0040bf74` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0040bf7a` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `0040bf80` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `0040bf86` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040bf8c` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `0040bf92` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `0040bf98` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `0040bf9e` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `0040bfbc` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `0040c070` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `0040c076` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0040c07c` | `Ordinal_718` | `undefined Ordinal_718()` | `pending` |
| `0040c082` | `Ordinal_707` | `undefined Ordinal_707()` | `pending` |
| `0040c088` | `Ordinal_542` | `undefined Ordinal_542()` | `pending` |
| `0040c094` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `0040c09a` | `Ordinal_582` | `undefined Ordinal_582()` | `pending` |
| `0040c0a0` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `0040c0a6` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `0040c0ac` | `Ordinal_487` | `undefined Ordinal_487()` | `pending` |
| `0040c0b2` | `Ordinal_502` | `undefined Ordinal_502()` | `pending` |
| `0040c0b8` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `0040c0be` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `0040c0c4` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `0040c0ca` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `0040c0d0` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `0040c0d6` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `0040c0dc` | `Ordinal_1440` | `undefined Ordinal_1440()` | `pending` |
| `0040c0e2` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0040c0e8` | `Ordinal_481` | `undefined Ordinal_481()` | `pending` |
| `0040c0ee` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0040c0f4` | `Ordinal_1717` | `undefined Ordinal_1717()` | `pending` |
| `0040c0fa` | `Ordinal_5193` | `undefined Ordinal_5193()` | `pending` |
| `0040c100` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `0040c106` | `Ordinal_5194` | `undefined Ordinal_5194()` | `pending` |
| `0040c10c` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0040c112` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0040c118` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `0040c11e` | `Ordinal_3326` | `undefined Ordinal_3326()` | `pending` |
| `0040c124` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `0040c12a` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `0040c136` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `0040c13c` | `Ordinal_2473` | `undefined Ordinal_2473()` | `pending` |
| `0040c142` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0040c148` | `Ordinal_5658` | `undefined Ordinal_5658()` | `pending` |
| `0040c1b4` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `0040c1c6` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040c1cc` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `0040c1d2` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0040c1d8` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040c1de` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `0040c1e4` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `0040c1ea` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0040c1f0` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `0040c1f6` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0040c1fc` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `0040c202` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `0040c208` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0040c20e` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `0040c214` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `0040c21a` | `Ordinal_1067` | `undefined Ordinal_1067()` | `pending` |
| `0040c220` | `Ordinal_2301` | `undefined Ordinal_2301()` | `pending` |
| `0040c226` | `Ordinal_286` | `undefined Ordinal_286()` | `pending` |
| `0040c22c` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `0040c232` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `0040c238` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0040c23e` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `0040c244` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0040c250` | `Ordinal_1817` | `undefined Ordinal_1817()` | `pending` |
| `0040c256` | `Ordinal_2707` | `undefined Ordinal_2707()` | `pending` |
| `0040c25c` | `Ordinal_836` | `undefined Ordinal_836()` | `pending` |
| `0040c262` | `Ordinal_5570` | `undefined Ordinal_5570()` | `pending` |
| `0040c268` | `Ordinal_5188` | `undefined Ordinal_5188()` | `pending` |
| `0040c26e` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `0040c27a` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `0040c280` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0040c286` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `0040c28c` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0040c292` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `0040c298` | `Ordinal_5441` | `undefined Ordinal_5441()` | `pending` |
| `0040c29e` | `Ordinal_5442` | `undefined Ordinal_5442()` | `pending` |
| `0040c2aa` | `Ordinal_3024` | `undefined Ordinal_3024()` | `pending` |
| `0040c2b0` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `0040c2c0` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040c330` | `FUN_0040c330` | `undefined FUN_0040c330(void)` | `pending` |
| `0040c350` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040c3d0` | `FUN_0040c3d0` | `undefined4 FUN_0040c3d0(undefined4 * param_1)` | `pending` |
| `0040c3f0` | ``eh_vector_constructor_iterator'` | `void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)` | `pending` |
| `0040c460` | `FUN_0040c460` | `undefined FUN_0040c460(void)` | `pending` |
| `0040c480` | `FUN_0040c480` | `undefined FUN_0040c480(_onexit_t param_1)` | `pending` |
| `0040c520` | `FUN_0040c520` | `int FUN_0040c520(_onexit_t param_1)` | `pending` |
| `0040c540` | `entry` | `undefined entry(void)` | `pending` |
| `0040c6e8` | `terminate` | `void terminate(void)` | `pending` |
| `0040c6ee` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040c6f4` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `0040c6fa` | `initterm` | `undefined initterm()` | `pending` |
| `0040c700` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `0040c730` | `FUN_0040c730` | `undefined FUN_0040c730(void)` | `pending` |
| `0040c732` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `0040c738` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040c751` | `FUN_0040c751` | `undefined4 FUN_0040c751(int param_1, undefined4 param_2)` | `pending` |
| `0040c7a0` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Hatchery.exe

Remaining: **221** of **225** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `00401120` | `FUN_00401120` | `undefined FUN_00401120(void)` | `pending` |
| `00401140` | `FUN_00401140` | `undefined FUN_00401140(void)` | `pending` |
| `00401170` | `FUN_00401170` | `undefined4 * FUN_00401170(undefined4 * param_1)` | `pending` |
| `004011e0` | `FUN_004011e0` | `undefined4 * FUN_004011e0(void * this, byte param_1)` | `pending` |
| `00401200` | `FUN_00401200` | `undefined FUN_00401200(undefined4 * param_1)` | `pending` |
| `00401253` | `FUN_00401253` | `undefined FUN_00401253(void)` | `pending` |
| `00401260` | `FUN_00401260` | `undefined FUN_00401260(void)` | `pending` |
| `00401980` | `FUN_00401980` | `undefined4 * FUN_00401980(void * this, byte param_1)` | `pending` |
| `004019a0` | `FUN_004019a0` | `undefined FUN_004019a0(undefined4 * param_1)` | `pending` |
| `00401a3d` | `FUN_00401a3d` | `undefined FUN_00401a3d(void)` | `pending` |
| `00401a4b` | `FUN_00401a4b` | `undefined FUN_00401a4b(void)` | `pending` |
| `00401a63` | `FUN_00401a63` | `undefined FUN_00401a63(void)` | `pending` |
| `00401a7b` | `FUN_00401a7b` | `undefined FUN_00401a7b(void)` | `pending` |
| `00401a93` | `FUN_00401a93` | `undefined FUN_00401a93(void)` | `pending` |
| `00401aab` | `FUN_00401aab` | `undefined FUN_00401aab(void)` | `pending` |
| `00401ab9` | `FUN_00401ab9` | `undefined FUN_00401ab9(void)` | `pending` |
| `00401ac7` | `FUN_00401ac7` | `undefined FUN_00401ac7(void)` | `pending` |
| `00401adc` | `FUN_00401adc` | `undefined FUN_00401adc(void)` | `pending` |
| `00401b80` | `FUN_00401b80` | `undefined FUN_00401b80(int param_1)` | `pending` |
| `00401f52` | `FUN_00401f52` | `undefined FUN_00401f52(void)` | `pending` |
| `00401f60` | `FUN_00401f60` | `undefined FUN_00401f60(void * this, undefined4 param_1)` | `pending` |
| `00402175` | `FUN_00402175` | `undefined FUN_00402175(void)` | `pending` |
| `00402180` | `FUN_00402180` | `undefined FUN_00402180(void * this, undefined4 param_1, int param_2, int param_3)` | `pending` |
| `00402710` | `FUN_00402710` | `undefined FUN_00402710(undefined4 param_1)` | `pending` |
| `004027d0` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `004027e0` | `FUN_004027e0` | `undefined4 FUN_004027e0(void)` | `pending` |
| `00402a54` | `FUN_00402a54` | `undefined FUN_00402a54(void)` | `pending` |
| `00402a9a` | `FUN_00402a9a` | `undefined FUN_00402a9a(void)` | `pending` |
| `00402abc` | `FUN_00402abc` | `undefined FUN_00402abc(void)` | `pending` |
| `00402ad0` | `FUN_00402ad0` | `undefined4 FUN_00402ad0(int param_1)` | `pending` |
| `00402fe0` | `FUN_00402fe0` | `undefined4 FUN_00402fe0(int param_1)` | `pending` |
| `004030e3` | `FUN_004030e3` | `undefined FUN_004030e3(void)` | `pending` |
| `004031c0` | `FUN_004031c0` | `undefined FUN_004031c0(void)` | `pending` |
| `0040323c` | `FUN_0040323c` | `undefined FUN_0040323c(void)` | `pending` |
| `00403760` | `FUN_00403760` | `UINT FUN_00403760(void * this, int param_1)` | `pending` |
| `004037f0` | `FUN_004037f0` | `undefined FUN_004037f0(void * this, void * param_1)` | `pending` |
| `00403850` | `FUN_00403850` | `undefined FUN_00403850(undefined4 * param_1)` | `pending` |
| `004038db` | `FUN_004038db` | `undefined FUN_004038db(void)` | `pending` |
| `004038f0` | `FUN_004038f0` | `undefined FUN_004038f0(undefined4 * param_1)` | `pending` |
| `00403943` | `FUN_00403943` | `undefined FUN_00403943(void)` | `pending` |
| `004039af` | `FUN_004039af` | `undefined FUN_004039af(void)` | `pending` |
| `00403ab0` | `FUN_00403ab0` | `undefined4 * FUN_00403ab0(void * this, byte param_1)` | `pending` |
| `00403ad0` | `FUN_00403ad0` | `undefined FUN_00403ad0(undefined4 * param_1)` | `pending` |
| `00403b6b` | `FUN_00403b6b` | `undefined FUN_00403b6b(void)` | `pending` |
| `00403ce0` | `FUN_00403ce0` | `undefined FUN_00403ce0(void * this, int param_1, undefined4 param_2, int param_3)` | `pending` |
| `00403e20` | `FUN_00403e20` | `undefined4 FUN_00403e20(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403e50` | `FUN_00403e50` | `undefined4 FUN_00403e50(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403e80` | `FUN_00403e80` | `undefined4 FUN_00403e80(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403ef0` | `FUN_00403ef0` | `undefined4 * FUN_00403ef0(undefined4 * param_1)` | `pending` |
| `00403f60` | `FUN_00403f60` | `undefined4 * FUN_00403f60(void * this, byte param_1)` | `pending` |
| `00403f80` | `FUN_00403f80` | `undefined FUN_00403f80(undefined4 * param_1)` | `pending` |
| `0040401e` | `FUN_0040401e` | `undefined FUN_0040401e(void)` | `pending` |
| `00404030` | `FUN_00404030` | `undefined4 FUN_00404030(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00404320` | `FUN_00404320` | `bool FUN_00404320(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404350` | `FUN_00404350` | `undefined FUN_00404350(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `004043c0` | `FUN_004043c0` | `undefined FUN_004043c0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00404410` | `FUN_00404410` | `bool FUN_00404410(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00404460` | `FUN_00404460` | `bool FUN_00404460(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `004044a0` | `FUN_004044a0` | `undefined4 * FUN_004044a0(undefined4 * param_1)` | `pending` |
| `00404510` | `FUN_00404510` | `undefined4 * FUN_00404510(void * this, byte param_1)` | `pending` |
| `00404530` | `FUN_00404530` | `undefined FUN_00404530(undefined4 * param_1)` | `pending` |
| `0040458e` | `FUN_0040458e` | `undefined FUN_0040458e(void)` | `pending` |
| `004045c0` | `FUN_004045c0` | `undefined4 * FUN_004045c0(undefined4 * param_1)` | `pending` |
| `00404790` | `FUN_00404790` | `undefined4 * FUN_00404790(void * this, byte param_1)` | `pending` |
| `004047b0` | `FUN_004047b0` | `undefined FUN_004047b0(undefined4 * param_1)` | `pending` |
| `00404828` | `FUN_00404828` | `undefined FUN_00404828(void)` | `pending` |
| `00404836` | `FUN_00404836` | `undefined FUN_00404836(void)` | `pending` |
| `0040484e` | `FUN_0040484e` | `undefined FUN_0040484e(void)` | `pending` |
| `00404880` | `FUN_00404880` | `undefined4 * FUN_00404880(void * this, undefined4 param_1)` | `pending` |
| `00404d24` | `FUN_00404d24` | `undefined FUN_00404d24(void)` | `pending` |
| `00404d30` | `FUN_00404d30` | `int FUN_00404d30(void * this, int param_1)` | `pending` |
| `00404e40` | `FUN_00404e40` | `undefined FUN_00404e40(void * param_1)` | `pending` |
| `00404e70` | `FUN_00404e70` | `undefined FUN_00404e70(int param_1)` | `pending` |
| `00404ec0` | `FUN_00404ec0` | `undefined FUN_00404ec0(void * param_1)` | `pending` |
| `00404fc0` | `FUN_00404fc0` | `undefined FUN_00404fc0(void * this, int param_1)` | `pending` |
| `00405020` | `FUN_00405020` | `undefined FUN_00405020(void * this, int * param_1)` | `pending` |
| `004050a0` | `FUN_004050a0` | `undefined FUN_004050a0(void * this, int param_1)` | `pending` |
| `004050d0` | `FUN_004050d0` | `undefined4 FUN_004050d0(void * param_1)` | `pending` |
| `00405140` | `FUN_00405140` | `undefined4 FUN_00405140(void * this, int param_1)` | `pending` |
| `00405190` | `FUN_00405190` | `undefined4 FUN_00405190(void * this, int param_1)` | `pending` |
| `00405290` | `FUN_00405290` | `undefined4 FUN_00405290(void)` | `pending` |
| `0040531e` | `FUN_0040531e` | `undefined FUN_0040531e(void)` | `pending` |
| `00405330` | `FUN_00405330` | `undefined4 * FUN_00405330(void * this, int param_1)` | `pending` |
| `004053e0` | `FUN_004053e0` | `byte FUN_004053e0(void * this, int param_1)` | `pending` |
| `00405410` | `FUN_00405410` | `uint FUN_00405410(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00405589` | `FUN_00405589` | `undefined FUN_00405589(void)` | `pending` |
| `004055a0` | `FUN_004055a0` | `undefined4 FUN_004055a0(void * this, int param_1, int * param_2)` | `pending` |
| `00405620` | `FUN_00405620` | `undefined4 FUN_00405620(void * this, int param_1, int param_2)` | `pending` |
| `00405810` | `FUN_00405810` | `undefined4 * FUN_00405810(void * this, byte param_1)` | `pending` |
| `00405830` | `FUN_00405830` | `undefined FUN_00405830(undefined4 * param_1)` | `pending` |
| `0040587a` | `FUN_0040587a` | `undefined FUN_0040587a(void)` | `pending` |
| `00405892` | `FUN_00405892` | `undefined FUN_00405892(void)` | `pending` |
| `004059c0` | `FUN_004059c0` | `undefined FUN_004059c0(int param_1)` | `pending` |
| `00405a40` | `FUN_00405a40` | `LRESULT FUN_00405a40(int param_1)` | `pending` |
| `00405b10` | `FUN_00405b10` | `undefined4 * FUN_00405b10(undefined4 * param_1)` | `pending` |
| `00405bec` | `FUN_00405bec` | `undefined FUN_00405bec(void)` | `pending` |
| `00405c04` | `FUN_00405c04` | `undefined FUN_00405c04(void)` | `pending` |
| `00405c10` | `FUN_00405c10` | `undefined FUN_00405c10(void)` | `pending` |
| `00405c51` | `FUN_00405c51` | `undefined FUN_00405c51(void)` | `pending` |
| `00405c70` | `FUN_00405c70` | `undefined FUN_00405c70(void)` | `pending` |
| `00405c80` | `FUN_00405c80` | `undefined FUN_00405c80(void)` | `pending` |
| `00405cce` | `FUN_00405cce` | `undefined FUN_00405cce(void)` | `pending` |
| `00405ce2` | `FUN_00405ce2` | `undefined FUN_00405ce2(void)` | `pending` |
| `00405eb5` | `FUN_00405eb5` | `undefined FUN_00405eb5(void)` | `pending` |
| `00405ee0` | `FUN_00405ee0` | `bool FUN_00405ee0(void)` | `pending` |
| `00405fb6` | `FUN_00405fb6` | `undefined FUN_00405fb6(void)` | `pending` |
| `00406089` | `FUN_00406089` | `undefined FUN_00406089(void)` | `pending` |
| `004062d0` | `FUN_004062d0` | `undefined4 * FUN_004062d0(void * this, byte param_1)` | `pending` |
| `004062f0` | `FUN_004062f0` | `undefined FUN_004062f0(undefined4 * param_1)` | `pending` |
| `00406361` | `FUN_00406361` | `undefined FUN_00406361(void)` | `pending` |
| `004065c0` | `FUN_004065c0` | `undefined FUN_004065c0(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6)` | `pending` |
| `00406720` | `FUN_00406720` | `undefined FUN_00406720(void * this, int param_1, int param_2)` | `pending` |
| `00406750` | `FUN_00406750` | `undefined FUN_00406750(void * this, int * param_1)` | `pending` |
| `00406780` | `FUN_00406780` | `undefined FUN_00406780(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6)` | `pending` |
| `00406930` | `FUN_00406930` | `undefined FUN_00406930(int param_1, int param_2, int param_3, int param_4)` | `pending` |
| `004069a0` | `FUN_004069a0` | `undefined FUN_004069a0(int param_1, int param_2, int param_3, int param_4)` | `pending` |
| `004069d0` | `FUN_004069d0` | `undefined FUN_004069d0(void)` | `pending` |
| `004069e0` | `FUN_004069e0` | `undefined FUN_004069e0(void)` | `pending` |
| `00406a20` | `FUN_00406a20` | `undefined FUN_00406a20(void)` | `pending` |
| `00406a30` | `FUN_00406a30` | `undefined FUN_00406a30(void)` | `pending` |
| `00406a90` | `FUN_00406a90` | `undefined FUN_00406a90(int param_1)` | `pending` |
| `00406c60` | `FUN_00406c60` | `undefined4 * FUN_00406c60(void * this, byte param_1)` | `pending` |
| `00406c80` | `FUN_00406c80` | `undefined FUN_00406c80(void)` | `pending` |
| `00406cc1` | `FUN_00406cc1` | `undefined FUN_00406cc1(void)` | `pending` |
| `00406cd0` | `FUN_00406cd0` | `undefined FUN_00406cd0(undefined4 * param_1)` | `pending` |
| `00406d22` | `FUN_00406d22` | `undefined FUN_00406d22(void)` | `pending` |
| `00406d37` | `FUN_00406d37` | `undefined FUN_00406d37(void)` | `pending` |
| `00406e50` | `FUN_00406e50` | `undefined4 FUN_00406e50(int param_1)` | `pending` |
| `00406ee0` | `FUN_00406ee0` | `undefined4 FUN_00406ee0(void * this, char * param_1)` | `pending` |
| `00406fc0` | `FUN_00406fc0` | `undefined FUN_00406fc0(undefined4 * param_1)` | `pending` |
| `00407007` | `FUN_00407007` | `undefined FUN_00407007(void)` | `pending` |
| `0040706f` | `FUN_0040706f` | `undefined FUN_0040706f(void)` | `pending` |
| `004070ff` | `FUN_004070ff` | `undefined FUN_004070ff(void)` | `pending` |
| `00407160` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00407166` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0040716c` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `00407172` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `00407178` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0040717e` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `004071cc` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `004071d2` | `Ordinal_1067` | `undefined Ordinal_1067()` | `pending` |
| `004071d8` | `Ordinal_2301` | `undefined Ordinal_2301()` | `pending` |
| `004071de` | `Ordinal_286` | `undefined Ordinal_286()` | `pending` |
| `004071e4` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `004071ea` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `004071f0` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `004071f6` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040730a` | `Ordinal_719` | `undefined Ordinal_719()` | `pending` |
| `00407316` | `Ordinal_4676` | `undefined Ordinal_4676()` | `pending` |
| `0040731c` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `00407322` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `00407328` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `00407340` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `00407346` | `Ordinal_2510` | `undefined Ordinal_2510()` | `pending` |
| `0040734c` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `00407352` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `00407358` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0040735e` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `00407364` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0040736a` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `00407370` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `00407376` | `Ordinal_3307` | `undefined Ordinal_3307()` | `pending` |
| `00407382` | `Ordinal_267` | `undefined Ordinal_267()` | `pending` |
| `00407388` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `0040738e` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `00407394` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `0040739a` | `Ordinal_5658` | `undefined Ordinal_5658()` | `pending` |
| `004073a0` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `004073a6` | `Ordinal_339` | `undefined Ordinal_339()` | `pending` |
| `004073ac` | `Ordinal_2199` | `undefined Ordinal_2199()` | `pending` |
| `004073b2` | `Ordinal_315` | `undefined Ordinal_315()` | `pending` |
| `004073be` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `004073c4` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `004073ca` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `004073d0` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `004073d6` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `004073dc` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `004073e2` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `00407478` | `Ordinal_600` | `undefined Ordinal_600()` | `pending` |
| `00407484` | `Ordinal_4668` | `undefined Ordinal_4668()` | `pending` |
| `00407496` | `Ordinal_3976` | `undefined Ordinal_3976()` | `pending` |
| `0040749c` | `Ordinal_5142` | `undefined Ordinal_5142()` | `pending` |
| `004074a2` | `Ordinal_2533` | `undefined Ordinal_2533()` | `pending` |
| `00407526` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040752c` | `Ordinal_411` | `undefined Ordinal_411()` | `pending` |
| `00407532` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `00407538` | `Ordinal_549` | `undefined Ordinal_549()` | `pending` |
| `0040753e` | `Ordinal_4714` | `undefined Ordinal_4714()` | `pending` |
| `00407544` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040754a` | `Ordinal_5628` | `undefined Ordinal_5628()` | `pending` |
| `00407550` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `00407556` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0040755c` | `Ordinal_4635` | `undefined Ordinal_4635()` | `pending` |
| `00407562` | `Ordinal_292` | `undefined Ordinal_292()` | `pending` |
| `00407568` | `Ordinal_1764` | `undefined Ordinal_1764()` | `pending` |
| `0040756e` | `Ordinal_873` | `undefined Ordinal_873()` | `pending` |
| `00407574` | `Ordinal_469` | `undefined Ordinal_469()` | `pending` |
| `0040757a` | `Ordinal_3655` | `undefined Ordinal_3655()` | `pending` |
| `00407580` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `004075ce` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `004075e6` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `00407676` | `Ordinal_578` | `undefined Ordinal_578()` | `pending` |
| `00407688` | `Ordinal_4282` | `undefined Ordinal_4282()` | `pending` |
| `004076b8` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `004076be` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `004076d0` | `FUN_004076d0` | `undefined FUN_004076d0(_onexit_t param_1)` | `pending` |
| `00407770` | `FUN_00407770` | `int FUN_00407770(_onexit_t param_1)` | `pending` |
| `00407790` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `00407800` | `FUN_00407800` | `undefined FUN_00407800(void)` | `pending` |
| `00407820` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `00407950` | `FUN_00407950` | `type_info * FUN_00407950(void * this, byte param_1)` | `pending` |
| `00407970` | `entry` | `undefined entry(void)` | `pending` |
| `00407b12` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `00407b24` | `~type_info` | `void ~type_info(type_info * this)` | `pending` |
| `00407b30` | `initterm` | `undefined initterm()` | `pending` |
| `00407b40` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `00407b70` | `FUN_00407b70` | `undefined FUN_00407b70(void)` | `pending` |
| `00407b72` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `00407b80` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00407b99` | `FUN_00407b99` | `undefined4 FUN_00407b99(int param_1, undefined4 param_2)` | `pending` |
| `00407be8` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Health_Kit.exe

Remaining: **510** of **510** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010d0` | `FUN_004010d0` | `undefined4 * FUN_004010d0(undefined4 * param_1)` | `pending` |
| `004012d0` | `FUN_004012d0` | `undefined4 * FUN_004012d0(void * this, byte param_1)` | `pending` |
| `004012f0` | `FUN_004012f0` | `undefined FUN_004012f0(undefined4 * param_1)` | `pending` |
| `0040135c` | `FUN_0040135c` | `undefined FUN_0040135c(void)` | `pending` |
| `0040136a` | `FUN_0040136a` | `undefined FUN_0040136a(void)` | `pending` |
| `00401378` | `FUN_00401378` | `undefined FUN_00401378(void)` | `pending` |
| `00401390` | `FUN_00401390` | `undefined FUN_00401390(void)` | `pending` |
| `004013a8` | `FUN_004013a8` | `undefined FUN_004013a8(void)` | `pending` |
| `004013d0` | `FUN_004013d0` | `undefined4 FUN_004013d0(int param_1)` | `pending` |
| `00401590` | `FUN_00401590` | `undefined FUN_00401590(int param_1)` | `pending` |
| `00401670` | `FUN_00401670` | `undefined4 FUN_00401670(int param_1)` | `pending` |
| `004016b0` | `FUN_004016b0` | `undefined4 FUN_004016b0(int param_1)` | `pending` |
| `004017b0` | `FUN_004017b0` | `undefined4 FUN_004017b0(int param_1)` | `pending` |
| `0040197f` | `FUN_0040197f` | `undefined FUN_0040197f(void)` | `pending` |
| `00401997` | `FUN_00401997` | `undefined FUN_00401997(void)` | `pending` |
| `004019a9` | `FUN_004019a9` | `undefined FUN_004019a9(void)` | `pending` |
| `004019c0` | `FUN_004019c0` | `undefined4 FUN_004019c0(int param_1)` | `pending` |
| `00401a20` | `FUN_00401a20` | `undefined4 FUN_00401a20(int param_1)` | `pending` |
| `00401a60` | `FUN_00401a60` | `undefined FUN_00401a60(int param_1)` | `pending` |
| `00401a80` | `FUN_00401a80` | `undefined4 FUN_00401a80(int param_1)` | `pending` |
| `00401a90` | `FUN_00401a90` | `undefined4 FUN_00401a90(int param_1)` | `pending` |
| `00401ab0` | `FUN_00401ab0` | `undefined FUN_00401ab0(int param_1)` | `pending` |
| `00401bb0` | `FUN_00401bb0` | `undefined4 FUN_00401bb0(int param_1)` | `pending` |
| `00401c30` | `FUN_00401c30` | `undefined FUN_00401c30(int param_1)` | `pending` |
| `00401c60` | `FUN_00401c60` | `undefined4 FUN_00401c60(int param_1)` | `pending` |
| `00401e10` | `FUN_00401e10` | `undefined FUN_00401e10(undefined4 * param_1)` | `pending` |
| `00401e57` | `FUN_00401e57` | `undefined FUN_00401e57(void)` | `pending` |
| `00401e60` | `FUN_00401e60` | `undefined FUN_00401e60(undefined4 * param_1)` | `pending` |
| `00401eef` | `FUN_00401eef` | `undefined FUN_00401eef(void)` | `pending` |
| `00401f62` | `FUN_00401f62` | `undefined FUN_00401f62(void)` | `pending` |
| `00401f77` | `FUN_00401f77` | `undefined FUN_00401f77(void)` | `pending` |
| `00401f80` | `FUN_00401f80` | `undefined FUN_00401f80(undefined4 * param_1)` | `pending` |
| `00401fca` | `FUN_00401fca` | `undefined FUN_00401fca(void)` | `pending` |
| `00401fdf` | `FUN_00401fdf` | `undefined FUN_00401fdf(void)` | `pending` |
| `00401ff0` | `FUN_00401ff0` | `undefined4 FUN_00401ff0(undefined4 param_1)` | `pending` |
| `00402000` | `FUN_00402000` | `undefined4 FUN_00402000(undefined4 param_1)` | `pending` |
| `00402040` | `FUN_00402040` | `undefined4 FUN_00402040(void * this, byte param_1)` | `pending` |
| `00402110` | `FUN_00402110` | `undefined4 * FUN_00402110(undefined4 * param_1)` | `pending` |
| `00402180` | `FUN_00402180` | `undefined4 * FUN_00402180(void * this, byte param_1)` | `pending` |
| `004021a0` | `FUN_004021a0` | `undefined FUN_004021a0(undefined4 * param_1)` | `pending` |
| `0040222b` | `FUN_0040222b` | `undefined FUN_0040222b(void)` | `pending` |
| `00402240` | `FUN_00402240` | `undefined FUN_00402240(void * this, int param_1)` | `pending` |
| `004022f0` | `FUN_004022f0` | `undefined4 FUN_004022f0(int param_1)` | `pending` |
| `00402330` | `FUN_00402330` | `undefined4 FUN_00402330(void * this, undefined4 param_1)` | `pending` |
| `00402505` | `FUN_00402505` | `undefined FUN_00402505(void)` | `pending` |
| `00402517` | `FUN_00402517` | `undefined FUN_00402517(void)` | `pending` |
| `00402520` | `FUN_00402520` | `bool FUN_00402520(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00402620` | `FUN_00402620` | `int FUN_00402620(void * this, int param_1, int param_2)` | `pending` |
| `00402660` | `FUN_00402660` | `undefined FUN_00402660(void * this, undefined4 * param_1)` | `pending` |
| `00402690` | `FUN_00402690` | `undefined FUN_00402690(void * this, undefined1 param_1, int * param_2)` | `pending` |
| `004027e0` | `FUN_004027e0` | `undefined4 * FUN_004027e0(undefined4 * param_1)` | `pending` |
| `00402950` | `FUN_00402950` | `undefined4 * FUN_00402950(void * this, byte param_1)` | `pending` |
| `00402970` | `FUN_00402970` | `undefined FUN_00402970(undefined4 * param_1)` | `pending` |
| `004029f7` | `FUN_004029f7` | `undefined FUN_004029f7(void)` | `pending` |
| `00402a05` | `FUN_00402a05` | `undefined FUN_00402a05(void)` | `pending` |
| `00402a13` | `FUN_00402a13` | `undefined FUN_00402a13(void)` | `pending` |
| `00402a21` | `FUN_00402a21` | `undefined FUN_00402a21(void)` | `pending` |
| `00402a2f` | `FUN_00402a2f` | `undefined FUN_00402a2f(void)` | `pending` |
| `00402a3d` | `FUN_00402a3d` | `undefined FUN_00402a3d(void)` | `pending` |
| `00402a4b` | `FUN_00402a4b` | `undefined FUN_00402a4b(void)` | `pending` |
| `00402a63` | `FUN_00402a63` | `undefined FUN_00402a63(void)` | `pending` |
| `00402a90` | `FUN_00402a90` | `undefined4 FUN_00402a90(int param_1)` | `pending` |
| `00402e10` | `FUN_00402e10` | `undefined FUN_00402e10(int param_1)` | `pending` |
| `00402e50` | `FUN_00402e50` | `undefined FUN_00402e50(int param_1)` | `pending` |
| `00402e70` | `FUN_00402e70` | `undefined FUN_00402e70(int param_1)` | `pending` |
| `00402eb0` | `FUN_00402eb0` | `undefined FUN_00402eb0(int param_1)` | `pending` |
| `00402f70` | `FUN_00402f70` | `bool FUN_00402f70(int param_1)` | `pending` |
| `00402fb0` | `FUN_00402fb0` | `undefined4 FUN_00402fb0(int param_1)` | `pending` |
| `00403010` | `FUN_00403010` | `undefined4 FUN_00403010(int param_1)` | `pending` |
| `00403274` | `FUN_00403274` | `undefined FUN_00403274(void)` | `pending` |
| `0040328c` | `FUN_0040328c` | `undefined FUN_0040328c(void)` | `pending` |
| `00403294` | `FUN_00403294` | `undefined FUN_00403294(void)` | `pending` |
| `004032a6` | `FUN_004032a6` | `undefined FUN_004032a6(void)` | `pending` |
| `004032c0` | `FUN_004032c0` | `undefined4 FUN_004032c0(int param_1)` | `pending` |
| `00403320` | `FUN_00403320` | `undefined4 FUN_00403320(int param_1)` | `pending` |
| `00403380` | `FUN_00403380` | `undefined4 FUN_00403380(int param_1)` | `pending` |
| `00403420` | `FUN_00403420` | `undefined4 FUN_00403420(int param_1)` | `pending` |
| `00403430` | `FUN_00403430` | `undefined4 FUN_00403430(int param_1)` | `pending` |
| `00403480` | `FUN_00403480` | `undefined4 FUN_00403480(int param_1)` | `pending` |
| `004034a0` | `thunk_FUN_00403910` | `undefined4 thunk_FUN_00403910(void * param_1)` | `pending` |
| `004034b0` | `FUN_004034b0` | `undefined FUN_004034b0(int param_1)` | `pending` |
| `004035c0` | `FUN_004035c0` | `undefined FUN_004035c0(int param_1)` | `pending` |
| `004035e0` | `FUN_004035e0` | `undefined FUN_004035e0(int param_1)` | `pending` |
| `00403600` | `FUN_00403600` | `undefined4 FUN_00403600(int param_1)` | `pending` |
| `004038d0` | `FUN_004038d0` | `undefined FUN_004038d0(void)` | `pending` |
| `004038e8` | `FUN_004038e8` | `undefined FUN_004038e8(void)` | `pending` |
| `004038fa` | `FUN_004038fa` | `undefined FUN_004038fa(void)` | `pending` |
| `00403910` | `FUN_00403910` | `undefined4 FUN_00403910(void * param_1)` | `pending` |
| `00403b80` | `FUN_00403b80` | `undefined4 FUN_00403b80(int param_1)` | `pending` |
| `00403bb0` | `FUN_00403bb0` | `undefined4 FUN_00403bb0(void * param_1)` | `pending` |
| `00403c20` | `FUN_00403c20` | `undefined4 FUN_00403c20(void * this, int param_1)` | `pending` |
| `00403cd0` | `FUN_00403cd0` | `undefined4 FUN_00403cd0(void * this, int param_1)` | `pending` |
| `00403d80` | `FUN_00403d80` | `undefined FUN_00403d80(undefined1 * param_1, int param_2)` | `pending` |
| `00403db0` | `FUN_00403db0` | `undefined FUN_00403db0(undefined1 * param_1, int param_2)` | `pending` |
| `00403dd0` | `FUN_00403dd0` | `undefined FUN_00403dd0(undefined1 * param_1, int param_2)` | `pending` |
| `00403df0` | `FUN_00403df0` | `undefined FUN_00403df0(void * this, int param_1, void * param_2)` | `pending` |
| `00403fe0` | `FUN_00403fe0` | `undefined FUN_00403fe0(void * this, RECT * param_1)` | `pending` |
| `00404000` | `FUN_00404000` | `undefined4 FUN_00404000(int param_1)` | `pending` |
| `004040e0` | `FUN_004040e0` | `undefined4 FUN_004040e0(void * this, char * param_1)` | `pending` |
| `00404150` | `FUN_00404150` | `undefined FUN_00404150(void * this, int param_1)` | `pending` |
| `00404390` | `FUN_00404390` | `undefined4 * FUN_00404390(void * this, byte param_1)` | `pending` |
| `004043b0` | `FUN_004043b0` | `undefined4 * FUN_004043b0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `004044a0` | `FUN_004044a0` | `undefined FUN_004044a0(undefined4 * param_1)` | `pending` |
| `0040450c` | `FUN_0040450c` | `undefined FUN_0040450c(void)` | `pending` |
| `0040451a` | `FUN_0040451a` | `undefined FUN_0040451a(void)` | `pending` |
| `00404528` | `FUN_00404528` | `undefined FUN_00404528(void)` | `pending` |
| `00404536` | `FUN_00404536` | `undefined FUN_00404536(void)` | `pending` |
| `0040454e` | `FUN_0040454e` | `undefined FUN_0040454e(void)` | `pending` |
| `00404560` | `FUN_00404560` | `undefined FUN_00404560(void * this, undefined4 param_1)` | `pending` |
| `004045c0` | `FUN_004045c0` | `undefined4 FUN_004045c0(int param_1)` | `pending` |
| `00404600` | `FUN_00404600` | `undefined FUN_00404600(int param_1)` | `pending` |
| `0040484d` | `FUN_0040484d` | `undefined FUN_0040484d(void)` | `pending` |
| `00404855` | `FUN_00404855` | `undefined FUN_00404855(void)` | `pending` |
| `0040485d` | `FUN_0040485d` | `undefined FUN_0040485d(void)` | `pending` |
| `0040486f` | `FUN_0040486f` | `undefined FUN_0040486f(void)` | `pending` |
| `00404905` | `FUN_00404905` | `undefined FUN_00404905(void)` | `pending` |
| `00404917` | `FUN_00404917` | `undefined FUN_00404917(void)` | `pending` |
| `00404920` | `thunk_FUN_00407f90` | `undefined4 thunk_FUN_00407f90(int param_1)` | `pending` |
| `00404960` | `FUN_00404960` | `undefined FUN_00404960(int param_1)` | `pending` |
| `004049b0` | `FUN_004049b0` | `undefined FUN_004049b0(void * this, int param_1)` | `pending` |
| `00404a90` | `FUN_00404a90` | `undefined4 * FUN_00404a90(undefined4 * param_1)` | `pending` |
| `00404b00` | `FUN_00404b00` | `undefined4 * FUN_00404b00(void * this, byte param_1)` | `pending` |
| `00404b20` | `FUN_00404b20` | `undefined FUN_00404b20(undefined4 * param_1)` | `pending` |
| `00404bbe` | `FUN_00404bbe` | `undefined FUN_00404bbe(void)` | `pending` |
| `00404bd0` | `FUN_00404bd0` | `undefined4 FUN_00404bd0(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00404e60` | `FUN_00404e60` | `bool FUN_00404e60(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00404ec0` | `FUN_00404ec0` | `bool FUN_00404ec0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404ef0` | `FUN_00404ef0` | `bool FUN_00404ef0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404f20` | `FUN_00404f20` | `undefined FUN_00404f20(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `00404f90` | `FUN_00404f90` | `undefined FUN_00404f90(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00404fd0` | `FUN_00404fd0` | `undefined FUN_00404fd0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00405020` | `FUN_00405020` | `bool FUN_00405020(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00405070` | `FUN_00405070` | `bool FUN_00405070(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `004050b0` | `FUN_004050b0` | `bool FUN_004050b0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `004051c0` | `FUN_004051c0` | `undefined4 * FUN_004051c0(undefined4 * param_1)` | `pending` |
| `00405230` | `FUN_00405230` | `undefined4 * FUN_00405230(void * this, byte param_1)` | `pending` |
| `00405250` | `FUN_00405250` | `undefined FUN_00405250(undefined4 * param_1)` | `pending` |
| `00405297` | `FUN_00405297` | `undefined FUN_00405297(void)` | `pending` |
| `004053e0` | `FUN_004053e0` | `undefined FUN_004053e0(int param_1)` | `pending` |
| `00405440` | `thunk_FUN_00405450` | `undefined4 thunk_FUN_00405450(int param_1)` | `pending` |
| `00405450` | `FUN_00405450` | `undefined4 FUN_00405450(int param_1)` | `pending` |
| `00405585` | `FUN_00405585` | `undefined FUN_00405585(void)` | `pending` |
| `0040559d` | `FUN_0040559d` | `undefined FUN_0040559d(void)` | `pending` |
| `004055af` | `FUN_004055af` | `undefined FUN_004055af(void)` | `pending` |
| `004055c0` | `FUN_004055c0` | `undefined FUN_004055c0(int param_1)` | `pending` |
| `004055f0` | `FUN_004055f0` | `undefined FUN_004055f0(void * this, int param_1)` | `pending` |
| `004057f0` | `FUN_004057f0` | `undefined4 * FUN_004057f0(undefined4 * param_1)` | `pending` |
| `00405e10` | `FUN_00405e10` | `undefined4 * FUN_00405e10(void * this, byte param_1)` | `pending` |
| `00405e30` | `FUN_00405e30` | `undefined FUN_00405e30(undefined4 * param_1)` | `pending` |
| `00405f1a` | `FUN_00405f1a` | `undefined FUN_00405f1a(void)` | `pending` |
| `00405f28` | `FUN_00405f28` | `undefined FUN_00405f28(void)` | `pending` |
| `00405f36` | `FUN_00405f36` | `undefined FUN_00405f36(void)` | `pending` |
| `00405f44` | `FUN_00405f44` | `undefined FUN_00405f44(void)` | `pending` |
| `00405f52` | `FUN_00405f52` | `undefined FUN_00405f52(void)` | `pending` |
| `00405f60` | `FUN_00405f60` | `undefined FUN_00405f60(void)` | `pending` |
| `00405f6e` | `FUN_00405f6e` | `undefined FUN_00405f6e(void)` | `pending` |
| `00405f7c` | `FUN_00405f7c` | `undefined FUN_00405f7c(void)` | `pending` |
| `00405f8a` | `FUN_00405f8a` | `undefined FUN_00405f8a(void)` | `pending` |
| `00405f98` | `FUN_00405f98` | `undefined FUN_00405f98(void)` | `pending` |
| `00405fa6` | `FUN_00405fa6` | `undefined FUN_00405fa6(void)` | `pending` |
| `00405fb4` | `FUN_00405fb4` | `undefined FUN_00405fb4(void)` | `pending` |
| `00405fc2` | `FUN_00405fc2` | `undefined FUN_00405fc2(void)` | `pending` |
| `00405fd0` | `FUN_00405fd0` | `undefined FUN_00405fd0(void)` | `pending` |
| `00405fde` | `FUN_00405fde` | `undefined FUN_00405fde(void)` | `pending` |
| `00405fec` | `FUN_00405fec` | `undefined FUN_00405fec(void)` | `pending` |
| `00405ffa` | `FUN_00405ffa` | `undefined FUN_00405ffa(void)` | `pending` |
| `00406008` | `FUN_00406008` | `undefined FUN_00406008(void)` | `pending` |
| `00406020` | `FUN_00406020` | `undefined FUN_00406020(void)` | `pending` |
| `004060f0` | `FUN_004060f0` | `undefined4 FUN_004060f0(int param_1)` | `pending` |
| `00406170` | `FUN_00406170` | `undefined FUN_00406170(int param_1)` | `pending` |
| `00406470` | `FUN_00406470` | `undefined FUN_00406470(void)` | `pending` |
| `00406480` | `FUN_00406480` | `bool FUN_00406480(int param_1)` | `pending` |
| `004064a0` | `FUN_004064a0` | `bool FUN_004064a0(int param_1)` | `pending` |
| `004064c0` | `FUN_004064c0` | `undefined FUN_004064c0(int param_1)` | `pending` |
| `004064e0` | `FUN_004064e0` | `undefined4 FUN_004064e0(void * param_1)` | `pending` |
| `00406684` | `FUN_00406684` | `undefined FUN_00406684(void)` | `pending` |
| `00406696` | `FUN_00406696` | `undefined FUN_00406696(void)` | `pending` |
| `004066a0` | `FUN_004066a0` | `undefined4 FUN_004066a0(int param_1)` | `pending` |
| `00406821` | `FUN_00406821` | `undefined FUN_00406821(void)` | `pending` |
| `00406839` | `FUN_00406839` | `undefined FUN_00406839(void)` | `pending` |
| `0040684b` | `FUN_0040684b` | `undefined FUN_0040684b(void)` | `pending` |
| `00406860` | `FUN_00406860` | `undefined FUN_00406860(int param_1)` | `pending` |
| `00406880` | `FUN_00406880` | `undefined FUN_00406880(int param_1)` | `pending` |
| `00406950` | `FUN_00406950` | `undefined4 FUN_00406950(void * this, int param_1)` | `pending` |
| `00406990` | `FUN_00406990` | `undefined FUN_00406990(int param_1)` | `pending` |
| `00406d80` | `FUN_00406d80` | `undefined4 * FUN_00406d80(undefined4 * param_1)` | `pending` |
| `00406e4b` | `FUN_00406e4b` | `undefined FUN_00406e4b(void)` | `pending` |
| `00406e60` | `FUN_00406e60` | `undefined FUN_00406e60(undefined4 * param_1)` | `pending` |
| `00406eb3` | `FUN_00406eb3` | `undefined FUN_00406eb3(void)` | `pending` |
| `00406ec0` | `FUN_00406ec0` | `undefined4 * FUN_00406ec0(undefined4 * param_1)` | `pending` |
| `00406f9f` | `FUN_00406f9f` | `undefined FUN_00406f9f(void)` | `pending` |
| `00406fb0` | `FUN_00406fb0` | `undefined FUN_00406fb0(undefined4 * param_1)` | `pending` |
| `00406ff7` | `FUN_00406ff7` | `undefined FUN_00406ff7(void)` | `pending` |
| `00407000` | `FUN_00407000` | `undefined4 FUN_00407000(void * this, byte param_1)` | `pending` |
| `0040709e` | `FUN_0040709e` | `undefined FUN_0040709e(void)` | `pending` |
| `004070a9` | `FUN_004070a9` | `undefined FUN_004070a9(void)` | `pending` |
| `004070b4` | `FUN_004070b4` | `undefined FUN_004070b4(void)` | `pending` |
| `004070bf` | `FUN_004070bf` | `undefined FUN_004070bf(void)` | `pending` |
| `004070d4` | `FUN_004070d4` | `undefined FUN_004070d4(void)` | `pending` |
| `004070e0` | `FUN_004070e0` | `undefined FUN_004070e0(void)` | `pending` |
| `00407146` | `FUN_00407146` | `undefined FUN_00407146(void)` | `pending` |
| `00407151` | `FUN_00407151` | `undefined FUN_00407151(void)` | `pending` |
| `0040715c` | `FUN_0040715c` | `undefined FUN_0040715c(void)` | `pending` |
| `00407167` | `FUN_00407167` | `undefined FUN_00407167(void)` | `pending` |
| `0040717c` | `FUN_0040717c` | `undefined FUN_0040717c(void)` | `pending` |
| `00407190` | `FUN_00407190` | `undefined4 FUN_00407190(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `004071c0` | `FUN_004071c0` | `undefined4 FUN_004071c0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `004071f0` | `FUN_004071f0` | `undefined4 FUN_004071f0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00407220` | `FUN_00407220` | `undefined4 FUN_00407220(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00407250` | `FUN_00407250` | `undefined4 FUN_00407250(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `004073a0` | `FUN_004073a0` | `undefined FUN_004073a0(void)` | `pending` |
| `004073c0` | `FUN_004073c0` | `undefined FUN_004073c0(void)` | `pending` |
| `00407460` | `FUN_00407460` | `undefined4 * FUN_00407460(void * this, byte param_1)` | `pending` |
| `00407480` | `FUN_00407480` | `undefined FUN_00407480(undefined4 * param_1)` | `pending` |
| `004074d3` | `FUN_004074d3` | `undefined FUN_004074d3(void)` | `pending` |
| `004074e0` | `FUN_004074e0` | `undefined FUN_004074e0(void)` | `pending` |
| `00407600` | `FUN_00407600` | `undefined4 * FUN_00407600(void * this, byte param_1)` | `pending` |
| `00407620` | `FUN_00407620` | `undefined FUN_00407620(void)` | `pending` |
| `00407661` | `FUN_00407661` | `undefined FUN_00407661(void)` | `pending` |
| `00407670` | `FUN_00407670` | `undefined4 * FUN_00407670(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00407770` | `FUN_00407770` | `undefined FUN_00407770(undefined4 * param_1)` | `pending` |
| `004077dc` | `FUN_004077dc` | `undefined FUN_004077dc(void)` | `pending` |
| `004077ea` | `FUN_004077ea` | `undefined FUN_004077ea(void)` | `pending` |
| `004077f8` | `FUN_004077f8` | `undefined FUN_004077f8(void)` | `pending` |
| `00407806` | `FUN_00407806` | `undefined FUN_00407806(void)` | `pending` |
| `0040781e` | `FUN_0040781e` | `undefined FUN_0040781e(void)` | `pending` |
| `00407830` | `FUN_00407830` | `undefined FUN_00407830(void * this, undefined4 param_1)` | `pending` |
| `00407890` | `FUN_00407890` | `undefined4 FUN_00407890(void * this, undefined4 param_1)` | `pending` |
| `004078f0` | `FUN_004078f0` | `undefined4 FUN_004078f0(int param_1)` | `pending` |
| `00407940` | `FUN_00407940` | `undefined FUN_00407940(int * param_1)` | `pending` |
| `00407a40` | `FUN_00407a40` | `undefined FUN_00407a40(int * param_1)` | `pending` |
| `00407ac0` | `FUN_00407ac0` | `undefined4 FUN_00407ac0(int param_1)` | `pending` |
| `00407d10` | `FUN_00407d10` | `undefined4 FUN_00407d10(void * param_1)` | `pending` |
| `00407da0` | `FUN_00407da0` | `undefined FUN_00407da0(void * param_1)` | `pending` |
| `00407ec0` | `FUN_00407ec0` | `int FUN_00407ec0(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00407f40` | `FUN_00407f40` | `undefined4 FUN_00407f40(void * this, int param_1)` | `pending` |
| `00407f90` | `FUN_00407f90` | `undefined4 FUN_00407f90(int param_1)` | `pending` |
| `00407fa0` | `FUN_00407fa0` | `undefined FUN_00407fa0(void * this, int param_1)` | `pending` |
| `00407fc0` | `FUN_00407fc0` | `bool FUN_00407fc0(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00408040` | `FUN_00408040` | `undefined4 FUN_00408040(void * this, char * param_1)` | `pending` |
| `00408100` | `FUN_00408100` | `undefined4 FUN_00408100(void * this, undefined4 param_1, int param_2)` | `pending` |
| `004084bf` | `FUN_004084bf` | `undefined FUN_004084bf(void)` | `pending` |
| `00408520` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00408600` | `FUN_00408600` | `undefined4 * FUN_00408600(undefined4 * param_1)` | `pending` |
| `004086a0` | `FUN_004086a0` | `undefined4 * FUN_004086a0(void * this, byte param_1)` | `pending` |
| `004086c0` | `FUN_004086c0` | `undefined FUN_004086c0(undefined4 * param_1)` | `pending` |
| `00408715` | `FUN_00408715` | `undefined FUN_00408715(void)` | `pending` |
| `0040872a` | `FUN_0040872a` | `undefined FUN_0040872a(void)` | `pending` |
| `00408740` | `FUN_00408740` | `undefined4 FUN_00408740(int param_1)` | `pending` |
| `004088c0` | `FUN_004088c0` | `undefined FUN_004088c0(int param_1)` | `pending` |
| `00408930` | `FUN_00408930` | `undefined FUN_00408930(void * this, int param_1)` | `pending` |
| `00408960` | `FUN_00408960` | `undefined4 FUN_00408960(int param_1)` | `pending` |
| `004089e9` | `FUN_004089e9` | `undefined FUN_004089e9(void)` | `pending` |
| `00408a00` | `FUN_00408a00` | `undefined FUN_00408a00(void * param_1)` | `pending` |
| `00408a30` | `FUN_00408a30` | `undefined FUN_00408a30(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)` | `pending` |
| `00408a70` | `FUN_00408a70` | `undefined4 FUN_00408a70(int param_1)` | `pending` |
| `00408b80` | `FUN_00408b80` | `bool FUN_00408b80(int param_1)` | `pending` |
| `00408bd0` | `FUN_00408bd0` | `undefined4 FUN_00408bd0(int param_1)` | `pending` |
| `00408d96` | `FUN_00408d96` | `undefined FUN_00408d96(void)` | `pending` |
| `00408dc0` | `FUN_00408dc0` | `undefined FUN_00408dc0(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `00408f12` | `FUN_00408f12` | `undefined FUN_00408f12(void)` | `pending` |
| `00408f40` | `FUN_00408f40` | `undefined4 * FUN_00408f40(undefined4 * param_1)` | `pending` |
| `0040906c` | `FUN_0040906c` | `undefined FUN_0040906c(void)` | `pending` |
| `00409084` | `FUN_00409084` | `undefined FUN_00409084(void)` | `pending` |
| `004090b0` | `FUN_004090b0` | `undefined FUN_004090b0(void)` | `pending` |
| `004090c0` | `FUN_004090c0` | `undefined FUN_004090c0(void)` | `pending` |
| `0040910e` | `FUN_0040910e` | `undefined FUN_0040910e(void)` | `pending` |
| `00409122` | `FUN_00409122` | `undefined FUN_00409122(void)` | `pending` |
| `00409320` | `FUN_00409320` | `bool FUN_00409320(void)` | `pending` |
| `004093f6` | `FUN_004093f6` | `undefined FUN_004093f6(void)` | `pending` |
| `00409400` | `FUN_00409400` | `undefined FUN_00409400(void)` | `pending` |
| `0040952f` | `FUN_0040952f` | `undefined FUN_0040952f(void)` | `pending` |
| `00409540` | `FUN_00409540` | `undefined FUN_00409540(undefined4 * param_1)` | `pending` |
| `00409587` | `FUN_00409587` | `undefined FUN_00409587(void)` | `pending` |
| `00409640` | `FUN_00409640` | `undefined4 * FUN_00409640(undefined4 * param_1)` | `pending` |
| `004096d0` | `FUN_004096d0` | `undefined4 * FUN_004096d0(void * this, byte param_1)` | `pending` |
| `004096f0` | `FUN_004096f0` | `undefined FUN_004096f0(undefined4 * param_1)` | `pending` |
| `00409797` | `FUN_00409797` | `undefined FUN_00409797(void)` | `pending` |
| `004097ac` | `FUN_004097ac` | `undefined FUN_004097ac(void)` | `pending` |
| `004097c0` | `FUN_004097c0` | `undefined FUN_004097c0(void * this, int param_1, int param_2)` | `pending` |
| `004099a0` | `FUN_004099a0` | `undefined FUN_004099a0(void * this, void * param_1, int param_2, int * param_3, int * param_4, int param_5)` | `pending` |
| `00409af0` | `FUN_00409af0` | `undefined4 * FUN_00409af0(undefined4 * param_1)` | `pending` |
| `00409bf0` | `FUN_00409bf0` | `undefined4 * FUN_00409bf0(void * this, byte param_1)` | `pending` |
| `00409c10` | `FUN_00409c10` | `undefined FUN_00409c10(undefined4 * param_1)` | `pending` |
| `00409c7c` | `FUN_00409c7c` | `undefined FUN_00409c7c(void)` | `pending` |
| `00409c8a` | `FUN_00409c8a` | `undefined FUN_00409c8a(void)` | `pending` |
| `00409c98` | `FUN_00409c98` | `undefined FUN_00409c98(void)` | `pending` |
| `00409ca6` | `FUN_00409ca6` | `undefined FUN_00409ca6(void)` | `pending` |
| `00409cbe` | `FUN_00409cbe` | `undefined FUN_00409cbe(void)` | `pending` |
| `00409cf0` | `FUN_00409cf0` | `undefined4 FUN_00409cf0(int param_1)` | `pending` |
| `00409d40` | `FUN_00409d40` | `undefined FUN_00409d40(void)` | `pending` |
| `00409e10` | `FUN_00409e10` | `undefined4 FUN_00409e10(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00409f70` | `FUN_00409f70` | `undefined4 * FUN_00409f70(undefined4 * param_1)` | `pending` |
| `0040a010` | `FUN_0040a010` | `undefined4 * FUN_0040a010(void * this, byte param_1)` | `pending` |
| `0040a030` | `FUN_0040a030` | `undefined FUN_0040a030(undefined4 * param_1)` | `pending` |
| `0040a0aa` | `FUN_0040a0aa` | `undefined FUN_0040a0aa(void)` | `pending` |
| `0040a0b5` | `FUN_0040a0b5` | `undefined FUN_0040a0b5(void)` | `pending` |
| `0040a0ca` | `FUN_0040a0ca` | `undefined FUN_0040a0ca(void)` | `pending` |
| `0040a0e0` | `FUN_0040a0e0` | `undefined FUN_0040a0e0(void * this, int param_1)` | `pending` |
| `0040a1c0` | `FUN_0040a1c0` | `undefined FUN_0040a1c0(void * this, void * param_1, int * param_2, int param_3)` | `pending` |
| `0040a2b0` | `FUN_0040a2b0` | `undefined4 * FUN_0040a2b0(undefined4 * param_1)` | `pending` |
| `0040a620` | `FUN_0040a620` | `undefined4 * FUN_0040a620(void * this, byte param_1)` | `pending` |
| `0040a640` | `FUN_0040a640` | `undefined FUN_0040a640(undefined4 * param_1)` | `pending` |
| `0040a6fd` | `FUN_0040a6fd` | `undefined FUN_0040a6fd(void)` | `pending` |
| `0040a70b` | `FUN_0040a70b` | `undefined FUN_0040a70b(void)` | `pending` |
| `0040a719` | `FUN_0040a719` | `undefined FUN_0040a719(void)` | `pending` |
| `0040a727` | `FUN_0040a727` | `undefined FUN_0040a727(void)` | `pending` |
| `0040a735` | `FUN_0040a735` | `undefined FUN_0040a735(void)` | `pending` |
| `0040a743` | `FUN_0040a743` | `undefined FUN_0040a743(void)` | `pending` |
| `0040a751` | `FUN_0040a751` | `undefined FUN_0040a751(void)` | `pending` |
| `0040a75f` | `FUN_0040a75f` | `undefined FUN_0040a75f(void)` | `pending` |
| `0040a76d` | `FUN_0040a76d` | `undefined FUN_0040a76d(void)` | `pending` |
| `0040a77b` | `FUN_0040a77b` | `undefined FUN_0040a77b(void)` | `pending` |
| `0040a789` | `FUN_0040a789` | `undefined FUN_0040a789(void)` | `pending` |
| `0040a7a4` | `FUN_0040a7a4` | `undefined FUN_0040a7a4(void)` | `pending` |
| `0040a7b2` | `FUN_0040a7b2` | `undefined FUN_0040a7b2(void)` | `pending` |
| `0040a7ca` | `FUN_0040a7ca` | `undefined FUN_0040a7ca(void)` | `pending` |
| `0040a8b0` | `FUN_0040a8b0` | `int FUN_0040a8b0(int param_1)` | `pending` |
| `0040a9a0` | `FUN_0040a9a0` | `undefined4 FUN_0040a9a0(int param_1)` | `pending` |
| `0040aa30` | `FUN_0040aa30` | `undefined FUN_0040aa30(int param_1)` | `pending` |
| `0040aa80` | `FUN_0040aa80` | `undefined4 FUN_0040aa80(int param_1)` | `pending` |
| `0040ab50` | `FUN_0040ab50` | `bool FUN_0040ab50(int param_1)` | `pending` |
| `0040ab90` | `FUN_0040ab90` | `undefined4 FUN_0040ab90(int param_1)` | `pending` |
| `0040aca0` | `FUN_0040aca0` | `undefined4 FUN_0040aca0(int param_1)` | `pending` |
| `0040af04` | `FUN_0040af04` | `undefined FUN_0040af04(void)` | `pending` |
| `0040af1c` | `FUN_0040af1c` | `undefined FUN_0040af1c(void)` | `pending` |
| `0040af24` | `FUN_0040af24` | `undefined FUN_0040af24(void)` | `pending` |
| `0040af36` | `FUN_0040af36` | `undefined FUN_0040af36(void)` | `pending` |
| `0040af50` | `FUN_0040af50` | `undefined4 FUN_0040af50(int param_1)` | `pending` |
| `0040af80` | `FUN_0040af80` | `undefined FUN_0040af80(int param_1)` | `pending` |
| `0040afa0` | `FUN_0040afa0` | `undefined FUN_0040afa0(void)` | `pending` |
| `0040afb0` | `FUN_0040afb0` | `undefined4 FUN_0040afb0(int param_1)` | `pending` |
| `0040b135` | `FUN_0040b135` | `undefined FUN_0040b135(void)` | `pending` |
| `0040b13d` | `FUN_0040b13d` | `undefined FUN_0040b13d(void)` | `pending` |
| `0040b145` | `FUN_0040b145` | `undefined FUN_0040b145(void)` | `pending` |
| `0040b14d` | `FUN_0040b14d` | `undefined FUN_0040b14d(void)` | `pending` |
| `0040b15f` | `FUN_0040b15f` | `undefined FUN_0040b15f(void)` | `pending` |
| `0040b170` | `FUN_0040b170` | `undefined FUN_0040b170(int param_1)` | `pending` |
| `0040b1b0` | `FUN_0040b1b0` | `undefined4 FUN_0040b1b0(int param_1)` | `pending` |
| `0040b250` | `FUN_0040b250` | `undefined4 FUN_0040b250(int param_1)` | `pending` |
| `0040b2d0` | `FUN_0040b2d0` | `undefined4 FUN_0040b2d0(int param_1)` | `pending` |
| `0040b440` | `FUN_0040b440` | `undefined4 * FUN_0040b440(undefined4 * param_1)` | `pending` |
| `0040b4f0` | `FUN_0040b4f0` | `undefined4 * FUN_0040b4f0(void * this, byte param_1)` | `pending` |
| `0040b510` | `FUN_0040b510` | `undefined FUN_0040b510(undefined4 * param_1)` | `pending` |
| `0040b56d` | `FUN_0040b56d` | `undefined FUN_0040b56d(void)` | `pending` |
| `0040b580` | `FUN_0040b580` | `undefined FUN_0040b580(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)` | `pending` |
| `0040b6a0` | `FUN_0040b6a0` | `undefined4 * FUN_0040b6a0(undefined4 * param_1)` | `pending` |
| `0040b730` | `FUN_0040b730` | `undefined4 * FUN_0040b730(void * this, byte param_1)` | `pending` |
| `0040b750` | `FUN_0040b750` | `undefined FUN_0040b750(undefined4 * param_1)` | `pending` |
| `0040b7ad` | `FUN_0040b7ad` | `undefined FUN_0040b7ad(void)` | `pending` |
| `0040b7c0` | `FUN_0040b7c0` | `undefined4 FUN_0040b7c0(void * this, int param_1)` | `pending` |
| `0040b92f` | `FUN_0040b92f` | `undefined FUN_0040b92f(void)` | `pending` |
| `0040b940` | `FUN_0040b940` | `undefined FUN_0040b940(undefined4 * param_1)` | `pending` |
| `0040b987` | `FUN_0040b987` | `undefined FUN_0040b987(void)` | `pending` |
| `0040b990` | `FUN_0040b990` | `undefined4 * FUN_0040b990(undefined4 * param_1)` | `pending` |
| `0040ba00` | `FUN_0040ba00` | `undefined4 * FUN_0040ba00(void * this, byte param_1)` | `pending` |
| `0040ba20` | `FUN_0040ba20` | `undefined FUN_0040ba20(undefined4 * param_1)` | `pending` |
| `0040ba7e` | `FUN_0040ba7e` | `undefined FUN_0040ba7e(void)` | `pending` |
| `0040ba90` | `FUN_0040ba90` | `undefined4 * FUN_0040ba90(undefined4 * param_1)` | `pending` |
| `0040bab0` | `FUN_0040bab0` | `undefined4 * FUN_0040bab0(undefined4 * param_1)` | `pending` |
| `0040bc80` | `FUN_0040bc80` | `undefined4 * FUN_0040bc80(void * this, byte param_1)` | `pending` |
| `0040bca0` | `FUN_0040bca0` | `undefined FUN_0040bca0(undefined4 * param_1)` | `pending` |
| `0040bd18` | `FUN_0040bd18` | `undefined FUN_0040bd18(void)` | `pending` |
| `0040bd26` | `FUN_0040bd26` | `undefined FUN_0040bd26(void)` | `pending` |
| `0040bd3e` | `FUN_0040bd3e` | `undefined FUN_0040bd3e(void)` | `pending` |
| `0040bd50` | `FUN_0040bd50` | `undefined * FUN_0040bd50(void)` | `pending` |
| `0040bd70` | `FUN_0040bd70` | `undefined4 * FUN_0040bd70(void * this, undefined4 param_1)` | `pending` |
| `0040c214` | `FUN_0040c214` | `undefined FUN_0040c214(void)` | `pending` |
| `0040c220` | `FUN_0040c220` | `int FUN_0040c220(void * this, int param_1)` | `pending` |
| `0040c330` | `FUN_0040c330` | `undefined FUN_0040c330(void * param_1)` | `pending` |
| `0040c360` | `FUN_0040c360` | `undefined FUN_0040c360(int param_1)` | `pending` |
| `0040c3b0` | `FUN_0040c3b0` | `undefined FUN_0040c3b0(void * param_1)` | `pending` |
| `0040c4b0` | `FUN_0040c4b0` | `undefined FUN_0040c4b0(void * this, int param_1)` | `pending` |
| `0040c510` | `FUN_0040c510` | `undefined FUN_0040c510(void * this, int * param_1)` | `pending` |
| `0040c590` | `FUN_0040c590` | `undefined FUN_0040c590(void * this, int param_1)` | `pending` |
| `0040c5c0` | `FUN_0040c5c0` | `undefined4 FUN_0040c5c0(void * param_1)` | `pending` |
| `0040c630` | `FUN_0040c630` | `undefined4 FUN_0040c630(void * this, int param_1)` | `pending` |
| `0040c680` | `FUN_0040c680` | `undefined4 FUN_0040c680(void * this, int param_1)` | `pending` |
| `0040c780` | `FUN_0040c780` | `undefined4 FUN_0040c780(void)` | `pending` |
| `0040c80e` | `FUN_0040c80e` | `undefined FUN_0040c80e(void)` | `pending` |
| `0040c820` | `FUN_0040c820` | `undefined4 * FUN_0040c820(void * this, int param_1)` | `pending` |
| `0040c8d0` | `FUN_0040c8d0` | `byte FUN_0040c8d0(void * this, int param_1)` | `pending` |
| `0040c900` | `FUN_0040c900` | `uint FUN_0040c900(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040ca79` | `FUN_0040ca79` | `undefined FUN_0040ca79(void)` | `pending` |
| `0040ca90` | `FUN_0040ca90` | `undefined4 FUN_0040ca90(void * this, int param_1, int * param_2)` | `pending` |
| `0040cb10` | `FUN_0040cb10` | `undefined4 FUN_0040cb10(void * this, int param_1, int param_2)` | `pending` |
| `0040cba0` | `FUN_0040cba0` | `int FUN_0040cba0(char * param_1, int * param_2)` | `pending` |
| `0040cc90` | `FUN_0040cc90` | `undefined4 * FUN_0040cc90(undefined4 * param_1)` | `pending` |
| `0040cd30` | `FUN_0040cd30` | `undefined4 * FUN_0040cd30(void * this, byte param_1)` | `pending` |
| `0040cd50` | `FUN_0040cd50` | `undefined FUN_0040cd50(undefined4 * param_1)` | `pending` |
| `0040cdaa` | `FUN_0040cdaa` | `undefined FUN_0040cdaa(void)` | `pending` |
| `0040cdb5` | `FUN_0040cdb5` | `undefined FUN_0040cdb5(void)` | `pending` |
| `0040cdca` | `FUN_0040cdca` | `undefined FUN_0040cdca(void)` | `pending` |
| `0040cde0` | `FUN_0040cde0` | `undefined FUN_0040cde0(void * this, int param_1)` | `pending` |
| `0040cf20` | `FUN_0040cf20` | `undefined4 * FUN_0040cf20(undefined4 * param_1)` | `pending` |
| `0040cf90` | `FUN_0040cf90` | `undefined4 * FUN_0040cf90(void * this, byte param_1)` | `pending` |
| `0040cfb0` | `FUN_0040cfb0` | `undefined FUN_0040cfb0(undefined4 * param_1)` | `pending` |
| `0040d01e` | `FUN_0040d01e` | `undefined FUN_0040d01e(void)` | `pending` |
| `0040d030` | `FUN_0040d030` | `undefined FUN_0040d030(void * this, int param_1, int param_2)` | `pending` |
| `0040d130` | `FUN_0040d130` | `undefined4 FUN_0040d130(void * this, undefined4 param_1)` | `pending` |
| `0040d316` | `FUN_0040d316` | `undefined FUN_0040d316(void)` | `pending` |
| `0040d328` | `FUN_0040d328` | `undefined FUN_0040d328(void)` | `pending` |
| `0040d330` | `FUN_0040d330` | `int FUN_0040d330(void * this, int param_1, int param_2)` | `pending` |
| `0040d360` | `FUN_0040d360` | `undefined FUN_0040d360(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `0040d48a` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0040d490` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `0040d496` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0040d520` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `0040d5e6` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `0040d5ec` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `0040d5f2` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `0040d5fe` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `0040d604` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0040d60a` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `0040d610` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0040d616` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `0040d61c` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `0040d622` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0040d628` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `0040d62e` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0040d634` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0040d63a` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040d640` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0040d652` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `0040d658` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `0040d65e` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0040d664` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `0040d66a` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0040d670` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `0040d676` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `0040d67c` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0040d682` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0040d688` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `0040d68e` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0040d694` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `0040d69a` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `0040d6b2` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `0040d6b8` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `0040d6be` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0040d6e8` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0040d6ee` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `0040d6f4` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0040d6fa` | `Ordinal_817` | `undefined Ordinal_817()` | `pending` |
| `0040d724` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0040d72a` | `Ordinal_542` | `undefined Ordinal_542()` | `pending` |
| `0040d730` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `0040d736` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `0040d73c` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `0040d742` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `0040d748` | `Ordinal_2001` | `undefined Ordinal_2001()` | `pending` |
| `0040d74e` | `Ordinal_2064` | `undefined Ordinal_2064()` | `pending` |
| `0040d754` | `Ordinal_1440` | `undefined Ordinal_1440()` | `pending` |
| `0040d75a` | `Ordinal_1717` | `undefined Ordinal_1717()` | `pending` |
| `0040d760` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0040d766` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0040d76c` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `0040d772` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0040d77e` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `0040d784` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `0040d78a` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0040d796` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `0040d7ae` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `0040d7b4` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `0040d7ba` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `0040d7c0` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `0040d7c6` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `0040d7cc` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `0040d7d2` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `0040d7d8` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040d7de` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `0040d7e4` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `0040d7ea` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `0040d7f0` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `0040d814` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `0040d81a` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0040d820` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `0040d826` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0040d82c` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `0040d8a4` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040d8aa` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `0040d8b0` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0040d8b6` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040d8bc` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `0040d8c2` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `0040d8c8` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0040d8ce` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `0040d8d4` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0040d8da` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `0040d8e0` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `0040d8e6` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `0040d8ec` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0040d8f8` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `0040d8fe` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0040d904` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `0040d910` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040d980` | `FUN_0040d980` | `undefined FUN_0040d980(void)` | `pending` |
| `0040d9a0` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040da40` | ``eh_vector_constructor_iterator'` | `void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)` | `pending` |
| `0040dab0` | `FUN_0040dab0` | `undefined FUN_0040dab0(void)` | `pending` |
| `0040dad0` | `FUN_0040dad0` | `undefined FUN_0040dad0(_onexit_t param_1)` | `pending` |
| `0040db70` | `FUN_0040db70` | `int FUN_0040db70(_onexit_t param_1)` | `pending` |
| `0040db90` | `entry` | `undefined entry(void)` | `pending` |
| `0040dd3e` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040dd4a` | `initterm` | `undefined initterm()` | `pending` |
| `0040dd50` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `0040dd80` | `FUN_0040dd80` | `undefined FUN_0040dd80(void)` | `pending` |
| `0040dd82` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `0040dd88` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040dda1` | `FUN_0040dda1` | `undefined4 FUN_0040dda1(int param_1, undefined4 param_2)` | `pending` |
| `0040ddf0` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Launcher.exe

Remaining: **168** of **174** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `00401040` | `FUN_00401040` | `undefined4 * FUN_00401040(undefined4 * param_1)` | `pending` |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(void * this, byte param_1)` | `pending` |
| `004010d0` | `FUN_004010d0` | `undefined FUN_004010d0(undefined4 * param_1)` | `pending` |
| `0040116e` | `FUN_0040116e` | `undefined FUN_0040116e(void)` | `pending` |
| `00401550` | `FUN_00401550` | `undefined FUN_00401550(undefined4 * param_1)` | `pending` |
| `00401660` | `FUN_00401660` | `undefined4 * FUN_00401660(undefined4 * param_1)` | `pending` |
| `00401700` | `FUN_00401700` | `undefined4 * FUN_00401700(void * this, byte param_1)` | `pending` |
| `00401720` | `FUN_00401720` | `undefined FUN_00401720(undefined4 * param_1)` | `pending` |
| `00401775` | `FUN_00401775` | `undefined FUN_00401775(void)` | `pending` |
| `0040178a` | `FUN_0040178a` | `undefined FUN_0040178a(void)` | `pending` |
| `004017a0` | `FUN_004017a0` | `undefined4 FUN_004017a0(int param_1)` | `pending` |
| `00401990` | `FUN_00401990` | `undefined FUN_00401990(void * this, int param_1)` | `pending` |
| `004019c0` | `FUN_004019c0` | `undefined4 FUN_004019c0(int param_1)` | `pending` |
| `00401a49` | `FUN_00401a49` | `undefined FUN_00401a49(void)` | `pending` |
| `00401a60` | `FUN_00401a60` | `undefined FUN_00401a60(void * param_1)` | `pending` |
| `00401ad0` | `FUN_00401ad0` | `undefined4 FUN_00401ad0(int param_1)` | `pending` |
| `00401be0` | `FUN_00401be0` | `bool FUN_00401be0(int param_1)` | `pending` |
| `00401c30` | `FUN_00401c30` | `undefined4 FUN_00401c30(int param_1)` | `pending` |
| `00401df6` | `FUN_00401df6` | `undefined FUN_00401df6(void)` | `pending` |
| `00401e20` | `FUN_00401e20` | `undefined FUN_00401e20(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `00401f72` | `FUN_00401f72` | `undefined FUN_00401f72(void)` | `pending` |
| `0040200b` | `FUN_0040200b` | `undefined FUN_0040200b(void)` | `pending` |
| `00402020` | `FUN_00402020` | `undefined FUN_00402020(undefined4 * param_1)` | `pending` |
| `00402073` | `FUN_00402073` | `undefined FUN_00402073(void)` | `pending` |
| `004020b0` | `FUN_004020b0` | `undefined4 FUN_004020b0(void * this, byte param_1)` | `pending` |
| `004020f0` | `FUN_004020f0` | `undefined4 * FUN_004020f0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)` | `pending` |
| `00402210` | `FUN_00402210` | `undefined4 * FUN_00402210(void * this, byte param_1)` | `pending` |
| `00402230` | `FUN_00402230` | `undefined FUN_00402230(undefined4 * param_1)` | `pending` |
| `0040229d` | `FUN_0040229d` | `undefined FUN_0040229d(void)` | `pending` |
| `004022ab` | `FUN_004022ab` | `undefined FUN_004022ab(void)` | `pending` |
| `004022b6` | `FUN_004022b6` | `undefined FUN_004022b6(void)` | `pending` |
| `004022c1` | `FUN_004022c1` | `undefined FUN_004022c1(void)` | `pending` |
| `004022d6` | `FUN_004022d6` | `undefined FUN_004022d6(void)` | `pending` |
| `004022e0` | `FUN_004022e0` | `undefined FUN_004022e0(void * this, undefined4 param_1)` | `pending` |
| `004022f0` | `FUN_004022f0` | `undefined FUN_004022f0(void)` | `pending` |
| `00402320` | `FUN_00402320` | `undefined FUN_00402320(void)` | `pending` |
| `00402390` | `FUN_00402390` | `undefined FUN_00402390(void)` | `pending` |
| `004023b0` | `FUN_004023b0` | `undefined4 FUN_004023b0(int param_1)` | `pending` |
| `004024f0` | `FUN_004024f0` | `undefined4 * FUN_004024f0(undefined4 * param_1)` | `pending` |
| `004025a9` | `FUN_004025a9` | `undefined FUN_004025a9(void)` | `pending` |
| `004025d0` | `FUN_004025d0` | `undefined FUN_004025d0(void)` | `pending` |
| `004025e0` | `FUN_004025e0` | `undefined FUN_004025e0(void)` | `pending` |
| `0040262b` | `FUN_0040262b` | `undefined FUN_0040262b(void)` | `pending` |
| `00402828` | `FUN_00402828` | `undefined FUN_00402828(void)` | `pending` |
| `00402873` | `FUN_00402873` | `undefined FUN_00402873(void)` | `pending` |
| `00402a8b` | `FUN_00402a8b` | `undefined FUN_00402a8b(void)` | `pending` |
| `00402a9b` | `FUN_00402a9b` | `undefined FUN_00402a9b(void)` | `pending` |
| `00402ae2` | `FUN_00402ae2` | `undefined FUN_00402ae2(void)` | `pending` |
| `00402aea` | `FUN_00402aea` | `undefined FUN_00402aea(void)` | `pending` |
| `00402afc` | `FUN_00402afc` | `undefined FUN_00402afc(void)` | `pending` |
| `00402b04` | `FUN_00402b04` | `undefined FUN_00402b04(void)` | `pending` |
| `00402b0c` | `FUN_00402b0c` | `undefined FUN_00402b0c(void)` | `pending` |
| `00402b14` | `FUN_00402b14` | `undefined FUN_00402b14(void)` | `pending` |
| `00402b1c` | `FUN_00402b1c` | `undefined FUN_00402b1c(void)` | `pending` |
| `00402b31` | `FUN_00402b31` | `undefined FUN_00402b31(void)` | `pending` |
| `00402b40` | `FUN_00402b40` | `undefined FUN_00402b40(void)` | `pending` |
| `00402b81` | `FUN_00402b81` | `undefined FUN_00402b81(void)` | `pending` |
| `00402ca4` | `FUN_00402ca4` | `undefined FUN_00402ca4(void)` | `pending` |
| `00402cb6` | `FUN_00402cb6` | `undefined FUN_00402cb6(void)` | `pending` |
| `00402cc0` | `FUN_00402cc0` | `undefined FUN_00402cc0(int param_1)` | `pending` |
| `00402cf0` | `FUN_00402cf0` | `undefined FUN_00402cf0(undefined4 * param_1)` | `pending` |
| `00402d37` | `FUN_00402d37` | `undefined FUN_00402d37(void)` | `pending` |
| `00402d9f` | `FUN_00402d9f` | `undefined FUN_00402d9f(void)` | `pending` |
| `00402db0` | `FUN_00402db0` | `undefined FUN_00402db0(void)` | `pending` |
| `00402e1f` | `FUN_00402e1f` | `undefined FUN_00402e1f(void)` | `pending` |
| `00402e30` | `FUN_00402e30` | `undefined FUN_00402e30(undefined4 * param_1)` | `pending` |
| `00402e77` | `FUN_00402e77` | `undefined FUN_00402e77(void)` | `pending` |
| `00402e80` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00402f40` | `FUN_00402f40` | `undefined4 * FUN_00402f40(undefined4 * param_1)` | `pending` |
| `00402fb0` | `FUN_00402fb0` | `undefined4 * FUN_00402fb0(void * this, byte param_1)` | `pending` |
| `00402fd0` | `FUN_00402fd0` | `undefined FUN_00402fd0(undefined4 * param_1)` | `pending` |
| `0040305b` | `FUN_0040305b` | `undefined FUN_0040305b(void)` | `pending` |
| `00403070` | `FUN_00403070` | `undefined FUN_00403070(void * this, int param_1)` | `pending` |
| `00403120` | `FUN_00403120` | `undefined4 FUN_00403120(int param_1)` | `pending` |
| `00403160` | `FUN_00403160` | `undefined4 FUN_00403160(void * this, undefined4 param_1)` | `pending` |
| `00403335` | `FUN_00403335` | `undefined FUN_00403335(void)` | `pending` |
| `00403347` | `FUN_00403347` | `undefined FUN_00403347(void)` | `pending` |
| `00403350` | `FUN_00403350` | `bool FUN_00403350(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00403450` | `FUN_00403450` | `undefined FUN_00403450(void * this, undefined4 * param_1)` | `pending` |
| `004034e2` | `FUN_004034e2` | `undefined FUN_004034e2(void)` | `pending` |
| `004034f7` | `FUN_004034f7` | `undefined FUN_004034f7(void)` | `pending` |
| `00403500` | `FUN_00403500` | `undefined FUN_00403500(undefined4 * param_1)` | `pending` |
| `0040354a` | `FUN_0040354a` | `undefined FUN_0040354a(void)` | `pending` |
| `0040355f` | `FUN_0040355f` | `undefined FUN_0040355f(void)` | `pending` |
| `00403620` | `FUN_00403620` | `undefined4 * FUN_00403620(undefined4 * param_1)` | `pending` |
| `004036b0` | `FUN_004036b0` | `undefined4 * FUN_004036b0(void * this, byte param_1)` | `pending` |
| `004036d0` | `FUN_004036d0` | `undefined FUN_004036d0(undefined4 * param_1)` | `pending` |
| `0040372d` | `FUN_0040372d` | `undefined FUN_0040372d(void)` | `pending` |
| `00403740` | `FUN_00403740` | `undefined4 FUN_00403740(void * this, int param_1)` | `pending` |
| `004038af` | `FUN_004038af` | `undefined FUN_004038af(void)` | `pending` |
| `004038c0` | `FUN_004038c0` | `undefined FUN_004038c0(undefined4 * param_1)` | `pending` |
| `00403907` | `FUN_00403907` | `undefined FUN_00403907(void)` | `pending` |
| `00403910` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0040391c` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `00403922` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `00403928` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `00403a1e` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `00403a2a` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `00403a30` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `00403a36` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `00403a3c` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `00403a42` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `00403a48` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `00403a4e` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `00403a54` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `00403a5a` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `00403a60` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `00403a66` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `00403a6c` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `00403a78` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `00403a7e` | `Ordinal_2510` | `undefined Ordinal_2510()` | `pending` |
| `00403a90` | `Ordinal_2199` | `undefined Ordinal_2199()` | `pending` |
| `00403ab4` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `00403aba` | `Ordinal_315` | `undefined Ordinal_315()` | `pending` |
| `00403ac0` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `00403ac6` | `Ordinal_1814` | `undefined Ordinal_1814()` | `pending` |
| `00403acc` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `00403ad2` | `Ordinal_1532` | `undefined Ordinal_1532()` | `pending` |
| `00403ad8` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `00403ade` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `00403ae4` | `Ordinal_3859` | `undefined Ordinal_3859()` | `pending` |
| `00403aea` | `Ordinal_4312` | `undefined Ordinal_4312()` | `pending` |
| `00403b68` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `00403b6e` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `00403b80` | `Ordinal_549` | `undefined Ordinal_549()` | `pending` |
| `00403b86` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `00403b8c` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `00403b92` | `Ordinal_1862` | `undefined Ordinal_1862()` | `pending` |
| `00403b98` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `00403b9e` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `00403ba4` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `00403baa` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `00403bb0` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `00403bb6` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `00403bbc` | `Ordinal_3695` | `undefined Ordinal_3695()` | `pending` |
| `00403bc2` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `00403bc8` | `Ordinal_339` | `undefined Ordinal_339()` | `pending` |
| `00403bce` | `Ordinal_4635` | `undefined Ordinal_4635()` | `pending` |
| `00403bd4` | `Ordinal_292` | `undefined Ordinal_292()` | `pending` |
| `00403bda` | `Ordinal_3307` | `undefined Ordinal_3307()` | `pending` |
| `00403be0` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `00403be6` | `Ordinal_1449` | `undefined Ordinal_1449()` | `pending` |
| `00403bec` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `00403bf2` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `00403bf8` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `00403bfe` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `00403c04` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `00403c0a` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `00403c10` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `00403c22` | `Ordinal_2327` | `undefined Ordinal_2327()` | `pending` |
| `00403c28` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00403c2e` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `00403c40` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `00403c46` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `00403c52` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `00403c58` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `00403c60` | `FUN_00403c60` | `undefined FUN_00403c60(_onexit_t param_1)` | `pending` |
| `00403d00` | `FUN_00403d00` | `int FUN_00403d00(_onexit_t param_1)` | `pending` |
| `00403d20` | `entry` | `undefined entry(void)` | `pending` |
| `00403ec2` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `00403ec8` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `00403ece` | `initterm` | `undefined initterm()` | `pending` |
| `00403ee0` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `00403f10` | `FUN_00403f10` | `undefined FUN_00403f10(void)` | `pending` |
| `00403f18` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `00403f1e` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00403f37` | `FUN_00403f37` | `undefined4 FUN_00403f37(int param_1, undefined4 param_2)` | `pending` |
| `00403f86` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Owner_s_Kit.exe

Remaining: **501** of **501** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(undefined4 * param_1)` | `pending` |
| `00401120` | `FUN_00401120` | `undefined4 * FUN_00401120(void * this, byte param_1)` | `pending` |
| `00401140` | `FUN_00401140` | `undefined FUN_00401140(undefined4 * param_1)` | `pending` |
| `004011ae` | `FUN_004011ae` | `undefined FUN_004011ae(void)` | `pending` |
| `004011c0` | `FUN_004011c0` | `undefined FUN_004011c0(void * this, int param_1, int param_2)` | `pending` |
| `00401370` | `FUN_00401370` | `undefined4 FUN_00401370(void * this, undefined4 param_1)` | `pending` |
| `00401556` | `FUN_00401556` | `undefined FUN_00401556(void)` | `pending` |
| `00401568` | `FUN_00401568` | `undefined FUN_00401568(void)` | `pending` |
| `004016c0` | `FUN_004016c0` | `int FUN_004016c0(void * this, int param_1, int param_2)` | `pending` |
| `004016f0` | `FUN_004016f0` | `undefined FUN_004016f0(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `00401840` | `FUN_00401840` | `undefined FUN_00401840(undefined4 * param_1)` | `pending` |
| `00401890` | `FUN_00401890` | `undefined FUN_00401890(undefined4 * param_1)` | `pending` |
| `004018d7` | `FUN_004018d7` | `undefined FUN_004018d7(void)` | `pending` |
| `0040193f` | `FUN_0040193f` | `undefined FUN_0040193f(void)` | `pending` |
| `004019b2` | `FUN_004019b2` | `undefined FUN_004019b2(void)` | `pending` |
| `004019c7` | `FUN_004019c7` | `undefined FUN_004019c7(void)` | `pending` |
| `004019d0` | `FUN_004019d0` | `undefined FUN_004019d0(undefined4 * param_1)` | `pending` |
| `00401a1a` | `FUN_00401a1a` | `undefined FUN_00401a1a(void)` | `pending` |
| `00401a2f` | `FUN_00401a2f` | `undefined FUN_00401a2f(void)` | `pending` |
| `00401af0` | `FUN_00401af0` | `undefined4 * FUN_00401af0(undefined4 * param_1)` | `pending` |
| `00401b60` | `FUN_00401b60` | `undefined4 * FUN_00401b60(void * this, byte param_1)` | `pending` |
| `00401b80` | `FUN_00401b80` | `undefined FUN_00401b80(undefined4 * param_1)` | `pending` |
| `00401c0b` | `FUN_00401c0b` | `undefined FUN_00401c0b(void)` | `pending` |
| `00401c20` | `FUN_00401c20` | `undefined FUN_00401c20(void * this, int param_1)` | `pending` |
| `00401cd0` | `FUN_00401cd0` | `undefined4 FUN_00401cd0(int param_1)` | `pending` |
| `00401d10` | `FUN_00401d10` | `undefined4 FUN_00401d10(void * this, undefined4 param_1)` | `pending` |
| `00401ee5` | `FUN_00401ee5` | `undefined FUN_00401ee5(void)` | `pending` |
| `00401ef7` | `FUN_00401ef7` | `undefined FUN_00401ef7(void)` | `pending` |
| `00401f00` | `FUN_00401f00` | `bool FUN_00401f00(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00402000` | `FUN_00402000` | `int FUN_00402000(void * this, int param_1, int param_2)` | `pending` |
| `00402040` | `FUN_00402040` | `undefined FUN_00402040(void * this, undefined4 * param_1)` | `pending` |
| `00402320` | `FUN_00402320` | `undefined4 * FUN_00402320(undefined4 * param_1)` | `pending` |
| `004023a0` | `FUN_004023a0` | `undefined4 * FUN_004023a0(void * this, byte param_1)` | `pending` |
| `004023c0` | `FUN_004023c0` | `undefined FUN_004023c0(undefined4 * param_1)` | `pending` |
| `00402407` | `FUN_00402407` | `undefined FUN_00402407(void)` | `pending` |
| `004024c0` | `FUN_004024c0` | `undefined4 FUN_004024c0(void * this, byte param_1)` | `pending` |
| `00402600` | `FUN_00402600` | `undefined FUN_00402600(void)` | `pending` |
| `00402620` | `FUN_00402620` | `undefined FUN_00402620(void)` | `pending` |
| `00402650` | `FUN_00402650` | `undefined4 * FUN_00402650(undefined4 * param_1)` | `pending` |
| `004026c0` | `FUN_004026c0` | `undefined4 * FUN_004026c0(void * this, byte param_1)` | `pending` |
| `004026e0` | `FUN_004026e0` | `undefined FUN_004026e0(undefined4 * param_1)` | `pending` |
| `00402733` | `FUN_00402733` | `undefined FUN_00402733(void)` | `pending` |
| `00402740` | `FUN_00402740` | `undefined FUN_00402740(void)` | `pending` |
| `00402800` | `FUN_00402800` | `undefined4 * FUN_00402800(void * this, byte param_1)` | `pending` |
| `00402820` | `FUN_00402820` | `undefined4 * FUN_00402820(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00402950` | `FUN_00402950` | `undefined FUN_00402950(undefined4 * param_1)` | `pending` |
| `004029ce` | `FUN_004029ce` | `undefined FUN_004029ce(void)` | `pending` |
| `004029dc` | `FUN_004029dc` | `undefined FUN_004029dc(void)` | `pending` |
| `004029ea` | `FUN_004029ea` | `undefined FUN_004029ea(void)` | `pending` |
| `004029f8` | `FUN_004029f8` | `undefined FUN_004029f8(void)` | `pending` |
| `00402a06` | `FUN_00402a06` | `undefined FUN_00402a06(void)` | `pending` |
| `00402a14` | `FUN_00402a14` | `undefined FUN_00402a14(void)` | `pending` |
| `00402a2c` | `FUN_00402a2c` | `undefined FUN_00402a2c(void)` | `pending` |
| `00402a40` | `FUN_00402a40` | `undefined FUN_00402a40(void * this, undefined4 param_1)` | `pending` |
| `00402aa0` | `FUN_00402aa0` | `undefined FUN_00402aa0(int * param_1)` | `pending` |
| `00402af0` | `FUN_00402af0` | `undefined4 FUN_00402af0(int param_1)` | `pending` |
| `00402b50` | `FUN_00402b50` | `undefined4 FUN_00402b50(void * param_1)` | `pending` |
| `00402cf0` | `FUN_00402cf0` | `undefined4 FUN_00402cf0(void * this, int param_1)` | `pending` |
| `00402d50` | `FUN_00402d50` | `undefined4 FUN_00402d50(int param_1)` | `pending` |
| `00402f13` | `FUN_00402f13` | `undefined FUN_00402f13(void)` | `pending` |
| `00402f2b` | `FUN_00402f2b` | `undefined FUN_00402f2b(void)` | `pending` |
| `00402f3d` | `FUN_00402f3d` | `undefined FUN_00402f3d(void)` | `pending` |
| `00402f60` | `FUN_00402f60` | `undefined FUN_00402f60(int param_1)` | `pending` |
| `00402f90` | `FUN_00402f90` | `undefined4 FUN_00402f90(void * this, byte * param_1, int param_2)` | `pending` |
| `00403030` | `FUN_00403030` | `undefined4 FUN_00403030(void * this, byte * param_1)` | `pending` |
| `004030f3` | `FUN_004030f3` | `undefined FUN_004030f3(void)` | `pending` |
| `004031f0` | `FUN_004031f0` | `undefined4 FUN_004031f0(int param_1)` | `pending` |
| `00403367` | `FUN_00403367` | `undefined FUN_00403367(void)` | `pending` |
| `0040337f` | `FUN_0040337f` | `undefined FUN_0040337f(void)` | `pending` |
| `00403391` | `FUN_00403391` | `undefined FUN_00403391(void)` | `pending` |
| `004033a0` | `FUN_004033a0` | `undefined4 * FUN_004033a0(void * this, int param_1)` | `pending` |
| `00403440` | `FUN_00403440` | `int FUN_00403440(void * this, byte * param_1)` | `pending` |
| `00403525` | `FUN_00403525` | `undefined FUN_00403525(void)` | `pending` |
| `00403537` | `FUN_00403537` | `undefined FUN_00403537(void)` | `pending` |
| `00403540` | `thunk_FUN_00409e20` | `undefined4 thunk_FUN_00409e20(int param_1)` | `pending` |
| `0040360d` | `FUN_0040360d` | `undefined FUN_0040360d(void)` | `pending` |
| `00403615` | `FUN_00403615` | `undefined FUN_00403615(void)` | `pending` |
| `0040361d` | `FUN_0040361d` | `undefined FUN_0040361d(void)` | `pending` |
| `0040362f` | `FUN_0040362f` | `undefined FUN_0040362f(void)` | `pending` |
| `00403660` | `FUN_00403660` | `undefined FUN_00403660(int param_1)` | `pending` |
| `00403750` | `FUN_00403750` | `undefined FUN_00403750(void * param_1)` | `pending` |
| `00403790` | `FUN_00403790` | `undefined FUN_00403790(void * this, int param_1)` | `pending` |
| `00403900` | `FUN_00403900` | `undefined4 * FUN_00403900(undefined4 * param_1)` | `pending` |
| `00403a00` | `FUN_00403a00` | `undefined4 * FUN_00403a00(void * this, byte param_1)` | `pending` |
| `00403a20` | `FUN_00403a20` | `undefined FUN_00403a20(undefined4 * param_1)` | `pending` |
| `00403a8c` | `FUN_00403a8c` | `undefined FUN_00403a8c(void)` | `pending` |
| `00403a9a` | `FUN_00403a9a` | `undefined FUN_00403a9a(void)` | `pending` |
| `00403aa8` | `FUN_00403aa8` | `undefined FUN_00403aa8(void)` | `pending` |
| `00403ab6` | `FUN_00403ab6` | `undefined FUN_00403ab6(void)` | `pending` |
| `00403ace` | `FUN_00403ace` | `undefined FUN_00403ace(void)` | `pending` |
| `00403b00` | `FUN_00403b00` | `undefined4 FUN_00403b00(int param_1)` | `pending` |
| `00403b50` | `FUN_00403b50` | `undefined FUN_00403b50(void)` | `pending` |
| `00403c20` | `FUN_00403c20` | `undefined4 FUN_00403c20(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00403cd0` | `FUN_00403cd0` | `undefined4 FUN_00403cd0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403d00` | `FUN_00403d00` | `undefined4 FUN_00403d00(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403d30` | `FUN_00403d30` | `undefined4 FUN_00403d30(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403d60` | `FUN_00403d60` | `undefined4 FUN_00403d60(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403d90` | `FUN_00403d90` | `undefined4 FUN_00403d90(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00403e90` | `FUN_00403e90` | `undefined4 * FUN_00403e90(undefined4 * param_1)` | `pending` |
| `00403f30` | `FUN_00403f30` | `undefined4 * FUN_00403f30(void * this, byte param_1)` | `pending` |
| `00403f50` | `FUN_00403f50` | `undefined FUN_00403f50(undefined4 * param_1)` | `pending` |
| `00403fa5` | `FUN_00403fa5` | `undefined FUN_00403fa5(void)` | `pending` |
| `00403fba` | `FUN_00403fba` | `undefined FUN_00403fba(void)` | `pending` |
| `00403fd0` | `FUN_00403fd0` | `undefined4 FUN_00403fd0(int param_1)` | `pending` |
| `004041c0` | `FUN_004041c0` | `undefined FUN_004041c0(void * this, int param_1)` | `pending` |
| `004041f0` | `FUN_004041f0` | `undefined4 FUN_004041f0(int param_1)` | `pending` |
| `00404279` | `FUN_00404279` | `undefined FUN_00404279(void)` | `pending` |
| `00404290` | `FUN_00404290` | `undefined FUN_00404290(void * param_1)` | `pending` |
| `00404300` | `FUN_00404300` | `undefined4 FUN_00404300(int param_1)` | `pending` |
| `00404410` | `FUN_00404410` | `bool FUN_00404410(int param_1)` | `pending` |
| `00404460` | `FUN_00404460` | `undefined4 FUN_00404460(int param_1)` | `pending` |
| `00404626` | `FUN_00404626` | `undefined FUN_00404626(void)` | `pending` |
| `00404650` | `FUN_00404650` | `undefined FUN_00404650(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `004047a2` | `FUN_004047a2` | `undefined FUN_004047a2(void)` | `pending` |
| `0040482b` | `FUN_0040482b` | `undefined FUN_0040482b(void)` | `pending` |
| `00404840` | `FUN_00404840` | `undefined FUN_00404840(undefined4 * param_1)` | `pending` |
| `00404893` | `FUN_00404893` | `undefined FUN_00404893(void)` | `pending` |
| `004048c0` | `FUN_004048c0` | `undefined4 * FUN_004048c0(undefined4 * param_1)` | `pending` |
| `004049ec` | `FUN_004049ec` | `undefined FUN_004049ec(void)` | `pending` |
| `00404a04` | `FUN_00404a04` | `undefined FUN_00404a04(void)` | `pending` |
| `00404a30` | `FUN_00404a30` | `undefined FUN_00404a30(void)` | `pending` |
| `00404a40` | `FUN_00404a40` | `undefined FUN_00404a40(void)` | `pending` |
| `00404a8e` | `FUN_00404a8e` | `undefined FUN_00404a8e(void)` | `pending` |
| `00404aa2` | `FUN_00404aa2` | `undefined FUN_00404aa2(void)` | `pending` |
| `00404c40` | `FUN_00404c40` | `undefined FUN_00404c40(int param_1)` | `pending` |
| `00404c70` | `FUN_00404c70` | `undefined FUN_00404c70(int param_1)` | `pending` |
| `00404ca0` | `FUN_00404ca0` | `bool FUN_00404ca0(void)` | `pending` |
| `00404d76` | `FUN_00404d76` | `undefined FUN_00404d76(void)` | `pending` |
| `00404d80` | `FUN_00404d80` | `undefined FUN_00404d80(void)` | `pending` |
| `00404eaf` | `FUN_00404eaf` | `undefined FUN_00404eaf(void)` | `pending` |
| `00404ec0` | `FUN_00404ec0` | `undefined FUN_00404ec0(undefined4 * param_1)` | `pending` |
| `00404f07` | `FUN_00404f07` | `undefined FUN_00404f07(void)` | `pending` |
| `00404fe0` | `FUN_00404fe0` | `undefined4 * FUN_00404fe0(undefined4 * param_1)` | `pending` |
| `004055a0` | `FUN_004055a0` | `undefined4 * FUN_004055a0(void * this, byte param_1)` | `pending` |
| `004055c0` | `FUN_004055c0` | `undefined FUN_004055c0(undefined4 * param_1)` | `pending` |
| `0040568f` | `FUN_0040568f` | `undefined FUN_0040568f(void)` | `pending` |
| `0040569d` | `FUN_0040569d` | `undefined FUN_0040569d(void)` | `pending` |
| `004056ab` | `FUN_004056ab` | `undefined FUN_004056ab(void)` | `pending` |
| `004056b9` | `FUN_004056b9` | `undefined FUN_004056b9(void)` | `pending` |
| `004056c7` | `FUN_004056c7` | `undefined FUN_004056c7(void)` | `pending` |
| `004056d5` | `FUN_004056d5` | `undefined FUN_004056d5(void)` | `pending` |
| `004056e3` | `FUN_004056e3` | `undefined FUN_004056e3(void)` | `pending` |
| `004056f1` | `FUN_004056f1` | `undefined FUN_004056f1(void)` | `pending` |
| `004056ff` | `FUN_004056ff` | `undefined FUN_004056ff(void)` | `pending` |
| `0040570d` | `FUN_0040570d` | `undefined FUN_0040570d(void)` | `pending` |
| `0040571b` | `FUN_0040571b` | `undefined FUN_0040571b(void)` | `pending` |
| `00405729` | `FUN_00405729` | `undefined FUN_00405729(void)` | `pending` |
| `00405737` | `FUN_00405737` | `undefined FUN_00405737(void)` | `pending` |
| `00405745` | `FUN_00405745` | `undefined FUN_00405745(void)` | `pending` |
| `00405753` | `FUN_00405753` | `undefined FUN_00405753(void)` | `pending` |
| `0040576b` | `FUN_0040576b` | `undefined FUN_0040576b(void)` | `pending` |
| `00405810` | `FUN_00405810` | `undefined4 FUN_00405810(int param_1)` | `pending` |
| `00405860` | `FUN_00405860` | `undefined FUN_00405860(int param_1)` | `pending` |
| `00405a90` | `FUN_00405a90` | `bool FUN_00405a90(void * param_1)` | `pending` |
| `00405ac0` | `FUN_00405ac0` | `undefined4 FUN_00405ac0(int param_1)` | `pending` |
| `00405b10` | `FUN_00405b10` | `undefined4 FUN_00405b10(int param_1)` | `pending` |
| `00405b40` | `FUN_00405b40` | `undefined4 FUN_00405b40(void)` | `pending` |
| `00405b50` | `FUN_00405b50` | `undefined4 FUN_00405b50(void * param_1)` | `pending` |
| `00405d1a` | `FUN_00405d1a` | `undefined FUN_00405d1a(void)` | `pending` |
| `00405d2c` | `FUN_00405d2c` | `undefined FUN_00405d2c(void)` | `pending` |
| `00405d34` | `FUN_00405d34` | `undefined4 FUN_00405d34(void)` | `pending` |
| `00405d50` | `FUN_00405d50` | `undefined4 FUN_00405d50(int param_1)` | `pending` |
| `00405f01` | `FUN_00405f01` | `undefined FUN_00405f01(void)` | `pending` |
| `00405f19` | `FUN_00405f19` | `undefined FUN_00405f19(void)` | `pending` |
| `00405f2b` | `FUN_00405f2b` | `undefined FUN_00405f2b(void)` | `pending` |
| `00405f40` | `FUN_00405f40` | `undefined FUN_00405f40(int param_1)` | `pending` |
| `00405f60` | `FUN_00405f60` | `undefined FUN_00405f60(int param_1)` | `pending` |
| `00405fa0` | `FUN_00405fa0` | `undefined FUN_00405fa0(int param_1)` | `pending` |
| `004060e0` | `FUN_004060e0` | `undefined4 FUN_004060e0(void * this, int param_1)` | `pending` |
| `00406120` | `FUN_00406120` | `undefined FUN_00406120(int param_1)` | `pending` |
| `00406190` | `FUN_00406190` | `undefined4 FUN_00406190(void * this, char * param_1)` | `pending` |
| `00406460` | `FUN_00406460` | `undefined FUN_00406460(int param_1)` | `pending` |
| `004065b0` | `FUN_004065b0` | `undefined4 FUN_004065b0(int param_1)` | `pending` |
| `004065c0` | `FUN_004065c0` | `undefined FUN_004065c0(int param_1)` | `pending` |
| `00406ad0` | `FUN_00406ad0` | `undefined4 * FUN_00406ad0(undefined4 * param_1)` | `pending` |
| `00406b30` | `FUN_00406b30` | `undefined4 * FUN_00406b30(undefined4 * param_1)` | `pending` |
| `00406c0f` | `FUN_00406c0f` | `undefined FUN_00406c0f(void)` | `pending` |
| `00406c20` | `FUN_00406c20` | `undefined FUN_00406c20(undefined4 * param_1)` | `pending` |
| `00406c67` | `FUN_00406c67` | `undefined FUN_00406c67(void)` | `pending` |
| `00406c70` | `FUN_00406c70` | `undefined4 * FUN_00406c70(undefined4 * param_1)` | `pending` |
| `00406cd0` | `FUN_00406cd0` | `undefined4 FUN_00406cd0(void * this, byte param_1)` | `pending` |
| `00406cf0` | `FUN_00406cf0` | `undefined4 FUN_00406cf0(void * this, byte param_1)` | `pending` |
| `00406d10` | `FUN_00406d10` | `undefined FUN_00406d10(void)` | `pending` |
| `00406d70` | `FUN_00406d70` | `undefined4 * FUN_00406d70(undefined4 * param_1)` | `pending` |
| `00406f8e` | `FUN_00406f8e` | `undefined FUN_00406f8e(void)` | `pending` |
| `00406f99` | `FUN_00406f99` | `undefined FUN_00406f99(void)` | `pending` |
| `00406fa4` | `FUN_00406fa4` | `undefined FUN_00406fa4(void)` | `pending` |
| `00406faf` | `FUN_00406faf` | `undefined FUN_00406faf(void)` | `pending` |
| `00406fc4` | `FUN_00406fc4` | `undefined FUN_00406fc4(void)` | `pending` |
| `00406fd0` | `FUN_00406fd0` | `undefined FUN_00406fd0(void)` | `pending` |
| `00407036` | `FUN_00407036` | `undefined FUN_00407036(void)` | `pending` |
| `00407041` | `FUN_00407041` | `undefined FUN_00407041(void)` | `pending` |
| `0040704c` | `FUN_0040704c` | `undefined FUN_0040704c(void)` | `pending` |
| `00407057` | `FUN_00407057` | `undefined FUN_00407057(void)` | `pending` |
| `0040706c` | `FUN_0040706c` | `undefined FUN_0040706c(void)` | `pending` |
| `00407130` | `FUN_00407130` | `undefined4 * FUN_00407130(undefined4 * param_1)` | `pending` |
| `004071ca` | `FUN_004071ca` | `undefined FUN_004071ca(void)` | `pending` |
| `00407200` | `FUN_00407200` | `undefined4 * FUN_00407200(void * this, byte param_1)` | `pending` |
| `00407220` | `FUN_00407220` | `undefined FUN_00407220(undefined4 * param_1)` | `pending` |
| `00407286` | `FUN_00407286` | `undefined FUN_00407286(void)` | `pending` |
| `004072a6` | `FUN_004072a6` | `undefined FUN_004072a6(void)` | `pending` |
| `004072f0` | `FUN_004072f0` | `undefined4 FUN_004072f0(int param_1)` | `pending` |
| `004073d0` | `FUN_004073d0` | `undefined4 * FUN_004073d0(undefined4 * param_1)` | `pending` |
| `0040745d` | `FUN_0040745d` | `undefined FUN_0040745d(void)` | `pending` |
| `00407490` | `FUN_00407490` | `undefined4 * FUN_00407490(void * this, byte param_1)` | `pending` |
| `004074b0` | `FUN_004074b0` | `undefined FUN_004074b0(undefined4 * param_1)` | `pending` |
| `00407505` | `FUN_00407505` | `undefined FUN_00407505(void)` | `pending` |
| `0040751a` | `FUN_0040751a` | `undefined FUN_0040751a(void)` | `pending` |
| `00407630` | `FUN_00407630` | `undefined4 * FUN_00407630(undefined4 * param_1)` | `pending` |
| `004076d0` | `FUN_004076d0` | `undefined4 * FUN_004076d0(void * this, byte param_1)` | `pending` |
| `004076f0` | `FUN_004076f0` | `undefined FUN_004076f0(undefined4 * param_1)` | `pending` |
| `0040776a` | `FUN_0040776a` | `undefined FUN_0040776a(void)` | `pending` |
| `00407775` | `FUN_00407775` | `undefined FUN_00407775(void)` | `pending` |
| `0040778a` | `FUN_0040778a` | `undefined FUN_0040778a(void)` | `pending` |
| `004077a0` | `FUN_004077a0` | `undefined FUN_004077a0(void * this, int param_1)` | `pending` |
| `00407940` | `FUN_00407940` | `undefined FUN_00407940(void * this, void * param_1, int * param_2, int param_3)` | `pending` |
| `00407a30` | `FUN_00407a30` | `undefined4 * FUN_00407a30(undefined4 * param_1)` | `pending` |
| `00407fd0` | `FUN_00407fd0` | `undefined4 * FUN_00407fd0(void * this, byte param_1)` | `pending` |
| `00407ff0` | `FUN_00407ff0` | `undefined FUN_00407ff0(undefined4 * param_1)` | `pending` |
| `004080ec` | `FUN_004080ec` | `undefined FUN_004080ec(void)` | `pending` |
| `004080fa` | `FUN_004080fa` | `undefined FUN_004080fa(void)` | `pending` |
| `00408108` | `FUN_00408108` | `undefined FUN_00408108(void)` | `pending` |
| `00408116` | `FUN_00408116` | `undefined FUN_00408116(void)` | `pending` |
| `00408124` | `FUN_00408124` | `undefined FUN_00408124(void)` | `pending` |
| `00408132` | `FUN_00408132` | `undefined FUN_00408132(void)` | `pending` |
| `00408140` | `FUN_00408140` | `undefined FUN_00408140(void)` | `pending` |
| `0040814e` | `FUN_0040814e` | `undefined FUN_0040814e(void)` | `pending` |
| `0040815c` | `FUN_0040815c` | `undefined FUN_0040815c(void)` | `pending` |
| `0040816a` | `FUN_0040816a` | `undefined FUN_0040816a(void)` | `pending` |
| `00408178` | `FUN_00408178` | `undefined FUN_00408178(void)` | `pending` |
| `00408186` | `FUN_00408186` | `undefined FUN_00408186(void)` | `pending` |
| `00408194` | `FUN_00408194` | `undefined FUN_00408194(void)` | `pending` |
| `004081a2` | `FUN_004081a2` | `undefined FUN_004081a2(void)` | `pending` |
| `004081b0` | `FUN_004081b0` | `undefined FUN_004081b0(void)` | `pending` |
| `004081be` | `FUN_004081be` | `undefined FUN_004081be(void)` | `pending` |
| `004081cc` | `FUN_004081cc` | `undefined FUN_004081cc(void)` | `pending` |
| `004081da` | `FUN_004081da` | `undefined FUN_004081da(void)` | `pending` |
| `004081e8` | `FUN_004081e8` | `undefined FUN_004081e8(void)` | `pending` |
| `004081f6` | `FUN_004081f6` | `undefined FUN_004081f6(void)` | `pending` |
| `0040820e` | `FUN_0040820e` | `undefined FUN_0040820e(void)` | `pending` |
| `00408320` | `FUN_00408320` | `undefined4 FUN_00408320(int param_1)` | `pending` |
| `004083a0` | `FUN_004083a0` | `undefined FUN_004083a0(int param_1)` | `pending` |
| `00408420` | `FUN_00408420` | `undefined FUN_00408420(int param_1)` | `pending` |
| `00408480` | `FUN_00408480` | `undefined FUN_00408480(int param_1)` | `pending` |
| `004084d0` | `FUN_004084d0` | `undefined4 FUN_004084d0(int param_1)` | `pending` |
| `00408570` | `FUN_00408570` | `undefined FUN_00408570(int param_1)` | `pending` |
| `00408650` | `FUN_00408650` | `undefined4 FUN_00408650(int param_1)` | `pending` |
| `004086c0` | `FUN_004086c0` | `bool FUN_004086c0(int param_1)` | `pending` |
| `004086e0` | `FUN_004086e0` | `bool FUN_004086e0(int param_1)` | `pending` |
| `00408700` | `FUN_00408700` | `undefined FUN_00408700(int param_1)` | `pending` |
| `00408720` | `FUN_00408720` | `undefined4 FUN_00408720(void)` | `pending` |
| `00408730` | `FUN_00408730` | `undefined4 FUN_00408730(int param_1)` | `pending` |
| `004087b0` | `FUN_004087b0` | `undefined4 FUN_004087b0(void * this, char * param_1)` | `pending` |
| `00408800` | `FUN_00408800` | `undefined4 FUN_00408800(int param_1)` | `pending` |
| `00408a67` | `FUN_00408a67` | `undefined FUN_00408a67(void)` | `pending` |
| `00408b90` | `FUN_00408b90` | `undefined FUN_00408b90(void * this, int param_1)` | `pending` |
| `00408c10` | `FUN_00408c10` | `undefined4 * FUN_00408c10(undefined4 * param_1)` | `pending` |
| `00408c80` | `FUN_00408c80` | `undefined4 * FUN_00408c80(void * this, byte param_1)` | `pending` |
| `00408ca0` | `FUN_00408ca0` | `undefined FUN_00408ca0(undefined4 * param_1)` | `pending` |
| `00408d3e` | `FUN_00408d3e` | `undefined FUN_00408d3e(void)` | `pending` |
| `00408d50` | `FUN_00408d50` | `undefined4 FUN_00408d50(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00408fe0` | `FUN_00408fe0` | `bool FUN_00408fe0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00409040` | `FUN_00409040` | `bool FUN_00409040(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00409070` | `FUN_00409070` | `bool FUN_00409070(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `004090a0` | `FUN_004090a0` | `undefined FUN_004090a0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `004090e0` | `FUN_004090e0` | `undefined FUN_004090e0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00409130` | `FUN_00409130` | `bool FUN_00409130(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00409180` | `FUN_00409180` | `bool FUN_00409180(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `004091c0` | `FUN_004091c0` | `bool FUN_004091c0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00409200` | `FUN_00409200` | `undefined4 * FUN_00409200(undefined4 * param_1)` | `pending` |
| `004092b0` | `FUN_004092b0` | `undefined4 * FUN_004092b0(void * this, byte param_1)` | `pending` |
| `004092d0` | `FUN_004092d0` | `undefined FUN_004092d0(undefined4 * param_1)` | `pending` |
| `0040932d` | `FUN_0040932d` | `undefined FUN_0040932d(void)` | `pending` |
| `00409340` | `FUN_00409340` | `undefined FUN_00409340(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)` | `pending` |
| `00409490` | `FUN_00409490` | `undefined4 * FUN_00409490(void * this, byte param_1)` | `pending` |
| `004094b0` | `FUN_004094b0` | `undefined FUN_004094b0(void)` | `pending` |
| `004094f1` | `FUN_004094f1` | `undefined FUN_004094f1(void)` | `pending` |
| `00409500` | `FUN_00409500` | `undefined4 * FUN_00409500(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00409600` | `FUN_00409600` | `undefined FUN_00409600(undefined4 * param_1)` | `pending` |
| `0040966c` | `FUN_0040966c` | `undefined FUN_0040966c(void)` | `pending` |
| `0040967a` | `FUN_0040967a` | `undefined FUN_0040967a(void)` | `pending` |
| `00409688` | `FUN_00409688` | `undefined FUN_00409688(void)` | `pending` |
| `00409696` | `FUN_00409696` | `undefined FUN_00409696(void)` | `pending` |
| `004096ae` | `FUN_004096ae` | `undefined FUN_004096ae(void)` | `pending` |
| `004096c0` | `FUN_004096c0` | `undefined FUN_004096c0(void * this, undefined4 param_1)` | `pending` |
| `00409720` | `FUN_00409720` | `undefined4 FUN_00409720(void * this, undefined4 param_1)` | `pending` |
| `00409780` | `FUN_00409780` | `undefined4 FUN_00409780(int param_1)` | `pending` |
| `004097d0` | `FUN_004097d0` | `undefined FUN_004097d0(int * param_1)` | `pending` |
| `004098d0` | `FUN_004098d0` | `undefined FUN_004098d0(int * param_1)` | `pending` |
| `00409950` | `FUN_00409950` | `undefined4 FUN_00409950(int param_1)` | `pending` |
| `00409ba0` | `FUN_00409ba0` | `undefined4 FUN_00409ba0(void * param_1)` | `pending` |
| `00409c30` | `FUN_00409c30` | `undefined FUN_00409c30(void * param_1)` | `pending` |
| `00409d50` | `FUN_00409d50` | `int FUN_00409d50(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00409dd0` | `FUN_00409dd0` | `undefined4 FUN_00409dd0(void * this, int param_1)` | `pending` |
| `00409e20` | `FUN_00409e20` | `undefined4 FUN_00409e20(int param_1)` | `pending` |
| `00409e30` | `FUN_00409e30` | `undefined FUN_00409e30(void * this, int param_1)` | `pending` |
| `00409e50` | `FUN_00409e50` | `bool FUN_00409e50(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00409ed0` | `FUN_00409ed0` | `undefined4 FUN_00409ed0(void * this, char * param_1)` | `pending` |
| `00409f90` | `FUN_00409f90` | `undefined4 FUN_00409f90(void * this, undefined4 param_1, int param_2)` | `pending` |
| `0040a33f` | `FUN_0040a33f` | `undefined FUN_0040a33f(void)` | `pending` |
| `0040a3a0` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040a480` | `FUN_0040a480` | `undefined4 * FUN_0040a480(undefined4 * param_1)` | `pending` |
| `0040a580` | `FUN_0040a580` | `undefined4 * FUN_0040a580(void * this, byte param_1)` | `pending` |
| `0040a5a0` | `FUN_0040a5a0` | `undefined FUN_0040a5a0(undefined4 * param_1)` | `pending` |
| `0040a628` | `FUN_0040a628` | `undefined FUN_0040a628(void)` | `pending` |
| `0040a636` | `FUN_0040a636` | `undefined FUN_0040a636(void)` | `pending` |
| `0040a644` | `FUN_0040a644` | `undefined FUN_0040a644(void)` | `pending` |
| `0040a652` | `FUN_0040a652` | `undefined FUN_0040a652(void)` | `pending` |
| `0040a66a` | `FUN_0040a66a` | `undefined FUN_0040a66a(void)` | `pending` |
| `0040a6a0` | `FUN_0040a6a0` | `int FUN_0040a6a0(int param_1)` | `pending` |
| `0040a7d0` | `FUN_0040a7d0` | `undefined4 * FUN_0040a7d0(undefined4 * param_1)` | `pending` |
| `0040a840` | `FUN_0040a840` | `undefined4 * FUN_0040a840(void * this, byte param_1)` | `pending` |
| `0040a860` | `FUN_0040a860` | `undefined FUN_0040a860(undefined4 * param_1)` | `pending` |
| `0040a8be` | `FUN_0040a8be` | `undefined FUN_0040a8be(void)` | `pending` |
| `0040a8d0` | `FUN_0040a8d0` | `undefined4 * FUN_0040a8d0(undefined4 * param_1)` | `pending` |
| `0040a8f0` | `FUN_0040a8f0` | `undefined4 * FUN_0040a8f0(undefined4 * param_1)` | `pending` |
| `0040aac0` | `FUN_0040aac0` | `undefined4 * FUN_0040aac0(void * this, byte param_1)` | `pending` |
| `0040aae0` | `FUN_0040aae0` | `undefined FUN_0040aae0(undefined4 * param_1)` | `pending` |
| `0040ab58` | `FUN_0040ab58` | `undefined FUN_0040ab58(void)` | `pending` |
| `0040ab66` | `FUN_0040ab66` | `undefined FUN_0040ab66(void)` | `pending` |
| `0040ab7e` | `FUN_0040ab7e` | `undefined FUN_0040ab7e(void)` | `pending` |
| `0040ab90` | `FUN_0040ab90` | `undefined * FUN_0040ab90(void)` | `pending` |
| `0040abb0` | `FUN_0040abb0` | `undefined4 * FUN_0040abb0(void * this, undefined4 param_1)` | `pending` |
| `0040b054` | `FUN_0040b054` | `undefined FUN_0040b054(void)` | `pending` |
| `0040b060` | `FUN_0040b060` | `int FUN_0040b060(void * this, int param_1)` | `pending` |
| `0040b170` | `FUN_0040b170` | `undefined FUN_0040b170(void * param_1)` | `pending` |
| `0040b1a0` | `FUN_0040b1a0` | `undefined FUN_0040b1a0(int param_1)` | `pending` |
| `0040b1f0` | `FUN_0040b1f0` | `undefined FUN_0040b1f0(void * param_1)` | `pending` |
| `0040b2f0` | `FUN_0040b2f0` | `undefined FUN_0040b2f0(void * this, int param_1)` | `pending` |
| `0040b350` | `FUN_0040b350` | `undefined FUN_0040b350(void * this, int * param_1)` | `pending` |
| `0040b3d0` | `FUN_0040b3d0` | `undefined FUN_0040b3d0(void * this, int param_1)` | `pending` |
| `0040b400` | `FUN_0040b400` | `undefined4 FUN_0040b400(void * param_1)` | `pending` |
| `0040b470` | `FUN_0040b470` | `undefined4 FUN_0040b470(void * this, int param_1)` | `pending` |
| `0040b4c0` | `FUN_0040b4c0` | `undefined4 FUN_0040b4c0(void * this, int param_1)` | `pending` |
| `0040b5c0` | `FUN_0040b5c0` | `undefined4 FUN_0040b5c0(void)` | `pending` |
| `0040b64e` | `FUN_0040b64e` | `undefined FUN_0040b64e(void)` | `pending` |
| `0040b660` | `FUN_0040b660` | `undefined4 * FUN_0040b660(void * this, int param_1)` | `pending` |
| `0040b710` | `FUN_0040b710` | `byte FUN_0040b710(void * this, int param_1)` | `pending` |
| `0040b740` | `FUN_0040b740` | `uint FUN_0040b740(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040b8b9` | `FUN_0040b8b9` | `undefined FUN_0040b8b9(void)` | `pending` |
| `0040b8d0` | `FUN_0040b8d0` | `undefined4 FUN_0040b8d0(void * this, int param_1, int * param_2)` | `pending` |
| `0040b950` | `FUN_0040b950` | `undefined4 FUN_0040b950(void * this, int param_1, int param_2)` | `pending` |
| `0040bab0` | `FUN_0040bab0` | `undefined4 * FUN_0040bab0(undefined4 * param_1)` | `pending` |
| `0040bbf0` | `FUN_0040bbf0` | `undefined4 * FUN_0040bbf0(void * this, byte param_1)` | `pending` |
| `0040bc10` | `FUN_0040bc10` | `undefined FUN_0040bc10(undefined4 * param_1)` | `pending` |
| `0040bc85` | `FUN_0040bc85` | `undefined FUN_0040bc85(void)` | `pending` |
| `0040bc93` | `FUN_0040bc93` | `undefined FUN_0040bc93(void)` | `pending` |
| `0040bca1` | `FUN_0040bca1` | `undefined FUN_0040bca1(void)` | `pending` |
| `0040bcaf` | `FUN_0040bcaf` | `undefined FUN_0040bcaf(void)` | `pending` |
| `0040bcc7` | `FUN_0040bcc7` | `undefined FUN_0040bcc7(void)` | `pending` |
| `0040bcdf` | `FUN_0040bcdf` | `undefined FUN_0040bcdf(void)` | `pending` |
| `0040bd10` | `FUN_0040bd10` | `int FUN_0040bd10(int param_1)` | `pending` |
| `0040bec0` | `FUN_0040bec0` | `undefined4 FUN_0040bec0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `0040bf20` | `FUN_0040bf20` | `undefined4 FUN_0040bf20(int param_1)` | `pending` |
| `0040c2da` | `FUN_0040c2da` | `undefined FUN_0040c2da(void)` | `pending` |
| `0040c2e2` | `FUN_0040c2e2` | `undefined FUN_0040c2e2(void)` | `pending` |
| `0040c2ea` | `FUN_0040c2ea` | `undefined FUN_0040c2ea(void)` | `pending` |
| `0040c2f2` | `FUN_0040c2f2` | `undefined FUN_0040c2f2(void)` | `pending` |
| `0040c2fa` | `FUN_0040c2fa` | `undefined FUN_0040c2fa(void)` | `pending` |
| `0040c302` | `FUN_0040c302` | `undefined FUN_0040c302(void)` | `pending` |
| `0040c30a` | `FUN_0040c30a` | `undefined FUN_0040c30a(void)` | `pending` |
| `0040c312` | `FUN_0040c312` | `undefined FUN_0040c312(void)` | `pending` |
| `0040c31a` | `FUN_0040c31a` | `undefined FUN_0040c31a(void)` | `pending` |
| `0040c32c` | `FUN_0040c32c` | `undefined FUN_0040c32c(void)` | `pending` |
| `0040c340` | `FUN_0040c340` | `undefined FUN_0040c340(char * param_1, undefined1 * param_2)` | `pending` |
| `0040c450` | `FUN_0040c450` | `undefined4 * FUN_0040c450(undefined4 * param_1)` | `pending` |
| `0040c4e0` | `FUN_0040c4e0` | `undefined4 * FUN_0040c4e0(void * this, byte param_1)` | `pending` |
| `0040c500` | `FUN_0040c500` | `undefined FUN_0040c500(undefined4 * param_1)` | `pending` |
| `0040c55d` | `FUN_0040c55d` | `undefined FUN_0040c55d(void)` | `pending` |
| `0040c570` | `FUN_0040c570` | `undefined4 FUN_0040c570(void * this, int param_1)` | `pending` |
| `0040c6df` | `FUN_0040c6df` | `undefined FUN_0040c6df(void)` | `pending` |
| `0040c6f0` | `FUN_0040c6f0` | `undefined FUN_0040c6f0(undefined4 * param_1)` | `pending` |
| `0040c737` | `FUN_0040c737` | `undefined FUN_0040c737(void)` | `pending` |
| `0040c740` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `0040c746` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `0040c74c` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `0040c758` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0040c75e` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `0040c764` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0040c76a` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `0040c770` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `0040c782` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `0040c788` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `0040c78e` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0040c794` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `0040c79a` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `0040c7a0` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0040c7a6` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `0040c7ac` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0040c7b2` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0040c7b8` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `0040c7be` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0040c7c4` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `0040c7ca` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `0040c80c` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `0040c8d2` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `0040c8de` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `0040c8e4` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `0040c8ea` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `0040c8f0` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0040c8f6` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `0040c8fc` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `0040c902` | `Ordinal_1067` | `undefined Ordinal_1067()` | `pending` |
| `0040c908` | `Ordinal_2301` | `undefined Ordinal_2301()` | `pending` |
| `0040c90e` | `Ordinal_286` | `undefined Ordinal_286()` | `pending` |
| `0040c914` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `0040c91a` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `0040c920` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040c94a` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0040c950` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `0040c956` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `0040c95c` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0040c962` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `0040c968` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0040c96e` | `Ordinal_1717` | `undefined Ordinal_1717()` | `pending` |
| `0040c974` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0040c97a` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0040c980` | `Ordinal_4993` | `undefined Ordinal_4993()` | `pending` |
| `0040c986` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `0040c98c` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `0040c992` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0040c998` | `Ordinal_817` | `undefined Ordinal_817()` | `pending` |
| `0040c99e` | `Ordinal_481` | `undefined Ordinal_481()` | `pending` |
| `0040c9fe` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `0040ca04` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `0040ca0a` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `0040ca10` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `0040ca16` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0040ca1c` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0040ca22` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `0040ca28` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `0040ca2e` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `0040ca34` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `0040ca3a` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `0040ca40` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0040ca46` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `0040ca4c` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0040ca58` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `0040cad0` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040cad6` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `0040cadc` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `0040cae2` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040cae8` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `0040caee` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `0040caf4` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0040cafa` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `0040cb00` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0040cb06` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `0040cb0c` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `0040cb3c` | `Ordinal_542` | `undefined Ordinal_542()` | `pending` |
| `0040cb42` | `Ordinal_582` | `undefined Ordinal_582()` | `pending` |
| `0040cb48` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `0040cb4e` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `0040cb54` | `Ordinal_1440` | `undefined Ordinal_1440()` | `pending` |
| `0040cb5a` | `Ordinal_836` | `undefined Ordinal_836()` | `pending` |
| `0040cb60` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0040cb66` | `Ordinal_3326` | `undefined Ordinal_3326()` | `pending` |
| `0040cb72` | `Ordinal_1449` | `undefined Ordinal_1449()` | `pending` |
| `0040cb9c` | `Ordinal_2327` | `undefined Ordinal_2327()` | `pending` |
| `0040cba8` | `Ordinal_2473` | `undefined Ordinal_2473()` | `pending` |
| `0040cbae` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `0040cbb4` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0040cbba` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `0040cbc0` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `0040cbc6` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `0040cbcc` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `0040cbd2` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `0040cbd8` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040cbde` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `0040cbe4` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `0040cbea` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `0040cc02` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0040cc08` | `Ordinal_569` | `undefined Ordinal_569()` | `pending` |
| `0040cc0e` | `Ordinal_2106` | `undefined Ordinal_2106()` | `pending` |
| `0040cc14` | `Ordinal_5125` | `undefined Ordinal_5125()` | `pending` |
| `0040cc1a` | `Ordinal_5569` | `undefined Ordinal_5569()` | `pending` |
| `0040cc20` | `Ordinal_5188` | `undefined Ordinal_5188()` | `pending` |
| `0040cc26` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `0040cc2c` | `Ordinal_5207` | `undefined Ordinal_5207()` | `pending` |
| `0040cc32` | `Ordinal_1425` | `undefined Ordinal_1425()` | `pending` |
| `0040cc38` | `Ordinal_314` | `undefined Ordinal_314()` | `pending` |
| `0040cc44` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `0040cc50` | `FUN_0040cc50` | `undefined FUN_0040cc50(_onexit_t param_1)` | `pending` |
| `0040ccf0` | `FUN_0040ccf0` | `int FUN_0040ccf0(_onexit_t param_1)` | `pending` |
| `0040cd10` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040cd80` | `FUN_0040cd80` | `undefined FUN_0040cd80(void)` | `pending` |
| `0040cda0` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `0040ce20` | `FUN_0040ce20` | `undefined4 FUN_0040ce20(undefined4 * param_1)` | `pending` |
| `0040ce40` | ``eh_vector_constructor_iterator'` | `void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)` | `pending` |
| `0040ceb0` | `FUN_0040ceb0` | `undefined FUN_0040ceb0(void)` | `pending` |
| `0040ced0` | `entry` | `undefined entry(void)` | `pending` |
| `0040d072` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040d07e` | `terminate` | `void terminate(void)` | `pending` |
| `0040d084` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `0040d08a` | `initterm` | `undefined initterm()` | `pending` |
| `0040d090` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `0040d0c0` | `FUN_0040d0c0` | `undefined FUN_0040d0c0(void)` | `pending` |
| `0040d0c2` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `0040d0c8` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `0040d0e1` | `FUN_0040d0e1` | `undefined4 FUN_0040d0e1(int param_1, undefined4 param_2)` | `pending` |
| `0040d130` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Science_Kit.exe

Remaining: **610** of **610** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010d0` | `FUN_004010d0` | `undefined4 * FUN_004010d0(undefined4 * param_1)` | `pending` |
| `00401880` | `FUN_00401880` | `undefined4 * FUN_00401880(void * this, byte param_1)` | `pending` |
| `004018a0` | `FUN_004018a0` | `undefined FUN_004018a0(undefined4 * param_1)` | `pending` |
| `004019ed` | `FUN_004019ed` | `undefined FUN_004019ed(void)` | `pending` |
| `004019fb` | `FUN_004019fb` | `undefined FUN_004019fb(void)` | `pending` |
| `00401a09` | `FUN_00401a09` | `undefined FUN_00401a09(void)` | `pending` |
| `00401a17` | `FUN_00401a17` | `undefined FUN_00401a17(void)` | `pending` |
| `00401a25` | `FUN_00401a25` | `undefined FUN_00401a25(void)` | `pending` |
| `00401a33` | `FUN_00401a33` | `undefined FUN_00401a33(void)` | `pending` |
| `00401a41` | `FUN_00401a41` | `undefined FUN_00401a41(void)` | `pending` |
| `00401a4f` | `FUN_00401a4f` | `undefined FUN_00401a4f(void)` | `pending` |
| `00401a5d` | `FUN_00401a5d` | `undefined FUN_00401a5d(void)` | `pending` |
| `00401a6b` | `FUN_00401a6b` | `undefined FUN_00401a6b(void)` | `pending` |
| `00401a79` | `FUN_00401a79` | `undefined FUN_00401a79(void)` | `pending` |
| `00401a87` | `FUN_00401a87` | `undefined FUN_00401a87(void)` | `pending` |
| `00401a95` | `FUN_00401a95` | `undefined FUN_00401a95(void)` | `pending` |
| `00401aa3` | `FUN_00401aa3` | `undefined FUN_00401aa3(void)` | `pending` |
| `00401ab1` | `FUN_00401ab1` | `undefined FUN_00401ab1(void)` | `pending` |
| `00401abf` | `FUN_00401abf` | `undefined FUN_00401abf(void)` | `pending` |
| `00401acd` | `FUN_00401acd` | `undefined FUN_00401acd(void)` | `pending` |
| `00401adb` | `FUN_00401adb` | `undefined FUN_00401adb(void)` | `pending` |
| `00401ae9` | `FUN_00401ae9` | `undefined FUN_00401ae9(void)` | `pending` |
| `00401af7` | `FUN_00401af7` | `undefined FUN_00401af7(void)` | `pending` |
| `00401b05` | `FUN_00401b05` | `undefined FUN_00401b05(void)` | `pending` |
| `00401b13` | `FUN_00401b13` | `undefined FUN_00401b13(void)` | `pending` |
| `00401b21` | `FUN_00401b21` | `undefined FUN_00401b21(void)` | `pending` |
| `00401b2f` | `FUN_00401b2f` | `undefined FUN_00401b2f(void)` | `pending` |
| `00401b3d` | `FUN_00401b3d` | `undefined FUN_00401b3d(void)` | `pending` |
| `00401b4b` | `FUN_00401b4b` | `undefined FUN_00401b4b(void)` | `pending` |
| `00401b59` | `FUN_00401b59` | `undefined FUN_00401b59(void)` | `pending` |
| `00401b67` | `FUN_00401b67` | `undefined FUN_00401b67(void)` | `pending` |
| `00401b75` | `FUN_00401b75` | `undefined FUN_00401b75(void)` | `pending` |
| `00401b8d` | `FUN_00401b8d` | `undefined FUN_00401b8d(void)` | `pending` |
| `00401d90` | `FUN_00401d90` | `int FUN_00401d90(int param_1)` | `pending` |
| `00401ea0` | `FUN_00401ea0` | `undefined4 FUN_00401ea0(int param_1)` | `pending` |
| `00401fe0` | `FUN_00401fe0` | `undefined4 FUN_00401fe0(int param_1)` | `pending` |
| `00402020` | `FUN_00402020` | `bool FUN_00402020(int param_1)` | `pending` |
| `00402060` | `FUN_00402060` | `undefined4 FUN_00402060(void)` | `pending` |
| `00402070` | `FUN_00402070` | `undefined4 FUN_00402070(void)` | `pending` |
| `004022a0` | `FUN_004022a0` | `undefined4 FUN_004022a0(int param_1)` | `pending` |
| `004023d0` | `FUN_004023d0` | `undefined4 FUN_004023d0(int param_1)` | `pending` |
| `00402510` | `FUN_00402510` | `undefined4 FUN_00402510(int param_1)` | `pending` |
| `00402570` | `FUN_00402570` | `undefined FUN_00402570(int param_1)` | `pending` |
| `00402590` | `FUN_00402590` | `undefined FUN_00402590(int param_1)` | `pending` |
| `004025c0` | `FUN_004025c0` | `undefined4 FUN_004025c0(int param_1)` | `pending` |
| `004028a0` | `FUN_004028a0` | `undefined FUN_004028a0(undefined4 * param_1)` | `pending` |
| `004028e7` | `FUN_004028e7` | `undefined FUN_004028e7(void)` | `pending` |
| `004028f0` | `FUN_004028f0` | `undefined FUN_004028f0(undefined4 * param_1)` | `pending` |
| `0040297f` | `FUN_0040297f` | `undefined FUN_0040297f(void)` | `pending` |
| `004029f2` | `FUN_004029f2` | `undefined FUN_004029f2(void)` | `pending` |
| `00402a07` | `FUN_00402a07` | `undefined FUN_00402a07(void)` | `pending` |
| `00402a10` | `FUN_00402a10` | `undefined FUN_00402a10(undefined4 * param_1)` | `pending` |
| `00402a5a` | `FUN_00402a5a` | `undefined FUN_00402a5a(void)` | `pending` |
| `00402a6f` | `FUN_00402a6f` | `undefined FUN_00402a6f(void)` | `pending` |
| `00402a80` | `FUN_00402a80` | `undefined4 * FUN_00402a80(undefined4 * param_1)` | `pending` |
| `00402b4b` | `FUN_00402b4b` | `undefined FUN_00402b4b(void)` | `pending` |
| `00402b60` | `FUN_00402b60` | `undefined FUN_00402b60(undefined4 * param_1)` | `pending` |
| `00402bb3` | `FUN_00402bb3` | `undefined FUN_00402bb3(void)` | `pending` |
| `00402c1f` | `FUN_00402c1f` | `undefined FUN_00402c1f(void)` | `pending` |
| `00402c30` | `FUN_00402c30` | `undefined FUN_00402c30(undefined4 * param_1)` | `pending` |
| `00402c77` | `FUN_00402c77` | `undefined FUN_00402c77(void)` | `pending` |
| `00402cb0` | `FUN_00402cb0` | `undefined4 FUN_00402cb0(void * this, byte param_1)` | `pending` |
| `00402cd0` | `FUN_00402cd0` | `undefined4 FUN_00402cd0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00402d00` | `FUN_00402d00` | `undefined4 FUN_00402d00(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00402d30` | `FUN_00402d30` | `undefined4 FUN_00402d30(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00402d60` | `FUN_00402d60` | `undefined4 FUN_00402d60(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00402d90` | `FUN_00402d90` | `undefined4 FUN_00402d90(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00402dc0` | `FUN_00402dc0` | `int FUN_00402dc0(char * param_1, int * param_2)` | `pending` |
| `00402e80` | `FUN_00402e80` | `undefined4 * FUN_00402e80(void * this, byte param_1)` | `pending` |
| `00402ea0` | `FUN_00402ea0` | `undefined4 * FUN_00402ea0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00402fb0` | `FUN_00402fb0` | `undefined FUN_00402fb0(undefined4 * param_1)` | `pending` |
| `00403025` | `FUN_00403025` | `undefined FUN_00403025(void)` | `pending` |
| `00403033` | `FUN_00403033` | `undefined FUN_00403033(void)` | `pending` |
| `00403041` | `FUN_00403041` | `undefined FUN_00403041(void)` | `pending` |
| `0040304f` | `FUN_0040304f` | `undefined FUN_0040304f(void)` | `pending` |
| `0040305d` | `FUN_0040305d` | `undefined FUN_0040305d(void)` | `pending` |
| `00403075` | `FUN_00403075` | `undefined FUN_00403075(void)` | `pending` |
| `00403080` | `FUN_00403080` | `undefined FUN_00403080(void * this, undefined4 param_1)` | `pending` |
| `004030e0` | `FUN_004030e0` | `undefined4 FUN_004030e0(int param_1)` | `pending` |
| `0040334d` | `FUN_0040334d` | `undefined FUN_0040334d(void)` | `pending` |
| `00403355` | `FUN_00403355` | `undefined FUN_00403355(void)` | `pending` |
| `0040335d` | `FUN_0040335d` | `undefined FUN_0040335d(void)` | `pending` |
| `0040336f` | `FUN_0040336f` | `undefined FUN_0040336f(void)` | `pending` |
| `00403405` | `FUN_00403405` | `undefined FUN_00403405(void)` | `pending` |
| `00403417` | `FUN_00403417` | `undefined FUN_00403417(void)` | `pending` |
| `00403420` | `FUN_00403420` | `undefined FUN_00403420(int param_1)` | `pending` |
| `00403450` | `FUN_00403450` | `undefined FUN_00403450(int param_1)` | `pending` |
| `00403490` | `thunk_FUN_00408190` | `undefined4 thunk_FUN_00408190(int param_1)` | `pending` |
| `004034c0` | `FUN_004034c0` | `undefined FUN_004034c0(int param_1)` | `pending` |
| `00403510` | `FUN_00403510` | `undefined FUN_00403510(void * this, int param_1)` | `pending` |
| `00403660` | `FUN_00403660` | `undefined4 * FUN_00403660(undefined4 * param_1)` | `pending` |
| `004036d0` | `FUN_004036d0` | `undefined4 * FUN_004036d0(void * this, byte param_1)` | `pending` |
| `004036f0` | `FUN_004036f0` | `undefined FUN_004036f0(undefined4 * param_1)` | `pending` |
| `0040375e` | `FUN_0040375e` | `undefined FUN_0040375e(void)` | `pending` |
| `00403770` | `FUN_00403770` | `undefined FUN_00403770(void * this, int param_1, int param_2)` | `pending` |
| `00403870` | `FUN_00403870` | `int FUN_00403870(void * this, int param_1, int param_2)` | `pending` |
| `004038a0` | `FUN_004038a0` | `undefined FUN_004038a0(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `00403aa0` | `FUN_00403aa0` | `undefined4 * FUN_00403aa0(undefined4 * param_1)` | `pending` |
| `00403ba0` | `FUN_00403ba0` | `undefined4 * FUN_00403ba0(void * this, byte param_1)` | `pending` |
| `00403bc0` | `FUN_00403bc0` | `undefined FUN_00403bc0(undefined4 * param_1)` | `pending` |
| `00403c2c` | `FUN_00403c2c` | `undefined FUN_00403c2c(void)` | `pending` |
| `00403c3a` | `FUN_00403c3a` | `undefined FUN_00403c3a(void)` | `pending` |
| `00403c48` | `FUN_00403c48` | `undefined FUN_00403c48(void)` | `pending` |
| `00403c56` | `FUN_00403c56` | `undefined FUN_00403c56(void)` | `pending` |
| `00403c6e` | `FUN_00403c6e` | `undefined FUN_00403c6e(void)` | `pending` |
| `00403ca0` | `FUN_00403ca0` | `undefined4 FUN_00403ca0(int param_1)` | `pending` |
| `00403cf0` | `FUN_00403cf0` | `undefined FUN_00403cf0(void)` | `pending` |
| `00403dc0` | `FUN_00403dc0` | `undefined4 FUN_00403dc0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00403e90` | `FUN_00403e90` | `undefined4 * FUN_00403e90(undefined4 * param_1)` | `pending` |
| `00403fbc` | `FUN_00403fbc` | `undefined FUN_00403fbc(void)` | `pending` |
| `00403fd4` | `FUN_00403fd4` | `undefined FUN_00403fd4(void)` | `pending` |
| `00404000` | `FUN_00404000` | `undefined FUN_00404000(void)` | `pending` |
| `00404010` | `FUN_00404010` | `undefined FUN_00404010(void)` | `pending` |
| `0040405e` | `FUN_0040405e` | `undefined FUN_0040405e(void)` | `pending` |
| `00404072` | `FUN_00404072` | `undefined FUN_00404072(void)` | `pending` |
| `00404270` | `FUN_00404270` | `bool FUN_00404270(void)` | `pending` |
| `00404346` | `FUN_00404346` | `undefined FUN_00404346(void)` | `pending` |
| `00404350` | `FUN_00404350` | `undefined FUN_00404350(void)` | `pending` |
| `0040447f` | `FUN_0040447f` | `undefined FUN_0040447f(void)` | `pending` |
| `00404490` | `FUN_00404490` | `undefined FUN_00404490(undefined4 * param_1)` | `pending` |
| `004044d7` | `FUN_004044d7` | `undefined FUN_004044d7(void)` | `pending` |
| `00404520` | `FUN_00404520` | `undefined4 * FUN_00404520(undefined4 * param_1)` | `pending` |
| `00404590` | `FUN_00404590` | `undefined4 * FUN_00404590(void * this, byte param_1)` | `pending` |
| `004045b0` | `FUN_004045b0` | `undefined FUN_004045b0(undefined4 * param_1)` | `pending` |
| `0040464e` | `FUN_0040464e` | `undefined FUN_0040464e(void)` | `pending` |
| `00404660` | `FUN_00404660` | `undefined4 FUN_00404660(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `004048f0` | `FUN_004048f0` | `bool FUN_004048f0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `00404950` | `FUN_00404950` | `uint FUN_00404950(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `004049ea` | `FUN_004049ea` | `undefined FUN_004049ea(void)` | `pending` |
| `00404a00` | `FUN_00404a00` | `bool FUN_00404a00(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404a30` | `FUN_00404a30` | `uint FUN_00404a30(void * this, int param_1, undefined4 param_2, LPBYTE param_3)` | `pending` |
| `00404acb` | `FUN_00404acb` | `undefined FUN_00404acb(void)` | `pending` |
| `00404ae0` | `FUN_00404ae0` | `bool FUN_00404ae0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00404b10` | `FUN_00404b10` | `undefined FUN_00404b10(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `00404b80` | `FUN_00404b80` | `undefined FUN_00404b80(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00404bc0` | `FUN_00404bc0` | `undefined FUN_00404bc0(void * this, int param_1, undefined4 param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00404c7f` | `FUN_00404c7f` | `undefined FUN_00404c7f(void)` | `pending` |
| `00404c90` | `FUN_00404c90` | `undefined FUN_00404c90(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00404ce0` | `FUN_00404ce0` | `bool FUN_00404ce0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00404d30` | `FUN_00404d30` | `bool FUN_00404d30(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00404d70` | `FUN_00404d70` | `bool FUN_00404d70(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00404e00` | `FUN_00404e00` | `undefined FUN_00404e00(void)` | `pending` |
| `00404e10` | `FUN_00404e10` | `bool FUN_00404e10(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00404e50` | `FUN_00404e50` | `undefined4 * FUN_00404e50(undefined4 * param_1)` | `pending` |
| `00404ec0` | `FUN_00404ec0` | `undefined4 * FUN_00404ec0(void * this, byte param_1)` | `pending` |
| `00404ee0` | `FUN_00404ee0` | `undefined FUN_00404ee0(undefined4 * param_1)` | `pending` |
| `00404f3e` | `FUN_00404f3e` | `undefined FUN_00404f3e(void)` | `pending` |
| `00404f50` | `FUN_00404f50` | `undefined4 * FUN_00404f50(undefined4 * param_1)` | `pending` |
| `00404f70` | `FUN_00404f70` | `undefined4 * FUN_00404f70(undefined4 * param_1)` | `pending` |
| `00405140` | `FUN_00405140` | `undefined4 * FUN_00405140(void * this, byte param_1)` | `pending` |
| `00405160` | `FUN_00405160` | `undefined FUN_00405160(undefined4 * param_1)` | `pending` |
| `004051d8` | `FUN_004051d8` | `undefined FUN_004051d8(void)` | `pending` |
| `004051e6` | `FUN_004051e6` | `undefined FUN_004051e6(void)` | `pending` |
| `004051fe` | `FUN_004051fe` | `undefined FUN_004051fe(void)` | `pending` |
| `00405210` | `FUN_00405210` | `undefined * FUN_00405210(void)` | `pending` |
| `00405230` | `FUN_00405230` | `undefined4 * FUN_00405230(void * this, undefined4 param_1)` | `pending` |
| `004056d4` | `FUN_004056d4` | `undefined FUN_004056d4(void)` | `pending` |
| `004056e0` | `FUN_004056e0` | `int FUN_004056e0(void * this, int param_1)` | `pending` |
| `004057f0` | `FUN_004057f0` | `undefined FUN_004057f0(void * param_1)` | `pending` |
| `00405820` | `FUN_00405820` | `undefined FUN_00405820(int param_1)` | `pending` |
| `00405870` | `FUN_00405870` | `undefined FUN_00405870(void * param_1)` | `pending` |
| `00405970` | `FUN_00405970` | `undefined FUN_00405970(void * this, int param_1)` | `pending` |
| `004059d0` | `FUN_004059d0` | `undefined FUN_004059d0(void * this, int * param_1)` | `pending` |
| `00405a50` | `FUN_00405a50` | `undefined FUN_00405a50(void * this, int param_1)` | `pending` |
| `00405a80` | `FUN_00405a80` | `undefined4 FUN_00405a80(void * param_1)` | `pending` |
| `00405af0` | `FUN_00405af0` | `undefined4 FUN_00405af0(void * this, int param_1)` | `pending` |
| `00405b40` | `FUN_00405b40` | `undefined4 FUN_00405b40(void * this, int param_1)` | `pending` |
| `00405c40` | `FUN_00405c40` | `undefined4 FUN_00405c40(void)` | `pending` |
| `00405cce` | `FUN_00405cce` | `undefined FUN_00405cce(void)` | `pending` |
| `00405ce0` | `FUN_00405ce0` | `undefined4 * FUN_00405ce0(void * this, int param_1)` | `pending` |
| `00405d90` | `FUN_00405d90` | `byte FUN_00405d90(void * this, int param_1)` | `pending` |
| `00405dc0` | `FUN_00405dc0` | `uint FUN_00405dc0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00405f39` | `FUN_00405f39` | `undefined FUN_00405f39(void)` | `pending` |
| `00405f50` | `FUN_00405f50` | `undefined4 FUN_00405f50(void * this, int param_1, int * param_2)` | `pending` |
| `00405fd0` | `FUN_00405fd0` | `undefined4 FUN_00405fd0(void * this, int param_1, int param_2)` | `pending` |
| `00406130` | `FUN_00406130` | `undefined4 * FUN_00406130(undefined4 * param_1)` | `pending` |
| `004063c0` | `FUN_004063c0` | `undefined4 * FUN_004063c0(void * this, byte param_1)` | `pending` |
| `004063e0` | `FUN_004063e0` | `undefined FUN_004063e0(undefined4 * param_1)` | `pending` |
| `00406470` | `FUN_00406470` | `undefined FUN_00406470(void)` | `pending` |
| `0040647e` | `FUN_0040647e` | `undefined FUN_0040647e(void)` | `pending` |
| `0040648c` | `FUN_0040648c` | `undefined FUN_0040648c(void)` | `pending` |
| `0040649a` | `FUN_0040649a` | `undefined FUN_0040649a(void)` | `pending` |
| `004064b2` | `FUN_004064b2` | `undefined FUN_004064b2(void)` | `pending` |
| `004064ca` | `FUN_004064ca` | `undefined FUN_004064ca(void)` | `pending` |
| `004064d8` | `FUN_004064d8` | `undefined FUN_004064d8(void)` | `pending` |
| `004064e6` | `FUN_004064e6` | `undefined FUN_004064e6(void)` | `pending` |
| `004064fe` | `FUN_004064fe` | `undefined FUN_004064fe(void)` | `pending` |
| `00406550` | `FUN_00406550` | `undefined4 FUN_00406550(int param_1)` | `pending` |
| `004067d0` | `FUN_004067d0` | `undefined FUN_004067d0(int param_1)` | `pending` |
| `004067f0` | `FUN_004067f0` | `undefined FUN_004067f0(int param_1)` | `pending` |
| `004068d0` | `FUN_004068d0` | `undefined4 FUN_004068d0(int param_1)` | `pending` |
| `00406950` | `FUN_00406950` | `undefined4 FUN_00406950(int param_1)` | `pending` |
| `004069a0` | `FUN_004069a0` | `undefined4 FUN_004069a0(void)` | `pending` |
| `004069b0` | `FUN_004069b0` | `undefined4 FUN_004069b0(int param_1)` | `pending` |
| `00406b96` | `FUN_00406b96` | `undefined FUN_00406b96(void)` | `pending` |
| `00406b9e` | `FUN_00406b9e` | `undefined FUN_00406b9e(void)` | `pending` |
| `00406bb6` | `FUN_00406bb6` | `undefined FUN_00406bb6(void)` | `pending` |
| `00406bc8` | `FUN_00406bc8` | `undefined FUN_00406bc8(void)` | `pending` |
| `00406bd0` | `FUN_00406bd0` | `undefined4 FUN_00406bd0(void)` | `pending` |
| `00406be0` | `FUN_00406be0` | `undefined FUN_00406be0(void * param_1)` | `pending` |
| `00406bf0` | `FUN_00406bf0` | `undefined4 FUN_00406bf0(void * this, undefined4 param_1)` | `pending` |
| `00406d9d` | `FUN_00406d9d` | `undefined FUN_00406d9d(void)` | `pending` |
| `00406db5` | `FUN_00406db5` | `undefined FUN_00406db5(void)` | `pending` |
| `00406dc7` | `FUN_00406dc7` | `undefined FUN_00406dc7(void)` | `pending` |
| `00406dd0` | `FUN_00406dd0` | `undefined FUN_00406dd0(void * this, int param_1)` | `pending` |
| `00407040` | `FUN_00407040` | `undefined4 FUN_00407040(int param_1)` | `pending` |
| `00407170` | `FUN_00407170` | `undefined4 FUN_00407170(int param_1)` | `pending` |
| `004071f0` | `FUN_004071f0` | `undefined FUN_004071f0(void * param_1)` | `pending` |
| `004074e0` | `FUN_004074e0` | `undefined FUN_004074e0(void * this, undefined4 param_1, undefined4 param_2, int param_3)` | `pending` |
| `00407550` | `FUN_00407550` | `undefined FUN_00407550(int param_1)` | `pending` |
| `004075c0` | `FUN_004075c0` | `undefined4 FUN_004075c0(void * this, byte param_1)` | `pending` |
| `004075e0` | `FUN_004075e0` | `undefined4 FUN_004075e0(void * this, byte param_1)` | `pending` |
| `004076d0` | `FUN_004076d0` | `undefined4 * FUN_004076d0(void * this, byte param_1)` | `pending` |
| `004076f0` | `FUN_004076f0` | `undefined FUN_004076f0(void)` | `pending` |
| `00407731` | `FUN_00407731` | `undefined FUN_00407731(void)` | `pending` |
| `00407740` | `FUN_00407740` | `undefined4 * FUN_00407740(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00407840` | `FUN_00407840` | `undefined FUN_00407840(undefined4 * param_1)` | `pending` |
| `004078ac` | `FUN_004078ac` | `undefined FUN_004078ac(void)` | `pending` |
| `004078ba` | `FUN_004078ba` | `undefined FUN_004078ba(void)` | `pending` |
| `004078c8` | `FUN_004078c8` | `undefined FUN_004078c8(void)` | `pending` |
| `004078d6` | `FUN_004078d6` | `undefined FUN_004078d6(void)` | `pending` |
| `004078ee` | `FUN_004078ee` | `undefined FUN_004078ee(void)` | `pending` |
| `00407900` | `FUN_00407900` | `undefined FUN_00407900(void * this, undefined4 param_1)` | `pending` |
| `00407960` | `FUN_00407960` | `undefined4 FUN_00407960(void * this, undefined4 param_1)` | `pending` |
| `004079c0` | `FUN_004079c0` | `undefined4 FUN_004079c0(int param_1)` | `pending` |
| `00407a10` | `FUN_00407a10` | `undefined FUN_00407a10(int * param_1)` | `pending` |
| `00407b10` | `FUN_00407b10` | `undefined FUN_00407b10(int * param_1)` | `pending` |
| `00407b90` | `FUN_00407b90` | `undefined4 FUN_00407b90(int param_1)` | `pending` |
| `00407de0` | `FUN_00407de0` | `undefined4 FUN_00407de0(void * param_1)` | `pending` |
| `00407e70` | `FUN_00407e70` | `undefined FUN_00407e70(void * param_1)` | `pending` |
| `00407ec0` | `FUN_00407ec0` | `undefined FUN_00407ec0(char * param_1, undefined1 * param_2)` | `pending` |
| `00407f00` | `FUN_00407f00` | `uint FUN_00407f00(byte * param_1)` | `pending` |
| `00407fde` | `FUN_00407fde` | `undefined FUN_00407fde(void)` | `pending` |
| `004080c0` | `FUN_004080c0` | `int FUN_004080c0(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00408140` | `FUN_00408140` | `undefined4 FUN_00408140(void * this, int param_1)` | `pending` |
| `00408190` | `FUN_00408190` | `undefined4 FUN_00408190(int param_1)` | `pending` |
| `004081a0` | `FUN_004081a0` | `undefined FUN_004081a0(void * this, int param_1)` | `pending` |
| `004081c0` | `FUN_004081c0` | `bool FUN_004081c0(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00408240` | `FUN_00408240` | `undefined4 FUN_00408240(void * this, char * param_1)` | `pending` |
| `00408300` | `FUN_00408300` | `undefined4 FUN_00408300(void * this, undefined4 param_1, int param_2)` | `pending` |
| `004086bf` | `FUN_004086bf` | `undefined FUN_004086bf(void)` | `pending` |
| `00408720` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `00408800` | `FUN_00408800` | `undefined4 * FUN_00408800(undefined4 * param_1)` | `pending` |
| `00408920` | `FUN_00408920` | `undefined4 * FUN_00408920(void * this, byte param_1)` | `pending` |
| `00408940` | `FUN_00408940` | `undefined FUN_00408940(undefined4 * param_1)` | `pending` |
| `004089a3` | `FUN_004089a3` | `undefined FUN_004089a3(void)` | `pending` |
| `004089b1` | `FUN_004089b1` | `undefined FUN_004089b1(void)` | `pending` |
| `004089bf` | `FUN_004089bf` | `undefined FUN_004089bf(void)` | `pending` |
| `004089d7` | `FUN_004089d7` | `undefined FUN_004089d7(void)` | `pending` |
| `00408a00` | `FUN_00408a00` | `undefined4 FUN_00408a00(int param_1)` | `pending` |
| `00408bc0` | `FUN_00408bc0` | `undefined FUN_00408bc0(int param_1)` | `pending` |
| `00408ca0` | `FUN_00408ca0` | `undefined4 FUN_00408ca0(int param_1)` | `pending` |
| `00408cf0` | `FUN_00408cf0` | `undefined4 FUN_00408cf0(int param_1)` | `pending` |
| `00408d30` | `FUN_00408d30` | `undefined4 FUN_00408d30(int param_1)` | `pending` |
| `00408db0` | `FUN_00408db0` | `undefined4 FUN_00408db0(int param_1)` | `pending` |
| `00408e10` | `FUN_00408e10` | `undefined4 FUN_00408e10(int param_1)` | `pending` |
| `00408e50` | `FUN_00408e50` | `undefined FUN_00408e50(void * this, int param_1, int param_2, undefined1 param_3)` | `pending` |
| `00408eb0` | `FUN_00408eb0` | `undefined4 FUN_00408eb0(int param_1)` | `pending` |
| `00408ec0` | `FUN_00408ec0` | `undefined4 FUN_00408ec0(int param_1)` | `pending` |
| `00408ed0` | `FUN_00408ed0` | `undefined4 FUN_00408ed0(void)` | `pending` |
| `00408ee0` | `FUN_00408ee0` | `undefined4 FUN_00408ee0(int param_1)` | `pending` |
| `00408f00` | `FUN_00408f00` | `undefined FUN_00408f00(int param_1)` | `pending` |
| `00408f20` | `FUN_00408f20` | `undefined4 FUN_00408f20(void)` | `pending` |
| `00408f30` | `FUN_00408f30` | `undefined4 FUN_00408f30(void * param_1)` | `pending` |
| `00408f70` | `FUN_00408f70` | `undefined FUN_00408f70(void * param_1)` | `pending` |
| `00408fd0` | `FUN_00408fd0` | `undefined4 FUN_00408fd0(int param_1)` | `pending` |
| `00409050` | `FUN_00409050` | `undefined FUN_00409050(int param_1)` | `pending` |
| `00409070` | `FUN_00409070` | `undefined4 FUN_00409070(int param_1)` | `pending` |
| `004091e0` | `FUN_004091e0` | `undefined4 FUN_004091e0(undefined4 param_1)` | `pending` |
| `004092c0` | `FUN_004092c0` | `undefined4 * FUN_004092c0(undefined4 * param_1)` | `pending` |
| `00409d40` | `FUN_00409d40` | `undefined4 * FUN_00409d40(void * this, byte param_1)` | `pending` |
| `00409d60` | `FUN_00409d60` | `undefined FUN_00409d60(undefined4 * param_1)` | `pending` |
| `00409ef5` | `FUN_00409ef5` | `undefined FUN_00409ef5(void)` | `pending` |
| `00409f03` | `FUN_00409f03` | `undefined FUN_00409f03(void)` | `pending` |
| `00409f11` | `FUN_00409f11` | `undefined FUN_00409f11(void)` | `pending` |
| `00409f1f` | `FUN_00409f1f` | `undefined FUN_00409f1f(void)` | `pending` |
| `00409f2d` | `FUN_00409f2d` | `undefined FUN_00409f2d(void)` | `pending` |
| `00409f3b` | `FUN_00409f3b` | `undefined FUN_00409f3b(void)` | `pending` |
| `00409f49` | `FUN_00409f49` | `undefined FUN_00409f49(void)` | `pending` |
| `00409f57` | `FUN_00409f57` | `undefined FUN_00409f57(void)` | `pending` |
| `00409f65` | `FUN_00409f65` | `undefined FUN_00409f65(void)` | `pending` |
| `00409f73` | `FUN_00409f73` | `undefined FUN_00409f73(void)` | `pending` |
| `00409f81` | `FUN_00409f81` | `undefined FUN_00409f81(void)` | `pending` |
| `00409f8f` | `FUN_00409f8f` | `undefined FUN_00409f8f(void)` | `pending` |
| `00409f9d` | `FUN_00409f9d` | `undefined FUN_00409f9d(void)` | `pending` |
| `00409fab` | `FUN_00409fab` | `undefined FUN_00409fab(void)` | `pending` |
| `00409fb9` | `FUN_00409fb9` | `undefined FUN_00409fb9(void)` | `pending` |
| `00409fc7` | `FUN_00409fc7` | `undefined FUN_00409fc7(void)` | `pending` |
| `00409fd5` | `FUN_00409fd5` | `undefined FUN_00409fd5(void)` | `pending` |
| `00409fe3` | `FUN_00409fe3` | `undefined FUN_00409fe3(void)` | `pending` |
| `00409ff1` | `FUN_00409ff1` | `undefined FUN_00409ff1(void)` | `pending` |
| `00409fff` | `FUN_00409fff` | `undefined FUN_00409fff(void)` | `pending` |
| `0040a00d` | `FUN_0040a00d` | `undefined FUN_0040a00d(void)` | `pending` |
| `0040a01b` | `FUN_0040a01b` | `undefined FUN_0040a01b(void)` | `pending` |
| `0040a029` | `FUN_0040a029` | `undefined FUN_0040a029(void)` | `pending` |
| `0040a037` | `FUN_0040a037` | `undefined FUN_0040a037(void)` | `pending` |
| `0040a045` | `FUN_0040a045` | `undefined FUN_0040a045(void)` | `pending` |
| `0040a053` | `FUN_0040a053` | `undefined FUN_0040a053(void)` | `pending` |
| `0040a061` | `FUN_0040a061` | `undefined FUN_0040a061(void)` | `pending` |
| `0040a06f` | `FUN_0040a06f` | `undefined FUN_0040a06f(void)` | `pending` |
| `0040a07d` | `FUN_0040a07d` | `undefined FUN_0040a07d(void)` | `pending` |
| `0040a08b` | `FUN_0040a08b` | `undefined FUN_0040a08b(void)` | `pending` |
| `0040a099` | `FUN_0040a099` | `undefined FUN_0040a099(void)` | `pending` |
| `0040a0a7` | `FUN_0040a0a7` | `undefined FUN_0040a0a7(void)` | `pending` |
| `0040a0b5` | `FUN_0040a0b5` | `undefined FUN_0040a0b5(void)` | `pending` |
| `0040a0c3` | `FUN_0040a0c3` | `undefined FUN_0040a0c3(void)` | `pending` |
| `0040a0d1` | `FUN_0040a0d1` | `undefined FUN_0040a0d1(void)` | `pending` |
| `0040a0df` | `FUN_0040a0df` | `undefined FUN_0040a0df(void)` | `pending` |
| `0040a0ed` | `FUN_0040a0ed` | `undefined FUN_0040a0ed(void)` | `pending` |
| `0040a105` | `FUN_0040a105` | `undefined FUN_0040a105(void)` | `pending` |
| `0040a330` | `FUN_0040a330` | `int FUN_0040a330(int param_1)` | `pending` |
| `0040a3f0` | `FUN_0040a3f0` | `undefined FUN_0040a3f0(int param_1)` | `pending` |
| `0040a440` | `FUN_0040a440` | `undefined FUN_0040a440(int param_1)` | `pending` |
| `0040a550` | `FUN_0040a550` | `undefined FUN_0040a550(int param_1)` | `pending` |
| `0040a6a0` | `FUN_0040a6a0` | `undefined FUN_0040a6a0(void)` | `pending` |
| `0040a6c0` | `FUN_0040a6c0` | `undefined FUN_0040a6c0(void * this, int param_1)` | `pending` |
| `0040a710` | `FUN_0040a710` | `undefined FUN_0040a710(void * this, int param_1)` | `pending` |
| `0040a841` | `FUN_0040a841` | `undefined FUN_0040a841(void)` | `pending` |
| `0040a870` | `FUN_0040a870` | `undefined4 FUN_0040a870(void * param_1)` | `pending` |
| `0040aa00` | `FUN_0040aa00` | `undefined FUN_0040aa00(int param_1)` | `pending` |
| `0040aad0` | `FUN_0040aad0` | `undefined4 FUN_0040aad0(void * param_1)` | `pending` |
| `0040ab50` | `FUN_0040ab50` | `undefined FUN_0040ab50(int param_1)` | `pending` |
| `0040ac40` | `FUN_0040ac40` | `undefined4 FUN_0040ac40(void * this, char * param_1)` | `pending` |
| `0040ac90` | `FUN_0040ac90` | `undefined FUN_0040ac90(void * param_1)` | `pending` |
| `0040ad00` | `FUN_0040ad00` | `undefined4 FUN_0040ad00(int param_1)` | `pending` |
| `0040add0` | `FUN_0040add0` | `undefined4 FUN_0040add0(int param_1)` | `pending` |
| `0040ae40` | `FUN_0040ae40` | `undefined4 FUN_0040ae40(int param_1)` | `pending` |
| `0040af75` | `FUN_0040af75` | `undefined FUN_0040af75(void)` | `pending` |
| `0040af87` | `FUN_0040af87` | `undefined FUN_0040af87(void)` | `pending` |
| `0040af90` | `FUN_0040af90` | `undefined4 FUN_0040af90(int param_1)` | `pending` |
| `0040b1f4` | `FUN_0040b1f4` | `undefined FUN_0040b1f4(void)` | `pending` |
| `0040b20c` | `FUN_0040b20c` | `undefined FUN_0040b20c(void)` | `pending` |
| `0040b214` | `FUN_0040b214` | `undefined FUN_0040b214(void)` | `pending` |
| `0040b226` | `FUN_0040b226` | `undefined FUN_0040b226(void)` | `pending` |
| `0040b260` | `FUN_0040b260` | `undefined FUN_0040b260(void * this, int param_1)` | `pending` |
| `0040b2f0` | `FUN_0040b2f0` | `undefined4 FUN_0040b2f0(int param_1)` | `pending` |
| `0040b4b2` | `FUN_0040b4b2` | `undefined FUN_0040b4b2(void)` | `pending` |
| `0040b4ca` | `FUN_0040b4ca` | `undefined FUN_0040b4ca(void)` | `pending` |
| `0040b4dc` | `FUN_0040b4dc` | `undefined FUN_0040b4dc(void)` | `pending` |
| `0040b59f` | `FUN_0040b59f` | `undefined FUN_0040b59f(void)` | `pending` |
| `0040b5b0` | `FUN_0040b5b0` | `undefined FUN_0040b5b0(undefined4 * param_1)` | `pending` |
| `0040b5f7` | `FUN_0040b5f7` | `undefined FUN_0040b5f7(void)` | `pending` |
| `0040b600` | `FUN_0040b600` | `undefined4 FUN_0040b600(void * this, byte param_1)` | `pending` |
| `0040b69e` | `FUN_0040b69e` | `undefined FUN_0040b69e(void)` | `pending` |
| `0040b6a9` | `FUN_0040b6a9` | `undefined FUN_0040b6a9(void)` | `pending` |
| `0040b6b4` | `FUN_0040b6b4` | `undefined FUN_0040b6b4(void)` | `pending` |
| `0040b6bf` | `FUN_0040b6bf` | `undefined FUN_0040b6bf(void)` | `pending` |
| `0040b6d4` | `FUN_0040b6d4` | `undefined FUN_0040b6d4(void)` | `pending` |
| `0040b6e0` | `FUN_0040b6e0` | `undefined FUN_0040b6e0(void)` | `pending` |
| `0040b746` | `FUN_0040b746` | `undefined FUN_0040b746(void)` | `pending` |
| `0040b751` | `FUN_0040b751` | `undefined FUN_0040b751(void)` | `pending` |
| `0040b75c` | `FUN_0040b75c` | `undefined FUN_0040b75c(void)` | `pending` |
| `0040b767` | `FUN_0040b767` | `undefined FUN_0040b767(void)` | `pending` |
| `0040b77c` | `FUN_0040b77c` | `undefined FUN_0040b77c(void)` | `pending` |
| `0040b840` | `FUN_0040b840` | `undefined4 * FUN_0040b840(undefined4 * param_1)` | `pending` |
| `0040b8d0` | `FUN_0040b8d0` | `undefined4 * FUN_0040b8d0(void * this, byte param_1)` | `pending` |
| `0040b8f0` | `FUN_0040b8f0` | `undefined FUN_0040b8f0(undefined4 * param_1)` | `pending` |
| `0040b997` | `FUN_0040b997` | `undefined FUN_0040b997(void)` | `pending` |
| `0040b9ac` | `FUN_0040b9ac` | `undefined FUN_0040b9ac(void)` | `pending` |
| `0040b9c0` | `FUN_0040b9c0` | `undefined FUN_0040b9c0(void * this, int param_1, int param_2)` | `pending` |
| `0040bba0` | `FUN_0040bba0` | `undefined FUN_0040bba0(void * this, void * param_1, int param_2, int * param_3, int * param_4, int param_5)` | `pending` |
| `0040bd40` | `FUN_0040bd40` | `undefined FUN_0040bd40(void)` | `pending` |
| `0040bd60` | `FUN_0040bd60` | `undefined FUN_0040bd60(void)` | `pending` |
| `0040be00` | `FUN_0040be00` | `undefined4 * FUN_0040be00(void * this, byte param_1)` | `pending` |
| `0040be20` | `FUN_0040be20` | `undefined FUN_0040be20(undefined4 * param_1)` | `pending` |
| `0040be73` | `FUN_0040be73` | `undefined FUN_0040be73(void)` | `pending` |
| `0040be80` | `FUN_0040be80` | `undefined FUN_0040be80(void)` | `pending` |
| `0040bfa0` | `FUN_0040bfa0` | `undefined4 * FUN_0040bfa0(undefined4 * param_1)` | `pending` |
| `0040c380` | `FUN_0040c380` | `undefined4 * FUN_0040c380(void * this, byte param_1)` | `pending` |
| `0040c3a0` | `FUN_0040c3a0` | `undefined FUN_0040c3a0(undefined4 * param_1)` | `pending` |
| `0040c46f` | `FUN_0040c46f` | `undefined FUN_0040c46f(void)` | `pending` |
| `0040c47d` | `FUN_0040c47d` | `undefined FUN_0040c47d(void)` | `pending` |
| `0040c48b` | `FUN_0040c48b` | `undefined FUN_0040c48b(void)` | `pending` |
| `0040c499` | `FUN_0040c499` | `undefined FUN_0040c499(void)` | `pending` |
| `0040c4a7` | `FUN_0040c4a7` | `undefined FUN_0040c4a7(void)` | `pending` |
| `0040c4b5` | `FUN_0040c4b5` | `undefined FUN_0040c4b5(void)` | `pending` |
| `0040c4c3` | `FUN_0040c4c3` | `undefined FUN_0040c4c3(void)` | `pending` |
| `0040c4d1` | `FUN_0040c4d1` | `undefined FUN_0040c4d1(void)` | `pending` |
| `0040c4df` | `FUN_0040c4df` | `undefined FUN_0040c4df(void)` | `pending` |
| `0040c4ed` | `FUN_0040c4ed` | `undefined FUN_0040c4ed(void)` | `pending` |
| `0040c4fb` | `FUN_0040c4fb` | `undefined FUN_0040c4fb(void)` | `pending` |
| `0040c509` | `FUN_0040c509` | `undefined FUN_0040c509(void)` | `pending` |
| `0040c517` | `FUN_0040c517` | `undefined FUN_0040c517(void)` | `pending` |
| `0040c52f` | `FUN_0040c52f` | `undefined FUN_0040c52f(void)` | `pending` |
| `0040c53d` | `FUN_0040c53d` | `undefined FUN_0040c53d(void)` | `pending` |
| `0040c555` | `FUN_0040c555` | `undefined FUN_0040c555(void)` | `pending` |
| `0040c600` | `FUN_0040c600` | `int FUN_0040c600(int param_1)` | `pending` |
| `0040c790` | `FUN_0040c790` | `undefined FUN_0040c790(int param_1)` | `pending` |
| `0040c7c0` | `FUN_0040c7c0` | `undefined4 FUN_0040c7c0(void * param_1)` | `pending` |
| `0040ca20` | `FUN_0040ca20` | `undefined4 FUN_0040ca20(void * param_1)` | `pending` |
| `0040ca40` | `FUN_0040ca40` | `undefined FUN_0040ca40(int param_1)` | `pending` |
| `0040ca70` | `FUN_0040ca70` | `bool FUN_0040ca70(int param_1)` | `pending` |
| `0040cb2e` | `FUN_0040cb2e` | `undefined FUN_0040cb2e(void)` | `pending` |
| `0040cbf0` | `FUN_0040cbf0` | `undefined FUN_0040cbf0(void)` | `pending` |
| `0040cd8e` | `FUN_0040cd8e` | `undefined FUN_0040cd8e(void)` | `pending` |
| `0040cd96` | `FUN_0040cd96` | `undefined FUN_0040cd96(void)` | `pending` |
| `0040cdae` | `FUN_0040cdae` | `undefined FUN_0040cdae(void)` | `pending` |
| `0040cdc0` | `FUN_0040cdc0` | `undefined FUN_0040cdc0(void)` | `pending` |
| `0040cdd0` | `FUN_0040cdd0` | `undefined4 FUN_0040cdd0(void)` | `pending` |
| `0040d013` | `FUN_0040d013` | `undefined FUN_0040d013(void)` | `pending` |
| `0040d01b` | `FUN_0040d01b` | `undefined FUN_0040d01b(void)` | `pending` |
| `0040d036` | `FUN_0040d036` | `undefined FUN_0040d036(void)` | `pending` |
| `0040d048` | `FUN_0040d048` | `undefined FUN_0040d048(void)` | `pending` |
| `0040d270` | `FUN_0040d270` | `undefined4 FUN_0040d270(int param_1)` | `pending` |
| `0040d2b0` | `FUN_0040d2b0` | `bool FUN_0040d2b0(int param_1)` | `pending` |
| `0040d320` | `FUN_0040d320` | `undefined4 FUN_0040d320(int param_1)` | `pending` |
| `0040d4b1` | `FUN_0040d4b1` | `undefined FUN_0040d4b1(void)` | `pending` |
| `0040d4c0` | `FUN_0040d4c0` | `undefined4 FUN_0040d4c0(int param_1)` | `pending` |
| `0040d6a7` | `FUN_0040d6a7` | `undefined FUN_0040d6a7(void)` | `pending` |
| `0040d6af` | `FUN_0040d6af` | `undefined FUN_0040d6af(void)` | `pending` |
| `0040d6ca` | `FUN_0040d6ca` | `undefined FUN_0040d6ca(void)` | `pending` |
| `0040d6dc` | `FUN_0040d6dc` | `undefined FUN_0040d6dc(void)` | `pending` |
| `0040d6f0` | `FUN_0040d6f0` | `undefined4 FUN_0040d6f0(int param_1)` | `pending` |
| `0040d913` | `FUN_0040d913` | `undefined FUN_0040d913(void)` | `pending` |
| `0040d91b` | `FUN_0040d91b` | `undefined FUN_0040d91b(void)` | `pending` |
| `0040d933` | `FUN_0040d933` | `undefined FUN_0040d933(void)` | `pending` |
| `0040d945` | `FUN_0040d945` | `undefined FUN_0040d945(void)` | `pending` |
| `0040d950` | `FUN_0040d950` | `undefined4 FUN_0040d950(int param_1)` | `pending` |
| `0040d9e0` | `FUN_0040d9e0` | `undefined4 FUN_0040d9e0(void * param_1)` | `pending` |
| `0040daaf` | `FUN_0040daaf` | `undefined FUN_0040daaf(void)` | `pending` |
| `0040dac0` | `FUN_0040dac0` | `undefined4 FUN_0040dac0(void * this, RECT * param_1, int param_2)` | `pending` |
| `0040dbae` | `FUN_0040dbae` | `undefined FUN_0040dbae(void)` | `pending` |
| `0040dbc0` | `FUN_0040dbc0` | `undefined4 FUN_0040dbc0(void * param_1)` | `pending` |
| `0040dc70` | `FUN_0040dc70` | `undefined4 FUN_0040dc70(void * param_1)` | `pending` |
| `0040dcd0` | `FUN_0040dcd0` | `undefined4 FUN_0040dcd0(void * param_1)` | `pending` |
| `0040dee0` | `FUN_0040dee0` | `undefined4 FUN_0040dee0(int param_1)` | `pending` |
| `0040dfc0` | `FUN_0040dfc0` | `undefined4 FUN_0040dfc0(int param_1)` | `pending` |
| `0040e267` | `FUN_0040e267` | `undefined FUN_0040e267(void)` | `pending` |
| `0040e26f` | `FUN_0040e26f` | `undefined FUN_0040e26f(void)` | `pending` |
| `0040e277` | `FUN_0040e277` | `undefined FUN_0040e277(void)` | `pending` |
| `0040e289` | `FUN_0040e289` | `undefined FUN_0040e289(void)` | `pending` |
| `0040e2e0` | `FUN_0040e2e0` | `undefined4 FUN_0040e2e0(int param_1)` | `pending` |
| `0040e460` | `FUN_0040e460` | `undefined FUN_0040e460(void * param_1)` | `pending` |
| `0040e99f` | `FUN_0040e99f` | `undefined FUN_0040e99f(void)` | `pending` |
| `0040e9b0` | `FUN_0040e9b0` | `undefined FUN_0040e9b0(undefined4 * param_1)` | `pending` |
| `0040e9f7` | `FUN_0040e9f7` | `undefined FUN_0040e9f7(void)` | `pending` |
| `0040ea00` | `FUN_0040ea00` | `undefined4 * FUN_0040ea00(undefined4 * param_1)` | `pending` |
| `0040eab0` | `FUN_0040eab0` | `undefined4 * FUN_0040eab0(void * this, byte param_1)` | `pending` |
| `0040ead0` | `FUN_0040ead0` | `undefined FUN_0040ead0(undefined4 * param_1)` | `pending` |
| `0040eb2d` | `FUN_0040eb2d` | `undefined FUN_0040eb2d(void)` | `pending` |
| `0040eb40` | `FUN_0040eb40` | `undefined FUN_0040eb40(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)` | `pending` |
| `0040ec60` | `FUN_0040ec60` | `undefined4 * FUN_0040ec60(undefined4 * param_1)` | `pending` |
| `0040ecf0` | `FUN_0040ecf0` | `undefined4 * FUN_0040ecf0(void * this, byte param_1)` | `pending` |
| `0040ed10` | `FUN_0040ed10` | `undefined FUN_0040ed10(undefined4 * param_1)` | `pending` |
| `0040ed6d` | `FUN_0040ed6d` | `undefined FUN_0040ed6d(void)` | `pending` |
| `0040ed80` | `FUN_0040ed80` | `undefined4 FUN_0040ed80(void * this, int param_1)` | `pending` |
| `0040eeef` | `FUN_0040eeef` | `undefined FUN_0040eeef(void)` | `pending` |
| `0040ef00` | `FUN_0040ef00` | `undefined FUN_0040ef00(undefined4 * param_1)` | `pending` |
| `0040ef47` | `FUN_0040ef47` | `undefined FUN_0040ef47(void)` | `pending` |
| `0040f000` | `FUN_0040f000` | `undefined4 * FUN_0040f000(undefined4 * param_1)` | `pending` |
| `0040f070` | `FUN_0040f070` | `undefined4 * FUN_0040f070(void * this, byte param_1)` | `pending` |
| `0040f090` | `FUN_0040f090` | `undefined FUN_0040f090(undefined4 * param_1)` | `pending` |
| `0040f11b` | `FUN_0040f11b` | `undefined FUN_0040f11b(void)` | `pending` |
| `0040f130` | `FUN_0040f130` | `undefined FUN_0040f130(void * this, int param_1)` | `pending` |
| `0040f1e0` | `FUN_0040f1e0` | `undefined4 FUN_0040f1e0(int param_1)` | `pending` |
| `0040f220` | `FUN_0040f220` | `undefined4 FUN_0040f220(void * this, undefined4 param_1)` | `pending` |
| `0040f3f5` | `FUN_0040f3f5` | `undefined FUN_0040f3f5(void)` | `pending` |
| `0040f407` | `FUN_0040f407` | `undefined FUN_0040f407(void)` | `pending` |
| `0040f410` | `FUN_0040f410` | `bool FUN_0040f410(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `0040f510` | `FUN_0040f510` | `int FUN_0040f510(void * this, int param_1, int param_2)` | `pending` |
| `0040f550` | `FUN_0040f550` | `undefined FUN_0040f550(void * this, undefined4 * param_1)` | `pending` |
| `0040f704` | `FUN_0040f704` | `undefined FUN_0040f704(void)` | `pending` |
| `0040f712` | `FUN_0040f712` | `undefined FUN_0040f712(void)` | `pending` |
| `0040f72a` | `FUN_0040f72a` | `undefined FUN_0040f72a(void)` | `pending` |
| `0040f780` | `FUN_0040f780` | `undefined4 FUN_0040f780(int param_1)` | `pending` |
| `0040f7a0` | `FUN_0040f7a0` | `undefined4 FUN_0040f7a0(void * this, byte param_1)` | `pending` |
| `0040f890` | `FUN_0040f890` | `undefined4 * FUN_0040f890(undefined4 * param_1)` | `pending` |
| `0040f930` | `FUN_0040f930` | `undefined4 * FUN_0040f930(void * this, byte param_1)` | `pending` |
| `0040f950` | `FUN_0040f950` | `undefined FUN_0040f950(undefined4 * param_1)` | `pending` |
| `0040f9a5` | `FUN_0040f9a5` | `undefined FUN_0040f9a5(void)` | `pending` |
| `0040f9ba` | `FUN_0040f9ba` | `undefined FUN_0040f9ba(void)` | `pending` |
| `0040f9d0` | `FUN_0040f9d0` | `undefined4 FUN_0040f9d0(int param_1)` | `pending` |
| `0040fbc0` | `FUN_0040fbc0` | `undefined FUN_0040fbc0(void * this, int param_1)` | `pending` |
| `0040fbf0` | `FUN_0040fbf0` | `undefined4 FUN_0040fbf0(int param_1)` | `pending` |
| `0040fc79` | `FUN_0040fc79` | `undefined FUN_0040fc79(void)` | `pending` |
| `0040fc90` | `FUN_0040fc90` | `undefined FUN_0040fc90(void * param_1)` | `pending` |
| `0040fd00` | `FUN_0040fd00` | `undefined4 FUN_0040fd00(int param_1)` | `pending` |
| `0040fe10` | `FUN_0040fe10` | `bool FUN_0040fe10(int param_1)` | `pending` |
| `0040fe60` | `FUN_0040fe60` | `undefined4 FUN_0040fe60(int param_1)` | `pending` |
| `00410026` | `FUN_00410026` | `undefined FUN_00410026(void)` | `pending` |
| `00410050` | `FUN_00410050` | `undefined FUN_00410050(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `004101a2` | `FUN_004101a2` | `undefined FUN_004101a2(void)` | `pending` |
| `004101b8` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `004101be` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `004101c4` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `00410254` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `0041031a` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `00410320` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `00410326` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `00410332` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `00410338` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `0041033e` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `00410344` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `0041034a` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `00410350` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `00410356` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0041035c` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `00410362` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `00410368` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `0041036e` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `00410374` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0041037a` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0041038c` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `00410392` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `00410398` | `Ordinal_784` | `undefined Ordinal_784()` | `pending` |
| `0041039e` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `004103a4` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `004103aa` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `004103b0` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `004103b6` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `004103bc` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `004103c2` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `004103c8` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `004103ce` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `004103d4` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `004103da` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `004103e0` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `004103fe` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `00410428` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0041042e` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `00410434` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `0041043a` | `Ordinal_817` | `undefined Ordinal_817()` | `pending` |
| `00410440` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `00410446` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `0041044c` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `00410452` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `00410458` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `004104c4` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `004104d6` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `004104dc` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `004104e2` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `004104e8` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `004104ee` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `004104f4` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `004104fa` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `00410500` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `00410506` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0041050c` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `00410512` | `Ordinal_481` | `undefined Ordinal_481()` | `pending` |
| `00410518` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `0041051e` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `00410524` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `0041052a` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `00410530` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `00410536` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `0041053c` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `0041056c` | `Ordinal_707` | `undefined Ordinal_707()` | `pending` |
| `00410572` | `Ordinal_696` | `undefined Ordinal_696()` | `pending` |
| `00410578` | `Ordinal_548` | `undefined Ordinal_548()` | `pending` |
| `0041057e` | `Ordinal_487` | `undefined Ordinal_487()` | `pending` |
| `00410584` | `Ordinal_5415` | `undefined Ordinal_5415()` | `pending` |
| `0041058a` | `Ordinal_781` | `undefined Ordinal_781()` | `pending` |
| `00410590` | `Ordinal_5441` | `undefined Ordinal_5441()` | `pending` |
| `00410596` | `Ordinal_1717` | `undefined Ordinal_1717()` | `pending` |
| `0041059c` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `004105a2` | `Ordinal_4593` | `undefined Ordinal_4593()` | `pending` |
| `004105a8` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `004105ae` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `004105b4` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `004105ba` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `004105c0` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `004105c6` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `004105cc` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `004105d2` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `004105d8` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `004105de` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `00410626` | `Ordinal_542` | `undefined Ordinal_542()` | `pending` |
| `0041062c` | `Ordinal_2064` | `undefined Ordinal_2064()` | `pending` |
| `00410632` | `Ordinal_2072` | `undefined Ordinal_2072()` | `pending` |
| `00410638` | `Ordinal_5193` | `undefined Ordinal_5193()` | `pending` |
| `0041063e` | `Ordinal_760` | `undefined Ordinal_760()` | `pending` |
| `00410644` | `Ordinal_5610` | `undefined Ordinal_5610()` | `pending` |
| `0041064a` | `Ordinal_1440` | `undefined Ordinal_1440()` | `pending` |
| `00410650` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `0041065c` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `00410674` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `00410680` | `Ordinal_569` | `undefined Ordinal_569()` | `pending` |
| `00410686` | `Ordinal_580` | `undefined Ordinal_580()` | `pending` |
| `0041068c` | `Ordinal_327` | `undefined Ordinal_327()` | `pending` |
| `00410692` | `Ordinal_314` | `undefined Ordinal_314()` | `pending` |
| `004106a4` | `Ordinal_5121` | `undefined Ordinal_5121()` | `pending` |
| `004106bc` | `Ordinal_1425` | `undefined Ordinal_1425()` | `pending` |
| `004106c2` | `Ordinal_5190` | `undefined Ordinal_5190()` | `pending` |
| `004106c8` | `Ordinal_5124` | `undefined Ordinal_5124()` | `pending` |
| `004106ce` | `Ordinal_3630` | `undefined Ordinal_3630()` | `pending` |
| `004106d4` | `Ordinal_3784` | `undefined Ordinal_3784()` | `pending` |
| `004106da` | `Ordinal_5465` | `undefined Ordinal_5465()` | `pending` |
| `004106e6` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `004106ec` | `Ordinal_582` | `undefined Ordinal_582()` | `pending` |
| `0041072e` | `Ordinal_1996` | `undefined Ordinal_1996()` | `pending` |
| `00410734` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `0041073a` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `00410740` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `00410746` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `00410750` | `FUN_00410750` | `undefined FUN_00410750(_onexit_t param_1)` | `pending` |
| `004107f0` | `FUN_004107f0` | `int FUN_004107f0(_onexit_t param_1)` | `pending` |
| `00410810` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `00410880` | `FUN_00410880` | `undefined FUN_00410880(void)` | `pending` |
| `004108a0` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `00410940` | `FUN_00410940` | `undefined FUN_00410940(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)` | `pending` |
| `004109b0` | `FUN_004109b0` | `undefined FUN_004109b0(void)` | `pending` |
| `004109d0` | `entry` | `undefined entry(void)` | `pending` |
| `00410b72` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `00410b8a` | `initterm` | `undefined initterm()` | `pending` |
| `00410b90` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `00410bc0` | `FUN_00410bc0` | `undefined FUN_00410bc0(void)` | `pending` |
| `00410bc2` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `00410bc8` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00410be1` | `FUN_00410be1` | `undefined4 FUN_00410be1(int param_1, undefined4 param_2)` | `pending` |
| `00410c30` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### Score_Kit.exe

Remaining: **363** of **363** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `004010b0` | `FUN_004010b0` | `undefined4 * FUN_004010b0(undefined4 * param_1)` | `pending` |
| `00401120` | `FUN_00401120` | `undefined4 * FUN_00401120(void * this, byte param_1)` | `pending` |
| `00401140` | `FUN_00401140` | `undefined FUN_00401140(undefined4 * param_1)` | `pending` |
| `004011ae` | `FUN_004011ae` | `undefined FUN_004011ae(void)` | `pending` |
| `004011c0` | `FUN_004011c0` | `undefined FUN_004011c0(void * this, int param_1, int param_2)` | `pending` |
| `004012c0` | `FUN_004012c0` | `int FUN_004012c0(void * this, int param_1, int param_2)` | `pending` |
| `004012f0` | `FUN_004012f0` | `undefined FUN_004012f0(void * this, void * param_1, int param_2, int * param_3, int * param_4)` | `pending` |
| `00401440` | `FUN_00401440` | `undefined FUN_00401440(undefined4 * param_1)` | `pending` |
| `00401490` | `FUN_00401490` | `undefined FUN_00401490(undefined4 * param_1)` | `pending` |
| `004014d7` | `FUN_004014d7` | `undefined FUN_004014d7(void)` | `pending` |
| `0040153f` | `FUN_0040153f` | `undefined FUN_0040153f(void)` | `pending` |
| `004015b2` | `FUN_004015b2` | `undefined FUN_004015b2(void)` | `pending` |
| `004015c7` | `FUN_004015c7` | `undefined FUN_004015c7(void)` | `pending` |
| `004015d0` | `FUN_004015d0` | `undefined FUN_004015d0(undefined4 * param_1)` | `pending` |
| `0040161a` | `FUN_0040161a` | `undefined FUN_0040161a(void)` | `pending` |
| `0040162f` | `FUN_0040162f` | `undefined FUN_0040162f(void)` | `pending` |
| `004016f0` | `FUN_004016f0` | `undefined4 * FUN_004016f0(undefined4 * param_1)` | `pending` |
| `00401780` | `FUN_00401780` | `undefined4 * FUN_00401780(void * this, byte param_1)` | `pending` |
| `004017a0` | `FUN_004017a0` | `undefined FUN_004017a0(undefined4 * param_1)` | `pending` |
| `004017fd` | `FUN_004017fd` | `undefined FUN_004017fd(void)` | `pending` |
| `00401810` | `FUN_00401810` | `undefined4 FUN_00401810(void * this, int param_1)` | `pending` |
| `0040198b` | `FUN_0040198b` | `undefined FUN_0040198b(void)` | `pending` |
| `004019a0` | `FUN_004019a0` | `undefined FUN_004019a0(undefined4 * param_1)` | `pending` |
| `004019f3` | `FUN_004019f3` | `undefined FUN_004019f3(void)` | `pending` |
| `00401a5f` | `FUN_00401a5f` | `undefined FUN_00401a5f(void)` | `pending` |
| `00401a70` | `FUN_00401a70` | `undefined FUN_00401a70(undefined4 * param_1)` | `pending` |
| `00401ab7` | `FUN_00401ab7` | `undefined FUN_00401ab7(void)` | `pending` |
| `00401b30` | `FUN_00401b30` | `undefined4 * FUN_00401b30(void * this, byte param_1)` | `pending` |
| `00401b50` | `FUN_00401b50` | `undefined4 * FUN_00401b50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00401bf0` | `FUN_00401bf0` | `undefined FUN_00401bf0(undefined4 * param_1)` | `pending` |
| `00401c3a` | `FUN_00401c3a` | `undefined FUN_00401c3a(void)` | `pending` |
| `00401c52` | `FUN_00401c52` | `undefined FUN_00401c52(void)` | `pending` |
| `00401c60` | `FUN_00401c60` | `undefined FUN_00401c60(void * this, undefined4 param_1)` | `pending` |
| `00401cc0` | `FUN_00401cc0` | `undefined4 FUN_00401cc0(int param_1)` | `pending` |
| `00401e8d` | `FUN_00401e8d` | `undefined FUN_00401e8d(void)` | `pending` |
| `00401e9f` | `FUN_00401e9f` | `undefined FUN_00401e9f(void)` | `pending` |
| `00401f91` | `FUN_00401f91` | `undefined FUN_00401f91(void)` | `pending` |
| `00401f99` | `FUN_00401f99` | `undefined FUN_00401f99(void)` | `pending` |
| `00401fab` | `FUN_00401fab` | `undefined FUN_00401fab(void)` | `pending` |
| `00401fd0` | `FUN_00401fd0` | `undefined FUN_00401fd0(void * this, int param_1)` | `pending` |
| `004020c0` | `FUN_004020c0` | `undefined4 * FUN_004020c0(undefined4 * param_1)` | `pending` |
| `004021ec` | `FUN_004021ec` | `undefined FUN_004021ec(void)` | `pending` |
| `00402204` | `FUN_00402204` | `undefined FUN_00402204(void)` | `pending` |
| `00402230` | `FUN_00402230` | `undefined FUN_00402230(void)` | `pending` |
| `00402240` | `FUN_00402240` | `undefined FUN_00402240(void)` | `pending` |
| `0040228e` | `FUN_0040228e` | `undefined FUN_0040228e(void)` | `pending` |
| `004022a2` | `FUN_004022a2` | `undefined FUN_004022a2(void)` | `pending` |
| `00402440` | `FUN_00402440` | `bool FUN_00402440(void)` | `pending` |
| `00402516` | `FUN_00402516` | `undefined FUN_00402516(void)` | `pending` |
| `00402520` | `FUN_00402520` | `undefined FUN_00402520(void)` | `pending` |
| `00402560` | `FUN_00402560` | `undefined FUN_00402560(int param_1)` | `pending` |
| `00402590` | `FUN_00402590` | `undefined FUN_00402590(int param_1)` | `pending` |
| `004026af` | `FUN_004026af` | `undefined FUN_004026af(void)` | `pending` |
| `004026c0` | `FUN_004026c0` | `undefined FUN_004026c0(undefined4 * param_1)` | `pending` |
| `00402707` | `FUN_00402707` | `undefined FUN_00402707(void)` | `pending` |
| `00402830` | `FUN_00402830` | `undefined FUN_00402830(void)` | `pending` |
| `00402850` | `FUN_00402850` | `undefined FUN_00402850(void)` | `pending` |
| `00402880` | `FUN_00402880` | `undefined4 * FUN_00402880(undefined4 * param_1)` | `pending` |
| `004028f0` | `FUN_004028f0` | `undefined4 * FUN_004028f0(void * this, byte param_1)` | `pending` |
| `00402910` | `FUN_00402910` | `undefined FUN_00402910(undefined4 * param_1)` | `pending` |
| `00402963` | `FUN_00402963` | `undefined FUN_00402963(void)` | `pending` |
| `00402970` | `FUN_00402970` | `undefined FUN_00402970(void)` | `pending` |
| `00402a90` | `FUN_00402a90` | `undefined4 * FUN_00402a90(undefined4 * param_1)` | `pending` |
| `00403050` | `FUN_00403050` | `undefined4 * FUN_00403050(void * this, byte param_1)` | `pending` |
| `00403070` | `FUN_00403070` | `undefined FUN_00403070(undefined4 * param_1)` | `pending` |
| `004031b4` | `FUN_004031b4` | `undefined FUN_004031b4(void)` | `pending` |
| `004031c2` | `FUN_004031c2` | `undefined FUN_004031c2(void)` | `pending` |
| `004031d0` | `FUN_004031d0` | `undefined FUN_004031d0(void)` | `pending` |
| `004031de` | `FUN_004031de` | `undefined FUN_004031de(void)` | `pending` |
| `004031ec` | `FUN_004031ec` | `undefined FUN_004031ec(void)` | `pending` |
| `004031fa` | `FUN_004031fa` | `undefined FUN_004031fa(void)` | `pending` |
| `00403208` | `FUN_00403208` | `undefined FUN_00403208(void)` | `pending` |
| `00403216` | `FUN_00403216` | `undefined FUN_00403216(void)` | `pending` |
| `00403224` | `FUN_00403224` | `undefined FUN_00403224(void)` | `pending` |
| `00403232` | `FUN_00403232` | `undefined FUN_00403232(void)` | `pending` |
| `00403240` | `FUN_00403240` | `undefined FUN_00403240(void)` | `pending` |
| `0040324e` | `FUN_0040324e` | `undefined FUN_0040324e(void)` | `pending` |
| `0040325c` | `FUN_0040325c` | `undefined FUN_0040325c(void)` | `pending` |
| `0040326a` | `FUN_0040326a` | `undefined FUN_0040326a(void)` | `pending` |
| `00403278` | `FUN_00403278` | `undefined FUN_00403278(void)` | `pending` |
| `00403286` | `FUN_00403286` | `undefined FUN_00403286(void)` | `pending` |
| `00403294` | `FUN_00403294` | `undefined FUN_00403294(void)` | `pending` |
| `004032a2` | `FUN_004032a2` | `undefined FUN_004032a2(void)` | `pending` |
| `004032b0` | `FUN_004032b0` | `undefined FUN_004032b0(void)` | `pending` |
| `004032be` | `FUN_004032be` | `undefined FUN_004032be(void)` | `pending` |
| `004032d6` | `FUN_004032d6` | `undefined FUN_004032d6(void)` | `pending` |
| `004032e4` | `FUN_004032e4` | `undefined FUN_004032e4(void)` | `pending` |
| `004032f2` | `FUN_004032f2` | `undefined FUN_004032f2(void)` | `pending` |
| `00403300` | `FUN_00403300` | `undefined FUN_00403300(void)` | `pending` |
| `0040330e` | `FUN_0040330e` | `undefined FUN_0040330e(void)` | `pending` |
| `0040331c` | `FUN_0040331c` | `undefined FUN_0040331c(void)` | `pending` |
| `0040332a` | `FUN_0040332a` | `undefined FUN_0040332a(void)` | `pending` |
| `00403338` | `FUN_00403338` | `undefined FUN_00403338(void)` | `pending` |
| `00403350` | `FUN_00403350` | `undefined FUN_00403350(void)` | `pending` |
| `00403470` | `FUN_00403470` | `undefined4 FUN_00403470(int param_1)` | `pending` |
| `00403580` | `FUN_00403580` | `undefined FUN_00403580(void * this, int param_1)` | `pending` |
| `00403600` | `FUN_00403600` | `undefined4 FUN_00403600(void * param_1)` | `pending` |
| `004036d0` | `FUN_004036d0` | `undefined FUN_004036d0(int param_1)` | `pending` |
| `00403700` | `FUN_00403700` | `undefined FUN_00403700(int param_1)` | `pending` |
| `004037d0` | `FUN_004037d0` | `undefined FUN_004037d0(int param_1)` | `pending` |
| `00403820` | `FUN_00403820` | `undefined4 FUN_00403820(void * param_1)` | `pending` |
| `00403840` | `FUN_00403840` | `undefined FUN_00403840(int param_1)` | `pending` |
| `00403890` | `FUN_00403890` | `bool FUN_00403890(int param_1)` | `pending` |
| `004038d0` | `FUN_004038d0` | `undefined4 FUN_004038d0(int param_1)` | `pending` |
| `00403bf0` | `FUN_00403bf0` | `undefined4 FUN_00403bf0(void * param_1)` | `pending` |
| `00404110` | `FUN_00404110` | `undefined FUN_00404110(int param_1)` | `pending` |
| `004041f0` | `FUN_004041f0` | `int FUN_004041f0(int param_1)` | `pending` |
| `00404210` | `FUN_00404210` | `undefined FUN_00404210(int param_1)` | `pending` |
| `00404270` | `FUN_00404270` | `undefined4 FUN_00404270(int param_1)` | `pending` |
| `004044d4` | `FUN_004044d4` | `undefined FUN_004044d4(void)` | `pending` |
| `004044ec` | `FUN_004044ec` | `undefined FUN_004044ec(void)` | `pending` |
| `004044f4` | `FUN_004044f4` | `undefined FUN_004044f4(void)` | `pending` |
| `00404506` | `FUN_00404506` | `undefined FUN_00404506(void)` | `pending` |
| `00404520` | `FUN_00404520` | `undefined FUN_00404520(int param_1)` | `pending` |
| `00404540` | `FUN_00404540` | `undefined4 FUN_00404540(int param_1)` | `pending` |
| `00404810` | `FUN_00404810` | `undefined FUN_00404810(void)` | `pending` |
| `00404828` | `FUN_00404828` | `undefined FUN_00404828(void)` | `pending` |
| `0040483a` | `FUN_0040483a` | `undefined FUN_0040483a(void)` | `pending` |
| `00404850` | `FUN_00404850` | `undefined4 FUN_00404850(int param_1)` | `pending` |
| `00404988` | `FUN_00404988` | `undefined FUN_00404988(void)` | `pending` |
| `004049a0` | `FUN_004049a0` | `undefined FUN_004049a0(void)` | `pending` |
| `004049b2` | `FUN_004049b2` | `undefined FUN_004049b2(void)` | `pending` |
| `004049c0` | `FUN_004049c0` | `undefined4 FUN_004049c0(void * this, char * param_1)` | `pending` |
| `00404a30` | `FUN_00404a30` | `undefined FUN_00404a30(void * this, undefined4 param_1, int param_2, int param_3)` | `pending` |
| `00404b30` | `FUN_00404b30` | `undefined4 FUN_00404b30(void * this, byte param_1)` | `pending` |
| `00404b50` | `FUN_00404b50` | `undefined4 FUN_00404b50(void * this, byte param_1)` | `pending` |
| `00404c40` | `FUN_00404c40` | `undefined4 * FUN_00404c40(undefined4 * param_1)` | `pending` |
| `00404ce0` | `FUN_00404ce0` | `undefined4 * FUN_00404ce0(void * this, byte param_1)` | `pending` |
| `00404d00` | `FUN_00404d00` | `undefined FUN_00404d00(undefined4 * param_1)` | `pending` |
| `00404d55` | `FUN_00404d55` | `undefined FUN_00404d55(void)` | `pending` |
| `00404d6a` | `FUN_00404d6a` | `undefined FUN_00404d6a(void)` | `pending` |
| `00404d80` | `FUN_00404d80` | `undefined4 FUN_00404d80(int param_1)` | `pending` |
| `00404f70` | `FUN_00404f70` | `undefined FUN_00404f70(void * this, int param_1)` | `pending` |
| `00404fa0` | `FUN_00404fa0` | `undefined4 FUN_00404fa0(int param_1)` | `pending` |
| `00405029` | `FUN_00405029` | `undefined FUN_00405029(void)` | `pending` |
| `00405040` | `FUN_00405040` | `undefined FUN_00405040(void * param_1)` | `pending` |
| `004050b0` | `FUN_004050b0` | `undefined4 FUN_004050b0(int param_1)` | `pending` |
| `004051c0` | `FUN_004051c0` | `bool FUN_004051c0(int param_1)` | `pending` |
| `00405210` | `FUN_00405210` | `undefined4 FUN_00405210(int param_1)` | `pending` |
| `004053d6` | `FUN_004053d6` | `undefined FUN_004053d6(void)` | `pending` |
| `00405400` | `FUN_00405400` | `undefined FUN_00405400(void * this, RECT * param_1, int param_2, int param_3)` | `pending` |
| `00405552` | `FUN_00405552` | `undefined FUN_00405552(void)` | `pending` |
| `004055b0` | `FUN_004055b0` | `undefined4 * FUN_004055b0(undefined4 * param_1)` | `pending` |
| `00405620` | `FUN_00405620` | `undefined4 * FUN_00405620(void * this, byte param_1)` | `pending` |
| `00405640` | `FUN_00405640` | `undefined FUN_00405640(undefined4 * param_1)` | `pending` |
| `004056de` | `FUN_004056de` | `undefined FUN_004056de(void)` | `pending` |
| `004056f0` | `FUN_004056f0` | `undefined4 FUN_004056f0(void * this, char * param_1, char * param_2, char * param_3)` | `pending` |
| `00405980` | `FUN_00405980` | `bool FUN_00405980(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)` | `pending` |
| `004059e0` | `FUN_004059e0` | `bool FUN_004059e0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00405a10` | `FUN_00405a10` | `bool FUN_00405a10(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)` | `pending` |
| `00405a40` | `FUN_00405a40` | `undefined FUN_00405a40(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4, BYTE * param_5)` | `pending` |
| `00405ab0` | `FUN_00405ab0` | `undefined FUN_00405ab0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)` | `pending` |
| `00405af0` | `FUN_00405af0` | `undefined FUN_00405af0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)` | `pending` |
| `00405b40` | `FUN_00405b40` | `bool FUN_00405b40(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00405b90` | `FUN_00405b90` | `bool FUN_00405b90(void * this, int param_1, LPCSTR param_2)` | `pending` |
| `00405bd0` | `FUN_00405bd0` | `bool FUN_00405bd0(void * this, int param_1, LPCSTR param_2, BYTE * param_3)` | `pending` |
| `00405c10` | `FUN_00405c10` | `undefined4 FUN_00405c10(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00405c40` | `FUN_00405c40` | `undefined4 FUN_00405c40(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00405c70` | `FUN_00405c70` | `undefined4 FUN_00405c70(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00405ca0` | `FUN_00405ca0` | `undefined4 FUN_00405ca0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00405cd0` | `FUN_00405cd0` | `undefined4 FUN_00405cd0(void * this, undefined4 param_1, undefined4 param_2)` | `pending` |
| `00405d00` | `FUN_00405d00` | `int FUN_00405d00(char * param_1, int * param_2)` | `pending` |
| `00405df0` | `FUN_00405df0` | `undefined4 * FUN_00405df0(undefined4 * param_1)` | `pending` |
| `00405e60` | `FUN_00405e60` | `undefined4 * FUN_00405e60(void * this, byte param_1)` | `pending` |
| `00405e80` | `FUN_00405e80` | `undefined FUN_00405e80(undefined4 * param_1)` | `pending` |
| `00405f0b` | `FUN_00405f0b` | `undefined FUN_00405f0b(void)` | `pending` |
| `00405f20` | `FUN_00405f20` | `undefined FUN_00405f20(void * this, int param_1)` | `pending` |
| `00405fd0` | `FUN_00405fd0` | `undefined4 FUN_00405fd0(int param_1)` | `pending` |
| `00406010` | `FUN_00406010` | `undefined4 FUN_00406010(void * this, undefined4 param_1)` | `pending` |
| `004061e5` | `FUN_004061e5` | `undefined FUN_004061e5(void)` | `pending` |
| `004061f7` | `FUN_004061f7` | `undefined FUN_004061f7(void)` | `pending` |
| `00406200` | `FUN_00406200` | `bool FUN_00406200(void * this, int param_1, int param_2, undefined4 * param_3)` | `pending` |
| `00406300` | `FUN_00406300` | `int FUN_00406300(void * this, int param_1, int param_2)` | `pending` |
| `00406340` | `FUN_00406340` | `undefined FUN_00406340(void * this, undefined4 * param_1)` | `pending` |
| `00406370` | `FUN_00406370` | `undefined FUN_00406370(void * this, undefined1 param_1)` | `pending` |
| `00406490` | `FUN_00406490` | `undefined4 * FUN_00406490(void * this, byte param_1)` | `pending` |
| `004064b0` | `FUN_004064b0` | `undefined FUN_004064b0(void)` | `pending` |
| `004064f1` | `FUN_004064f1` | `undefined FUN_004064f1(void)` | `pending` |
| `00406500` | `FUN_00406500` | `undefined4 * FUN_00406500(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00406600` | `FUN_00406600` | `undefined FUN_00406600(undefined4 * param_1)` | `pending` |
| `0040666c` | `FUN_0040666c` | `undefined FUN_0040666c(void)` | `pending` |
| `0040667a` | `FUN_0040667a` | `undefined FUN_0040667a(void)` | `pending` |
| `00406688` | `FUN_00406688` | `undefined FUN_00406688(void)` | `pending` |
| `00406696` | `FUN_00406696` | `undefined FUN_00406696(void)` | `pending` |
| `004066ae` | `FUN_004066ae` | `undefined FUN_004066ae(void)` | `pending` |
| `004066c0` | `FUN_004066c0` | `undefined FUN_004066c0(void * this, undefined4 param_1)` | `pending` |
| `00406720` | `FUN_00406720` | `undefined4 FUN_00406720(void * this, undefined4 param_1)` | `pending` |
| `00406780` | `FUN_00406780` | `undefined4 FUN_00406780(int param_1)` | `pending` |
| `004067d0` | `FUN_004067d0` | `undefined FUN_004067d0(int * param_1)` | `pending` |
| `004068d0` | `FUN_004068d0` | `undefined FUN_004068d0(int * param_1)` | `pending` |
| `00406950` | `FUN_00406950` | `undefined4 FUN_00406950(int param_1)` | `pending` |
| `00406aa0` | `FUN_00406aa0` | `undefined FUN_00406aa0(int param_1)` | `pending` |
| `00406bb0` | `FUN_00406bb0` | `undefined4 FUN_00406bb0(void * param_1)` | `pending` |
| `00406c40` | `FUN_00406c40` | `undefined FUN_00406c40(void * param_1)` | `pending` |
| `00406d60` | `FUN_00406d60` | `int FUN_00406d60(void * this, undefined2 param_1, int param_2)` | `pending` |
| `00406de0` | `FUN_00406de0` | `undefined4 FUN_00406de0(void * this, int param_1)` | `pending` |
| `00406e30` | `FUN_00406e30` | `undefined4 FUN_00406e30(int param_1)` | `pending` |
| `00406e40` | `FUN_00406e40` | `undefined FUN_00406e40(void * this, int param_1)` | `pending` |
| `00406e60` | `FUN_00406e60` | `bool FUN_00406e60(void * this, undefined4 param_1, char * param_2)` | `pending` |
| `00406ee0` | `FUN_00406ee0` | `undefined4 FUN_00406ee0(void * this, char * param_1)` | `pending` |
| `00406fa0` | `FUN_00406fa0` | `undefined4 FUN_00406fa0(void * this, undefined4 param_1, int param_2)` | `pending` |
| `0040735f` | `FUN_0040735f` | `undefined FUN_0040735f(void)` | `pending` |
| `004073c0` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `004074a0` | `FUN_004074a0` | `undefined4 * FUN_004074a0(undefined4 * param_1)` | `pending` |
| `004075a0` | `FUN_004075a0` | `undefined4 * FUN_004075a0(void * this, byte param_1)` | `pending` |
| `004075c0` | `FUN_004075c0` | `undefined FUN_004075c0(undefined4 * param_1)` | `pending` |
| `0040762c` | `FUN_0040762c` | `undefined FUN_0040762c(void)` | `pending` |
| `0040763a` | `FUN_0040763a` | `undefined FUN_0040763a(void)` | `pending` |
| `00407648` | `FUN_00407648` | `undefined FUN_00407648(void)` | `pending` |
| `00407656` | `FUN_00407656` | `undefined FUN_00407656(void)` | `pending` |
| `0040766e` | `FUN_0040766e` | `undefined FUN_0040766e(void)` | `pending` |
| `004076a0` | `FUN_004076a0` | `undefined4 FUN_004076a0(int param_1)` | `pending` |
| `004076f0` | `FUN_004076f0` | `undefined FUN_004076f0(void)` | `pending` |
| `004077c0` | `FUN_004077c0` | `undefined4 FUN_004077c0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00407920` | `FUN_00407920` | `undefined4 * FUN_00407920(undefined4 * param_1)` | `pending` |
| `004079b0` | `FUN_004079b0` | `undefined4 * FUN_004079b0(void * this, byte param_1)` | `pending` |
| `004079d0` | `FUN_004079d0` | `undefined FUN_004079d0(undefined4 * param_1)` | `pending` |
| `00407a77` | `FUN_00407a77` | `undefined FUN_00407a77(void)` | `pending` |
| `00407a8c` | `FUN_00407a8c` | `undefined FUN_00407a8c(void)` | `pending` |
| `00407aa0` | `FUN_00407aa0` | `undefined FUN_00407aa0(void * this, int param_1, int param_2)` | `pending` |
| `00407c80` | `FUN_00407c80` | `undefined FUN_00407c80(void * this, void * param_1, int param_2, int * param_3, int * param_4, int param_5)` | `pending` |
| `00407d00` | `FUN_00407d00` | `undefined4 * FUN_00407d00(undefined4 * param_1)` | `pending` |
| `00407db0` | `FUN_00407db0` | `undefined4 * FUN_00407db0(void * this, byte param_1)` | `pending` |
| `00407dd0` | `FUN_00407dd0` | `undefined FUN_00407dd0(undefined4 * param_1)` | `pending` |
| `00407e2d` | `FUN_00407e2d` | `undefined FUN_00407e2d(void)` | `pending` |
| `00407e40` | `FUN_00407e40` | `undefined FUN_00407e40(void * this, int param_1, byte param_2, byte param_3, byte param_4, byte param_5, LPCSTR param_6)` | `pending` |
| `00407eb0` | `FUN_00407eb0` | `undefined4 * FUN_00407eb0(undefined4 * param_1)` | `pending` |
| `00407f20` | `FUN_00407f20` | `undefined4 * FUN_00407f20(void * this, byte param_1)` | `pending` |
| `00407f40` | `FUN_00407f40` | `undefined FUN_00407f40(undefined4 * param_1)` | `pending` |
| `00407f9e` | `FUN_00407f9e` | `undefined FUN_00407f9e(void)` | `pending` |
| `00407fb0` | `FUN_00407fb0` | `undefined4 * FUN_00407fb0(undefined4 * param_1)` | `pending` |
| `00407fd0` | `FUN_00407fd0` | `undefined4 * FUN_00407fd0(undefined4 * param_1)` | `pending` |
| `004081a0` | `FUN_004081a0` | `undefined4 * FUN_004081a0(void * this, byte param_1)` | `pending` |
| `004081c0` | `FUN_004081c0` | `undefined FUN_004081c0(undefined4 * param_1)` | `pending` |
| `00408238` | `FUN_00408238` | `undefined FUN_00408238(void)` | `pending` |
| `00408246` | `FUN_00408246` | `undefined FUN_00408246(void)` | `pending` |
| `0040825e` | `FUN_0040825e` | `undefined FUN_0040825e(void)` | `pending` |
| `00408270` | `FUN_00408270` | `undefined * FUN_00408270(void)` | `pending` |
| `00408290` | `FUN_00408290` | `undefined4 * FUN_00408290(void * this, undefined4 param_1)` | `pending` |
| `00408734` | `FUN_00408734` | `undefined FUN_00408734(void)` | `pending` |
| `00408740` | `FUN_00408740` | `int FUN_00408740(void * this, int param_1)` | `pending` |
| `00408850` | `FUN_00408850` | `undefined FUN_00408850(void * param_1)` | `pending` |
| `00408880` | `FUN_00408880` | `undefined FUN_00408880(int param_1)` | `pending` |
| `004088d0` | `FUN_004088d0` | `undefined FUN_004088d0(void * param_1)` | `pending` |
| `004089d0` | `FUN_004089d0` | `undefined FUN_004089d0(void * this, int param_1)` | `pending` |
| `00408a30` | `FUN_00408a30` | `undefined FUN_00408a30(void * this, int * param_1)` | `pending` |
| `00408ab0` | `FUN_00408ab0` | `undefined FUN_00408ab0(void * this, int param_1)` | `pending` |
| `00408ae0` | `FUN_00408ae0` | `undefined4 FUN_00408ae0(void * param_1)` | `pending` |
| `00408b50` | `FUN_00408b50` | `undefined4 FUN_00408b50(void * this, int param_1)` | `pending` |
| `00408ba0` | `FUN_00408ba0` | `undefined4 FUN_00408ba0(void * this, int param_1)` | `pending` |
| `00408ca0` | `FUN_00408ca0` | `undefined4 FUN_00408ca0(void)` | `pending` |
| `00408d2e` | `FUN_00408d2e` | `undefined FUN_00408d2e(void)` | `pending` |
| `00408d40` | `FUN_00408d40` | `undefined4 * FUN_00408d40(void * this, int param_1)` | `pending` |
| `00408df0` | `FUN_00408df0` | `byte FUN_00408df0(void * this, int param_1)` | `pending` |
| `00408e20` | `FUN_00408e20` | `uint FUN_00408e20(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00408f99` | `FUN_00408f99` | `undefined FUN_00408f99(void)` | `pending` |
| `00408fb0` | `FUN_00408fb0` | `undefined4 FUN_00408fb0(void * this, int param_1, int * param_2)` | `pending` |
| `00409030` | `FUN_00409030` | `undefined4 FUN_00409030(void * this, int param_1, int param_2)` | `pending` |
| `004090b8` | `DirectSoundCreate` | `undefined DirectSoundCreate()` | `pending` |
| `004090be` | `Ordinal_729` | `undefined Ordinal_729()` | `pending` |
| `004090c4` | `Ordinal_265` | `undefined Ordinal_265()` | `pending` |
| `004090d0` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `004090d6` | `Ordinal_4817` | `undefined Ordinal_4817()` | `pending` |
| `004090dc` | `Ordinal_2403` | `undefined Ordinal_2403()` | `pending` |
| `004090e2` | `Ordinal_5656` | `undefined Ordinal_5656()` | `pending` |
| `004090e8` | `Ordinal_2456` | `undefined Ordinal_2456()` | `pending` |
| `004090fa` | `Ordinal_592` | `undefined Ordinal_592()` | `pending` |
| `00409100` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `00409106` | `Ordinal_1725` | `undefined Ordinal_1725()` | `pending` |
| `0040910c` | `Ordinal_4819` | `undefined Ordinal_4819()` | `pending` |
| `00409112` | `Ordinal_1061` | `undefined Ordinal_1061()` | `pending` |
| `00409118` | `Ordinal_5003` | `undefined Ordinal_5003()` | `pending` |
| `0040911e` | `Ordinal_4619` | `undefined Ordinal_4619()` | `pending` |
| `00409124` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `0040912a` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `00409130` | `Ordinal_336` | `undefined Ordinal_336()` | `pending` |
| `00409136` | `Ordinal_340` | `undefined Ordinal_340()` | `pending` |
| `0040913c` | `Ordinal_537` | `undefined Ordinal_537()` | `pending` |
| `00409142` | `Ordinal_271` | `undefined Ordinal_271()` | `pending` |
| `00409160` | `Ordinal_2115` | `undefined Ordinal_2115()` | `pending` |
| `00409166` | `Ordinal_1426` | `undefined Ordinal_1426()` | `pending` |
| `00409256` | `Ordinal_895` | `undefined Ordinal_895()` | `pending` |
| `0040925c` | `Ordinal_5492` | `undefined Ordinal_5492()` | `pending` |
| `00409262` | `Ordinal_3656` | `undefined Ordinal_3656()` | `pending` |
| `00409268` | `Ordinal_2293` | `undefined Ordinal_2293()` | `pending` |
| `0040926e` | `Ordinal_481` | `undefined Ordinal_481()` | `pending` |
| `00409274` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `0040927a` | `Ordinal_817` | `undefined Ordinal_817()` | `pending` |
| `00409280` | `Ordinal_2081` | `undefined Ordinal_2081()` | `pending` |
| `004092ec` | `Ordinal_4096` | `undefined Ordinal_4096()` | `pending` |
| `00409304` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `0040930a` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `00409310` | `Ordinal_4869` | `undefined Ordinal_4869()` | `pending` |
| `00409316` | `Ordinal_5630` | `undefined Ordinal_5630()` | `pending` |
| `0040931c` | `Ordinal_5055` | `undefined Ordinal_5055()` | `pending` |
| `00409322` | `Ordinal_5056` | `undefined Ordinal_5056()` | `pending` |
| `00409328` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `0040932e` | `Ordinal_1060` | `undefined Ordinal_1060()` | `pending` |
| `00409334` | `Ordinal_1066` | `undefined Ordinal_1066()` | `pending` |
| `0040933a` | `Ordinal_2390` | `undefined Ordinal_2390()` | `pending` |
| `00409340` | `Ordinal_403` | `undefined Ordinal_403()` | `pending` |
| `00409346` | `Ordinal_651` | `undefined Ordinal_651()` | `pending` |
| `0040934c` | `Ordinal_546` | `undefined Ordinal_546()` | `pending` |
| `00409352` | `Ordinal_1067` | `undefined Ordinal_1067()` | `pending` |
| `00409358` | `Ordinal_2301` | `undefined Ordinal_2301()` | `pending` |
| `0040935e` | `Ordinal_286` | `undefined Ordinal_286()` | `pending` |
| `00409364` | `Ordinal_1081` | `undefined Ordinal_1081()` | `pending` |
| `004093ca` | `Ordinal_5647` | `undefined Ordinal_5647()` | `pending` |
| `004093ee` | `Ordinal_675` | `undefined Ordinal_675()` | `pending` |
| `004093f4` | `Ordinal_701` | `undefined Ordinal_701()` | `pending` |
| `00409400` | `Ordinal_689` | `undefined Ordinal_689()` | `pending` |
| `00409406` | `Ordinal_509` | `undefined Ordinal_509()` | `pending` |
| `0040940c` | `Ordinal_439` | `undefined Ordinal_439()` | `pending` |
| `00409412` | `Ordinal_2008` | `undefined Ordinal_2008()` | `pending` |
| `00409418` | `Ordinal_4450` | `undefined Ordinal_4450()` | `pending` |
| `0040941e` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `00409424` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `0040942a` | `Ordinal_4205` | `undefined Ordinal_4205()` | `pending` |
| `00409430` | `Ordinal_4429` | `undefined Ordinal_4429()` | `pending` |
| `00409436` | `Ordinal_4161` | `undefined Ordinal_4161()` | `pending` |
| `0040943c` | `Ordinal_5490` | `undefined Ordinal_5490()` | `pending` |
| `00409442` | `Ordinal_2515` | `undefined Ordinal_2515()` | `pending` |
| `00409448` | `Ordinal_545` | `undefined Ordinal_545()` | `pending` |
| `0040944e` | `Ordinal_5127` | `undefined Ordinal_5127()` | `pending` |
| `00409454` | `Ordinal_285` | `undefined Ordinal_285()` | `pending` |
| `0040945a` | `Ordinal_1842` | `undefined Ordinal_1842()` | `pending` |
| `00409460` | `Ordinal_3537` | `undefined Ordinal_3537()` | `pending` |
| `00409466` | `Ordinal_678` | `undefined Ordinal_678()` | `pending` |
| `0040946c` | `Ordinal_392` | `undefined Ordinal_392()` | `pending` |
| `00409472` | `Ordinal_447` | `undefined Ordinal_447()` | `pending` |
| `00409478` | `Ordinal_1835` | `undefined Ordinal_1835()` | `pending` |
| `0040947e` | `Ordinal_2530` | `undefined Ordinal_2530()` | `pending` |
| `00409484` | `Ordinal_4933` | `undefined Ordinal_4933()` | `pending` |
| `0040948a` | `Ordinal_3900` | `undefined Ordinal_3900()` | `pending` |
| `00409490` | `Ordinal_5181` | `undefined Ordinal_5181()` | `pending` |
| `00409496` | `Ordinal_4178` | `undefined Ordinal_4178()` | `pending` |
| `004094ba` | `Ordinal_624` | `undefined Ordinal_624()` | `pending` |
| `004094c0` | `Ordinal_374` | `undefined Ordinal_374()` | `pending` |
| `004094c6` | `Ordinal_5439` | `undefined Ordinal_5439()` | `pending` |
| `004094cc` | `Ordinal_5110` | `undefined Ordinal_5110()` | `pending` |
| `004094d2` | `Ordinal_4960` | `undefined Ordinal_4960()` | `pending` |
| `004094d8` | `Ordinal_2891` | `undefined Ordinal_2891()` | `pending` |
| `004094de` | `Ordinal_5191` | `undefined Ordinal_5191()` | `pending` |
| `004094e4` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `004094f0` | `FUN_004094f0` | `undefined FUN_004094f0(_onexit_t param_1)` | `pending` |
| `00409590` | `FUN_00409590` | `int FUN_00409590(_onexit_t param_1)` | `pending` |
| `004095b0` | ``eh_vector_destructor_iterator'` | `void `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `00409620` | `FUN_00409620` | `undefined FUN_00409620(void)` | `pending` |
| `00409640` | `__ArrayUnwind` | `void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)` | `pending` |
| `004096c0` | `FUN_004096c0` | `undefined4 FUN_004096c0(undefined4 * param_1)` | `pending` |
| `004096e0` | `FUN_004096e0` | `undefined FUN_004096e0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)` | `pending` |
| `00409750` | `FUN_00409750` | `undefined FUN_00409750(void)` | `pending` |
| `00409770` | `entry` | `undefined entry(void)` | `pending` |
| `00409912` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040991e` | `terminate` | `void terminate(void)` | `pending` |
| `00409924` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `0040992a` | `initterm` | `undefined initterm()` | `pending` |
| `00409930` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `00409960` | `FUN_00409960` | `undefined FUN_00409960(void)` | `pending` |
| `00409962` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `00409968` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `00409981` | `FUN_00409981` | `undefined4 FUN_00409981(int param_1, undefined4 param_2)` | `pending` |
| `004099d0` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |

### remove.exe

Remaining: **57** of **59** exported functions.

| Entry | Raw Name | Prototype | Status |
| --- | --- | --- | --- |
| `00401000` | `FUN_00401000` | `undefined4 * FUN_00401000(void * this, undefined4 param_1)` | `pending` |
| `004010e9` | `FUN_004010e9` | `undefined FUN_004010e9(void)` | `pending` |
| `00401130` | `FUN_00401130` | `undefined4 FUN_00401130(int param_1)` | `pending` |
| `00401799` | `FUN_00401799` | `undefined FUN_00401799(void)` | `pending` |
| `004017a1` | `FUN_004017a1` | `undefined FUN_004017a1(void)` | `pending` |
| `004017a9` | `FUN_004017a9` | `undefined FUN_004017a9(void)` | `pending` |
| `004017b1` | `FUN_004017b1` | `undefined FUN_004017b1(void)` | `pending` |
| `004017c3` | `FUN_004017c3` | `undefined FUN_004017c3(void)` | `pending` |
| `0040198b` | `FUN_0040198b` | `undefined FUN_0040198b(void)` | `pending` |
| `00401993` | `FUN_00401993` | `undefined FUN_00401993(void)` | `pending` |
| `004019a5` | `FUN_004019a5` | `undefined FUN_004019a5(void)` | `pending` |
| `004019b0` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `00401a30` | `FUN_00401a30` | `undefined4 * FUN_00401a30(undefined4 * param_1)` | `pending` |
| `00401ae9` | `FUN_00401ae9` | `undefined FUN_00401ae9(void)` | `pending` |
| `00401b10` | `FUN_00401b10` | `undefined FUN_00401b10(void)` | `pending` |
| `00401b20` | `FUN_00401b20` | `undefined FUN_00401b20(void)` | `pending` |
| `00401b6b` | `FUN_00401b6b` | `undefined FUN_00401b6b(void)` | `pending` |
| `00401c46` | `FUN_00401c46` | `undefined FUN_00401c46(void)` | `pending` |
| `00401c4e` | `FUN_00401c4e` | `undefined FUN_00401c4e(void)` | `pending` |
| `00401c60` | `FUN_00401c60` | `undefined FUN_00401c60(void)` | `pending` |
| `00401cb1` | `FUN_00401cb1` | `undefined FUN_00401cb1(void)` | `pending` |
| `00401cc6` | `Ordinal_2199` | `undefined Ordinal_2199()` | `pending` |
| `00401db6` | `Ordinal_570` | `undefined Ordinal_570()` | `pending` |
| `00401dbc` | `Ordinal_1014` | `undefined Ordinal_1014()` | `pending` |
| `00401dc2` | `Ordinal_1035` | `undefined Ordinal_1035()` | `pending` |
| `00401dc8` | `Ordinal_315` | `undefined Ordinal_315()` | `pending` |
| `00401dce` | `Ordinal_731` | `undefined Ordinal_731()` | `pending` |
| `00401dd4` | `Ordinal_4173` | `undefined Ordinal_4173()` | `pending` |
| `00401dec` | `Ordinal_706` | `undefined Ordinal_706()` | `pending` |
| `00401df2` | `Ordinal_4312` | `undefined Ordinal_4312()` | `pending` |
| `00401df8` | `Ordinal_819` | `undefined Ordinal_819()` | `pending` |
| `00401dfe` | `Ordinal_486` | `undefined Ordinal_486()` | `pending` |
| `00401e04` | `Ordinal_834` | `undefined Ordinal_834()` | `pending` |
| `00401e0a` | `Ordinal_836` | `undefined Ordinal_836()` | `pending` |
| `00401e10` | `Ordinal_3859` | `undefined Ordinal_3859()` | `pending` |
| `00401e16` | `Ordinal_762` | `undefined Ordinal_762()` | `pending` |
| `00401e1c` | `Ordinal_4940` | `undefined Ordinal_4940()` | `pending` |
| `00401e22` | `Ordinal_267` | `undefined Ordinal_267()` | `pending` |
| `00401e28` | `Ordinal_483` | `undefined Ordinal_483()` | `pending` |
| `00401e2e` | `Ordinal_1359` | `undefined Ordinal_1359()` | `pending` |
| `00401eb8` | `Ordinal_721` | `undefined Ordinal_721()` | `pending` |
| `00401ebe` | `Ordinal_504` | `undefined Ordinal_504()` | `pending` |
| `00401ec4` | `Ordinal_2299` | `undefined Ordinal_2299()` | `pending` |
| `00401eca` | `__CxxFrameHandler` | `undefined __CxxFrameHandler()` | `pending` |
| `00401ef0` | `FUN_00401ef0` | `undefined FUN_00401ef0(_onexit_t param_1)` | `pending` |
| `00401f90` | `FUN_00401f90` | `int FUN_00401f90(_onexit_t param_1)` | `pending` |
| `00401fb0` | `entry` | `undefined entry(void)` | `pending` |
| `00402152` | `~type_info` | `void ~type_info(type_info * this)` | `pending` |
| `00402158` | `__dllonexit` | `undefined __dllonexit()` | `pending` |
| `0040215e` | `_XcptFilter` | `int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)` | `pending` |
| `00402164` | `initterm` | `undefined initterm()` | `pending` |
| `00402170` | `__setdefaultprecision` | `undefined __setdefaultprecision(void)` | `pending` |
| `004021a0` | `FUN_004021a0` | `undefined FUN_004021a0(void)` | `pending` |
| `004021a8` | `_controlfp` | `uint _controlfp(uint _NewValue, uint _Mask)` | `pending` |
| `004021ae` | `_WinMain@16` | `undefined _WinMain@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)` | `pending` |
| `004021c7` | `FUN_004021c7` | `undefined4 FUN_004021c7(int param_1, undefined4 param_2)` | `pending` |
| `00402216` | `Ordinal_1368` | `undefined Ordinal_1368()` | `pending` |
