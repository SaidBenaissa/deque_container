cmake_minimum_required(VERSION 3.24)
project(deque_container)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
add_executable(deque_container main.cpp)
