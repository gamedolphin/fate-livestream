cmake_minimum_required(VERSION 3.14)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_library(window SHARED ../include/fate/window.h window.cpp)
target_include_directories(window PUBLIC ../include)
target_link_libraries(window PRIVATE ${SDL2_LIBRARIES})
