cmake_minimum_required(VERSION 3.20.0) 

project(week4)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)

include_directories(${CMAKE_INCLUDE_PATH})

add_executable(main test5.cpp ${SRCS})