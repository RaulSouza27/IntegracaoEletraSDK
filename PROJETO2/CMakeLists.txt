cmake_minimum_required(VERSION 3.1)

PROJECT(
    PROJETO2

    LANGUAGES CXX
)

add_subdirectory(
    tests
)

add_executable(
    ${PROJECT_NAME}

    src/main.cpp
)

add_library(
    ${PROJECT_NAME}SRCS

    src/medidor_de_energia/ares.cpp
    src/medidor_de_energia/Zeus.cpp
    src/medidor_de_energia/Cronos.cpp
    src/medidor_de_energia/medidor_de_energia.cpp
    src/EletraEnergySolutions.cpp
    src/Application.cpp
    src/Menus.cpp
)

target_include_directories(
    ${PROJECT_NAME}SRCS
    
    PUBLIC
        ./include
)

target_compile_features(
    ${PROJECT_NAME}SRCS

    PRIVATE 
        cxx_std_20
)

target_link_libraries(
    ${PROJECT_NAME}

    PRIVATE
        ${PROJECT_NAME}SRCS
)