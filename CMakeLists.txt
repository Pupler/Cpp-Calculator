cmake_minimum_required(VERSION 3.15)
project(Calculator VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculator 
    src/main.cpp
    src/calculator.cpp
)

target_include_directories(calculator 
    PUBLIC include
)

target_compile_features(calculator PRIVATE cxx_std_17)