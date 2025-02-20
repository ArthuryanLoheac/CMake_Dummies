#Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.17.0)

#Set the project name to hello_world
project(hello)

#Set the required language to C11
set(CMAKE_C_STANDARD 11)

#create exectuable hello from hello_world.c
add_executable(hello hello_world.c)

#Set the output directory to the root of the project
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})