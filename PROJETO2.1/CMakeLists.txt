cmake_minimum_required(VERSION 3.10)

PROJECT(
    Factory
    LANGUAGES CXX
)

add_executable(
    ${PROJECT_NAME}

    src/main.cpp
    src/medidor_de_energia.cpp

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