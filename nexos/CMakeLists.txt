cmake_minimum_required(VERSION 3.25.0)

project(nexos)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")

file(GLOB_RECURSE SRC ${CMAKE_SOURCE_DIR} "src/*.c")
add_library(nexos ${SRC})

if(WIN32)
target_link_libraries(nexos PUBLIC user32)
endif(WIN32)

if(LINUX)
target_link_libraries(nexos PUBLIC xcb)
endif(LINUX)

find_package(Vulkan REQUIRED)

target_include_directories(nexos PUBLIC "${PROJECT_SOURCE_DIR}/include/nexos")
target_include_directories(nexos PUBLIC ${Vulkan_INCLUDE_DIRS})
target_link_libraries(nexos PUBLIC ${Vulkan_LIBRARIES})

add_definitions(-D_DEBUG -DNXEXPORT)