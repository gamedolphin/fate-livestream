cmake_minimum_required(VERSION 3.14)

add_subdirectory(log)

add_library(fate SHARED fate.cpp)
target_include_directories(fate PUBLIC include)
target_link_libraries(fate PUBLIC log)
