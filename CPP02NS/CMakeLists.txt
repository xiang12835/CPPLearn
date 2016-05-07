cmake_minimum_required(VERSION 3.3)
project(02NS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp People.cpp People.h)
add_executable(02NS ${SOURCE_FILES})