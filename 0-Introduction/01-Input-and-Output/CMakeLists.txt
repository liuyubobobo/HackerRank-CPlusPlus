cmake_minimum_required(VERSION 3.5)
project(01_Input_and_Output)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(01_Input_and_Output ${SOURCE_FILES})