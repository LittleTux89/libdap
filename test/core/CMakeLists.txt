cmake_minimum_required(VERSION 3.0)

project(core-test)

file(GLOB SRC *.h *.c)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} dap_core)

add_test(
    NAME core-test
    COMMAND core-test
)
