cmake_minimum_required(VERSION 3.20)

project(Creatures97Decomp LANGUAGES C)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(CTest)
include(CreaturesOptions)
include(CreaturesTargetHelpers)

add_subdirectory(reconstruction)
