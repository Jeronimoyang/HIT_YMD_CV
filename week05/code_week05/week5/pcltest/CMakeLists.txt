cmake_minimum_required(VERSION 3.20.0) 

project(week5)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)

find_package(PCL REQUIRED)

include_directories(${CMAKE_INCLUDE_PATH})

include_directories(${PCL_INCLUDE_DIRS})

link_directories(${PCL_LIBRARY_DIRS})

add_definitions(${PCL_DEFINITIONS})

add_executable(main test1.cpp ${SRCS})

target_link_libraries(main ${PCL_LIBRARIES} )