cmake_minimum_required(VERSION 3.6)
project(newbie)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES i100.cpp)
add_executable(newbie ${SOURCE_FILES})