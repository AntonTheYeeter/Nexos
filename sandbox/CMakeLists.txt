cmake_minimum_required(VERSION 3.26.0)

project(sandbox)

set(CMAKE_BINARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/lib")
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/engine/src")

target_link_libraries(${PROJECT_NAME} PUBLIC engine)