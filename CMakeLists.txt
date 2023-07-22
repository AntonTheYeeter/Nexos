cmake_minimum_required(VERSION 3.25.0)

project(nexos_all)

add_subdirectory(nexos)
add_subdirectory(sandbox)

target_include_directories(sandbox PUBLIC "${nexos_SOURCE_DIR}/include")
target_link_directories(sandbox PUBLIC "${nexos_SOURCE_DIR}/lib")