cmake_minimum_required(VERSION 3.26)
project(fromagerie)

set(CMAKE_CXX_STANDARD 23)

add_executable(fromagerie main.cpp
        CheeseVariety.cpp
        CheeseVariety.h
        Country.cpp
        Country.h
        CheesyService.cpp
        CheesyService.h
        CheeseRepository.cpp
        CheeseRepository.h)
