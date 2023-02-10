cmake_minimum_required(VERSION 3.0)

add_library(util SHARED ./logger.cpp)
target_include_directories(util PRIVATE ${CMAKE_SOURCE_DIR})
set_target_properties(util PROPERTIES PUBLIC_HEADER ./logger.h)