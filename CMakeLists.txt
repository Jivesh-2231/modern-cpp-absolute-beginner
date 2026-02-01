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
# Chapter 8
add_executable(ch08_main
    src/ch08/main.cpp
)
# Chapter 10
add_executable(ch10_main
    src/ch10/main.cpp
)
# Chapter 11
add_executable(ch11_main
    src/ch11/main.cpp
)
# Chapter 12
add_executable(ch12
    src/ch12/main.cpp
)
# Chapter 13
add_executable(ch13
    src/ch13/string.cpp
)
add_executable(ch13_probs
    src/ch13/probs.cpp
)
# Chapter 16
add_executable(ch16_1
    src/ch16/loops_1.cpp
)
add_executable(ch16_2
    src/ch16/loops_2.cpp
)
# Chapter 19
add_executable(ch19
    src/ch19/func.cpp
)
add_executable(ch19_1
    src/ch19/prob_1.cpp
)
add_executable(ch19_2
    src/ch19/prob_2.cpp
)
add_executable(ch19_3
    src/ch19/prob_3.cpp
)
add_executable(ch19_4
    src/ch19/prob_4.cpp
)
# Chapter 21
add_executable(ch21_new
    src/ch21/new.cpp
)
add_executable(ch21_1
    src/ch21/prob_1.cpp
)
add_executable(ch21_2
    src/ch21/prob_2.cpp
)
# Chapter 23
add_executable(ch23_class
    src/ch23/class.cpp
)
add_executable(ch23_cons
    src/ch23/constructor.cpp
)
add_executable(ch23_copy
    src/ch23/copy.cpp
)
add_executable(ch23_move
    src/ch23/move.cpp
)
# Chapter 23_problems
add_executable(ch23_p1
    src/ch23_problems/p1.cpp
)
add_executable(ch23_p2
    src/ch23_problems/p2.cpp
)
add_executable(ch23_p3
    src/ch23_problems/p3.cpp
)
add_executable(ch23_p4
    src/ch23_problems/p4.cpp
)
# Chapter 25
add_executable(ch25_inherit
    src/ch25/inheritance.cpp
)