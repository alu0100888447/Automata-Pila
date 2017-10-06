cmake_minimum_required(VERSION 3.8)
project(AP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/AP.cpp include/AP.h src/SetEstados.cpp include/SetEstados.h src/Estado.cpp include/Estado.h src/SetTransiciones.cpp include/SetTransiciones.h src/Transicion.cpp include/Transicion.h)
add_executable(AP ${SOURCE_FILES})