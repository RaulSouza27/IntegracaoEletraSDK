cmake_minimum_required(VERSION 3.17)

add_executable(
    foo
    
    main.cpp
    src/test_Menus.cpp
    src/test_EletraEnergySolutions.cpp
)

target_include_directories(
    foo

    PRIVATE
        ./
)

target_link_libraries(
    foo

    PUBLIC
        ${PROJECT_NAME}SRCS
)

target_compile_features(
    foo

    PUBLIC
        cxx_std_20 
)

add_custom_target(
    test

    COMMAND
        foo

    USES_TERMINAL
)

add_dependencies(test foo)
