cmake_minimum_required(VERSION 3.3)
project(CPP13Ref)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CPP13Ref ${SOURCE_FILES})