cmake_minimum_required(VERSION 3.26.0)

project(engine)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} SHARED ${SOURCES})

find_package(Vulkan REQUIRED)

if(WIN32)
target_link_libraries(${PROJECT_NAME} PUBLIC user32)
elseif(LINUX)
target_link_libraries(${PROJECT_NAME} PUBLIC xcb)
endif()

target_include_directories(${PROJECT_NAME} PUBLIC ${Vulkan_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC ${Vulkan_LIBRARIES})

add_definitions(-DNXEXPORT -D_DEBUG)