cmake_minimum_required(VERSION 3.16)

project(testNlohmannJson)

file(GLOB project_file testNlohmannJson.cpp)

add_executable(${PROJECT_NAME} ${project_file})