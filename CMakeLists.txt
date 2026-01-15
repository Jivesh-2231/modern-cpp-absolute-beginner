cmake_minimum_required(VERSION 3.16)

project(modern_cpp_absolute_beginners
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(ch01_main
    src/ch01/main.cpp
)