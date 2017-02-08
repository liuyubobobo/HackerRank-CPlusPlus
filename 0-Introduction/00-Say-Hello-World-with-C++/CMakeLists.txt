cmake_minimum_required(VERSION 3.5)
project(0_Say_Hello_World_with_C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(0_Say_Hello_World_with_C__ ${SOURCE_FILES})