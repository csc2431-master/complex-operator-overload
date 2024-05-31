cmake_minimum_required(VERSION 3.0)
project(complex_operator_overload)

set(CMAKE_CXX_STANDARD 14)

add_executable(complex_operator_overload main.cpp
        complex.cpp
        complex.h)
