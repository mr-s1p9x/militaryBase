cmake_minimum_required(VERSION 3.28)
project(militaryBase)

set(CMAKE_CXX_STANDARD 17)

add_executable(militaryBase main.cpp
        Base.h
        Base.cpp
        Vehicle.h
        Vehicle.cpp
        Bus.h
        Bus.cpp
        Truck.h
        Truck.cpp)
