add_executable(dummyexec main.cxx) target_link_libraries(dummyexec dummylib)
    target_include_directories(dummyexec PUBLIC ${Tutorial_SOURCE_DIR} / src /
                               dummylib)
