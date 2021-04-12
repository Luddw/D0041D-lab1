cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)
SET(CMAKE_CXX_FLAGS -pthread)
add_executable(studentDB main.cc)