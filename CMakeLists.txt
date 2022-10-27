cmake_minimum_required(VERSION 3.23)
project(sharedCaesar)

set(CMAKE_CXX_STANDARD 14)

add_library(sharedCaesar SHARED library.cpp)
