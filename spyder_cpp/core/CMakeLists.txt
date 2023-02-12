cmake_minimum_required(VERSION 3.0)

add_library(spyder_cpp_core SHARED
    logger/logger.cpp
    cli/cli_option.cpp
)

target_include_directories(spyder_cpp_core PRIVATE ${CMAKE_SOURCE_DIR})

set(SPYDER_CPP_CORE_PUBLIC_HEADER
    logger/logger.h
    cli/cli_option.h
)

# set_target_properties(spyder_cpp_core PROPERTIES PUBLIC_HEADER ${SPYDER_CPP_CORE_PUBLIC_HEADER})
SET_TARGET_PROPERTIES(spyder_cpp_core PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG})
SET_TARGET_PROPERTIES(spyder_cpp_core PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})