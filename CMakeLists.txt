cmake_minimum_required(VERSION 3.15)
project(sandbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(sandbox first.cpp second.cpp third.cpp classes/Bank.cpp classes/Bank.h classes/Smartphone.cpp classes/Smartphone.h fourth.cpp)