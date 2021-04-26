add_executable(dummyexec main.cxx)
target_link_libraries(dummyexec dummylib)
target_include_directories(dummyexec PUBLIC /home/lr/Documents/workbench/github/goofin/src/dummylib)
