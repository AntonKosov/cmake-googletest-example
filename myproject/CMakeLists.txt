set(
    SOURCES 
        "src/main.cpp"
        "include/myproject/main.h"
)

add_library(myproject SHARED ${SOURCES})

target_include_directories(myproject PUBLIC "include")
