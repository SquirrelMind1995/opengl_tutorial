cmake_minimum_required(VERSION 3.21)
project(opengl_tutorial)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(opengl_tutorial main.cpp)
target_link_libraries(opengl_tutorial ${SDL2_LIBRARIES})

