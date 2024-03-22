if(NOT OpenCV_FOUND)
    find_package(OpenCV REQUIRED)
endif()

if(NOT Boost_FOUND)
    find_package(Boost REQUIRED COMPONENTS system thread)
endif()

include_directories(${OpenCV_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    "/usr/include/eigen3")

aux_source_directory(. LIBSRC)

add_library(example STATIC ${LIBSRC})

target_link_libraries(example
    ${OpenCV_LIBRARIES}
    ${Boost_LIBRARIES}
    )