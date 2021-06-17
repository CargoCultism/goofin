cmake_minimum_required(VERSION 3.10)

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

find_program(HAVE_CLANG_FORMAT clang-format)

if(HAVE_CLANG_FORMAT)
    message("found clang-format")
    file(GLOB_RECURSE ALL_CXX_FILES ${PROJECT_ROOT_DIR}/src/*.cxx)
    file(GLOB_RECURSE ALL_H_FILES ${PROEJCT_ROOT_DIR}/src/*.h)
file(GLOB_RECURSE ALL_CMAKE_FILES ${PROJECT_ROOT_DIR}/CMakeLists.txt)
endif()

add_custom_target(apply-clang-format COMMAND ${HAVE_CLANG_FORMAT} -i ${ALL_CXX_FILES} ${ALL_H_FILES}) 
            
