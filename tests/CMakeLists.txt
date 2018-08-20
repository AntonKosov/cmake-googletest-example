set(
    TESTS 
        "src/main.cpp"
        "src/main_test.cpp"
)
add_subdirectory("googletest")

add_executable(tests ${TESTS})

target_link_libraries(tests myproject gtest gmock)
