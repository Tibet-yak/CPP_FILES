cmake_minimum_required(VERSION 3.10)
project(L30_useGFLWlib)

file(GLOB SRC_LIST main.cpp glad.c)
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} glfw)