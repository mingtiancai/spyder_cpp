cmake_minimum_required(VERSION 3.16)

project(testSpdlog)

file(GLOB project_file testSpdlog.cpp)

add_executable(${PROJECT_NAME} ${project_file})