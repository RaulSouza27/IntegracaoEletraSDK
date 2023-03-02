cmake_minimum_required(VERSION 3.17)

PROJECT(
    Projeto02

    LANGUAGES CXX
)

add_subdirectory(tests)

add_library(
    ${PROJECT_NAME}lib

    src/Apolo.cpp
    src/Application.cpp
    src/Ares.cpp
    src/Cronos.cpp
    src/EletraEnergySolution.cpp
    src/MedidorDeEnergia.cpp
    src/Menu.cpp
    src/Zeus.cpp
    src/fabrica_de_medidor.cpp
)

add_executable(
    ${PROJECT_NAME}

    src/main.cpp
)

target_include_directories(
    ${PROJECT_NAME}lib

    PUBLIC
        ./include
)

target_compile_features(
    ${PROJECT_NAME}lib

    PUBLIC
        cxx_std_20
)

target_link_libraries(
    ${PROJECT_NAME}

    PRIVATE
        ${PROJECT_NAME}lib
)