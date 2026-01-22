cmake_minimum_required(VERSION 3.16)

project(modern_cpp_absolute_beginners
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Chapter 4
add_executable(ch04_main
    src/ch04/main.cpp
)
add_executable(ch04_source
    src/ch04/source.cpp
)

# Chapter 5
add_executable(ch05_p1
    src/ch05/p1.cpp
)

# Chapter 7
add_executable(ch07_main
    src/ch07/main.cpp
)