cmake_minimum_required(VERSION 3.16)

project(testCLI11)

file(GLOB project_file testCLI11.cpp)

add_executable(${PROJECT_NAME} ${project_file})