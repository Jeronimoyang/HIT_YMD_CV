cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(homework5)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE "Debug")
find_package(OpenCV  REQUIRED)
include_directories(
    ${OpenCV_INCLUDE_DIRS}
)
add_executable(one one.cpp)
target_link_libraries(one
    ${OpenCV_LIBS}
)
