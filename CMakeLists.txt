cmake_minimum_required(VERSION 3.10)

project(Tutorial)

add_subdirectory(src)
include_directories(/usr/include/noise)
find_library(noise REQUIRED NAMES libnoise.so)
