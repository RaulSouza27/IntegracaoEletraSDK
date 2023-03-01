cmake_minimum_required(VERSION 3.17)

PROJECT(
    Projeto02

    LANGUAGES CXX
)

add_executable(
    ${PROJECT_NAME}
    src/Apolo.cpp
    src/App.cpp
    src/Ares.cpp
    src/Cronos.cpp
    src/EletraEnergySolution.cpp
    src/main.cpp
    src/medidor_de_energia.cpp
    src/menu.cpp
    src/zeus.cpp
)

target_include_directories(
    ${PROJECT_NAME}

    PUBLIC
    ./include
)

target_compile_features(
    ${PROJECT_NAME}

    PUBLIC
    cxx_std_20
)