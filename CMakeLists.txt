cmake_minimum_required(VERSION 3.4)
project(HW5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PNGTester.cpp)
add_executable(HW5 ${SOURCE_FILES})