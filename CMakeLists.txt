cmake_minimum_required(VERSION 3.10)

project(Tutorial)

add_subdirectory(src)
include_directories(/usr/include/libnoise)
find_library(libnoise REQUIRED)
