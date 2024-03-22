cmake_minimum_required(VERSION 3.10.0)
project(HITCRT_week03 VERSION 0.1.0)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED COMPONENTS system thread filesystem)

add_subdirectory(src)

include_directories(
    src
    ${OpenCV_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    "/usr/include/eigen3")# eigen可以这样链接
add_executable(1 main.cpp)

target_link_libraries(1
    example
    ${OpenCV_LIBRARIES}
    ${Boost_LIBRARIES})
