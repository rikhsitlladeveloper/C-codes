cmake_minimum_required(VERSION 3.23)
project(C-codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(C-codes)

add_executable(binarysearch.h binarysearch.cpp calculate_power.cpp
        calculate_power.h
        leetcode_puzzles.cpp
        leetcode_puzzles.h
        main.cpp)
