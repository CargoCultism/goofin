cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_CLANG_TIDY
  clang-tidy;
  -header-filter=.;
  -checks=*;)

project(Tutorial)
message("Tutorial source dir: ${Tutorial_SOURCE_DIR}")
add_subdirectory(src)
include_directories(/usr/include/noise)
find_library(LIBNOISE libnoise.a)
if(LIBNOISE)
    message("libnoise static found")
elseif(NOT LIBNOISE)
    message("libnoise static not found, trying with lnoise")
    find_library(LIBNOISE NAMES noise)
endif()

if(LIBNOISE)
    message("libnoise found")
elseif(NOT LIBNOISE)
    message("libnoise not found")
endif()


