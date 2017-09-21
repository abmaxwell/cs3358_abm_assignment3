cmake_minimum_required(VERSION 3.8)
project(cs3358_abm_assignment3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Assign03.cpp
        Sequence.cpp
        Sequence.h)

add_executable(cs3358_abm_assignment3 ${SOURCE_FILES})