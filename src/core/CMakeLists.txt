cmake_minimum_required(VERSION 3.14)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(core SHARED ../include/fate/core.h core.cpp)
target_include_directories(core PUBLIC ../include)
