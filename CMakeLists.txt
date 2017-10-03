cmake_minimum_required(VERSION 3.8)
project(AP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/AP.cpp include/AP.h src/SetNodos.cpp include/SetNodos.h)
add_executable(AP ${SOURCE_FILES})