cmake_minimum_required(VERSION 3.15)
project(datastructure C)

set(CMAKE_C_STANDARD 11)

add_executable(test_stack stack1.c test1/test1_stack.c stack1.h)
add_executable(playground try.c)
add_executable(tryvoid memcopy.c)