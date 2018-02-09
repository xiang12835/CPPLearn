cmake_minimum_required(VERSION 3.3)
project(03Classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp People.h People.cpp Man.cpp Man.h)
add_executable(03Classes ${SOURCE_FILES})