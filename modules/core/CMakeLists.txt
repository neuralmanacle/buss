
add_library(buss_core STATIC
    src/Version.cpp
)

add_library(Buss::Core ALIAS buss_core)

target_include_directories(buss_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(buss_core
    PUBLIC cxx_std_20
)

target_compile_definitions(buss_core
    PRIVATE BUSS_VERSION="${PROJECT_VERSION}"
)

target_compile_options(buss_core
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)
