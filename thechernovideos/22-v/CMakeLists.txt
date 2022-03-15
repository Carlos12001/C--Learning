cmake_minimum_required(VERSION 3.21)
set( CMAKE_CXX_COMPILER "/pathto/g++" )
set( CMAKE_C_COMPILER "/pathto/gcc" )

project(HeaderFile)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file(GLOB source_files "${source_dir}/*.cpp" "${source_dir}/*.h")

add_executable("${CMAKE_PROJECT_NAME}" "${source_files}")
