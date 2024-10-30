cmake_minimum_required(VERSION 3.29)
project(HashMap)

include_directories(include)

set(CMAKE_CXX_STANDARD 20)

set(SRC_FILES main.cpp)

add_executable(HashMapTest ${SRC_FILES})
