cmake_minimum_required(VERSION 3.3)
project(07Funcs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp People.cpp People.h Man.cpp Man.h)
add_executable(07Funcs ${SOURCE_FILES})