cmake_minimum_required(VERSION 3.28)
project(simpleArray)

set(CMAKE_CXX_STANDARD 17)

add_executable(simpleArray main.cpp
        array.cpp
        Array.h)
