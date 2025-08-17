cmake_minimum_required(VERSION 3.20)
project(cmake_demo)

include_directories("${PROJECT_SOURCE_DIR}/include")
aux_source_directory("${PROJECT_SOURCE_DIR}/src" SRC_FILES)

add_library(calculator STATIC ${SRC_FILES})
add_executable(cmake_demo main.cpp)

target_link_libraries(cmake_demo calculator)


