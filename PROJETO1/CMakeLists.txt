cmake_minimum_required(VERSION 3.17)

PROJECT(
    PROJETO1
    LANGUAGES CXX
)
add_executable(
    ${PROJECT_NAME}

    src/Console.cpp
    src/controle.cpp
    src/medidores_de_agua.cpp
    src/medidores_de_energia.cpp
    src/menu.cpp
    src/religadores.cpp
    src/utilidades.cpp
)

target_include_directories(
    ${PROJECT_NAME}

    PUBLIC
        ./include
        ${CMAKE_CURRENT_BINARY_DIR}
)

target_compile_features(
    ${PROJECT_NAME} 
    
    PUBLIC
        cxx_std_20
)