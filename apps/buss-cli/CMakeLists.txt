
add_executable(buss_cli
    src/main.cpp
)

target_link_libraries(buss_cli
    PRIVATE Buss::Core
)

set_target_properties(buss_cli
    PROPERTIES OUTPUT_NAME buss
)
