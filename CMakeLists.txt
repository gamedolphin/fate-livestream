cmake_minimum_required(VERSION 3.14)

project(Fate
  VERSION 0.1
  DESCRIPTION "A simple game engine"
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC fate)
target_include_directories(main PUBLIC src/include)
