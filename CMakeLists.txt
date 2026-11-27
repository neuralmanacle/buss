cmake_minimum_required(VERSION 3.25)

project(Buss
    VERSION 0.1.0
    DESCRIPTION "Automotive Audio Middleware Platform"
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(BUSS_BUILD_TESTS "Build Buss tests" ON)
option(BUSS_BUILD_CLI "Build Buss CLI" ON)

if(BUSS_BUILD_TESTS)
    enable_testing()
endif()

add_subdirectory(modules/core)

if(BUSS_BUILD_CLI)
    add_subdirectory(apps/buss-cli)
endif()
