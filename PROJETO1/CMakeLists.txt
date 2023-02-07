cmake_minimum_required(VERSION 3.17)

PROJECT(
    PROJETO1
    LANGUAGES CXX
)
add_executable(
    ${PROJECT_NAME}SRCS

    src/Console.cpp
    src/controle.cpp
    src/medidores_de_agua.cpp
    src/medidores_de_energia.cpp
    src/menu.cpp
    src/religadores.cpp
)

target_include_directories(
    ${PROJECT_NAME}SRCS

    PUBLIC
        ./include
        ${CMAKE_CURRENT_BINARY_DIR}
)

target_compile_features(
    ${PROJECT_NAME}SRCS 
    
    PUBLIC
        cxx_std_20
)