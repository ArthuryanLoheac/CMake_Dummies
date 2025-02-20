#Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.17.0)

project(ikea)

# Set the project folder variable
set(INCROOT ../../../include)
set(SRCROOT .)

#set the src folder
set(SRC
    ${INCROOT}/ikea.h
    ${SRCROOT}/ikea.c
)

# Create the library static
add_library(${PROJECT_NAME} STATIC)

target_sources(${PROJECT_NAME}
    PRIVATE
        ${SRC}
)

#Declare the INCROOT directory as public
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${INCROOT}
)
