cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_CLANG_TIDY clang-tidy; -header-filter=.; -checks=*;)

function(clang_format_display files)                                            
    if(!${HAVE_CLANG_FORMAT})
        find_program(HAVE_CLANG_FORMAT clang-format)
        if(${HAVE_CLANG_FORMAT})
            foreach(input_file IN ${files})
                execute_process(${HAVE_CLANG_FORMAT} ${input_file})
            endforeach()
        elseif()
            message("Clang format not found")
        endif()
    endif()
endfunction()

project(Tutorial)
message("Tutorial source dir: ${Tutorial_SOURCE_DIR}")
add_subdirectory(src)
#add_subdirectory(cmake_modules)
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

message("Source dir: ${CMAKE_SOURCE_DIR}")
set(SOURCE_SUBDIR ${CMAKE_SOURCE_DIR}/src)
message("Source subdir: ${SOURCE_SUBDIR}")

file(GLOB_RECURSE ALL_CXX_FILES ${SOURCE_SUBDIR}/*.cxx)
#clang_format_display(${ALL_CXX_FILES})
#find_program(HAVE_CLANG_FORMAT clang-format)

#if(HAVE_CLANG_FORMAT)
#    message("found clang-format")
#    file(GLOB_RECURSE ALL_CXX_FILES ${PROJECT_ROOT_DIR}/src/*.cxx)
#    file(GLOB_RECURSE ALL_H_FILES ${PROEJCT_ROOT_DIR}/src/*.h)
#file(GLOB_RECURSE ALL_CMAKE_FILES ${PROJECT_ROOT_DIR}/CMakeLists.txt)
#endif()

#add_custom_target(apply-clang-format COMMAND ${HAVE_CLANG_FORMAT} -i ${ALL_CXX_FILES} ${ALL_H_FILES}) 
            
add_custom_target(show-clang-format COMMAND ${HAVE_CLANG_FORMAT} ${ALL_CXX_FILES})

add_custom_target(apply-clang-format COMMAND ${HAVE_CLANG_FORMAT} -i ${ALL_CXX_FILES})

add_custom_target(apply-function COMMAND ${clang_format_display} ${ALL_CXX_FILES})
