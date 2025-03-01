cmake_minimum_required(VERSION 3.30)
project(univesity1)

set(CMAKE_CXX_STANDARD 20)

add_executable(univesity1 main.cpp
        Student.cpp
        Student.h
        Course.cpp
        Course.h)
