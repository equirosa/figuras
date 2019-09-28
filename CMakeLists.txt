cmake_minimum_required(VERSION 2.8)

project(Figuras)
add_executable(${PROJECT_NAME} "main.cpp")
set(figura.h
    circulo.h
    rectangulo.h)

set(figura.cpp
    circulo.cpp
    rectangulo.cpp)
