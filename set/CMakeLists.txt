cmake_minimum_required(VERSION 3.30.0)
project(set)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_COMPILER "g++")

include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SrcFiles)
aux_source_directory(${PROJECT_SOURCE_DIR} SrcFiles)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(main ${SrcFiles})