cmake_minimum_required(VERSION 3.21)

project(PracticeExam1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++20")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file(GLOB source_files main.cpp test_arrays.cpp test_arrays.h)

add_executable("${CMAKE_PROJECT_NAME}" "${source_files}")
