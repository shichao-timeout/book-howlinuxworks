cmake_minimum_required(VERSION 3.16)
project(howlinuxworks C)

set(CMAKE_C_STANDARD 99)

add_executable(howlinuxworks cbase/main.c cbase/test.c cbase/constTest.c)