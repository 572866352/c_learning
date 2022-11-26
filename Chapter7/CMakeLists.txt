cmake_minimum_required(VERSION 3.22)

get_filename_component(ProjectId ${CMAKE_CURRENT_BINARY_DIR} NAME)
project(${ProjectId} C)

set(CMAKE_C_STANDARD 23)

include_directories("include")

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} include)
    #    可以这样定义宏
    #    target_compile_definitions(${name} PUBLIC DEBUG)
endforeach()
