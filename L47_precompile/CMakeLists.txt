cmake_minimum_required(VERSION 3.10)
project(L47_precompile)
add_executable(L47_precompile main.cpp)

target_precompile_headers(L47_precompile PUBLIC "pch.h")

