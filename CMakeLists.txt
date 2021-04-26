cmake_minimum_required(VERSION 3.10)

project(Tutorial)

add_subdirectory(src)
include_directories(/usr/include/noise)
find_library(LIBNOISE libnoise.a)
if(LIBNOISE)
    message("libnoise found first shot")
elseif(NOT LIBNOISE)
    message("libnoise not found, trying again")
    find_library(LIBNOISE NAMES libnoise.so)
endif()

if(LIBNOISE)
    message("libnoise found")
elseif(NOT LIBNOISE)
    message("libnoise not found")
endif()

