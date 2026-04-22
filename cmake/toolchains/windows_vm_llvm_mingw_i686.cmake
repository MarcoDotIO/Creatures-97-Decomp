set(CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT
    "C:/ProgramData/CreaturesTools/llvm-mingw-aarch64/llvm-mingw-20260421-ucrt-aarch64"
    CACHE PATH "Windows VM llvm-mingw root used by the committed guest CMake presets.")

set(CMAKE_C_COMPILER
    "${CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT}/bin/i686-w64-mingw32-clang.exe"
    CACHE FILEPATH "Windows VM i686 clang compiler")
set(CMAKE_RC_COMPILER
    "${CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT}/bin/i686-w64-mingw32-windres.exe"
    CACHE FILEPATH "Windows VM i686 windres compiler")
set(CMAKE_AR
    "${CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT}/bin/i686-w64-mingw32-ar.exe"
    CACHE FILEPATH "Windows VM i686 archive tool")
set(CMAKE_RANLIB
    "${CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT}/bin/i686-w64-mingw32-ranlib.exe"
    CACHE FILEPATH "Windows VM i686 ranlib tool")
set(CMAKE_DLLTOOL
    "${CREATURES_WINDOWS_VM_LLVM_MINGW_ROOT}/bin/i686-w64-mingw32-dlltool.exe"
    CACHE FILEPATH "Windows VM i686 dlltool")
