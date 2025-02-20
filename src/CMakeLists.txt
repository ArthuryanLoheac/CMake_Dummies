#Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.17.0)

#Set the project name to hello_world
project(hello)

#Set the required language to C11
set(CMAKE_C_STANDARD 11)

#create exectuable hello from hello_world.c
add_executable(${PROJECT_NAME} ./hello_world.c)

# Link the ikea library to the hello executable
target_link_libraries(${PROJECT_NAME} ikea)

add_subdirectory(lib/ikea)