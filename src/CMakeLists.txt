cmake_minimum_required(VERSION 3.18)

PROJECT (Stuff VERSION 0.1)
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

ADD_EXECUTABLE ( stuff 
                main.cpp
                Chap1/basic.hpp Chap1/basic.cpp
                )