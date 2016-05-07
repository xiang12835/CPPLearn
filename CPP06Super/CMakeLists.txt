cmake_minimum_required(VERSION 3.3)
project(06Super)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp People.h People.cpp Man.h Man.cpp)
add_executable(06Super ${SOURCE_FILES})