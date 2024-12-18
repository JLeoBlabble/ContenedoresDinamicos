cmake_minimum_required(VERSION 3.29)
project(ContenedoresDinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio1
    VectoresIteradores.cpp)

add_executable(Ejercicio2
        ContenedoresEstandarYSecuencias.cpp)

add_executable(Ejercicio3
        Algoritmos.cpp)

add_executable(Ejercicio4
        CalculoNumerico.cpp)

add_executable(Ejercicio5
        C++Moderno.cpp)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(Ejercicio6
        IntroduccionBoost.cpp)

target_link_libraries(Ejercicio6 ${Boost_LIBRARIES})