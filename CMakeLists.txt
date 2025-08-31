cmake_minimum_required(VERSION 4.0)
project(demo_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo_project
        src/main.cpp
        src/math_utils.h
        src/math_utils.cpp)
