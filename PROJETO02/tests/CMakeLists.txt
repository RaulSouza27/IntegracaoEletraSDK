add_executable(
    ${PROJECT_NAME}test

    main.cpp
    test_Apolo.cpp
    test_EletraEnergySolutions.cpp
    test_Cronos.cpp
    test_Ares.cpp
    test_Zeus.cpp
)

target_include_directories(
    ${PROJECT_NAME}test

    PRIVATE
        ./
)

target_compile_features(
    ${PROJECT_NAME}test

    PRIVATE
        cxx_std_20
)

target_link_libraries(
    ${PROJECT_NAME}test

    PRIVATE
        ${PROJECT_NAME}lib

)