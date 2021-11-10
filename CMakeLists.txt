cmake_minimum_required(VERSION 3.19)
project(lab2)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(GTest)

add_executable(lab2 main.cpp Konhoida.cpp Konhoida.h)