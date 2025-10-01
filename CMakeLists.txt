cmake_minimum_required(VERSION 3.31)
project(alpdl1 VERSION 0.1 LANGUAGES C)


find_package(OpenMP REQUIRED)

add_executable(hello main.c)
target_link_libraries(hello OpenMP::OpenMP_C)