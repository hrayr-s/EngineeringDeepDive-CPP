cmake_minimum_required(VERSION 3.31)
project(cpp_edd)

set(CMAKE_CXX_STANDARD 26)
string(REPLACE "-O2" "-O0" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
string(REPLACE "-O2" "-O0" CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")

add_executable(cpp_edd main.cpp)
