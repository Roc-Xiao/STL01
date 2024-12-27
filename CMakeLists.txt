cmake_minimum_required(VERSION 3.30)
project(STL01)

set(CMAKE_CXX_STANDARD 17)

add_executable(STL01 main.cpp stack.cpp stack.h queue.cpp queue.h map.cpp map.h list.cpp list.h)
