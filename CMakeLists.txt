cmake_minimum_required(VERSION 3.13)
project(Catch_Practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Catch_Practice
        catch.hpp
        main.cpp
        tests.cpp)
